# CHANGELOG | arduino-ad-mux-lib
Project arduino-ad-mux-lib (https://github.com/stechio/arduino-ad-mux-lib)

This file documents all notable changes to this project.

The format is based on [Keep a Changelog](https://keepachangelog.com/en/1.0.0/),
and this project adheres to [Semantic Versioning](https://semver.org/spec/v2.0.0.html).

Change author is referenced by nickname (@xxxxxx), as listed in [AUTHORS.md](AUTHORS.md); whenever unspecified, it's @stechio.

## [[3.0.0](https://github.com/stechio/arduino-ad-mux-lib/releases/tag/3.0.0)] - 2020-11-09

This development iteration focuses on API simplification (all ICs converged to a common implementation (`Mux`)), fluency (streamlined accessors and mutators), cohesiveness (name collisions prevented by namespace and constants encapsulation into enumerations) and generalization (arbitrary channel cardinality supported).

### Added
- `admux` namespace
- `Pin` struct: created to encapsulate full pin definitions (as for signal pin)
- `Pinset` struct: created to gather sets of coordinated pins (as for channel controls).
- enumerations (`PinType` and anonymous `ERROR_*`): created to replace macro constants (type-unsafe and prone to name clashing!)
- PlatformIO configuration
- Continuous integration via Travis (@thijstriemstra)
- Unit testing via ArduinoFake

### Changed
- `Mux`: fluent member naming, generalized control pin array (arbitrary channel cardinality supported)

### Fixed
- [[#3]](https://github.com/stechio/arduino-ad-mux-lib/issues/3) [ESP32] error: 'analogWrite' was not declared in this scope (@thijstriemstra)

### Removed
- `GenericMux`: replaced by `Mux`
- `Type4051Mux`: replaced by `Mux`
- `Type4067Mux`: replaced by `Mux`
- macro constants: encapsulated into enumerations

## [[2.0.1](https://github.com/stechio/arduino-ad-mux-lib/releases/tag/2.0.1)] - 2018-04-16

(OBSOLETE)

## [[2.0.0](https://github.com/stechio/arduino-ad-mux-lib/releases/tag/2.0.0)] - 2018-04-12

(OBSOLETE)

## [[1.0.0](https://github.com/stechio/arduino-ad-mux-lib/releases/tag/1.0.0)] - 2018-04-11

(OBSOLETE)
