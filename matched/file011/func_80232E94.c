#include "common.h"
extern u8 D_801BBBF0[];
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
extern s32 D_80230DD4(s32, u16, s32, void *);
typedef struct func_80232008_Inner {
    u8 pad0[0x36];
    u16 unk36;
} func_80232008_Inner;
typedef struct func_80232008_Struct {
    u8 pad0[0xDC];
    func_80232008_Inner *unkDC;
    u8 pad1[0xEC - 0xE0];
    func_80232008_Inner *unkEC;
} func_80232008_Struct;
#define G (*(func_80232008_Struct *)D_801BBBF0)
typedef struct func_8022DB40_Ent { s16 v; u8 pad[4]; } func_8022DB40_Ent;
typedef struct func_8022DB40_StructB {
    u8 pad0[7];
    u8 unk7;
    u8 pad8;
    u8 unk9;
    u8 unkA;
    u8 padB[2];
    u8 unkD;
    u8 unkE;
    u8 padF[2];
    u8 unk11;
} func_8022DB40_StructB;
typedef struct func_8022DB40_Struct {
    u8 pad0[0x30];
    u32 unk30;
    u8 pad34[0x4E - 0x34];
    u16 unk4E;
    u8 pad50[0x82 - 0x50];
    u16 unk82;
    u16 unk84;
    u16 unk86;
    u16 unk88;
    u16 unk8A;
    u16 unk8C;
    u8 pad8E[0x9A - 0x8E];
    u16 unk9A;
    u8 pad9C[0xAA - 0x9C];
    func_8022DB40_Ent unkAA[1];
    u8 pad_[0x2D4 - 0xB0];
    func_8022DB40_StructB *unk2D4;
} func_8022DB40_Struct;
u16 func_8022DB40(func_8022DB40_Struct *self);
struct func_8022EE7C_Inner {
    u8 pad0[8];
    u8 unk8;
    u8 pad9;
    u8 unkA;
};
struct func_8022EE7C_Struct {
    u8 pad0[0xAA];
    s16 unkAA[1];
    u8 pad1[0x2D4 - 0xAC];
    struct func_8022EE7C_Inner *unk2D4;
    u8 pad2[0x300 - 0x2D8];
    u16 unk300;
};
void func_8022EE7C(s32 arg0, struct func_8022EE7C_Struct *arg1);
s32 func_8022F0E0(void *arg);
struct func_80232D08_Struct {
    u8 pad0[0x82];
    u16 unk82;
    u16 a[5];
    u8 pad1[0x2B8 - 0x8E];
    s16 w[6];
    u8 pad2[0x2D9 - 0x2C4];
    u8 unk2D9;
    u8 pad3[0x397 - 0x2DA];
    u8 unk397;
};
void func_80232D08(struct func_80232D08_Struct *arg0, u16 arg1);
typedef struct func_80232E94_Obj2 {
    u8 pad0[0x9C];
    u8 unk9C;
} func_80232E94_Obj2;
typedef struct func_80232E94_Obj {
    u8 pad0[0x5C];
    func_80232E94_Obj2 *unk5C;
} func_80232E94_Obj;
typedef struct func_80232E94_Struct {
    u8 pad0[0x30];
    u8 unk30;
    u8 pad1[0x2D8 - 0x31];
    u8 unk2D8;
    u8 pad2[0x2DA - 0x2D9];
    u8 unk2DA;
    u8 pad3[0x396 - 0x2DB];
    u8 unk396;
} func_80232E94_Struct;
typedef struct func_80232E94_G {
    u8 pad0[0xDC];
    func_80232E94_Obj *unkDC;
    u8 padE0[0xEC - 0xE0];
    func_80232E94_Obj *unkEC;
    u8 padF0[0x44C - 0xF0];
    func_80232E94_Struct unk44C;
    u8 pad7E8[0x1030 - 0x44C - sizeof(func_80232E94_Struct)];
    u8 unk1030;
} func_80232E94_G;


#undef G
#define G ((func_80232E94_G *)D_801BBBF0)
extern s32 func_80379904();
extern s32 func_8037A884();

void func_80232E94(s32 arg0) {
    s32 state;
    func_80232E94_Struct *var_a3;
    func_80232E94_Struct *var_s0;
    func_80232E94_Obj2 *var_a0;
    u16 sp26;

    if (G->unk1030 == 0) {
        var_s0 = (func_80232E94_Struct *)D_801BC03C;
    } else {
        var_s0 = (func_80232E94_Struct *)D_801BC3D8;
    }
    if (var_s0 == &G->unk44C) {
        var_a3 = (func_80232E94_Struct *)D_801BC3D8;
    } else {
        var_a3 = (func_80232E94_Struct *)D_801BC03C;
    }
    if (arg0 == (s32)G->unkDC) {
        var_a0 = G->unkEC->unk5C;
    } else {
        var_a0 = G->unkDC->unk5C;
    }
    state = var_s0->unk2D8;
    if (state < 0xB || state == 0xF) {
        func_8022EE7C(arg0, (struct func_8022EE7C_Struct *)var_s0);
        sp26 = func_8022DB40((func_8022DB40_Struct *)var_s0);
        func_80232D08((struct func_80232D08_Struct *)var_s0, D_80230DD4(arg0, sp26, func_8022F0E0(var_a3) & 0xFFFF, var_a3));
        if (var_a3->unk396 != 0) {
            var_a3->unk396 = 0;
            var_a3->unk30 = var_a3->unk30 & 0xFFE1;
        }
    } else if (var_s0->unk2DA != 0) {
        if (var_a0->unk9C == 2) {
            var_a0->unk9C = 3;
        }
        if (var_s0->unk2D8 == 0xC) {
            func_80379904(arg0, var_s0);
        }
        if (var_s0->unk2D8 == 0x13) {
            func_8037A884(arg0, var_s0);
        }
    }
}
