#include "context.h"

struct func_8038D8A8_Bits30 {
    u32 a : 3;
    u32 f4 : 4;
    u32 p : 4;
    u32 g : 2;
    u32 rest : 19;
};
struct func_8038D8A8_Bits38 {
    u32 t : 1;
    u32 x : 2;
    u32 y : 1;
    u32 rest : 28;
};
struct func_8038D8A8_Obj {
    u8 pad0[0x30];
    struct func_8038D8A8_Bits30 unk30;
    u32 unk34;
    struct func_8038D8A8_Bits38 unk38;
};
struct func_8038D8A8_Self {
    u8 pad0[0xC];
    s32 unkC;
    u8 pad1[0x91 - 0x10];
    u8 unk91;
    u8 pad2[0x9A - 0x92];
    s16 unk9A;
    u8 pad3[0xA8 - 0x9C];
    u8 unkA8;
    u8 pad4[0xB0 - 0xA9];
    void *unkB0;
};
struct func_8038D8A8_G {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 pad1[0x1031 - 0xE0];
    u8 unk1031;
};
extern struct func_8038D8A8_G D_801BBBF0;
extern s32 func_8022AB58();
extern void func_8022B3E0();
extern u8 D_8038D8A8[];

void func_8038D8A8(struct func_8038D8A8_Self *arg0, s32 arg1) {
    struct func_8038D8A8_Obj *a3;
    struct func_8038D8A8_Obj *a2;

    a3 = (D_801BBBF0.unkDC == arg0->unkC) ? (struct func_8038D8A8_Obj *)&D_801BC03C : (struct func_8038D8A8_Obj *)&D_801BC3D8;
    a2 = (D_801BBBF0.unkDC == arg0->unkC) ? (struct func_8038D8A8_Obj *)&D_801BC3D8 : (struct func_8038D8A8_Obj *)&D_801BC03C;
    if (arg0->unkA8 == 2) {
        func_8038D744((struct func_8038D744_Struct *)arg0, (struct func_8038D744_Struct *)a3, (struct func_8038D744_Struct *)a2);
        arg0->unkA8 = 0;
        return;
    }
    if ((*(u16 *)&a3->unk30 & 7) || D_801BBBF0.unk1031 == 6) {
        arg0->unkA8 = 1;
        return;
    }
    if (D_801BBBF0.unk1031 == 7) {
        arg0->unkB0 = (void *)D_8038D8A8;
        func_800058DC((s32)arg0, (void *)func_8022B3E0);
        return;
    }
    if (func_8022AB58(arg0, a3, a2)) {
        arg0->unk91 = 0;
        func_8038D744((struct func_8038D744_Struct *)arg0, (struct func_8038D744_Struct *)a3, (struct func_8038D744_Struct *)a2);
        return;
    }
    if (a2->unk30.g != 0 || a2->unk30.f4 == 2) {
        func_8038D744((struct func_8038D744_Struct *)arg0, (struct func_8038D744_Struct *)a3, (struct func_8038D744_Struct *)a2);
        return;
    }
    if (a2->unk30.g == 0 && a2->unk30.f4 != 2) {
        if (arg0->unk9A & 8) {
            arg0->unk9A ^= 8;
            func_8038D744((struct func_8038D744_Struct *)arg0, (struct func_8038D744_Struct *)a3, (struct func_8038D744_Struct *)a2);
            return;
        }
    }
    if (a3->unk38.t != 0 && !a3->unk38.y && !(arg0->unk9A & 2)) {
        func_8038D744((struct func_8038D744_Struct *)arg0, (struct func_8038D744_Struct *)a3, (struct func_8038D744_Struct *)a2);
        return;
    }
    if (a3->unk38.t != 0 && a3->unk38.y && !(arg0->unk9A & 4)) {
        func_8038D744((struct func_8038D744_Struct *)arg0, (struct func_8038D744_Struct *)a3, (struct func_8038D744_Struct *)a2);
        return;
    }
    if (a3->unk38.t == 0 && (arg0->unk9A & 6)) {
        arg0->unk9A = 0;
        func_8038D744((struct func_8038D744_Struct *)arg0, (struct func_8038D744_Struct *)a3, (struct func_8038D744_Struct *)a2);
    }
}
