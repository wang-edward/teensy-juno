void oscillator_on(oscillator& osc, int8_t note, uint8_t velocity) {
    //TODO: updatestate?
    float v = velocity_on.get_state() ? velocity/127. : 1;
    float freq = note_to_freq(note);
    float amp = v*channel_volume.get_value(); //* GAIN_OSC ? TODO

    if (osc.note != note) {
        notes_add(notes_on, note);

        // Envelope
        if(envelope_on.get_state() && !osc.velocity) {
            osc.envelope->noteOn();
        }

        // lpf envelope
        if (lpf_envelope_level.get_value() > 0) {
            osc.lpf_envelope->noteOn();
        }
        // lfo envelope
        if (lpf_lfo_level.get_value() > 0) {
            osc.lfo_envelope->noteOn();
        }

        // oscs
        if (pulse_on.get_state()) {
            osc.pulse_lfo->frequency(freq);
            osc.pulse_lfo->amplitude(amp);
        }
        if (saw_on.get_state()) {
            osc.saw->frequency(freq);
            osc.saw->amplitude(amp);
        }
        if (sub_level.get_value() > 0) {
            osc.sub->frequency(freq/2);
            osc.sub->amplitude(amp * sub_level.get_value());
        }
        if (noise_level.get_value() > 0) {
            osc.sub->frequency(freq/2);
            osc.sub->amplitude(amp * sub_level.get_value());
        }

        osc.velocity = velocity;
        osc.note = note;
    } else if (velocity > osc.velocity) {
        //change amplitude to new level
        //i think this has to do with aftertouch
        if (pulse_on.get_state()) osc.pulse_lfo->amplitude(amp);
        if (saw_on.get_state()) osc.saw->amplitude(amp);
        
        double temp_sub_level = sub_level.get_value();
        double temp_noise_level = noise_level.get_value();
        if (temp_sub_level>0) osc.sub->amplitude(amp * temp_sub_level);
        if (temp_noise_level>0) osc.noise->amplitude(amp * temp_noise_level);
        osc.velocity = velocity;
    }
}

void oscillator_off (oscillator& osc) {
    if (envelope_on.get_state()) {
        osc.envelope->noteOff();
    }
    osc.lpf_envelope->noteOff(); osc.lfo_envelope->noteOff();

    if (pulse_on.get_state() == false) {
        osc.pulse_lfo->amplitude(0);
    }
    if (saw_on.get_state() == false) {
        osc.saw->amplitude(0);
    }
    if (noise_level.get_value() > 0.01) {
        osc.noise->amplitude(0.01);
    }
    if (sub_level.get_value() == 0) {
        osc.sub->amplitude(0);
    }
    notes_delete(notes_on, osc.note);
    osc.note = -1;
    osc.velocity = 0;
}

void all_off() {
    oscillator *o = oscillators, *end = oscillators + number_voices;
  do {
    oscillator_off(*o);
    o->pulse_lfo->amplitude(0);
    o->saw->amplitude(0);
    o->noise->amplitude(0);
    o->envelope->noteOff();
    o->lpf_envelope->noteOff();
    //TODO: LFO ENVELOPE
  } while(++o < end);
  notes_reset(notes_on);
}
