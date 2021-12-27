oscillator* note_off (uint8_t channel, uint8_t note, uint8_t velocity, bool ignore_sustain) {

    // if(!omni_on && channel != 1) return 0; //TODO:

    int8_t last_note = notes_delete(notes_pressed, note);
    // if (sustain_pressed && ignore_sustain) return 0; // no sustain
    oscillator *o = oscillators;

    // if (portamento_on.get_state()) // if portamento on

    // if (poly_on) //if poly on
    oscillator *end = oscillators + number_voices;
    do {
        if (o->note == note) {
            break;
        }
    } while (++o < end);
    if (o == end) return 0;
    oscillator_off(*o);

    //else          // mono mode
    // if (oscillators->note == note) {
    //     if (last_note != -1) {
    //         notes_delete(notes_on, o->note);
    //         oscillator_on(*o, last_note, velocity);
    //     } else {
    //         oscillator_off(*o);
    //     }
    // }

    return o;
}

void note_on (uint8_t channel, uint8_t note, uint8_t velocity) {
    notes_add(notes_pressed, note);
    oscillator *o = oscillators;
    // if (portamento_on)

    // else if (poly_on)
    oscillator *current_oscillator = 0, *end = oscillators + number_voices;

    // if (sustain_pressed && notes_find(notes_on, note));

    for (o = oscillators; o < end && !current_oscillator; ++o) {
        if (o->note < 0) {
            current_oscillator = 0;
            break;
        }
    }

    if (current_oscillator == false && *notes_on != -1) {
        current_oscillator = note_off(channel, *notes_on, velocity, true);
    }
    
    if (current_oscillator == false) return;

    oscillator_on(*current_oscillator, note, velocity);

    // else //mono mode
    return;
}

void note_off_wrapper(uint8_t channel, uint8_t note, uint8_t velocity) {
    note_off(channel, note, velocity, false);
}