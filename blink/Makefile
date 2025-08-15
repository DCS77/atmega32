TARGET = blink

MCU = atmega32

PROGRAMMER = usbasp
CHIP = m32

# Compiler and flags
CC = avr-gcc
CFLAGS = -mmcu=$(MCU) -Os
OBJCOPY = avr-objcopy
AVRDUDE = avrdude

# Files
SRC = $(TARGET).c
ELF = $(TARGET).elf
HEX = $(TARGET).hex

# Default target
all: $(HEX)

# Compile to .elf
$(ELF): $(SRC)
	$(CC) $(CFLAGS) -o $(ELF) $(SRC)

# Convert .elf to .hex
$(HEX): $(ELF)
	$(OBJCOPY) -O ihex -R .eeprom $(ELF) $(HEX)

# Upload to microcontroller
flash: $(HEX)
	$(AVRDUDE) -c $(PROGRAMMER) -p $(CHIP) -U flash:w:$(HEX)

# Clean build files
clean:
	rm -f $(ELF) $(HEX)

.PHONY: all flash clean
