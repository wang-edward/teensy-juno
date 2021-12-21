#include <Arduino.h>
// #include "Audio.h"
#include "architecture.h"
#include "global_variables.h"
#include "button.h"
#include "parameter.h"
#include "init_button.h"
#include "init_parameter.h"
#include "scale_parameter.h"
#include "update_parameter.h"
#include "list_parameter.h"
#include "synth.h"


// parameter *master_volume = new parameter(8, 1, 8, &read_master_volume, &update_master_volume);

// parameter parameters[1] = {
//   master_volume
// };

#include <iostream>
synth s;
void setup() {
    
    
    Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  // Serial.println(master_volume.read());
  s.check_parameters();
  Serial.println("\n");
  // delay(10);
}  