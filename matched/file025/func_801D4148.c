#include "common.h"

extern f32 func_8002FC20(f32);
extern void func_801D4390(void *, f32 *, f32 *, f32 *);

struct func_801D4148_Struct {
    f32 unk0;
    f32 unk4;
    f32 unk8;
    u8 padC[4];
    f32 unk10;
    f32 unk14;
    f32 unk18;
    u8 pad1C[4];
    f32 unk20;
    f32 unk24;
    f32 unk28;
    u8 pad2C[4];
    f32 unk30;
    f32 unk34;
    f32 unk38;
};

struct func_801D4148_Struct1 {
    f32 unk0;
    f32 unk4;
    f32 unk8;
    u16 unkC;
    u16 unkE;
    u16 unk10;
    u8 pad12[0x26];
};

void func_801D4148(f32 *arg0, f32 *arg1, f32 *arg2, u16 *arg3, u16 *arg4, u16 *arg5,
                   f32 *arg6, f32 *arg7, f32 *arg8, struct func_801D4148_Struct *arg9)
{
    struct func_801D4148_Struct1 loc;

    loc.unkC = *arg3;
    loc.unkE = *arg4;
    loc.unk10 = *arg5;
    *arg3 = 0x200;
    *arg0 = arg9->unk30;
    *arg1 = arg9->unk34;
    *arg2 = arg9->unk38;
    *arg6 = func_8002FC20((arg9->unk8 * arg9->unk8) + (arg9->unk0 * arg9->unk0 + arg9->unk4 * arg9->unk4));
    *arg7 = func_8002FC20((arg9->unk18 * arg9->unk18) + (arg9->unk10 * arg9->unk10 + arg9->unk14 * arg9->unk14));
    *arg8 = func_8002FC20((arg9->unk28 * arg9->unk28) + (arg9->unk20 * arg9->unk20 + arg9->unk24 * arg9->unk24));
    if (*arg6 != 0.0f) {
        arg9->unk0 = arg9->unk0 / *arg6;
        arg9->unk4 = arg9->unk4 / *arg6;
        arg9->unk8 = arg9->unk8 / *arg6;
    }
    if (*arg7 != 0.0f) {
        arg9->unk10 = arg9->unk10 / *arg7;
        arg9->unk14 = arg9->unk14 / *arg7;
        arg9->unk18 = arg9->unk18 / *arg7;
    }
    if (*arg8 != 0.0f) {
        arg9->unk20 = arg9->unk20 / *arg8;
        arg9->unk24 = arg9->unk24 / *arg8;
        arg9->unk28 = arg9->unk28 / *arg8;
    }
    func_801D4390(arg9, &loc.unk8, &loc.unk4, &loc.unk0);
    *arg3 = (u16) (s32) ((loc.unk8 * 2048.0f) / 90.0f);
    *arg4 = (u16) (s32) ((loc.unk4 * 2048.0f) / 90.0f);
    *arg5 = (u16) (s32) ((loc.unk0 * 2048.0f) / 90.0f);
}
