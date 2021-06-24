MicroPython custom boards
=========================

This repository shows how to define custom MicroPython boards.

To set up MicroPython, check out the submodule and build `mpy-cross`:

    $ git submodule update --init lib/micropython
    $ make -C lib/micropython/mpy-cross

The various custom boards will require certain submodules of MicroPython
itself.  These can be initialised via:

    $ cd lib/micropython
    $ git submodule update --init lib/stm32lib lib/berkeley-db-1.xx
    $ cd ../..
