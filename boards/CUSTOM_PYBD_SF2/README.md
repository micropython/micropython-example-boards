This directory contains board definition files for a customised PYBD-SF2W board.
It customises it as follows:
- Default SYSCLK at 96MHz
- Bluetooth support not included
- Relocates ISR vector table to RAM
- Prints a message before running boot.py

First, make sure all submodules are initialised in the micropython repository:

    $ git -C ../../lib/micropython submodule update --init lib/lwip lib/mbedtls lib/stm32lib

Then build the firmware with:

    $ make

To deploy the firmware to the board, make sure the board is in it's bootloader then run:

    $ make deploy
