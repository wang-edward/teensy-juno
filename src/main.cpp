#include <Arduino.h>
// #include "Audio.h"
#include "architecture.h"
#include "global_variables.h"
//classes
#include "button.h"
#include "parameter.h"
#include "voice.h"
//init controls
#include "init_button.h"
#include "init_parameter.h"
//control functions
#include "scale_parameter.h"
#include "update_parameter.h"
//declare controls
#include "declare_parameter.h"
#include "declare_button.h"
//
#include "synth.h"




// parameter *master_volume = new parameter(8, 1, 8, &read_master_volume, &update_master_volume);

// parameter parameters[1] = {
//   master_volume
// };

#include <iostream>
synth s;
void setup() {
    declare_parameters();
    declare_buttons();
    Serial.begin(9600);
    // pulse_on.state =true;
    // pulse_on.update_led();
    // pulse_on.state =false;
}

static int last_time = 0;
static long a_last = 1;
static long b_last = 2;
static long c_last = 3;
void loop() {
  // put your main code here, to run repeatedly:
  // Serial.println(master_volume.read());
  // s.check_parameters();

// Serial.println(temp_time);
  // if (temp_time - last_time > 5) {
  //   last_time = temp_time;
    s.check_buttons();
    // for (int i=0;i<9;i++) {
    //   Serial.print(i); Serial.print(": "); Serial.println(mux_array[2].Mux::read(i));
    // }
  // }

  // long a_time = millis();
  // long b_time = millis();
  // long c_time = millis();
 
  // if (a_time - a_last > 55) {
  //   // Serial.print("a: "); Serial.println(a_time - a_last);
  //   Serial.println("AAAAAA");
  //   a_last = a_time;
  //   pwm_lfo_on.check();
  // }

  // if (b_time - b_last > 55) {
  //   // Serial.print(" b: "); Serial.println(b_time - b_last);
  //   Serial.println("BBBBBB");
  //   b_last = b_time;
  //   pulse_on.check();
  // }

  // // if (c_time - c_last > 50) {
  // //   // Serial.print(" c: "); Serial.println(c_time - c_last);
  // //   Serial.println("CCCCCC");
  // //   c_last = c_time;
  // //   // saw_on.check();
  // // }
  
  // // delay(5);

}  