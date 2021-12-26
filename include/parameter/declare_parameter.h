#include <math.h>

void declare_parameters() {
    lfo_rate.declare(101, 0, 0, scale_lfo_rate,update_lfo_rate);
    lfo_delay.declare(104, 0, 1, scale_lfo_delay, update_lfo_delay);
    
    osc_lfo_level.declare(102, 0, 2, scale_osc_lfo_level, update_osc_lfo_level); //0,0?
    
    pulse_width.declare(24, 0, 3, scale_pulse_width, update_pulse_width);
    sub_level.declare(86, 0, 4, scale_sub_level, update_sub_level);
    noise_level.declare(87, 0, 5, scale_noise_level, update_noise_level);
    
    // hpf_frequency.declare(75, 0, 6, scale_hpf_frequency, update_hpf_frequency);
    
    // lpf_frequency.declare(14, 0, 7 scale_lpf_frequency, update_lpf_frequency);
    // lpf_resonance.declare(15, 0, 8, scale_lpf_resonance, update_lpf_resonance);
    
    // lpf_envelope_level.declare(88, 0 , 9, scale_lpf_envelope_level, update_lpf_envelope_level);
    // lpf_lfo_level.declare(89, 0, 10, scale_lpf_lfo_level, update_lpf_lfo_level);
    // lpf_keyboard_level.declare(90, 0, 11, scale_lpf_keyboard_level, update_lpf_keyboard_level);
    
    // channel_volume.declare(7, 0, 12, scale_channel_volume, update_channel_volume);
    
    // flanger_offset.declare(26, 0, 13, scale_flanger_offset, update_flanger_offset);
    // flanger_depth.declare(27, 0, 14, scale_flanger_depth, update_flanger_depth);
    // flanger_frequency.declare(28, 0, 15, scale_flanger_frequency, update_flanger_frequency);
    // flanger_frequency_fine.declare(29, 1, 0, scale_flanger_frequency_fine, update_flanger_frequency_fine);
    
    // envelope_attack.declare(12, 1, 1, scale_envelope_attack, update_envelope_attack);
    // envelope_decay.declare(22, 1, 2, scale_envelope_decay, update_envelope_decay);
    // envelope_sustain.declare(23, 1, 3, scale_envelope_sustain, update_envelope_sustain);
    // envelope_release.declare(13, 1, 4, scale_envelope_release, update_envelope_release);

    master_volume.declare(8, 1, 8, scale_master_volume, update_master_volume);
}