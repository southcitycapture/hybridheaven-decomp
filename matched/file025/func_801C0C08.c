#include "context.h"

u64 func_80031190();                                /* extern */
extern u64 D_801D8D88;

u64 func_801C0C08(void) {
    u64 temp_ret;

    temp_ret = func_80031190();
    return temp_ret - D_801D8D88;
}
