/*-
 * This example demonstrates how to combine reading inputs and writing outputs,
 * whether they are digital or analog.
 *
 * It assumes there are 2 push buttons with pullup resistors connected to
 * channels C0 and C1, 2 potentiometers connected to channels C2 and C3, and 4
 * LEDs+resistors with the positive lead of the LEDs connected to channels C4
 * to C7.
 *
 * PIN A0 is used for reading the inputs and should connect to the SIG pin; PIN
 * 3 is used for writing the outputs and should connect to the SIG pin.
 *
 * NOTE: Connecting both PIN A0 and PIN 3 to the SIG pin won't create a problem
 * because signalPin() method takes care to declare unused pins as inputs
 * putting them in a high impedance state.
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
 * Creates an 8-channel Mux instance.
 *
 * 7, 8 and 9 are the Arduino pins connected to pins S0-S2 for controlling
 * channels C0-C7; any unused control pin (S3, S4,...) should be routed to GND.
 */
Mux mux(Pinset(7, 8, 9));

void setup() {
}

/**
 * Reads the state of the push buttons and the potentiometers and outputs to
 * the LEDs a corresponding value:
 *   * HIGH is the buttons are pressed, LOW otherwise;
 *   * PWM signal with duty cycle that depends on the potentiometers' position.
 */
void loop() {
  int data[4];

  // Reads the 2 push buttons at channels C0 and C1.
  mux.signalPin(3, INPUT, PinType::Digital);
  for (byte i = 0; i < 2; i++) {
    data[i] = mux.read(i);
  }

  // Reads the 2 potentiometers at channels C2 and C3.
  mux.signalPin(A0, INPUT, PinType::Analog);
  for (byte i = 2; i < 4; i++) {
    data[i] = mux.read(i);
  }

  // Writes to the 2 LEDs at channels C4 and C5 HIGH or LOW according to the state of the push buttons.
  mux.signalPin(3, OUTPUT, PinType::Digital);
  for (byte i = 0; i < 2; i++) {
    mux.write(!data[i], i + 4);
    delay(300);
  }

  // Outputs a PWM signal to the 2 LEDs at channels C6 and C7 according to the position of the potentiometers.
  mux.signalPin(3, OUTPUT, PinType::Analog);
  for (byte i = 2; i < 4; i++) {
    mux.write(data[i], i + 4);
    delay(300);
  }
}
