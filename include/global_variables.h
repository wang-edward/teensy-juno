#include <Mux.h>


using namespace admux;
Mux mux_array[] = {
    Mux(Pin(24, INPUT, PinType::Analog),Pinset(29,30,31,32)), 
    Mux(Pin(25, INPUT, PinType::Analog),Pinset(29,30,31,32)),
    Mux(Pin(26, INPUT, PinType::Analog),Pinset(29,30,31,32))
};

const int num_params = 22;

const int DELAY_LENGTH = 1;

