#include <functional>
// #include <cstdint>
class button {
    int midi_control; // midi control number (0-127);
    int mux_position; // which pin of the mux to read (0-15)
    int mux_address;  // which mux to search in (0-2)
    int led_address;

    bool state;
    bool last_state;
    uint16_t start_state = 0;
    uint16_t end_state = 0;
    long start_time;
    long end_time;
    long time_between;
};
