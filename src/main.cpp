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
    pulse_on.state =true;
    pulse_on.update_led();
    pulse_on.state =false;
}

static int last_time = 0;

void loop() {
  // put your main code here, to run repeatedly:
  // Serial.println(master_volume.read());
  // s.check_parameters();
  // s.check_buttons();
  // delay(2);

  long temp_time = millis();
 
  // Serial.println(temp_time);
  if (temp_time - last_time > 5) {
    last_time = temp_time;
    // Serial.println("asdasd");
    pulse_on.check();
    Serial.println("\n\n\n\n");
  }

  
  // delay(10);
  // Serial.println("ass2d");
  // delay(1000);
}  