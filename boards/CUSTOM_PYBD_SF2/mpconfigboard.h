// Take PYBD_SF2 as base configuration.
#include "boards/PYBD_SF2/mpconfigboard.h"

#undef MICROPY_HW_BOARD_NAME
#undef MICROPY_HW_CLK_PLLM
#undef MICROPY_HW_CLK_PLLN
#undef MICROPY_HW_CLK_PLLP
#undef MICROPY_HW_CLK_PLLQ
#undef MICROPY_HW_FLASH_LATENCY
#undef MICROPY_BOARD_EARLY_INIT

#define MICROPY_HW_BOARD_NAME               "Custom PYBD-SF2W"
#define MICROPY_BOARD_EARLY_INIT            board_early_init_custom
#define MICROPY_BOARD_RUN_BOOT_PY           board_run_boot_py

// HSE is 25MHz, run SYS at 96MHz
#define MICROPY_HW_CLK_PLLM                 (25)
#define MICROPY_HW_CLK_PLLN                 (192)
#define MICROPY_HW_CLK_PLLP                 (RCC_PLLP_DIV2)
#define MICROPY_HW_CLK_PLLQ                 (4)
#define MICROPY_HW_FLASH_LATENCY            (FLASH_LATENCY_3)

struct _boardctrl_state_t;
void board_early_init_custom(void);
int board_run_boot_py(struct _boardctrl_state_t *state);
