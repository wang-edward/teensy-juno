oscillator* note_off (uint8_t channel, uint8_t note, uint8_t velocity, bool ignore_sustain) {
    Serial.println("note_off");
    int8_t last_note = notes_delete(notes_pressed, note);
    oscillator *o = oscillators;


    oscillator *end = oscillators + number_voices;
    do {
        if (o->note == note) {
            break;
        }
    } while (++o < end);
    if (o == end) return 0;
    oscillator_off(*o);
    return o;
}

void note_on (uint8_t channel, uint8_t note, uint8_t velocity) {
    Serial.println("note_on");
    notes_add(notes_pressed, note);
    oscillator *o = oscillators;
    oscillator *current_oscillator = 0, *end = oscillators + number_voices;

    for (o = oscillators; o < end && !current_oscillator; ++o) {
        if (o->note < 0) {
            current_oscillator = o;
            break;
        }
    }

    if (current_oscillator == false && *notes_on != -1) {
        // Serial.println("current_oscillator == false && *notes_on != -1");
        current_oscillator = note_off(channel, *notes_on, velocity, true);
    }
    
    if (current_oscillator == false) {
        // Serial.println("current_oscillator == false");
        return;
    }
    // Serial.println("after checks");
    oscillator_on(*current_oscillator, note, velocity);
    // Serial.println("after oscillator_on");
    return;
}

void note_off_wrapper(uint8_t channel, uint8_t note, uint8_t velocity) {
    // Serial.println("note_off_wrapper");
    note_off(channel, note, velocity, false);
}