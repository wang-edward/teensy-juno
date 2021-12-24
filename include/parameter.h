#include <functional>

class parameter {
    public:
        int midi_control; // midi control number (0-127);
        double value; //calculated value
        int position; // physical position of potentiometer (0-1023)
        int old_position; // old physical position (0-1023)

        int mux_position; // which pin of the mux to read (0-15)
        int mux_address; // which mux to search in (0-2)

        // std::function <double (double)>* scaling_function; //function to convert raw value into useable
        // std::function <void (double)>* update_function; //function to update synth engine with new parameter

        double (*scaling_function)(double);
        void (*update_function)(double);

        parameter () {
            position = -1;
        }

        parameter (int n_midi_control, int n_mux_address, int n_mux_position, double (*n_scaling_function)(double), void (*n_update_function)(double)) {
            midi_control = n_midi_control;
            mux_position = n_mux_position;
            mux_address = n_mux_address;
            scaling_function = n_scaling_function;
            update_function = n_update_function;
        };

        // parameter(int n_midi_control, int n_mux_address, int n_mux_position, std::function <double (double)> n_scaling_function, std::function<void(double)>n_update_function) {
        void declare (int n_midi_control, int n_mux_address, int n_mux_position, double (*n_scaling_function)(double), void (*n_update_function)(double)) {
            midi_control = n_midi_control;
            mux_position = n_mux_position;
            mux_address = n_mux_address;
            scaling_function = n_scaling_function;
            update_function = n_update_function;
        };
        
        void initialize() {
            old_position = position = read();
        }

        int check() {
            int temp = read();
            if (temp != old_position) {
                old_position = position = temp;
                calculate();
                update();
            } else { 
                return -1;
            }
        };

        void calculate() { //fix
            value = scaling_function(position/1023.);
        }

        void update() {
            update_function(value);
        }

        double read(){
            return mux_array[mux_address].Mux::read(mux_position);
        }

        double get_position () {
            // return value;
            return position;
        }
};
