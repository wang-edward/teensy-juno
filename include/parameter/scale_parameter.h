// #include "architecture.h"
#include <math.h>
#include <algorithm>

//TODO: SPECIAL (FOR OSC CONTROL)
double scale_velocity (double value) {
    return value/127;
}

double scale_master_volume (double value) {
    return value/127.;
}

double scale_lfo_rate(double value) {
    return 30 * (pow((value/127.),2));
}

double scale_lfo_delay(double value) {
    return 2000 * (pow((value/127.),2));
}

double scale_osc_lfo_level(double value) {
    return (pow((value/127.),2));
}


double scale_pulse_width(double value) {
    return (value/127.)*0.9+0.05;
}

//scale sub level 
double scale_sub_level(double value) {
    return value/127.;
}

//scale noise level
double scale_noise_level(double value) {
    return std::max((double)(0.01),value/127.);
}

double scale_hpf_frequency(double value) {
    return pow(value,2);
}

double scale_lpf_frequency(double value) {
    return std::min(pow(value,2), (double)(10000.));
}

double scale_lpf_resonance(double value) {
    return value*4.1/127.+0.9;
}

double scale_sum_lpf() {
    //TODO
}

double scale_lpf_env_level (double value) {
    return (value/127.) * 2;
}

double scale_lpf_lfo_level (double value) {
    return (value/127.) * 2;
}

double scale_lpf_keyboard_level (double value) {
    return (value/127.) * 2;
}

double scale_channel_volume (double value) {
    return value/127.;
}

double scale_flanger_offset(double value) {
    return double(value/127.*8)*DELAY_LENGTH/8;
}

double scale_flanger_depth (double value) {
    return double(value/127.*8)*DELAY_LENGTH/8;
}

double scale_flanger_frequency(double value) {
    return value/127.*10.; //TODO: exponential scale?
}

double scale_flanger_frequency_fine(double value) {
    return value/127.;
}

double scale_envelope_attack(double value) {
    return 1000 * (pow((value/127.),2));
}

double scale_envelope_decay(double value) {
    return value*200./127.;
}

double scale_envelope_sustain (double value) {
    return value/127.;
}

double scale_envelope_release (double value) {
    return 1000 * (pow((value/127.),2));
}

// parameter lfo_rate (101, 0, 0, [](double value) -> double {
//     return 30 * (pow((value/127.),2));
// },&update_lfo_rate
// );

// parameter lfo_delay (104, 0, 1, [](double value) -> double {
//     return 2000 * (pow((value/127.),2));
// }, &update_lfo_delay
// );

// parameter osc_lfo_level (102, 0, 2, [](double value) -> double {
//     return (pow((value/127.),2));
// },&update_osc_lfo_level
// );

// parameter pulse_width (24, 0, 3, [](double value) -> double {
//     return (value/127.)*0.9+0.05;
// },&update_pulse_width
// );

// parameter sub_level (86, 0, 4, [](double value) -> double {
//     return value/127.;
// },&update_sub_level
// );

// parameter noise_level (87, 0, 5, [](double value) -> double {
//     return max(0.01,value/127.);
// },&update_noise_level
// );




// parameter hpf_frequency (75, 0, 6, [](double value) -> double {
//     return pow(value,2);
// }, &update_hpt_frequency
// );

// // 20-AUDIO_SAMPLE_RATE_EXACT/2.5
// parameter lpf_frequency (14, 0, 7, [](double value) -> double {
//     return std::min((double)(pow(value,2)),10000);
// }, &update_lpf_frequency
// );

// // 0.9-5.0
// parameter lpf_resonance (15, 0, 8, [](double value) -> double {
//     return value*4.1/127.+0.9;
// }, &update_lpf_resonance
// );

// parameter lpf_env_level (88, 0, 9, [](double value) -> double {
//     return (value/127.) * 2;
// });

// parameter lpf_lfo_level (89, 0, 10, [](double value) -> double {
//     return (value/127.) * 2;
// });

// parameter lpf_keyboard_level (90, 0, 11, [](double value) -> double {
//     return (value/127.) * 2;
// });

// parameter channel_volume (7, 0, 12, [](double value) -> double {
//     return value/127.;
// });

// parameter flanger_offset(26, 0, 13, [](double value) -> double {
//     return double(value/127.*8)*DELAY_LENGTH/8;
// });

// parameter flanger_depth(27, 0, 14, [](double value) -> double {
//     return double(value/127.*8)*DELAY_LENGTH/8;
// });

// parameter flanger_frequency(28, 0, 15, [](double value) -> double {
//     return value/127.*10.;
// });

// parameter flanger_frequency_fine(29, 1, 0, [](double value) -> double {
//     return value/127.;
// });

// parameter envelope_attack(12, 1, 1, [](double value) -> double {
//     return 1000 * (pow((value/127.),2));
// });

// parameter envelope_decay(22, 1, 2, [](double value) -> double {
//     return value*200./127.;
// });

// parameter envelope_sustain(22, 1, 3, [](double value) -> double {
//     return value/127.;
// });

// parameter envelope_release(13, 1, 4, [](double value) -> double {
//     return 1000 * (pow((value/127.),2));
// });