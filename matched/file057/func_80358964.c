#include "common.h"

typedef struct func_80358964_StructA {
    u8 pad0[0x30];
    u8 unk30;
    u8 pad1[0x4C - 0x31];
    s16 unk4C;
} func_80358964_StructA;

typedef struct func_80358964_StructArg {
    u8 pad0[0x6C];
    s32 unk6C;
    s32 unk70;
    f32 unk74;
} func_80358964_StructArg;

void func_800058DC(void *arg0, void *arg1);
void func_80020718(s32 arg0);
s32 func_801CE3F8(void *arg0, s32 arg1, s32 arg2, s32 arg3, f32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg8, s32 arg9, s32 arg10, s32 arg11, s32 arg12, s32 arg13, s32 arg14, f32 arg15, s32 arg16);
void func_80358A40(void);
extern f32 D_80389EC8;
extern func_80358964_StructA *D_8038CC10;

void func_80358964(func_80358964_StructArg *arg0, s32 arg1) {
    s32 var_v0;
    s32 var_v1;

    if (D_8038CC10->unk30 == 0xD) {
        var_v0 = 0xD0;
        var_v1 = 0xFF;
    } else {
        var_v0 = 0xFF;
        var_v1 = 0x40;
    }
    func_801CE3F8(arg0, 4, arg0->unk6C, arg0->unk70, arg0->unk74, 0, var_v0, var_v1, 0xFF, 0, var_v0, var_v1, 0, 7, 0xA, D_80389EC8, 0xC);
    func_80020718(0x110);
    D_8038CC10->unk4C = 1;
    func_800058DC(arg0, func_80358A40);
}
