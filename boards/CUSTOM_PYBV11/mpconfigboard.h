// Take PYBV11 as base configuration.
#include "ports/stm32/boards/PYBV11/mpconfigboard.h"

#undef MICROPY_HW_BOARD_NAME
#undef MICROPY_HW_CLK_PLLM
#undef MICROPY_HW_CLK_PLLN
#undef MICROPY_HW_CLK_PLLP
#undef MICROPY_HW_CLK_PLLQ
#undef MICROPY_HW_FLASH_LATENCY

#define MICROPY_HW_BOARD_NAME               "Custom PYBv1.1"
#define MICROPY_BOARD_RUN_BOOT_PY           board_run_boot_py

// HSE is 12MHz, run SYS at 48MHz
#define MICROPY_HW_CLK_PLLM                 (12)
#define MICROPY_HW_CLK_PLLN                 (192)
#define MICROPY_HW_CLK_PLLP                 (RCC_PLLP_DIV4)
#define MICROPY_HW_CLK_PLLQ                 (4)
#define MICROPY_HW_FLASH_LATENCY            (FLASH_LATENCY_1)

struct _boardctrl_state_t;
int board_run_boot_py(struct _boardctrl_state_t *state);
