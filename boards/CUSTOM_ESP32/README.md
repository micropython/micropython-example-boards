This directory contains board definition files for an esp32-based board.

To build it make sure the IDF has been installed and the environment set up,
for example using `export $IDF_PATH/export.sh`.  Then build with:

    $ idf.py build

To deploy the firmware to the board:

    $ idf.py -p /dev/ttyUSB0 flash
