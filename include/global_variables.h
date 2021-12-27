#include <Mux.h>


using namespace admux;
Mux mux_array[] = {
    Mux(Pin(24, INPUT, PinType::Analog),Pinset(29,30,31,32)), 
    Mux(Pin(25, INPUT, PinType::Analog),Pinset(29,30,31,32)),
    Mux(Pin(26, INPUT_PULLUP, PinType::Digital),Pinset(29,30,31,32))
};

const int lpf_octave_control = 7;

const int number_parameters = 22;
const int number_voices = 8;
const int number_buttons = 9;
const int DELAY_LENGTH = 1;

oscillator oscillators[number_voices] = {
    { &pulse_lfo0, &saw0, &sub0, &noise0, &osc_mixer0, &hpf0, &lpf0, &lpf_mod_mixer0, &lpf_envelope0, &lfo_envelope0, &envelope0, &pwm_mixer0, -1, 0},
    { &pulse_lfo1, &saw1, &sub1, &noise1, &osc_mixer1, &hpf1, &lpf1, &lpf_mod_mixer1, &lpf_envelope1, &lfo_envelope1, &envelope1, &pwm_mixer1, -1, 0},
    { &pulse_lfo2, &saw2, &sub2, &noise2, &osc_mixer2, &hpf2, &lpf2, &lpf_mod_mixer2, &lpf_envelope2, &lfo_envelope2, &envelope2, &pwm_mixer2, -1, 0},
    { &pulse_lfo3, &saw3, &sub3, &noise3, &osc_mixer3, &hpf3, &lpf3, &lpf_mod_mixer3, &lpf_envelope3, &lfo_envelope3, &envelope3, &pwm_mixer3, -1, 0},
    { &pulse_lfo4, &saw4, &sub4, &noise4, &osc_mixer4, &hpf4, &lpf4, &lpf_mod_mixer4, &lpf_envelope4, &lfo_envelope4, &envelope4, &pwm_mixer4, -1, 0},
    { &pulse_lfo5, &saw5, &sub5, &noise5, &osc_mixer5, &hpf5, &lpf5, &lpf_mod_mixer5, &lpf_envelope5, &lfo_envelope5, &envelope5, &pwm_mixer5, -1, 0},
    { &pulse_lfo6, &saw6, &sub6, &noise6, &osc_mixer6, &hpf6, &lpf6, &lpf_mod_mixer6, &lpf_envelope6, &lfo_envelope6, &envelope6, &pwm_mixer6, -1, 0},
    { &pulse_lfo7, &saw7, &sub7, &noise7, &osc_mixer7, &hpf7, &lpf7, &lpf_mod_mixer7, &lpf_envelope7, &lfo_envelope7, &envelope7, &pwm_mixer7, -1, 0},
    
};
