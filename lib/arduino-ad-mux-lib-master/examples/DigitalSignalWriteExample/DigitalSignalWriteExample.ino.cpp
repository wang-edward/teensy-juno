/*-
 * This example demonstrates how to write digital signals.
 *
 * It assumes there are LEDs+resistors with the positive lead of the LEDs
 * connected to the 16 channels of the 74HC4067 mux, respectively.
 * 
 * ------------------------------------------------------------
 * Project: arduino-ad-mux-lib
 * Source: https://github.com/stechio/arduino-ad-mux-lib.git
 *
 * Author: Nick Lamprianidis (adaptation by Stefano Chizzolini)
 */

#include <Arduino.h>
#include "Mux.h"

using namespace admux;

/*
 * Creates a Mux instance.
 *
 * 1st argument is the SIG (signal) pin (Arduino digital output pin 3).
 * 2nd argument is the S0-S3 (channel control) pins (Arduino pins 8, 9, 10, 11).
 */
Mux mux(Pin(3, OUTPUT, PinType::Digital), Pinset(8, 9, 10, 11));

void setup() {
}

/**
 * Writes to the 16 channels a HIGH value, one after the other.
 */
void loop() {
  for (byte i = 0; i < mux.channelCount(); i++) {
    mux.write(HIGH, i) /* Connects to channel i and writes HIGH */;
    delay(25);
  }

  delay(800);
}
