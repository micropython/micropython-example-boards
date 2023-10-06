# Include MicroPython ESP32 component.
get_filename_component(MICROPY_DIR "../../../lib/micropython" ABSOLUTE)
set(PROJECT_DIR ${MICROPY_DIR}/ports/esp32)
include(${PROJECT_DIR}/main_esp32/CMakeLists.txt)
