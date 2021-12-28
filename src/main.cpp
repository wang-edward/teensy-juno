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


void initialize_oscillator();
void initialize_midi();
void initialize_engine();
void initialize_lpf();
void initialize_antialias();
void initialize();

MIDI_CREATE_INSTANCE(HardwareSerial, Serial1, MIDI);

void setup() {

  declare_parameters(); //VERY IMPORTANT 
  declare_buttons(); // VERY IMPORTANT

  AudioMemory(50);
  sgtl5000_1.enable();
  sgtl5000_1.volume(0.9);
  lpf_envelope_dc.amplitude(1);
  Serial.begin(9600);

  MIDI.begin(MIDI_CHANNEL_OMNI);
  MIDI.setHandleNoteOn(note_on);
  MIDI.setHandleNoteOff(note_off_wrapper);


  for (int i=0;i<4;i++) {
    envelope_mixer0.gain(i,0.25); 
    envelope_mixer1.gain(i,0.25);
    mixer_left.gain(i,0.5);
    mixer_right.gain(i,0.5);
  }

  antialias_left.frequency(20000.);
  antialias_right.frequency(20000.);

  oscillator *o = oscillators,*end = oscillators + number_voices;
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
  } while (++o < end);
}

void timer () {
  // Serial.println(temp_time);
  // if (temp_time - last_time > 5) {
  //   last_time = temp_time;
  //   s.check_buttons();
  // }
}

synth s;

void loop() {
  MIDI.read();
    // s.check_parameters();
}  

static button test[9] = {
      pulse_on,
      saw_on,
      pwm_lfo_on,
      envelope_polarity,
      envelope_on,
      flanger_on,
      velocity_on,
      write,
      reset
    };

    static int starts[9];
    static int ends[9];
    static int abc[9];

static bool es[9];

void test_circuit () {
  // abc[7] = pulse_on.simple_check();
  //   delay(1);
  //   abc[6] = saw_on.simple_check();
  //   delay(1);
  //   abc[8] = pwm_lfo_on.simple_check();
  //   delay(1);
  //   abc[5] = envelope_polarity.simple_check();
  //   delay(1);
  //   abc[4] = envelope_on.simple_check();
  //   delay(1);
  //   abc[3] = flanger_on.simple_check();
  //   delay(1);
  //   abc[2] = velocity_on.simple_check();
  //   delay(1);
  //   abc[1] = write.simple_check();
  //   delay(1);
  //   abc[0] = reset.simple_check();
  //   delay(1);

    

  //   for (int i=0;i<9;i++) {
      
  //     // if (abc[i]==2) {
  //     //   Serial.println(i);
  //     // }
  //     if (abc[i] == 2) {
  //         es[i] = true;
  //     }
  //   }

  //   if (es[7] && es[6] && es[3]) { // 7
  //     pulse_on.state = !pulse_on.state;
  //     pulse_on.update_led();
  //   } else if (es[8] && es[6]) { // 6
  //     saw_on.state = !saw_on.state;
  //     saw_on.update_led();
  //   } else if (es[8] && es[5]) { // 8
  //     pwm_lfo_on.state = !pwm_lfo_on.state;
  //     pwm_lfo_on.update_led();
  //   } else if (es[5] && es[4] && es[3]) { // 5
  //     envelope_polarity.state = !envelope_polarity.state;
  //     envelope_polarity.update_led();
  //   } else if (es[8] && es[4] && es[3]) { // 4
  //     envelope_on.state = !envelope_on.state;
  //     envelope_on.update_led();
  //   } else if (es[7] && es[3] && es[2] && es[1]) { // 3
  //     flanger_on.state = !flanger_on.state;
  //     flanger_on.update_led();
  //   } else if (es[2] && es[1]) { // 2
  //     velocity_on.state = !velocity_on.state;
  //     velocity_on.update_led();
  //   } else if (es[7] && es[1] && es[0]) { // 1
  //     write.state = !write.state;
  //     write.update_led();
  //   } else if (es[8] && es[7] && es[0]) { // 0
  //     reset.state = !reset.state;
  //     reset.update_led();
  //   }
 
  //   delay(1);
    

  //   pulse_on.update_led();
  //   saw_on.update_led();
  //   pwm_lfo_on.update_led();
    

  //   envelope_polarity.update_led();
  //   envelope_on.update_led();
  //   flanger_on.update_led();
    
    
  //   velocity_on.update_led();
  //   write.update_led();
  //   reset.update_led();
    

  //   for (int i=0;i<9;i++) {
  //     es[i] = false;
  //   }
}