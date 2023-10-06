# include default manifest
include("$(PORT_DIR)/boards/manifest.py")

# include our own extra...
module("xxd.py", base_path="$(BOARD_DIR)/../../src/utils")
