# Marlin 3D Printer Firmware configured for Mendel90

![GitHub](https://img.shields.io/github/license/marlinfirmware/marlin.svg)
![GitHub contributors](https://img.shields.io/github/contributors/marlinfirmware/marlin.svg)
![GitHub Release Date](https://img.shields.io/github/release-date/marlinfirmware/marlin.svg)
[![Build Status](https://github.com/MarlinFirmware/Marlin/workflows/CI/badge.svg?branch=bugfix-2.0.x)](https://github.com/MarlinFirmware/Marlin/actions)

<img align="right" width=175 src="buildroot/share/pixmaps/logo/marlin-250.png" />

Additional documentation can be found at the [Marlin Home Page](https://marlinfw.org/).

## Marlin 2.0 Bugfix Branch configured for Mendel90

__Not for production use. Use with caution!__

This version is configured for a stock build of the Mendel90 kit. It has two additional thermistor tables to match the thermistors supplied in the kit. 

For a standard kit just these two lines will need tweaking to match your exact `E_STEPS_PER_MM` and `Z_MAX_POS` as described in the configuration section of the build [manual](https://github.com/nophead/Mendel90/blob/master/dibond/manual/Mendel90_Dibond.pdf).

## Building Marlin 2.0

To build Marlin 2.0 you'll need [Arduino IDE 1.8.8 or newer](https://www.arduino.cc/en/main/software) or [PlatformIO](https://docs.platformio.org/en/latest/ide.html#platformio-ide). We've posted detailed instructions on [Building Marlin with Arduino](https://marlinfw.org/docs/basics/install_arduino.html) and [Building Marlin with PlatformIO for ReArm](https://marlinfw.org/docs/basics/install_rearm.html) (which applies well to other 32-bit boards).
