#include "parameter.cpp"
#include <functional>
// #include <cstdint>
class button {

    public:
        int midi_control; // midi control number (0-127);
        int mux_position; // which pin of the mux to read (0-15)
        int mux_address; // which mux to search in (0-2)

        function <void (int)> update_function; //function to update synth engine with new parameter

        bool state;
        static uint16_t int_state;

        button (int n_midi_control, int n_mux_address, int n_mux_position, function<void(double)>n_update_function) {
            midi_control = n_midi_control;
            mux_position = n_mux_position;
            mux_address = n_mux_address;
            update_function = n_update_function;
            state = false;
        }

        bool read_raw();
        bool debounce();
        void update();

};