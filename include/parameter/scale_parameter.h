// #include "architecture.h"
#include <math.h>
#include <algorithm>

//TODO: SPECIAL (FOR OSC CONTROL)
double scale_velocity (double value) {
    return value;
}

double scale_lfo_rate(double value) {
    return 30 * (pow((value),2));
}

double scale_lfo_delay(double value) {
    return 2000 * (pow((value),2));
}

double scale_osc_lfo_level(double value) {
    return (pow((value),2));
}


double scale_pulse_width(double value) {
    return (value)*0.9+0.05;
}

//scale sub level 
double scale_sub_level(double value) {
    return value;
}

//scale noise level
double scale_noise_level(double value) {
    return std::max((double)(0.01),value);
}

double scale_hpf_frequency(double value) {
    return pow(value,2);
}

double scale_lpf_frequency (double value) {
    return std::min(pow(value,2), (double)(10000.));
}

double scale_lpf_resonance(double value) {
    return value*4.1+0.9;
}

double scale_sum_lpf() {
    //TODO
}

double scale_lpf_envelope_level (double value) {
    return (value) * 2;
}

double scale_lpf_lfo_level (double value) {
    return (value) * 2;
}

double scale_lpf_keyboard_level (double value) {
    return (value) * 2;
}

double scale_channel_volume (double value) {
    return value;
}

double scale_flanger_offset(double value) {
    return double(value*8)*DELAY_LENGTH/8;
}

double scale_flanger_depth (double value) {
    return double(value*8)*DELAY_LENGTH/8;
}

double scale_flanger_frequency(double value) {
    return value*10.; //TODO: exponential scale?
}

double scale_flanger_frequency_fine(double value) {
    return value;
}

double scale_envelope_attack(double value) {
    return 1000 * (pow((value),2));
}

double scale_envelope_decay(double value) {
    return value*200.;
}

double scale_envelope_sustain (double value) {
    return value;
}

double scale_envelope_release (double value) {
    return 1000 * (pow((value),2));
}

double scale_master_volume (double value) {
    return value;
}