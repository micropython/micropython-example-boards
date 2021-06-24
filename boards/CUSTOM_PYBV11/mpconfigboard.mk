# MCU settings
MCU_SERIES = f4
CMSIS_MCU = STM32F405xx
AF_FILE = boards/stm32f405_af.csv
LD_FILES = boards/stm32f405.ld boards/common_ifs.ld
TEXT0_ADDR = 0x08000000
TEXT1_ADDR = 0x08020000

# MicroPython settings
MICROPY_FLOAT_IMPL = double
MICROPY_VFS_LFS1 = 1
MICROPY_VFS_LFS2 = 1

# Custom C modules
USER_C_MODULES = $(PROJECT_TOP)/src/cmodules

# PYBD-specific frozen modules
FROZEN_MANIFEST = $(BOARD_DIR)/manifest.py
