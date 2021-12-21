#include <functional>
// #include <cstdint>
class button {

    public:
        int midi_control; // midi control number (0-127);
        int mux_position; // which pin of the mux to read (0-15)
        int mux_address; // which mux to search in (0-2)

        void (*update_function)(double);
        bool state;
        static uint16_t int_state;

        button() {
            midi_control = -1;
            mux_position = -1;
            mux_address = -1;
            state = false;
        }

        void declare (int n_midi_control, int n_mux_address, int n_mux_position, void (*n_update_function)(double)) {
            midi_control = n_midi_control;
            mux_position = n_mux_position;
            mux_address = n_mux_address;
            update_function = n_update_function;
            state = false;
        }

        bool read_raw() {
            int temp = mux_array[mux_address].Mux::read(mux_position);
            if (temp>600) {
                return true;
            } return false;
        }
        bool debounce() {
            int_state = 0; // Current debounce status
            int_state=(int_state<<1) | !read_raw() | 0xe000;
            if(int_state==0xf000)return true;
            return false;
        }
        void update() {
            state = debounce();
        }
};