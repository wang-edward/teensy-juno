
//midi control, mux, mux_address, 
//TODO: midi controls
void declare_buttons () {
    pulse_on.declare(-1, 2, 7, 34, update_pulse_on);
    saw_on.declare(-1, 2, 6, 35, update_saw_on);
}




// pulse_on.declare(-1, 2, 7, 33, update_pulse_on);
// button saw_on;
// button pwm_lfo_on;
// button envelope_on;
// button env_polarity;
// button flanger_on;

// velocity_on.declare();
// button write;
// button reset


//(2,7) (2,6) (2,8)