#include "py/mphal.h"
#include "boardctrl.h"

int board_run_boot_py(boardctrl_state_t *state) {
    mp_printf(&mp_plat_print, "Starting custom board\n");
    return boardctrl_run_boot_py(state);
}
