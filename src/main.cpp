#include <Arduino.h>
#include <MIDI.h>

#include "architecture.h"
#include "global_variables.h"
#include "oscillator.h"

// classes
#include "parameter/parameter.h"

// init controls
#include "parameter/init_parameter.h"

// control functions
#include "button/update_button.h"
#include "parameter/scale_parameter.h"
#include "parameter/update_parameter.h"

// declare controls
#include "button/declare_button.h"
#include "parameter/declare_parameter.h"

// synth
#include "synth.h"

// engine
#include "engine/midi_handle.h"
#include "engine/note_handle.h"
#include "engine/oscillator_control.h"

// new
#include "button.h"
#include "button_update.h"

constexpr int NUM_BUTTONS = 9;
Button buttons[] = {
    {
        .update_function = update_pulse_on,
        .midi_control = 0,
        .mux_address= 2,
        .mux_position = 7,
        .led_address = 33
    },
    {
        .update_function = update_saw_on,
        .midi_control = 0,
        .mux_address= 2,
        .mux_position = 6,
        .led_address = 34
    },
    {
        .update_function = update_pwm_lfo_on,
        .midi_control = 0,
        .mux_address= 2,
        .mux_position = 8,
        .led_address = 35
    },
    {
        .update_function = update_envelope_polarity,
        .midi_control = 0,
        .mux_address= 2,
        .mux_position = 5,
        .led_address = 36
    },
    {
        .update_function = update_envelope_on,
        .midi_control = 0,
        .mux_address= 2,
        .mux_position = 4,
        .led_address = 37
    },
    {
        .update_function = update_flanger_on,
        .midi_control = 0,
        .mux_address= 2,
        .mux_position = 3,
        .led_address = 38
    },
    {
        .update_function = update_velocity_on,
        .midi_control = 0,
        .mux_address= 2,
        .mux_position = 2,
        .led_address = 39
    },
    {
        .update_function = update_write,
        .midi_control = 0,
        .mux_address= 2,
        .mux_position = 1,
        .led_address = 40
    },
    {
        .update_function = update_reset,
        .midi_control = 0,
        .mux_address= 2,
        .mux_position = 0,
        .led_address = 41
    },
}

MIDI_CREATE_INSTANCE(HardwareSerial, Serial1, MIDI);

void setup() {
    for (int i = 0; i < NUM_BUTTONS; i++) {
        pinMode(buttons[i].led_address, OUTPUT);
    }

    declare_parameters(); // VERY IMPORTANT

    Serial.begin(115200);
    AudioMemory(50);
    sgtl5000_1.enable();
    sgtl5000_1.volume(0.9);

    MIDI.begin(MIDI_CHANNEL_OMNI);
    MIDI.setHandleNoteOn(note_on);
    MIDI.setHandleNoteOff(note_off_wrapper);

    oscillator *o = oscillators, *end = oscillators + number_voices;

    pwm_dc.amplitude(0);
    lfo.begin(WAVEFORM_TRIANGLE);
    lpf_envelope_dc.amplitude(0);
    lpf_keyboard_dc.amplitude(0);
    lpf_mod_wheel_dc.amplitude(0);

    do {
        o->hpf->frequency(100);
        o->lpf->frequency(8000);
        o->lpf->octaveControl(lpf_octave_control);
        o->saw->begin(WAVEFORM_SAWTOOTH);
        o->pulse_lfo->begin(WAVEFORM_PULSE);
        o->sub->begin(WAVEFORM_PULSE); // sub!

        // reduce clipping
        o->osc_mixer->gain(0, 0.25);
        o->osc_mixer->gain(1, 0.25);
        o->osc_mixer->gain(2, 0.25);
        o->osc_mixer->gain(3, 0.25);

        o->lpf_mod_mixer->gain(0, 0);
        o->lpf_mod_mixer->gain(1, 0);
        o->lpf_mod_mixer->gain(2, 0);
        o->lpf_mod_mixer->gain(3, 0);

        o->envelope->attack(0);
        o->envelope->decay(0);
        o->envelope->sustain(1);
        o->envelope->release(0.);
    } while (++o < end);

    for (int i = 0; i < 4; i++) {
        envelope_mixer0.gain(i, 0.25);
        envelope_mixer1.gain(i, 0.25);
        mixer_left.gain(i, 0.5);
        mixer_right.gain(i, 0.5);
    }

    flanger_left.voices(0, 0, 0.);
    flanger_right.voices(0, 0, 0.);

    antialias_left.frequency(20000.);
    antialias_right.frequency(20000.);

    envelope_on.set_state(true);
    pulse_on.set_state(true);
    saw_on.set_state(true);

    lpf_envelope_level.set_value(0);
}

void loop() {
    MIDI.read();
    s.check_parameters();
    for (int i = 0; i < NUM_BUTTONS; i++) {
        Button *b = &buttons[i];
        bool curr = button_read(b);
        if (curr != b->state) {
            button_update_led(b);
            b->update_function(curr);
            b->state = curr;
        }
    }
}
