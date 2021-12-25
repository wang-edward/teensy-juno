// #include <functional>
class synth {
    public:
        

        long last_time = 0;
        static const int debounce_time = 5; //amount of time between checks, not total time
        static const int number_parameters = 4;
        static const int number_buttons = 9;

        double sum_lpf;
        double max_lpf_mod;
        double lpf_octave;

        synth (){
            // last_time = 0;
        }
        
        static const int number_voices = 8;
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

        parameter* parameters [number_parameters] = {
            &lfo_rate,
            &lfo_delay,
            &osc_lfo_level,
            &master_volume
        };

        button* buttons [number_buttons] = {
            &pulse_on,
            &saw_on,
            &pwm_lfo_on,
            &envelope_polarity,
            &envelope_on,
            &flanger_on,
            &velocity_on,
            &write,
            &reset
        };

        void check_all() {
            check_parameters();
            check_buttons();
        }


        void check_buttons() {
            long current_time = millis();
            // Serial.println(current_time - last_time);
            if (current_time - last_time > debounce_time) {
                last_time = current_time;
                for (int i=0;i<number_buttons;i++) {
                    buttons[i]->check();
                }
            } else {
                
            }
            
        }

        void check_parameters() {
            int i=0;
            while (i<number_parameters) {
                long current_time = millis();
                if (current_time - last_time > 5) {
                    last_time = current_time;
                    i++;
                    parameters[i]->check();

                    Serial.print(i); Serial.print(" ");
                    Serial.print(parameters[i]->get_position()); Serial.print(" ");
                }
            }

        }

        void debug() {
            for (int i=0;i<number_buttons;i++) {
                Serial.println(buttons[i]->read_raw());
                delay(100);
            }
        }
};

// VIRTUAL PARAMS

