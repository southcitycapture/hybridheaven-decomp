#include "common.h"
typedef struct func_801C0C7C_Struct {
    s32 a0, a4;
    u64 a8;
} func_801C0C7C_Struct;
extern func_801C0C7C_Struct D_801DE838[];
extern u64 func_80026E58();
extern u64 func_80026F58();
u64 func_80031190();                                /* extern */


u64 func_801C0F18(s32 arg0, s32 arg1) {
    s32 i;
    u64 now;
    u64 scaled;
    u64 duration;

    for (i = 0; i < 32; i++) {
        if (arg0 == D_801DE838[i].a0 && arg1 == D_801DE838[i].a4) {
            break;
        }
    }
    now = func_80031190();
    scaled = func_80026F58(now - D_801DE838[i].a8, 64ULL);
    duration = func_80026E58(scaled, 3000ULL);
    return duration;
}
