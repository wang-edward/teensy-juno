void oscillator_on(oscillator& osc, int8_t note, uint8_t velocity) {
    //TODO: updatestate?
    float v = velocity_on.get_state() ? velocity/127. : 1;
    float freq = note_to_freq(note);
    float amp = v*channel_volume.get_value(); //* GAIN_OSC ? TODO

    if (osc.note != note) {
        notes_add(notes_on, note);

        if(envelope_on.get_state() && !osc.velocity) {
            osc.envelope->noteOn();
        }

        // if (lpf)
    }

}

void test1 () {
    Serial.println("ASD");
}