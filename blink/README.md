# Overview

This is a simple script which turns an LED on and off.

## Schematic

- The decoupling capacitors between between VCC ↔ GND and AVVC ↔ GND are optional but will improve stability of the power supply to the microcontroller.
- The reset switch is optional.

![Blink Schematic](schematics/schematic.png "Blink Schematic")

## Instructions

### Use Makefile

`make flash`

### OR: Compile and Upload Manually

1. Setup development environment using instructions in the main project README.
2. Compile .c file to HEX

```bash
avr-gcc -mmcu=atmega32 -Os -o blink.elf blink.c
avr-objcopy -O ihex -R .eeprom blink.elf blink.hex
```

3. Upload via USBasp

```bash
avrdude -c usbasp -p m32 -U flash:w:blink.hex
```
