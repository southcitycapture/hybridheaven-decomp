#include "context.h"

struct func_80025BD8_Struct {
    u32 unk0;
    u8 pad4[0xC];
    u8 unk10;
};
extern u8 D_800CBAD0[];

void func_80025BD8(void) {
    s32 var_a0;
    u8 var_a2;
    s32 var_v1;
    u8 temp_a2;
    struct func_80025BD8_Struct *ptr;

    ptr = (struct func_80025BD8_Struct *) D_800CBDA4;
    if ((u32) (ptr->unk0 & 0x7FFF) < 0x100U) {
        var_a0 = 0;
    } else {
        var_a0 = 1;
    }
    var_a2 = *D_800CBDA0;
    D_800CBDA0 += 1;
    var_a2 += D_800CBAD0[var_a0];
    if (var_a2 >= 0x80) {
        var_a2 = 0x7F;
    }
    if (var_a2 != ptr->unk10) {
        ptr->unk10 = (u8) var_a2;
        func_80030770(D_800498F0, D_800CBBE0 + D_800CBAB4 * 0x1C, (u8) var_a2);
    }
}
