#include "context.h"

typedef struct func_80146178_Struct {
    s16 unk0;
    s16 unk2;
    s16 unk4;
    s16 unk6;
    u8 unk8;
    u8 unk9;
    u8 unkA;
    u8 unkB;
    u8 pad0[4];
    s16 unkC;
    s16 unkE;
} func_80146178_Struct;

typedef struct func_80146178_Global {
    u8 pad0[0xC];
    func_80146178_Struct *unkC;
} func_80146178_Global;

extern func_80146178_Global D_80181A84;
extern s32 func_80146088();

void func_80146178(s32 arg1, s32 arg2, s16 arg3, s16 arg4, s16 arg5, s16 arg6, u16 arg7, u8 arg8, u8 arg9, u8 arg10, u8 arg11) {
    u8 pad[0x28];
    func_80146178_Struct sp1C;

    sp1C.unk0 = arg3;
    sp1C.unk2 = arg4;
    sp1C.unk4 = arg5;
    sp1C.unk6 = arg6;
    sp1C.unk8 = arg8;
    sp1C.unk9 = arg9;
    sp1C.unkA = arg10;
    sp1C.unkB = arg11;
    sp1C.unkC = arg7 & 2;
    sp1C.unkE = 0;
    D_80181A84.unkC = &sp1C;
    func_80146088(arg1, &D_80181A84, arg2, arg4);
}
