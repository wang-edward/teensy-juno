// LFO
void update_lfo_rate(double value) { lfo.frequency(value); }

void update_lfo_delay(double value) {
    oscillator *o = oscillators, *end = oscillators + number_voices;
    do {
        o->lfo_envelope->delay(value);
    } while (++o < end);
}

void update_osc_lfo_level(double value) {
    oscillator *o = oscillators, *end = oscillators + number_voices;
    do {
        o->osc_lfo_amp->gain(value);
    } while (++o < end);
}

// OSCILLATORS
void update_pulse_width(double value) {
    if (pwm_lfo_on.get_state() == true) {
        oscillator *o = oscillators, *end = oscillators + number_voices;
        do {
            o->pwm_mixer->gain(0, value); // set lfo pwm level
            o->pwm_mixer->gain(1, 0);     // turn off manual pwm
        } while (++o < end);
    } else {
        oscillator *o = oscillators, *end = oscillators + number_voices;
        do {
            o->pwm_mixer->gain(1, value); // set lfo pwm level
            o->pwm_mixer->gain(0, 0);     // turn off manual pwm
        } while (++o < end);
    }
}

void update_sub_level(double value) {
    if (value > 0) {
        oscillator *o = oscillators, *end = oscillators + number_voices;
        float velocity;
        do {
            if (o->note < 0)
                continue;
            velocity =
                velocity_on.get_state() ? scale_velocity(o->velocity) : 1;
            o->sub->amplitude(velocity * channel_volume.get_value() * value);
        } while (++o < end);
    }
}

void update_noise_level(double value) {
    if (value > 0) {
        oscillator *o = oscillators, *end = oscillators + number_voices;
        float velocity;
        do {
            if (o->note < 0)
                continue;
            velocity =
                velocity_on.get_state() ? scale_velocity(o->velocity) : 1;
            o->noise->amplitude(velocity * channel_volume.get_value() * value);
        } while (++o < end);
    }
}

// HPF
void update_hpf_frequency(double value) {
    oscillator *o = oscillators, *end = oscillators + number_voices;
    do {
        o->hpf->frequency(value);
    } while (++o < end);
}

// LPF
void update_lpf_frequency(double value) {
    oscillator *o = oscillators, *end = oscillators + number_voices;
    do {
        o->lpf->frequency(value);
    } while (++o < end);
}

void update_lpf_resonance(double value) {
    oscillator *o = oscillators, *end = oscillators + number_voices;
    do {
        o->lpf->resonance(value);
    } while (++o < end);
}

void update_lpf_mod(double value) {
    // USE RETURN_VALUE to avoid circular function calls
    double max_lpf_mod = log(20000 / lpf_frequency.return_value()) /
                         (lpf_octave_control * log(2));
    double sum_lpf_levels = lpf_envelope_level.return_value() +
                            lpf_lfo_level.return_value() +
                            lpf_keyboard_level.return_value(); // TODO: MODWHEEL

    double lpf_envelope_gain =
        lpf_envelope_level.return_value() / sum_lpf_levels * max_lpf_mod;
    double lpf_lfo_gain =
        lpf_lfo_level.return_value() / sum_lpf_levels * max_lpf_mod;
    double lpf_keyboard_gain =
        lpf_envelope_level.return_value() / sum_lpf_levels * max_lpf_mod;

    oscillator *o = oscillators, *end = oscillators + number_voices;
    do {
        o->lpf_mod_mixer->gain(0, lpf_envelope_gain);
        o->lpf_mod_mixer->gain(1, lpf_lfo_gain);
        o->lpf_mod_mixer->gain(2, lpf_keyboard_gain);
    } while (++o < end);
}

// ENVELOPE
void update_envelope_attack(double value) {
    oscillator *o = oscillators, *end = oscillators + number_voices;
    if (envelope_on.get_state() == true) {
        do {
            o->lpf_envelope->attack(value); // lpf envelope
            o->envelope->attack(value);
        } while (++o < end);
    } else {
        do {
            o->lpf_envelope->attack(0.); // lpf envelope
            o->envelope->attack(0.);
        } while (++o < end);
    }
}

void update_envelope_decay(double value) {
    oscillator *o = oscillators, *end = oscillators + number_voices;
    if (envelope_on.get_state() == true) {
        do {
            o->lpf_envelope->decay(value); // lpf envelope
            o->envelope->decay(value);
        } while (++o < end);
    } else {
        do {
            o->lpf_envelope->decay(0.); // lpf envelope
            o->envelope->decay(0.);
        } while (++o < end);
    }
}

void update_envelope_sustain(double value) {
    oscillator *o = oscillators, *end = oscillators + number_voices;
    if (envelope_on.get_state() == true) {
        do {
            o->lpf_envelope->sustain(value); // lpf envelope
            o->envelope->sustain(value);
        } while (++o < end);
    } else {
        do {
            o->lpf_envelope->sustain(1.); // lpf envelope
            o->envelope->sustain(1.);
        } while (++o < end);
    }
}

void update_envelope_release(double value) {
    oscillator *o = oscillators, *end = oscillators + number_voices;
    if (envelope_on.get_state() == true) {
        do {
            o->lpf_envelope->release(value); // lpf envelope
            o->envelope->release(value);
        } while (++o < end);
    } else {
        do {
            o->lpf_envelope->release(0.); // lpf envelope
            o->envelope->release(0.);
        } while (++o < end);
    }
}

// CHANNEL VOLUME
void update_channel_volume(double value) {
    // TODO update current oscillators that are pressed down
}

// FLANGER
void update_flanger(double value) {
    if (flanger_on.get_state()) {
        AudioNoInterrupts();
        flanger_left.voices(
            flanger_offset.get_value(), flanger_depth.get_value(),
            (flanger_frequency.get_value() +
             flanger_frequency_fine.get_value()) // add frequencies
        );
        flanger_right.voices(
            flanger_offset.get_value(), flanger_depth.get_value(),
            (flanger_frequency.get_value() +
             flanger_frequency_fine.get_value()) // add frequencies
        );
        AudioInterrupts();
    } else {
        flanger_left.voices(FLANGE_DELAY_PASSTHRU, 0, 0);
        flanger_right.voices(FLANGE_DELAY_PASSTHRU, 0, 0);
    }
}

void update_master_volume(double value) { sgtl5000_1.volume(value); }