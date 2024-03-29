# MCU settings
MCU_SERIES = f7
CMSIS_MCU = STM32F722xx
MICROPY_FLOAT_IMPL = single
AF_FILE = boards/stm32f722_af.csv
LD_FILES = boards/PYBD_SF2/f722_qspi.ld
TEXT0_ADDR = 0x08008000
TEXT1_ADDR = 0x90000000
TEXT0_SECTIONS = .isr_vector .text .data .ARM
TEXT1_SECTIONS = .text_ext

# MicroPython settings
MICROPY_PY_LWIP = 1
MICROPY_PY_NETWORK_CYW43 = 1
MICROPY_PY_SSL = 1
MICROPY_SSL_MBEDTLS = 1
MICROPY_VFS_LFS2 = 1

# Custom C modules
USER_C_MODULES = $(PROJECT_TOP)/src/cmodules

# PYBD-specific frozen modules
FROZEN_MANIFEST = $(BOARD_DIR)/manifest.py
