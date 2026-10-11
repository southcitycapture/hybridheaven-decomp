#include "context.h"

typedef struct func_8024114C_Struct {
    u8 pad[0x92];
    u16 unk92;
} func_8024114C_Struct;

extern u8 func_80127014[];

void func_8024114C(func_8024114C_Struct *arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = arg0->unk92;
    arg0->unk92 = temp_v0 - 1;
    if (temp_v0 == 0) {
        func_800058DC((s32) arg0, func_80127014);
    }
}
