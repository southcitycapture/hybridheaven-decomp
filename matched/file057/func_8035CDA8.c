#include "context.h"

typedef struct func_8035CDA8_Entry {
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
    u8 pad3C[0x44 - 0x3C];
    s16 unk44;
    u8 pad46[0x2D8 - 0x46];
    u8 unk2D8;
    u8 pad2D9[0x2DE - 0x2D9];
    u8 unk2DE;
    u8 pad2DF[0x2E8 - 0x2DF];
    u8 unk2E8;
    u8 pad2E9[0x392 - 0x2E9];
    u8 unk392;
    u8 pad393;
    u8 unk394;
} func_8035CDA8_Entry;

typedef struct func_8035CDA8_Copy {
    s32 unk0;
    u16 unk4;
    u16 unk6;
    f32 unk8;
} func_8035CDA8_Copy;

typedef struct func_8035CDA8_Words {
    s32 w0;
    s32 w4;
    s32 w8;
} func_8035CDA8_Words;

typedef struct func_8035CDA8_Sub {
    u8 pad0[0x1C];
    func_8035CDA8_Copy unk1C;
} func_8035CDA8_Sub;

typedef struct func_8035CDA8_Leaf {
    u8 pad0[0x12];
    s16 unk12;
} func_8035CDA8_Leaf;

typedef struct func_8035CDA8_Mid {
    u8 pad0[0x2C];
    func_8035CDA8_Leaf *unk2C;
} func_8035CDA8_Mid;

typedef struct func_8035CDA8_Obj {
    u8 pad0[0x24];
    func_8035CDA8_Mid *unk24;
    u8 pad28[0x5C - 0x28];
    func_8035CDA8_Sub *unk5C;
} func_8035CDA8_Obj;

typedef struct func_8035CDA8_Globals {
    u8 pad0[0x2C];
    u16 unk2C;
    u8 pad2E[0xDC - 0x2E];
    func_8035CDA8_Obj *unkDC;
    u8 padE0[0xEC - 0xE0];
    func_8035CDA8_Obj *unkEC;
    u8 padF0[0x47C - 0xF0];
    u32 b47C : 9;
    u32 M : 2;
    u32 r47C : 21;
    u8 pad480[0x745 - 0x480];
    u8 unk745;
    u8 pad746[0x818 - 0x746];
    u32 b818 : 9;
    u32 N : 2;
    u32 r818 : 21;
    u8 pad81C[0xB98 - 0x81C];
    s16 unkB98;
    u8 padB9A[0x1031 - 0xB9A];
    u8 unk1031;
} func_8035CDA8_Globals;

#define GL ((func_8035CDA8_Globals *)D_801BBBF0)
#define WRAP13(x) (((x) & 0x1000) ? (((x) & 0x1FFF) - 0x2000) : ((x) & 0x1FFF))

extern s32 func_802233B0();
extern void func_802237B0(void *arg0, s32 arg1);
extern s32 func_8022397C();
extern void func_8022310C(void *arg0, s32 arg1);
extern s32 func_80010550(s32, s32);
extern s32 func_80232008(void *);
extern void func_802264D0(void *, s32);
extern void func_802254F8(void *, s32, s32);
extern void func_803711E8(void *, s32, s32);
extern void func_8035D3C8();
extern void func_8035D9FC();
extern void func_8035DF74();

void func_8035CDA8(func_8035CDA8_Obj *arg0, s32 arg1) {
    func_8035CDA8_Obj *other;
    func_8035CDA8_Sub *sub;
    func_8035CDA8_Sub *otherSub;
    func_8035CDA8_Entry *ent;
    func_8035CDA8_Entry *opp;
    func_8035CDA8_Copy *copy;
    s16 angA;
    s16 angB;
    extern void func_80011198();
    extern void func_8013A28C();

    other = (arg0 != GL->unkDC) ? GL->unkDC : GL->unkEC;
    sub = arg0->unk5C;
    copy = &sub->unk1C;
    otherSub = other->unk5C;
    ent = (arg0 == GL->unkDC) ? (func_8035CDA8_Entry *)D_801BC03C : (func_8035CDA8_Entry *)D_801BC3D8;
    opp = (arg0 != GL->unkDC) ? (func_8035CDA8_Entry *)D_801BC03C : (func_8035CDA8_Entry *)D_801BC3D8;
    angA = (s16)(((arg0 == GL->unkDC) ? 0 : 0x1000) + GL->unkB98) & 0x1FFF;
    angB = other->unk24->unk2C->unk12;
    if (ent->unk2 <= 0 || ent->A != 0) {
        func_802233B0(arg0, arg1);
        return;
    }
    if (GL->unk1031 >= 10 && GL->unk1031 != 15) {
        func_8022310C(arg0, arg1);
        return;
    }
    if (GL->unk1031 == 15) {
        return;
    }
    if (ent->B == 5) {
        func_8022397C(arg0);
    } else {
    func_802237B0(arg0, 1);
    if (copy->unk4 == 2) {
        ent->unk2DE = 1;
    }
    if (func_80010550(arg1, (s32)sub) != 0) {
        if (ent->unk2E8 >= 2 && func_80232008(ent) != 0) {
            func_802264D0(arg0, 0x3BD);
            func_802254F8(other, 20, 5);
            func_802254F8(arg0, 5, 7);
            func_803711E8(arg0, arg1, 0);
            opp->L = 0;
            if (opp->C == 3) {
                opp->C = 0;
            }
            if (GL->unk2C == 10 || GL->unk2C == 11) {
                opp->E = ent->E;
            } else {
                if (GL->M == 0) {
                    GL->M = GL->unk745 + 2;
                }
                GL->N = GL->M;
            }
            ent->G = 1;
            opp->G = ent->G;
            ent->H = 1;
            opp->H = ent->H;
            ent->K = 0;
            opp->K = ent->K;
            ent->F = 1;
            opp->F = ent->F;
            ent->I = 1;
            opp->I = 2;
            opp->unk44 += 10;
            if (((WRAP13((s16)(angA - angB)) < 0) ? -WRAP13((s16)(angA - angB)) : WRAP13((s16)(angA - angB))) > 0x800) {
                opp->J = 0;
                ent->J = opp->J;
            } else {
                opp->J = 1;
                ent->J = opp->J;
            }
            func_80011198(arg1, sub);
            func_80006214(other);
            func_80011198(D_8008DA88, otherSub);
            func_800113D0(D_8008DA88, (u8 *)otherSub + 0x22);
            func_80006214(arg0);
            func_800058DC(arg0, func_8035D3C8);
            func_800058DC(other, func_8035DF74);
            ent->unk2E8 = 0;
        } else {
            if (GL->unk1031 == 7 && ent->unk2D8 == 2) {
                ent->D = 0;
                ent->unk394 = 1;
            }
            ent->G = 0;
            if (copy->unk0 == 0x019000AF) {
                copy->unk0 = 0x019000B4;
            } else {
                copy->unk0 = 0x019000C4;
            }
            copy->unk4 = 0;
            copy->unk6 = 0;
            copy->unk8 = 1.0f;
            if (ent->E == 3) {
                copy->unk6 ^= 0x10;
            }
            func_8013A28C(arg1, *(func_8035CDA8_Words *)copy);
            ent->E ^= 1;
            func_800058DC(arg0, func_8035D9FC);
            ent->unk2E8 = 0;
        }
        func_8035C910((func_8035C910_Struct *)arg1);
        ent->unk2DE = 0;
    }
    ent->unk392 = 4;
    }
}
