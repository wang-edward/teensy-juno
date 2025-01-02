#include "include/button.h"
#include <assert.h>

void button_update_led(Button *b) {
    if (b->state) {
        digitalWrite(b->led_address, HIGH);
    } else {
        digitalWrite(b->led_address, LOW);
    }
}

bool button_read(Button *b) {
    uint16_t mask = 0x0;
    for (int i = 0; i < 16; i++) {
        // TODO abstract mux read
        // TODO assert pin in digital mode
        bool val = mux_array[b->mux_address].Mux::read(b->mux_position);
        mask |= val << i;
    }
    return (mask == 0xffff);
}
