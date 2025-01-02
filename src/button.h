#include <stdint.h>
struct Button {
    void (*update_function)(bool);

    uint8_t midi_control; // midi control number (0-127);
    uint8_t mux_address;  // which mux to search in (0-2)
    uint8_t mux_position; // which pin of the mux to read (0-15)
    uint8_t led_address;

    bool state;
};

Button button_create(
    int midi_control, int mux_address, int mux_position,
    int led_address, void (*update_function)(bool));
void button_set_state(Button *b, bool value);
void button_update_led(Button *b);
void button_read(Button *b);
