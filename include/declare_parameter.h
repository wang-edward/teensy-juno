#include <math.h>

#include <functional>

// parameter master_volume (8, 1, 8, scale_master_volume, update_master_volume);

// lfo_rate.declare(101, 0, 0, scale_lfo_rate,update_lfo_rate); //0,2?

void declare_parameters() {
    lfo_rate.declare(101, 0, 0, scale_lfo_rate,update_lfo_rate);
    lfo_delay.declare(104, 0, 1, scale_lfo_delay, update_lfo_delay);
    osc_lfo_level.declare(102, 0, 2, scale_osc_lfo_level, update_osc_lfo_level); //0,0?
    pulse_width.declare(24, 0, 3, scale_pulse_width, update_pulse_width);
    master_volume.declare(8, 1, 8, scale_master_volume, update_master_volume);
}







    



