// #include <functional>
class synth {
    public:
        

        long last_time = 0;
        static const int debounce_time = 5; //amount of time between checks, not total time
        // static const int number_parameters = 4;
        // static const int number_buttons = 9;

        double sum_lpf;
        double max_lpf_mod;
        double lpf_octave;

        synth (){
            // last_time = 0;
        }

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

