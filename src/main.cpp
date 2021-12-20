#include <Arduino.h>
// #include "Audio.h"

#include "synth.h"

// parameter *master_volume = new parameter(8, 1, 8, &read_master_volume, &update_master_volume);

// parameter parameters[1] = {
//   master_volume
// };

class T {
  public:
    int a;
    T (int s){
      a = s;
    }
};





#include <iostream>

void update_master_volume(double value) {
            // sgtl5000_1.volume(value);
        }

    double read_master_volume(double value) {
        return value/127.;
    }

void setup() {
    synth s;
    parameter master_volume(8, 1, 8, read_master_volume, update_master_volume);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("asd");
  Serial.println("ada");
}  