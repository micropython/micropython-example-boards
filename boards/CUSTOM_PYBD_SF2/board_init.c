#include "py/mphal.h"
#include "boardctrl.h"

// Use PYBD_SF2 implementation, but add extra initialisation.
#include "boards/PYBD_SF2/board_init.c"

void board_early_init_custom(void) {
    // Call PYBD_SF2's board init function.
    board_early_init();

    // Relocate ISR vector table to ITCM RAM (can't use memcpy because dest=0).
    __disable_irq();
    const uint32_t *src = (void*)SCB->VTOR;
    uint32_t *dest = RAMITCM_BASE;
    for (unsigned int i = 0; i < 128; ++i) {
        *dest++ = *src++;
    }
    SCB->VTOR = RAMITCM_BASE;
    __enable_irq();
}

int board_run_boot_py(boardctrl_state_t *state) {
    mp_printf(&mp_plat_print, "Starting custom board\n");
    return boardctrl_run_boot_py(state);
}
