#include "context.h"

extern u8 D_80171CF0[];

typedef struct func_8014646C_Struct {
    s16 unk0, unk2, unk4, unk6;
    u8 unk8, unk9, unkA, unkB;
    u8 pad0[4];
    u16 unk10;
    s16 unk12;
    u8 pad1[4];
    u16 unk18;
    u8 pad2[2];
    s32 unk1C;
    u16 unk20;
    u8 pad3[2];
    s32 unk24;
    s16 unk28, unk2A;
    u16 unk2C, unk2E;
    s16 unk30, unk32;
} func_8014646C_Struct;

#define TAB(i) (*(s32 ***)(D_80171CF0 + (i) * 4 - 4))

typedef struct func_8014646C_Arg {
    u16 unk0;
    u16 unk2;
} func_8014646C_Arg;

void func_8014646C(s32 arg0, func_8014646C_Arg arg1, s16 arg2, s16 arg3, s16 arg4, s16 arg5, s16 arg6, s16 arg7, u16 arg8, u16 arg9, u8 arg10, u16 arg11, u16 arg12, u16 arg13, u16 arg14) {
    s32 pad[2];
    func_8014646C_Struct sp;

    sp.unk4 = arg4;
    sp.unk30 = arg4;
    sp.unk6 = arg5;
    sp.unk32 = arg5;
    sp.unk2 = arg3;
    sp.unk0 = arg2;
    sp.unk8 = sp.unk9 = sp.unkA = 0xFF;
    sp.unkB = arg10;
    sp.unk10 = arg1.unk2 | 4;
    sp.unk12 = 0;
    sp.unk18 = *(u16 *)TAB(arg11)[0];
    sp.unk1C = *(s32 *)((u8 *)TAB(arg11)[1] + arg12 * 4);
    sp.unk20 = *(u16 *)TAB(arg13)[0];
    sp.unk24 = *(s32 *)((u8 *)TAB(arg13)[1] + arg14 * 4);
    sp.unk2A = (sp.unk28 = arg6, arg7);
    sp.unk2E = arg8;
    sp.unk2C = arg9;
    D_80181A84.unkC = (func_80146178_Struct *)&sp;
    func_80005E44(arg0, &D_80181A84);
    func_80006214(arg0);
}
