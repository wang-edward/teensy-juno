

void update_master_volume(double value) {
    sgtl5000_1.volume(value);
}

void update_lfo_rate(double value) {
    lfo.frequency(value);
}

void update_lfo_delay(double value) {
    lfo_envelope.delay(value);
}

void update_osc_lfo_level(double value) {
    osc_lfo_amp.gain(value);
}