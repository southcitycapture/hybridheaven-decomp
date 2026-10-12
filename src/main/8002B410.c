#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/main/8002B410/func_8002B410.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/8002B410/func_8002B484.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/8002B410/func_8002B580.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/8002B410/func_8002B8D0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/8002B410/func_8002BA34.s")


typedef struct func_8002BBE0_Struct {
    u8 pad0[4];
    s32 unk4;
    s32 unk8;
    u8 pad1[0x65 - 0xC];
    u8 unk65;
} func_8002BBE0_Struct;

s32 func_80031070(void *, void *, s32);
s32 func_80032D40(void *, s32);
s32 func_80034060(s32, s32, s32, void *);

s32 func_8002BBE0(func_8002BBE0_Struct *arg0) {
    s32 sp28[8];
    s32 temp_v0_2;
    s32 var_v0;

    if (arg0->unk65 != 0) {
        var_v0 = func_80032D40(arg0, 0);
        if (var_v0 == 2) {
            var_v0 = func_80032D40(arg0, 0);
        }
        if (var_v0 == 0) {
            goto block_5;
        }
        return var_v0;
    }
block_5:
    temp_v0_2 = func_80034060(arg0->unk4, arg0->unk8, 1, sp28);
    if (temp_v0_2 == 0) {
        goto case_0;
    }
    if (temp_v0_2 != 2) {
        return temp_v0_2;
    }
    var_v0 = func_80034060(arg0->unk4, arg0->unk8, 1, sp28);
    if (var_v0 != 0) {
        return var_v0;
    }
case_0:
    if (func_80031070((u8 *)arg0 + 0xC, sp28, 0x20) != 0) {
        return 2;
    }
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/8002B410/func_8002BCB4.s")

