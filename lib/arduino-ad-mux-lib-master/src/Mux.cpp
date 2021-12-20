/*-
 * Project: arduino-ad-mux-lib
 * Source: https://github.com/stechio/arduino-ad-mux-lib.git
 *
 * Copyright (c) 2018-2020 Stefano Chizzolini (arduino-ad-mux-lib)
 * Copyright (c) 2014 Nick Lamprianidis (MUX74HC4067)
 *
 * License:
 *    This library is licensed under the MIT license
 *    http://www.opensource.org/licenses/mit-license.php
 */

#include "Mux.h"

using namespace admux;

Mux::Mux(Pinset channelPins, int8_t enablePin) :
    m_channelPins(channelPins), m_enablePin(enablePin) {
  for (int i = 0; i < m_channelPins.size(); i++) {
    pinMode(m_channelPins[i], OUTPUT);
  }
  m_channelCount = 1 << m_channelPins.size();

  if (isDefined(enablePin)) {
    pinMode(m_enablePin, OUTPUT);
  }
}

Mux::Mux(Pin signalPin, Pinset channelPins, int8_t enablePin) :
    Mux::Mux(channelPins, enablePin) {
  Mux::signalPin(signalPin);
}

int8_t Mux::channel(int8_t value) {
  if (value == m_channel)
    return ERROR_SUCCESS;
  else if (value >= m_channelCount)
    return ERROR_OUT_OF_RANGE;

  m_channel = value;
  for (uint8_t i = 0; i < m_channelPins.size(); i++) {
    digitalWrite(m_channelPins[i], bitRead(value, i));
  }
  return ERROR_SUCCESS;
}

int8_t Mux::enabled(bool value) {
  if (!isDefined(m_enablePin))
    return ERROR_UNDEFINED_PIN;

  digitalWrite(m_enablePin, m_enabled = value ? LOW : HIGH);
  return ERROR_SUCCESS;
}

int16_t Mux::read(int8_t channel) {
  if (isDefined(channel)) {
    int8_t result = this->channel(channel);
    if (result != ERROR_SUCCESS)
      return result;
  }

  switch (m_signalPin.type) {
    case PinType::Analog:
      return analogRead(m_signalPin.pin);
    case PinType::Digital:
      return digitalRead(m_signalPin.pin);
    default:
      return ERROR_UNHANDLED_OPERATION;
  }
}

int8_t Mux::signalPin(Pin value) {
  // Another pin already assigned to signal?
  /*
   * NOTE: The same mux can be physically connected to multiple (mutually-
   * exclusive) signal pins at once; this function takes care to electrically
   * exclude previously-selected pins.
   */
  if (isDefined(m_signalPin.pin) && m_signalPin.pin != value.pin) {
    // Put the old signal pin in high impedance state!
    if (m_signalPin.mode == OUTPUT) {
      digitalWrite(m_signalPin.pin, LOW);
    }
    pinMode(m_signalPin.pin, INPUT);
  }

  m_signalPin = value;
  if (m_signalPin.mode == INPUT) {
    // Disable pullup!
    /* SEE: https://www.arduino.cc/en/Tutorial/DigitalPins */
    digitalWrite(m_signalPin.pin, LOW);
  }
  pinMode(m_signalPin.pin, m_signalPin.mode);
  return ERROR_SUCCESS;
}

int8_t Mux::write(uint8_t data, int8_t channel) {
  if (m_signalPin.mode != OUTPUT)
    return ERROR_WRONG_SIGNAL_MODE;

  if (isDefined(channel)) {
    int8_t result = this->channel(channel);
    if (result != ERROR_SUCCESS)
      return result;
  }

  switch (m_signalPin.type) {
    case PinType::Analog:
#if defined(ARDUINO_ARCH_ESP32)
      ledcWrite(m_signalPin.pin, data);
#else
      analogWrite(m_signalPin.pin, data);
#endif
      break;
    case PinType::Digital:
      digitalWrite(m_signalPin.pin, data);
      break;
  }
  return ERROR_SUCCESS;
}
