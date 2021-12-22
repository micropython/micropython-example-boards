# Makefile for custom MicroPython stm32 board.

################################################################################
# Define your settings here.

# The board name.
BOARD ?= CUSTOM_PYBD_SF2

# Location of MicroPython repository.
MICROPY_TOP ?= $(abspath ../../lib/micropython)

################################################################################
# Define your targets here.

all: firmware

################################################################################
# Items below this line do not generally need to be changed.

BOARD_DIR = $(abspath .)
BUILD = $(abspath build)

include $(MICROPY_TOP)/py/mkenv.mk
include $(MICROPY_TOP)/py/mkrules.mk

firmware:
	$(Q)$(MAKE) -C $(MICROPY_TOP)/ports/stm32 \
		PROJECT_TOP=$(abspath ../..) \
		BOARD=$(BOARD) \
		BOARD_DIR=$(BOARD_DIR) \
		BUILD=$(BUILD)

mboot:
	$(Q)$(MAKE) -C $(MICROPY_TOP)/ports/stm32/mboot \
		PROJECT_TOP=$(abspath ../..) \
		BOARD=$(BOARD) \
		BOARD_DIR=$(BOARD_DIR) \
		BUILD=$(BUILD)-mboot

deploy:
	$(PYTHON) $(MICROPY_TOP)/tools/pydfu.py -u $(BUILD)/firmware.dfu
