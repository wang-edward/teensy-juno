void update_pulse_on(bool value) {
    if (value) {
        Serial.println("PULSEON");
    } else {
        Serial.println("PULSEOFF");
    }
    
}

void update_saw_on(bool value) {

}

void update_pwm_lfo_on(bool value) {
    pulse_width.calculate();
    pulse_width.update();
    
}

void update_envelope_polarity(bool value) {

}

void update_envelope_on(bool value) {

}

void update_flanger_on (bool value) {

}

void update_velocity_on(bool value) {

}

void update_write(bool value) {

}

void update_reset(bool value) {

}

// button envelope_on;
// button flanger_on;
// button velocity_on;
// button write;
// button reset;