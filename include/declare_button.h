
//midi control, mux, mux_address, 
//TODO: midi controls
void declare_buttons () {
    pulse_on.declare(-1, 2, 7, 33, update_pulse_on);
    saw_on.declare(-1, 2, 6, 34, update_saw_on);
    pwm_lfo_on.declare(-1, 2, 8, 35, update_pwm_lfo_on);
    envelope_polarity.declare(-1, 2, 5, 36, update_pwm_lfo_on);
    // envelope_on.declare(-1, 2, 4, 37, update_envelope_on);
}




// pulse_on.declare(-1, 2, 7, 33, update_pulse_on);
// button pulse_on;
// button saw_on;
// button pwm_lfo_on;
// button env_polarity;
// button envelope_on;
// button flanger_on;
// button velocity_on;
// button write;
// button reset;



//(2,7) (2,6) (2,8)