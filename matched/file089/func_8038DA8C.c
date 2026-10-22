#include "context.h"

typedef struct func_8038DA8C_StructG {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 pad1[0x1031 - 0xE0];
    u8 unk1031;
} func_8038DA8C_StructG;
typedef struct func_8038DA8C_StructO {
    u8 pad0[0xC];
    s32 unkC;
    u8 pad10[0x91 - 0x10];
    u8 unk91;
    u8 unk92;
    u8 unk93;
    u8 pad94[0x9A - 0x94];
    s16 unk9A;
    u8 pad9C[0xA8 - 0x9C];
    u8 unkA8;
    u8 padA9[0xB0 - 0xA9];
    void *unkB0;
} func_8038DA8C_StructO;
typedef struct func_8038DA8C_StructP {
    u8 pad0[0x30];
    union {
        u16 h;
        struct {
            u32 p0 : 3;
            u32 b : 4;
            u32 p1 : 4;
            u32 t : 2;
        } bf;
    } unk30;
    u32 pad34;
    struct {
        u32 f : 1;
        u32 p : 2;
        u32 g : 1;
    } unk38;
} func_8038DA8C_StructP;

extern func_8038DA8C_StructG D_801BBBF0;
extern s32 func_8022AB58();
extern void func_8022B3E0();
extern u8 D_8038DA8C[];

#define CALL() func_8038D918((func_8038D918_StructA *)arg0, (func_8038D918_StructC *)a3, (func_8038D918_StructB *)a2)

void func_8038DA8C(func_8038DA8C_StructO *arg0, s32 arg1) {
    func_8038DA8C_StructP *a3;
    func_8038DA8C_StructP *a2;

    a3 = (D_801BBBF0.unkDC == arg0->unkC) ? (func_8038DA8C_StructP *)&D_801BC03C : (func_8038DA8C_StructP *)&D_801BC3D8;
    a2 = (D_801BBBF0.unkDC == arg0->unkC) ? (func_8038DA8C_StructP *)&D_801BC3D8 : (func_8038DA8C_StructP *)&D_801BC03C;
    if (arg0->unkA8 == 2) {
        CALL();
        arg0->unkA8 = 0;
        return;
    }
    if ((a3->unk30.h & 7) || (D_801BBBF0.unk1031 == 6)) {
        arg0->unkA8 = 1;
        return;
    }
    if (D_801BBBF0.unk1031 == 7) {
        arg0->unkB0 = D_8038DA8C;
        func_800058DC((s32)arg0, func_8022B3E0);
        return;
    }
    if (func_8022AB58(arg0, a3, a2) != 0) {
        arg0->unk91 = 0;
        CALL();
        return;
    }
    if (a2->unk30.bf.t != 0 || a2->unk30.bf.b == 2) {
        CALL();
        return;
    }
    if (a2->unk30.bf.t == 0 && a2->unk30.bf.b != 2) {
        if (arg0->unk9A & 8) {
            arg0->unk9A ^= 8;
            CALL();
            return;
        }
    }
    if (a3->unk38.f != 0 && !a3->unk38.g && !(arg0->unk9A & 2)) {
        CALL();
        return;
    }
    if (a3->unk38.f != 0 && a3->unk38.g && !(arg0->unk9A & 4)) {
        CALL();
        return;
    }
    if (a3->unk38.f == 0 && (arg0->unk9A & 6)) {
        arg0->unk9A = 0;
        arg0->unk92 = arg0->unk93;
        CALL();
    }
}
