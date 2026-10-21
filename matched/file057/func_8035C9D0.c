#include "context.h"

typedef struct func_8035C9D0_Struct {
    u8 pad0[0x2];
    s16 unk2;
    u8 pad4[0x30 - 0x4];
    u32 b31 : 1;
    u32 A : 2;
    u32 C : 4;
    u32 D : 1;
    u32 b23 : 1;
    u32 E : 2;
    u32 b19 : 2;
    u16 B : 3;
    u16 F : 3;
    u16 b12 : 5;
    u16 L : 1;
    u16 b6 : 7;
    u8 pad34[0x38 - 0x34];
    u32 H : 1;
    u32 G : 2;
    u32 J : 1;
    u32 I : 2;
    u32 K : 3;
    u32 b22 : 23;
    u8 pad3C[0x2E8 - 0x3C];
    u8 unk2E8;
    u8 pad2E9[0x2EC - 0x2E9];
    f32 unk2EC;
    u8 pad2F0[0x2F9 - 0x2F0];
    u8 unk2F9;
    u8 pad2FA[0x308 - 0x2FA];
    f32 unk308;
    u8 pad30C[0x384 - 0x30C];
    u8 unk384;
    u8 pad385[0x392 - 0x385];
    u8 unk392;
} func_8035C9D0_Struct;

typedef struct func_8035C9D0_Copy {
    s32 unk0;
    u16 unk4;
    u16 unk6;
    f32 unk8;
} func_8035C9D0_Copy;

typedef struct func_8035C9D0_Leaf {
    u8 pad0[0x12];
    s16 unk12;
} func_8035C9D0_Leaf;

typedef struct func_8035C9D0_Mid {
    u8 pad0[0x2C];
    func_8035C9D0_Leaf *unk2C;
} func_8035C9D0_Mid;

typedef struct func_8035C9D0_Obj {
    u8 pad0[0x24];
    func_8035C9D0_Mid *unk24;
    u8 pad28[0x5C - 0x28];
    void *unk5C;
} func_8035C9D0_Obj;

typedef struct func_8035C9D0_Globals {
    u8 pad0[0xDC];
    func_8035C9D0_Obj *unkDC;
    u8 padE0[0xEC - 0xE0];
    func_8035C9D0_Obj *unkEC;
    u8 padF0[0xB98 - 0xF0];
    s16 unkB98;
    u8 padB9A[0x1031 - 0xB9A];
    u8 unk1031;
} func_8035C9D0_Globals;

#define GL9 ((func_8035C9D0_Globals *)D_801BBBF0)
#define W13(x) (((x) & 0x1000) ? (((x) & 0x1FFF) - 0x2000) : ((x) & 0x1FFF))

extern func_8035C9D0_Copy D_8038565C;
extern s32 D_80011140(s32, s32, func_8035C9D0_Copy, s32);

void func_8035C9D0(func_8035C9D0_Obj *arg0, func_8035C910_Struct *arg1) {
    s32 sp54;
    func_8035C9D0_Struct *t;
    func_8035C9D0_Obj *o;
    s16 a3;
    s16 t1;
    struct {
        func_8035C9D0_Copy d;
    } v;
    extern s32 func_802233B0();
    extern s32 func_8022397C();
    extern void func_8022310C();
    extern void func_802237B0();
    extern void func_8035CDA8();

    sp54 = (s32)arg0->unk5C;
    if (arg0 == GL9->unkDC) {
        t = (func_8035C9D0_Struct *)D_801BC03C;
    } else {
        t = (func_8035C9D0_Struct *)D_801BC3D8;
    }
    if (arg0 != GL9->unkDC) {
        o = GL9->unkDC;
    } else {
        o = GL9->unkEC;
    }
    a3 = (s16)(((arg0 == GL9->unkDC) ? 0 : 0x1000) + GL9->unkB98) & 0x1FFF;
    t1 = o->unk24->unk2C->unk12;
    v.d = D_8038565C;
    if (t->unk2 <= 0 || t->A != 0) {
        func_802233B0(arg0, arg1, GL9, a3);
        return;
    }
    if (GL9->unk1031 >= 10 && GL9->unk1031 != 0xF) {
        func_8022310C(arg0, arg1, GL9, a3);
        return;
    }
    if (GL9->unk1031 != 0xF) {
        if (t->B == 5) {
            func_8022397C(arg0);
            return;
        }
        func_802237B0(arg0, 1, GL9, a3);
        if (((W13((s16)(a3 - t1)) < 0) ? -W13((s16)(a3 - t1)) : W13((s16)(a3 - t1))) >= 0x801) {
            v.d.unk0 = 0x019000AF;
        } else {
            v.d.unk0 = 0x019000C1;
        }
        v.d.unk8 = (f32)t->unk384 / 100.0;
        if (v.d.unk8 <= 0.0) {
            v.d.unk8 = 1.0f;
        }
        if (t->E == 0) {
            t->E = t->unk2F9 + 2;
        }
        if (t->E == 3) {
            v.d.unk6 ^= 0x10;
        }
        t->G = 1;
        t->F = 1;
        func_802237B0(arg0, 1);
        if (D_80011140((s32)arg1, sp54, v.d, 3) != 0) {
            arg1->unk1C->unk2C->unk6C |= 0x200;
            arg1->unk20->unk2C->unk6C |= 0x200;
            arg1->unk24->unk2C->unk6C |= 0x200;
            arg1->unk28->unk2C->unk6C |= 0x200;
            arg1->unk2C->unk2C->unk6C |= 0x200;
            arg1->unk30->unk2C->unk6C |= 0x200;
            if (t->unk308 == 0.0f) {
                t->unk308 = 1.0f;
            }
            t->unk2EC = t->unk308;
            t->unk2E8 = 0;
            func_800058DC(arg0, func_8035CDA8);
        }
        t->unk392 = 4;
    }
}
