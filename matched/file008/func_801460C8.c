#include "context.h"

typedef struct func_801460C8_Struct {
    s16 unk0;
    s16 unk2;
    s16 unk4;
    s16 unk6;
    u8 unk8;
    u8 unk9;
    u8 unkA;
    u8 unkB;
    u8 pad0[4];
    u16 unkC;
    u16 unkE;
    u8 unk10;
    u8 unk11;
    u8 unk12;
    u8 unk13;
    u8 pad14[0x24];
} func_801460C8_Struct;

typedef struct func_801460C8_Global {
    u8 pad0[0xC];
    void *unkC;
} func_801460C8_Global;

struct func_80146178_Global;
extern struct func_80146178_Global D_80181A84;
extern s32 D_80146088(s32, void *, s32);

void func_801460C8(s32 arg0, s32 arg1, s16 arg2, s16 arg3, s16 arg4, s16 arg5, u16 arg6, u8 arg7, u8 arg8, u8 arg9, u8 arg10, u16 arg11, u8 arg12, u8 arg13, u8 arg14, u8 arg15) {
    func_801460C8_Struct s;
    s32 pad;

    s.unk0 = arg2;
    s.unk2 = arg3;
    s.unk4 = arg4;
    s.unk6 = arg5;
    s.unk8 = arg7;
    s.unk9 = arg8;
    s.unkA = arg9;
    s.unkB = arg10;
    s.unk10 = arg12;
    s.unk11 = arg13;
    s.unk13 = (pad = arg15, s.unk12 = arg14, pad);
    s.unkC = arg6;
    s.unkE = arg11;
    ((func_801460C8_Global *)&D_80181A84)->unkC = &s;
    D_80146088(arg0, &D_80181A84, arg1);
}
