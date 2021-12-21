#include "voice.h"
// #include <functional>
class synth {
    public:
        

        long timer = 0;
        const int debounce_time = 5; //amount of time between checks, not total time

        double sum_lpf;
        double max_lpf_mod;
        double lpf_octave;

        
        static const int number_voices = 8;
        voice voices[number_voices] = {
            { &pulse_lfo0, &saw0, &sub0, &noise0, &osc_mixer0, &hpf0, &lpf0, &envelope0, -1, 0},
            { &pulse_lfo1, &saw1, &sub1, &noise1, &osc_mixer1, &hpf1, &lpf1, &envelope1, -1, 0},
            { &pulse_lfo2, &saw2, &sub2, &noise2, &osc_mixer2, &hpf2, &lpf2, &envelope2, -1, 0},
            { &pulse_lfo3, &saw3, &sub3, &noise3, &osc_mixer3, &hpf3, &lpf3, &envelope3, -1, 0},
            { &pulse_lfo4, &saw4, &sub4, &noise4, &osc_mixer4, &hpf4, &lpf4, &envelope4, -1, 0},
            { &pulse_lfo5, &saw5, &sub5, &noise5, &osc_mixer5, &hpf5, &lpf5, &envelope5, -1, 0},
            { &pulse_lfo6, &saw6, &sub6, &noise6, &osc_mixer6, &hpf6, &lpf6, &envelope6, -1, 0},
            { &pulse_lfo7, &saw7, &sub7, &noise7, &osc_mixer7, &hpf7, &lpf7, &envelope7, -1, 0},
        };

        parameter parameters [4] = {
            lfo_rate,
            lfo_delay,
            osc_lfo_level,
            master_volume
        };

        void check_all() {
            check_parameters();
            check_buttons();
        }

        void check_buttons();

        void check_parameters() {
            for (int i=0;i<4;i++) {
                parameters[i].check();
                Serial.print(i); Serial.print(" ");
                Serial.print(parameters[i].print()); Serial.print(" ");
                delay(2);// change delay
            }
        }
};

// VIRTUAL PARAMS

