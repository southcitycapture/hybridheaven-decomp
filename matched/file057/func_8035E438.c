#include "common.h"
extern s32 D_801BBCCC;
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
extern u8 D_80385650[];
extern s32 func_80010550(s32, s32);
typedef struct func_8035F544_Copy {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_8035F544_Copy;
extern s32 func_80011140(s32, s32, func_8035F544_Copy, s32);
extern void func_802237B0(void *arg0, s32 arg1);
extern void func_8035DD80();
typedef struct func_8035DD80_StructF {
    u8 pad0[0x58];
    f32 unk58;
    f32 unk5C;
} func_8035DD80_StructF;
typedef struct func_8035DD80_StructLeaf {
    u8 pad0[0x12];
    s16 unk12;
} func_8035DD80_StructLeaf;
typedef struct func_8035DD80_StructMid {
    u8 pad0[0x2C];
    func_8035DD80_StructLeaf *unk2C;
} func_8035DD80_StructMid;
typedef struct func_8035DD80_StructObj {
    u8 pad0[0x24];
    func_8035DD80_StructMid *unk24;
    u8 pad28[0x5C - 0x28];
    func_8035DD80_StructF *unk5C;
} func_8035DD80_StructObj;
extern void func_803711E8(void *, s32, s32);


typedef struct func_8035E438_Vec {
    u32 unk0;
    u16 unk4;
    u16 unk6;
    s32 unk8;
} func_8035E438_Vec;

typedef struct func_8035E438_Sub {
    u8 pad0[0x1C];
    func_8035E438_Vec unk1C;
} func_8035E438_Sub;

typedef struct func_8035E438_Obj {
    u8 pad0[0x5C];
    func_8035E438_Sub *unk5C;
} func_8035E438_Obj;

typedef struct func_8035E438_BF {
    u8 pad0[0x30];
    u32 p0 : 1;
    u32 A : 2;
    u32 p1 : 6;
    u32 E : 2;
    u32 p2 : 5;
    u16 B : 3;
    u16 r32 : 13;
    u8 pad34[4];
    u32 H : 1;
    u32 G : 2;
    u32 J : 1;
    u32 I : 2;
    u32 K : 3;
    u32 rest : 23;
} func_8035E438_BF;
extern void func_800111E0(s32, void *);
extern void func_8013A28C(s32, func_8035E438_Vec);

void func_8035E438(func_8035E438_Obj *arg0, s32 arg1) {
    s32 pad;
    func_8035E438_Sub *sub;
    func_8035E438_Vec *v;
    func_8035E438_Vec sp38;
    func_8035E438_BF *a;
    func_8035E438_BF *b;

    sub = arg0->unk5C;
    if (arg0 == (func_8035E438_Obj *) D_801BBCCC) {
        a = (func_8035E438_BF *) D_801BC03C;
    } else {
        a = (func_8035E438_BF *) D_801BC3D8;
    }
    v = &sub->unk1C;
    if (arg0 != (func_8035E438_Obj *) D_801BBCCC) {
        b = (func_8035E438_BF *) D_801BC03C;
    } else {
        b = (func_8035E438_BF *) D_801BC3D8;
    }
    a->H = 1;
    if (arg0) {}
    if (arg0) {}
    if (arg0) {}
    if (a) {}
    if (b) {}
    switch ((u32) v->unk0) {
    case 0x19000C9:
    case 0x19000CA:
    case 0x1900154:
        func_802237B0(arg0, 0);
        func_80010550(arg1, (s32) sub);
        func_8035DD80((func_8035DD80_StructObj *) arg0, 0);
        func_800111E0(arg1, &v->unk6);
        if (!a->J) {
            b->I = 0;
            a->I = b->I;
            if (arg0 == (func_8035E438_Obj *) D_801BBCCC && v->unk4 == 3) {
                func_803711E8(arg0, arg1, 4);
            }
        }
        b->K = 0;
        a->K = b->K;
        b->B = 0;
        a->B = b->B;
        break;
    case 0x1900082:
    case 0x1900083:
    case 0x1900084:
    case 0x1900085:
    case 0x1900086:
    case 0x1900087:
    case 0x1900088:
    case 0x1900089:
    case 0x19000A2:
    case 0x19000A3:
    case 0x19000A4:
    case 0x19000A5:
        func_802237B0(arg0, 1);
        if (func_80010550(arg1, (s32) sub) != 0) {
            if (!a->J) {
                b->I = 0;
                a->I = b->I;
            }
            b->K = 0;
            a->K = b->K;
            b->B = 0;
            a->B = b->B;
            func_8035DD80((func_8035DD80_StructObj *) arg0, 0);
            *v = *(func_8035E438_Vec *) D_80385650;
            if (a->J == 1) {
                if (a->I == 1) {
                    v->unk0 = 0x19000C9;
                } else {
                    v->unk0 = 0x19000CA;
                }
            }
            if (a->E == 3) {
                v->unk6 ^= 0x10;
            }
            func_8013A28C(arg1, *v);
        } else if (a->I == 2) {
            func_8035DD80((func_8035DD80_StructObj *) arg0, 1);
        }
        break;
    default:
        sp38 = *(func_8035E438_Vec *) D_80385650;
        if (a->J == 1) {
            if (a->I == 1) {
                sp38.unk0 = 0x19000C9;
            } else {
                sp38.unk0 = 0x19000CA;
            }
        }
        func_80011140(arg1, (s32) sub, *(func_8035F544_Copy *) &sp38, 10);
        break;
    }
}
