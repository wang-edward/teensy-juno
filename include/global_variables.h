#include <Mux.h>


using namespace admux;
Mux mux_array[] = {
    Mux(Pin(24, INPUT, PinType::Analog),Pinset(29,30,31,32)), 
    Mux(Pin(25, INPUT, PinType::Analog),Pinset(29,30,31,32)),
    Mux(Pin(26, INPUT_PULLUP, PinType::Digital),Pinset(29,30,31,32))
};

const int number_parameters = 22;
const int number_voices = 8;
const int number_buttons = 9;
const int DELAY_LENGTH = 1;

oscillator oscillators[number_voices] = {
    { &pulse_lfo0, &saw0, &sub0, &noise0, &osc_mixer0, &hpf0, &lpf0, &envelope0, -1, 0},
    { &pulse_lfo1, &saw1, &sub1, &noise1, &osc_mixer1, &hpf1, &lpf1, &envelope1, -1, 0},
    { &pulse_lfo2, &saw2, &sub2, &noise2, &osc_mixer2, &hpf2, &lpf2, &envelope2, -1, 0},
    { &pulse_lfo3, &saw3, &sub3, &noise3, &osc_mixer3, &hpf3, &lpf3, &envelope3, -1, 0},
    { &pulse_lfo4, &saw4, &sub4, &noise4, &osc_mixer4, &hpf4, &lpf4, &envelope4, -1, 0},
    { &pulse_lfo5, &saw5, &sub5, &noise5, &osc_mixer5, &hpf5, &lpf5, &envelope5, -1, 0},
    { &pulse_lfo6, &saw6, &sub6, &noise6, &osc_mixer6, &hpf6, &lpf6, &envelope6, -1, 0},
    { &pulse_lfo7, &saw7, &sub7, &noise7, &osc_mixer7, &hpf7, &lpf7, &envelope7, -1, 0},
};
