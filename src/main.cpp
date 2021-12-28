#include <Arduino.h>
#include <MIDI.h>
// #include "Audio.h"
#include "architecture.h"
#include "oscillator.h"
#include "global_variables.h"

#include "engine/note_handle.h"

//classes
#include "button/button.h"
#include "parameter/parameter.h"

//init controls
#include "button/init_button.h"
#include "parameter/init_parameter.h"

//control functions
#include "parameter/scale_parameter.h"
#include "parameter/update_parameter.h"
#include "button/update_button.h"

//declare controls
#include "button/declare_button.h"
#include "parameter/declare_parameter.h"

//
#include "synth.h"

#include "engine/oscillator_control.h"
#include "engine/midi_handle.h"

MIDI_CREATE_INSTANCE(HardwareSerial, Serial1, MIDI);

void setup() {

  declare_parameters(); //VERY IMPORTANT 
  declare_buttons(); // VERY IMPORTANT

  Serial.begin(115200);
  AudioMemory(50);
  sgtl5000_1.enable();
  sgtl5000_1.volume(0.9);
  
  
  MIDI.begin(MIDI_CHANNEL_OMNI);
  MIDI.setHandleNoteOn(note_on);
  MIDI.setHandleNoteOff(note_off_wrapper);

  

  

  oscillator *o = oscillators,*end = oscillators + number_voices;

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

    //reduce clipping
    o->osc_mixer->gain(0,0.25);
    o->osc_mixer->gain(1,0.25);
    o->osc_mixer->gain(2,0.25);
    o->osc_mixer->gain(3,0.25);

    o->lpf_mod_mixer->gain(0,0);
    o->lpf_mod_mixer->gain(1,0);
    o->lpf_mod_mixer->gain(2,0);
    o->lpf_mod_mixer->gain(3,0);

    o->envelope->attack(0);
    o->envelope->decay(0);
    o->envelope->sustain(1);
    o->envelope->release(0.);
  } while (++o < end);

  

  for (int i=0;i<4;i++) {
    envelope_mixer0.gain(i,0.25); 
    envelope_mixer1.gain(i,0.25);
    mixer_left.gain(i,0.5);
    mixer_right.gain(i,0.5);
  }

  flanger_left.voices(0,0,0.);
  flanger_right.voices(0,0,0.);

  antialias_left.frequency(20000.);
  antialias_right.frequency(20000.);

  envelope_on.set_state(true);
  pulse_on.set_state(true);
  saw_on.set_state(true);

  lpf_envelope_level.set_value(0);
}


void loop() {
  MIDI.read();
    // s.check_parameters();
}  