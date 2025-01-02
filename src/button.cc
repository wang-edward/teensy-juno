#include "include/button.h"
#include <assert.h>

// TODO is this necessary?
void button_set_state(Button *b, bool value) {
    b->state = value;
    b->update_function(b->state);
}

void button_update_led(Button *b) {
    if (b->state) {
        digitalWrite(b->led_address, HIGH);
    } else {
        digitalWrite(b->led_address, LOW);
    }
}

void button_read(Button *b) {
    uint16_t mask = 0x0;
    for (int i = 0; i < 16; i++) {
        // TODO abstract mux read
        // TODO assert pin in digital mode
        bool val = mux_array[b->mux_address].Mux::read(b->mux_position);
        mask |= val << i;
    }
    b->state = (mask == 0xffff);
}
