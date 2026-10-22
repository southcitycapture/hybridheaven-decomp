#include "context.h"

typedef struct func_80366A0C_Struct {
    u8 pad0[2];
    s16 unk2;
    u8 pad4[0x2C];
    u32 b0 : 1;
    u32 f1 : 2;
    u32 f2 : 4;
    u32 rest : 25;
    u8 pad34[0x392 - 0x34];
    u8 unk392;
} func_80366A0C_Struct;

typedef struct func_80366A0C_G {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 padE0[0x1031 - 0xE0];
    u8 unk1031;
} func_80366A0C_G;

extern void func_802233B0();
extern void func_80222450();

void func_80366A0C(func_803667C4_StructArg *arg0, s32 arg1) {
    func_80366A0C_Struct *v0;
    func_80366A0C_Struct *a0;
    s32 a2;

    a2 = (s32)arg0->unk5C;
    if ((s32)arg0 == ((func_80366A0C_G *)&D_801BBBF0)->unkDC) {
        v0 = (func_80366A0C_Struct *)D_801BC03C;
    } else {
        v0 = (func_80366A0C_Struct *)D_801BC3D8;
    }
    if ((s32)arg0 != ((func_80366A0C_G *)&D_801BBBF0)->unkDC) {
        a0 = (func_80366A0C_Struct *)D_801BC03C;
    } else {
        a0 = (func_80366A0C_Struct *)D_801BC3D8;
    }
    v0->unk392 = 0;
    if (((func_80366A0C_G *)&D_801BBBF0)->unk1031 != 0xF) {
        if (v0->unk2 <= 0 || v0->f1 != 0) {
            func_802233B0(arg0, arg1, a2);
            return;
        }
        if ((*(u16 *)((u8 *)v0 + 0x30) & 7) == 5U) {
            func_8022397C(arg0, ((func_80366A0C_G *)&D_801BBBF0)->unk1031, a2);
            return;
        }
        if (v0->f2 != 1 || a0->unk2 <= 0 || a0->f1 != 0) {
            func_80222450(arg0, arg1, 5);
            return;
        }
        if (((func_80366A0C_G *)&D_801BBBF0)->unk1031 == 5) {
            func_80010550(arg1, a2);
        }
    }
}
