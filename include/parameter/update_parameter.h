void update_lfo_rate(double value) {
    lfo.frequency(value);
}

void update_lfo_delay(double value) {
    lfo_envelope.delay(value);
}

void update_osc_lfo_level(double value) {
    osc_lfo_amp.gain(value);
}

void update_pulse_width(double value) {
    if (pwm_lfo_on.state == true) {
        pwm_mixer.gain(0,value); //set lfo pwm level
        pwm_mixer.gain(1,0); //turn off manual pwm
    } else {
        pwm_mixer.gain(1,value); //set manual pwm level
        pwm_mixer.gain(0,0); // turn off lfo pwm
    }
}

void update_sub_level (double value) {
    if (value > 0) {
        oscillator *o = oscillators, *end = oscillators + number_voices;
        float velocity;
        do {
            if (o->note < 0) continue;
            velocity = velocity_on.state ? scale_velocity(o->velocity) : 1;
            o->sub->amplitude(velocity * channel_volume.get_value() * value);
        } while (++o < end);
    }
}

void update_noise_level (double value) {
    if (value > 0) {
        oscillator *o = oscillators, *end = oscillators + number_voices;
        float velocity;
        do {
            if (o->note < 0) continue;
            velocity = velocity_on.state ? scale_velocity(o->velocity) : 1;  
            o->noise->amplitude(velocity * channel_volume.get_value() * value);
        } while (++o < end);
    }
}

void update_hpf_frequency (double value) {
    oscillator *o = oscillators, *end = oscillators + number_voices;
    do {
        o->hpf->frequency(value);
    } while (++o < end);
}

void update_lpf_frequency (double value) {
    oscillator *o = oscillators, *end = oscillators + number_voices;
    do {
        o->lpf->frequency(value);
    } while (++o < end);
}

void update_lpf_resonance (double value) {
    oscillator *o = oscillators, *end = oscillators + number_voices;
    do {
        o->lpf->resonance(value);
    } while (++o < end);
}

void update_envelope_attack(double value) {
    lpf_envelope.attack(value); //lpf envelope
    oscillator *o = oscillators, *end = oscillators + number_voices;
    do {
        o->envelope->attack(value);
    } while (++o < end);
}

void update_envelope_decay(double value) {
    lpf_envelope.decay(value); //lpf envelope
    oscillator *o = oscillators, *end = oscillators + number_voices;
    do {
        o->envelope->decay(value);
    } while (++o < end);
}

void update_envelope_sustain(double value) {
    lpf_envelope.sustain(value); //lpf envelope
    oscillator *o = oscillators, *end = oscillators + number_voices;
    do {
        o->envelope->sustain(value);
    } while (++o < end);
}

void update_envelope_release(double value) {
    lpf_envelope.release(value); //lpf envelope
    oscillator *o = oscillators, *end = oscillators + number_voices;
    do {
        o->envelope->release(value);
    } while (++o < end);
}

void update_flanger (double value) {
    if (flanger_on.state) {
        AudioNoInterrupts();
        flanger_left.voices(
            flanger_offset.get_value(), 
            flanger_depth.get_value(), 
            (flanger_frequency.get_value() + flanger_frequency_fine.get_value()) //add frequencies
        );
        flanger_right.voices(
            flanger_offset.get_value(), 
            flanger_depth.get_value(), 
            (flanger_frequency.get_value() + flanger_frequency_fine.get_value()) //add frequencies
        );
        AudioInterrupts();
    } else {
        flanger_left.voices(FLANGE_DELAY_PASSTHRU, 0, 0);
        flanger_right.voices(FLANGE_DELAY_PASSTHRU, 0, 0);
    }
}

void update_master_volume(double value) {
    sgtl5000_1.volume(value);
}