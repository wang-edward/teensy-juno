#include <stdint.h>
struct Button {
    void (*update_function)(bool);

    uint8_t midi_control; // midi control number (0-127);
    uint8_t mux_address;  // which mux to search in (0-2)
    uint8_t mux_position; // which pin of the mux to read (0-15)
    uint8_t led;

    bool state;
};
