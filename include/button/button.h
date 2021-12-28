#include <functional>
// #include <cstdint>
class button {

    private:
        int midi_control; // midi control number (0-127);
        int mux_position; // which pin of the mux to read (0-15)
        int mux_address; // which mux to search in (0-2)
        int led_address;

        
        bool state;
        bool last_state;
        uint16_t start_state = 0;
        uint16_t end_state = 0;
        long start_time;
        long end_time;
        long time_between;
    public:
        void (*update_function)(bool);

        void set_state(bool value) {
            state = value;
            update_function(state);
        }
        
        button() {
            midi_control = -1;
            mux_position = -1;
            mux_address = -1;
            state = false;
        }

        void declare (int n_midi_control, int n_mux_address, int n_mux_position, int n_led_address, void (*n_update_function)(bool)) {
            midi_control = n_midi_control;
            mux_position = n_mux_position;
            mux_address = n_mux_address;
            update_function = n_update_function;
            state = false;
            led_address = n_led_address;
            pinMode(led_address, OUTPUT); //set led pin as out
        }

        void update_led() {
            if (state) {
                digitalWrite(led_address, HIGH);
            } else {
                digitalWrite(led_address, LOW);
            }
        }

        bool read_raw() {
            int temp = mux_array[mux_address].Mux::read(mux_position);
            return temp;
            if (temp==1) {
                return true;
            } 
            return false;
            
        }
        bool start_debounce() {
            start_state = (start_state<<1) | read_raw() | 0xe000;
            if (start_state == 0xf000) {
                return true;
            }
            return false;
        }
        bool end_debounce() {
            end_state=(end_state<<1) | !read_raw() | 0xe000;
            if(end_state==0xf000) {
                return true;
            }
            return false;
        }

        int count =0 ;

        int simple_check() {
            bool end = end_debounce();
            bool start = start_debounce();
            if (start) return 1;
            if (end) return 2;
            return 0;
        }

        bool get_state() {
            bool end = end_debounce();
            bool start = start_debounce();

            // Serial.print("start state:");Serial.println(start_state,BIN);
            // Serial.print("end state:  ");Serial.println(end_state,BIN);
            
            if (start) {
                Serial.println("start");
                start_time = millis();
                
            }
            
            if (end) {
                Serial.println("end");
                end_time = millis();
                time_between = end_time - start_time;

                //update state
                state = !state;
                update_led();
                update_function(state);
                count++;
                
            }
            //long press
            if (millis() - start_time > 500) {
                //TODO: second update function
            }

            return state;

            // state = debounce();
            // if (state == true && !last_state == false) {
            //     update_function(true);
            //     last_state = true;
            // } else if (state == false && last_state == true) {
            //     update_function(false);
            //     last_state = false;
            // }
            // update_led();
        }
        // void update() {
        //     update_function(state);
        // }
        double print () {
            return state;
        }
};