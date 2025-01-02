void update_pulse_on(bool value) {
    // update note handling to catch notes depressed before update
}

void update_saw_on(bool value) {
    // update note handling to catch notes depressed before update
}

void update_pwm_lfo_on(bool value) {
    pulse_width.calculate();
    pulse_width.update();
}

void update_envelope_polarity(bool value) {
    if (value == true) {
        lpf_envelope_dc.amplitude(-1.);
    } else {
        lpf_envelope_dc.amplitude(1.);
    }
}

void update_envelope_on(bool value) {
    if (value == true) {
        update_envelope_attack(envelope_attack.get_value());
        update_envelope_decay(envelope_decay.get_value());
        update_envelope_sustain(envelope_sustain.get_value());
        update_envelope_release(envelope_release.get_value());
    } else {
        update_envelope_attack(0.);
        update_envelope_decay(0.);
        update_envelope_sustain(0.);
        update_envelope_release(0.);
    }
}

void update_flanger_on(bool value) { update_flanger(true); }

void update_velocity_on(bool value) {
    // update note handling to catch notes depressed before update
}

void update_write(bool value) {}

void update_reset(bool value) {}

// button envelope_on;
// button flanger_on;
// button velocity_on;
// button write;
// button reset;