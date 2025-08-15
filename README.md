# ATmega32 AVR Projects

This repository contains AVR microcontroller projects for the **ATmega32**.  
All projects are written in C and compiled with `avr-gcc`, and uploaded to the chip using `avrdude` via a **USBasp** programmer.

## Hardware Used

- ATmega32 microcontroller
- USBasp V2.0 programmer
- Breadboard and wires
- LEDs and resistors
- 0.1 µF decoupling capacitors
- 5 V regulated power supply

## Projects

Navigate to the desired project folder and follow the project specific instructions.

The projects are as follows:

- **blink:** Turns an LED on and off.

## Software Installation

### macOS

```bash
brew tap osx-cross/avr
brew install avr-gcc avrdude libusb
```

### Linux

```bash
sudo apt update
sudo apt install avr-libc gcc-avr avrdude libusb-1.0-0
```

### Windows

1. Install the AVR-GCC toolchain (AVR Toolchain for Windows or WinAVR).
2. Install AVRDude.
3. Install USBasp driver with Zadig:
   - Plug in the USBasp.
   - Select USBasp in Zadig.
   - Choose driver: libusb-win32 or libusbK, then install.

## Testing USBasp detection

Plug in the USBasp, then run:

```bash
system_profiler SPUSBDataType | grep -A 5 -i usbasp
```

You should see something like:

```bash
USBasp:
    Product ID: 0x05dc
    Vendor ID: 0x16c0
```
