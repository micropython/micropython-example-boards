#include "py/runtime.h"

STATIC mp_obj_t example_sub_ints(mp_obj_t a_obj, mp_obj_t b_obj) {
    int a = mp_obj_get_int(a_obj);
    int b = mp_obj_get_int(b_obj);
    return mp_obj_new_int(a - b);
}
STATIC MP_DEFINE_CONST_FUN_OBJ_2(example_sub_ints_obj, example_sub_ints);

STATIC const mp_rom_map_elem_t example_module_globals_table[] = {
    { MP_ROM_QSTR(MP_QSTR___name__), MP_ROM_QSTR(MP_QSTR_cexample2) },
    { MP_ROM_QSTR(MP_QSTR_sub_ints), MP_ROM_PTR(&example_sub_ints_obj) },
};
STATIC MP_DEFINE_CONST_DICT(example_module_globals, example_module_globals_table);

const mp_obj_module_t example_user_cmodule2 = {
    .base = { &mp_type_module },
    .globals = (mp_obj_dict_t *)&example_module_globals,
};

MP_REGISTER_MODULE(MP_QSTR_cexample2, example_user_cmodule2);
