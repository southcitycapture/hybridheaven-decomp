#include "context.h"

extern u64 func_80026E58();
extern u64 func_80026F58();

s32 func_801C0B8C(u64 arg0) {
    u64 temp_ret;
    u64 temp_ret_2;
    u64 temp_ret_3;

    temp_ret = func_801C0C08();
    temp_ret_2 = func_80026F58(temp_ret - D_801D8D80, 0x40);
    temp_ret_3 = func_80026E58(temp_ret_2, 0xBB8);
    return arg0 <= temp_ret_3;
}
