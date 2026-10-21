#include "context.h"

typedef struct func_8038D9DC_Glob {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 pad1[0xF51];
    u8 unk1031;
} func_8038D9DC_Glob;
typedef struct func_8038D9DC_Obj {
    u8 pad0[0xC];
    s32 unkC;
    u8 pad2[0x81];
    u8 unk91;
    u8 pad3[8];
    s16 unk9A;
    u8 pad4[4];
    u8 unkA0;
    u8 pad5[7];
    u8 unkA8;
    u8 pad6[3];
    void *unkAC;
    void *unkB0;
} func_8038D9DC_Obj;
typedef struct func_8038D9DC_P {
    s16 unk0;
    s16 unk2;
    u8 pad[0x2C];
    u16 unk30;
} func_8038D9DC_P;
typedef struct func_8038D9DC_Q {
    u8 pad0[0x30];
    s32 unk30;
    u8 pad1[0x2D1 - 0x34];
    u8 unk2D1;
} func_8038D9DC_Q;
extern func_8038D9DC_Glob D_801BBBF0;
extern u8 func_8022B3E0[];
extern u8 D_8038D9DC[];
extern s32 func_8022AB58();

void func_8038D9DC(func_8038D9DC_Obj *arg0, s32 arg1) {
    func_8038D9DC_P *a1;
    func_8038D9DC_Q *a2;

    if (arg0->unkC == D_801BBBF0.unkDC) {
        a1 = (func_8038D9DC_P *)&D_801BC03C;
    } else {
        a1 = (func_8038D9DC_P *)&D_801BC3D8;
    }
    if (arg0->unkC == D_801BBBF0.unkDC) {
        a2 = (func_8038D9DC_Q *)&D_801BC3D8;
    } else {
        a2 = (func_8038D9DC_Q *)&D_801BC03C;
    }
    if (arg0->unkA8 == 2) {
        func_8038D830(arg0, a1, a2);
        arg0->unkA8 = 0;
        return;
    }
    if ((a1->unk30 & 7) || D_801BBBF0.unk1031 == 6) {
        arg0->unkA8 = 1;
        return;
    }
    if (D_801BBBF0.unk1031 == 7) {
        arg0->unkAC = (void *)D_8038D9DC;
        arg0->unkB0 = (void *)D_8038D9DC;
        func_800058DC((s32)arg0, func_8022B3E0);
        return;
    }
    if (a1->unk0 / 5 >= a1->unk2 && !(arg0->unk9A & 0x20) && arg0->unkA0 != 0) {
        func_8038D830(arg0, a1, a2);
        return;
    }
    if (func_8022AB58(arg0, a1, a2) != 0) {
        arg0->unk91 = 0;
        func_8038D830(arg0, a1, a2);
        return;
    }
    if (((((u32)a2->unk30 << 11) >> 30) != 0 || (((u32)a2->unk30 << 3) >> 28) == 2) && a2->unk2D1 >= 5) {
        func_8038D830(arg0, a1, a2);
        return;
    }
    if ((((u32)a2->unk30 << 11) >> 30) == 0 && (arg0->unk9A & 8)) {
        func_8038D830(arg0, a1, a2);
        arg0->unk9A ^= 8;
    }
}
