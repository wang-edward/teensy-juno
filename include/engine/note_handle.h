#include <math.h>

#include <cstdint>

int8_t notes_on[number_voices] = {
    -1, -1, -1, -1, -1, -1, -1, -1,
};
int8_t notes_pressed[number_voices] = {
    -1, -1, -1, -1, -1, -1, -1, -1,
};

void notes_reset(int8_t *notes) {
    memset(notes, -1, number_voices * sizeof(int8_t));
}

void notes_add(int8_t *notes, uint8_t note) {
    int8_t *end = notes + number_voices;
    do {
        if (*notes == -1) {
            *notes = note;
            break;
        }
    } while (++notes < end);
}

int8_t notes_delete(int8_t *notes, uint8_t note) {
    int8_t last_note = -1;
    int8_t *pos = notes, *end = notes + number_voices;
    while (++pos < end && *(pos - 1) != note)
        ;
    if (pos - 1 != notes)
        last_note = *(pos - 2);
    while (pos < end) {
        *(pos - 1) = *pos;
        if (*pos++ == -1)
            break;
    }
    if (*(end - 1) == note || pos == end)
        *(end - 1) = -1;
    return last_note;
}

bool notes_find(int8_t *notes, uint8_t note) {
    int8_t *end = notes + number_voices;
    do {
        if (*notes == note)
            return true;
    } while (++notes < end);
    return false;
}

float note_to_freq(float note) {
    return SYNTH_TUNING * pow(2, (note - 69) / 12.);
}