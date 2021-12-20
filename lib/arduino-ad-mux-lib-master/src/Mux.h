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

#ifndef ADMUX_MUX_H
#define ADMUX_MUX_H

#ifdef UNIT_TEST
  #include "ArduinoFake.h"
#else
  #include "Arduino.h"
#endif

namespace admux {

const int8_t UNDEFINED = -1;

inline bool isDefined(int8_t value) {
  return value > UNDEFINED;
}

enum {
  ERROR_SUCCESS = 0,
  ERROR_WRONG_SIGNAL_MODE = -1,
  ERROR_UNHANDLED_OPERATION = -2,
  ERROR_OUT_OF_RANGE = -3,
  ERROR_UNDEFINED_PIN = -4
};

enum class PinType {
  Analog,
  Digital
};

typedef struct Pin {
  int8_t pin;
  uint8_t mode;
  PinType type;

  Pin() :
      Pin(UNDEFINED, OUTPUT, PinType::Digital) {
  }

  Pin(int8_t pin, uint8_t mode, PinType type) :
      pin(pin), mode(mode), type(type) {
  }
} Pin;

typedef struct Pinset {
// @formatter:off
  /*
   * Horribly clumsy constructor, I know, but, willing to support even legacy
   * MCUs, more elegant solutions like std::initializer_list aren't available,
   * alas.
   */
  Pinset(
      uint8_t pin0,
      int8_t pin1 = UNDEFINED,
      int8_t pin2 = UNDEFINED,
      int8_t pin3 = UNDEFINED,
      int8_t pin4 = UNDEFINED,
      int8_t pin5 = UNDEFINED,
      int8_t pin6 = UNDEFINED,
      int8_t pin7 = UNDEFINED
      ){
    pins[0] = pin0;
    pins[1] = pin1;
    pins[2] = pin2;
    pins[3] = pin3;
    pins[4] = pin4;
    pins[5] = pin5;
    pins[6] = pin6;
    pins[7] = pin7;
    for(int i = 0; i < MAX_SIZE; i++) {
      if (!isDefined(pins[i])) {
        m_size = i;
        return;
      }
    }
    m_size = MAX_SIZE;
  }
// @formatter:on

  int8_t operator[](uint8_t index) {
    return pins[index];
  }

  uint8_t size() {
    return m_size;
  }

private:
  static const uint8_t MAX_SIZE = 8;

  int8_t pins[MAX_SIZE];
  uint8_t m_size;
} Pinset;

/**
 * <a href="https://en.wikipedia.org/wiki/Multiplexer">Analog/Digital multiplexer</a>
 * of arbitrary channel size.
 */
class Mux {
public:
  /**
   * Creates a Mux instance.
   *
   * @param channelPins
   *      MCU pins to which the mux control pins (S*) connect.
   * @param enablePin
   *      MCU pin to which the mux enable pin (EN) connects.
   */
  Mux(Pinset channelPins, int8_t enablePin = UNDEFINED);

  /**
   * Creates a Mux instance.
   *
   * @param signalPin
   *      MCU pin to which the mux signal pin (SIG) connects.
   * @param channelPins
   *      MCU pins to which the mux control pins (S*) connect.
   * @param enablePin
   *      MCU pin to which the mux enable pin (EN) connects.
   */
  Mux(Pin signalPin, Pinset channelPins, int8_t enablePin = UNDEFINED);

  /**
   * Current channel.
   */
  int8_t channel() {
    return m_channel;
  }

  /**
   * Sets {@link #channel()}.
   *
   * @return
   *      <ul>
   *        <li>ERROR_SUCCESS, if success</li>
   *        <li>ERROR_OUT_OF_RANGE, if channel beyond the selectable range</li>
   *      </ul>
   */
  int8_t channel(int8_t value);

  /**
   * Range of selectable channels.
   */
  uint8_t channelCount() {
    return m_channelCount;
  }

  /**
   * Whether the mux signal is enabled.
   */
  bool enabled() {
    return m_enabled;
  }

  /**
   * Sets {@link #enabled()}.
   *
   * @return
   *      <ul>
   *        <li>ERROR_SUCCESS, if success</li>
   *        <li>ERROR_UNDEFINED_PIN, if enablePin undefined</li>
   *      </ul>
   */
  int8_t enabled(bool value);

  /**
   * Reads from the given channel.
   *
   * <p>Side effects: in case the channel argument is defined, it becomes the
   *    current one (same as invoking channel method).</p>
   *
   * @param channel
   *      Channel to read from. Default: current channel.
   * @return
   *      <ul>
   *        <li>{HIGH, LOW}, if signal pin was set to Digital</li>
   *        <li>ADC value, if signal pin was set to Analog</li>
   *        <li>see {@link #channel(int8_t)}</li>
   *      </ul>
   */
  int16_t read(int8_t channel = UNDEFINED);

  Pin signalPin() {
    return m_signalPin;
  }

  /**
   * As the same mux can be physically connected to multiple (mutually-
   * exclusive) signal pins at once, this function takes care to electrically
   * exclude previously-assigned signal pins.
   *
   * @return ERROR_SUCCESS, if success.
   */
  int8_t signalPin(Pin value);

  /**
   * As the same mux can be physically connected to multiple (mutually-
   * exclusive) signal pins at once, this function takes care to electrically
   * exclude previously-assigned signal pins.
   *
   * @param pin
   *      MCU pin to which the mux signal pin connects.
   * @param mode
   *      MCU signal mode.
   * @param type
   *      MCU signal type.
   * @return ERROR_SUCCESS, if success.
   */
  int8_t signalPin(int8_t pin, uint8_t mode, PinType type) {
    return signalPin(Pin(pin, mode, type));
  }

  /**
   * Writes to the given channel.
   *
   * <p>Side effects: in case the channel argument is defined, it becomes the
   *    current one (same as invoking channel method).</p>
   *
   * @param data
   *      Data to write to channel:
   *      <ul>
   *        <li>{HIGH, LOW}, if signal pin was set to Digital</li>
   *        <li>PWM value, if signal pin was set to Analog</li>
   *      </ul>
   * @param channel
   *      Channel to write to (Default: current channel).
   * @return
   *      <ul>
   *        <li>ERROR_SUCCESS, if success</li>
   *        <li>ERROR_WRONG_SIGNAL_MODE, if signal mode isn't OUTPUT</li>
   *        <li>see {@link #channel(int8_t)}</li>
   *      </ul>
   */
  int8_t write(uint8_t data, int8_t channel = UNDEFINED);

protected:
  int8_t m_channel = UNDEFINED;
  uint8_t m_channelCount;
  Pinset m_channelPins;
  bool m_enabled = true;
  int8_t m_enablePin = UNDEFINED;
  Pin m_signalPin;
};

}

#endif // ADMUX_MUX_H
