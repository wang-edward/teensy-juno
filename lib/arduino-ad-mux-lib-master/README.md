# arduino-ad-mux-lib
[![Build Status](https://travis-ci.com/stechio/arduino-ad-mux-lib.svg?branch=feat%2Fdev3)](https://travis-ci.com/stechio/arduino-ad-mux-lib)

Arduino library for controlling [analog/digital multiplexers](https://en.wikipedia.org/wiki/Multiplexer) (A/D mux) of any size, like CMOS 4000 series (8-channel 4051 (CD4051, 74HC4051, [CD74HC4051](https://www.ti.com/lit/ds/symlink/cd74hc4051.pdf)), 16-channel 4067 (CD4067, 74HC4067, [CD74HC4067](https://www.ti.com/lit/ds/symlink/cd74hc4067.pdf)), etc.), dual-16- (ADG726) and 32-channel (ADG732) [MegaMUX](https://www.analog.com/media/en/technical-documentation/data-sheets/ADG726_732.pdf), and so on.

This library was forked from [project MUX74HC4067](https://github.com/nlamprian/MUX74HC4067) in order to generalize and streamline its functionalities at both interface and implementation levels.

## Getting started

All ICs are supported by a common implementation (`Mux`).

This library provides several examples that demonstrate its functionalities; they all revolve around the same simple life cycle: 

<ol>
<li>Initialization
<p>MCU pins are assigned to signal and channel control:</p>

```cpp
using namespace admux;

// 16-channel Mux declared with analog input signal on pin A0 and channel control on digital pins 8, 9, 10 and 11.
Mux mux(Pin(A0, INPUT, PinType::Analog), Pinset(8, 9, 10, 11));
```

The signal pin can also be assigned (and possibly replaced) through the `signalPin(..)` method.
</li>
<li>I/O
<p>After selecting the channel, read/write operations can be invoked:</p>

```cpp
// Select 3rd channel!
mux.channel(2);
// Read data from the current channel (that is 3rd)!
int16_t data = mux.read();
```

<p>Alternatively, the channel can be directly specified within the read/write operation:</p>

```cpp
// Read data from the 3rd channel!
int16_t data = mux.read(2);
```

</li></ol>

## Advanced use

*The same mux can be physically connected to multiple signal pins at once*, as any invocation to `signalPin(..)` method ensures that the previous pin is set to high impedance state before switching to the new one.

Conversely, *the same signal pin can be physically connected to multiple ICs through a common data line*, as `enabled(..)` method controls whether the mux I/O operates.

## Testing

Project building and testing are based on [PlatformIO](https://platformio.org/).

Run unit tests through this command:

```
pio test
```

## Repository

[https://github.com/stechio/arduino-ad-mux-lib](https://github.com/stechio/arduino-ad-mux-lib)
