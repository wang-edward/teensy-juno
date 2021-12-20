/*-
 * This example demonstrates how to read digital signals.
 *
 * It assumes there are push buttons with pullup resistors connected to the 16
 * channels of the 74HC4067 mux.
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
 * 1st argument is the SIG (signal) pin (Arduino digital input pin 3).
 * 2nd argument is the S0-S3 (channel control) pins (Arduino pins 8, 9, 10, 11).
 */
Mux mux(Pin(3, INPUT, PinType::Digital), Pinset(8, 9, 10, 11));

void setup() {
  // Serial port initialization.
  Serial.begin(9600); while (!Serial) /* Waits for serial port to connect (needed for Leonardo only) */;
}

/**
 * Reads the 16 channels and reports on the serial monitor if the corresponding
 * push button is pressed.
 */
void loop() {
  byte data;
  for (byte i = 0; i < mux.channelCount(); i++) {
    data = mux.read(i) /* Reads from channel i (returns HIGH or LOW) */;

    Serial.print("Push button at channel "); Serial.print(i); Serial.print(" is "); Serial.println(data == LOW ? "pressed" : "not pressed");
  }
  Serial.println();

  delay(1500);
}
