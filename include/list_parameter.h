#include <math.h>

#include <functional>
// parameter master_volume (8, 1, 8, scale_master_volume, update_master_volume);

parameter lfo_rate (101, 0, 0, scale_lfo_rate,update_lfo_rate); //0,2?

parameter lfo_delay (104, 0, 1, scale_lfo_delay, update_lfo_delay);

parameter osc_lfo_level (102, 0, 2, scale_osc_lfo_level, update_osc_lfo_level); //0,0?

parameter master_volume (8, 0, 3, scale_master_volume, update_master_volume);