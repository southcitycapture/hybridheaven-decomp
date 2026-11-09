#include "common.h"
extern u8 D_801BBBF0[];
typedef struct func_80235FF8_StructP { s16 x; s16 y; s16 w; s16 h; } func_80235FF8_P;
typedef struct func_80235FF8_StructS { u8 pad[0x10]; s32 unk10; u8 pad2[0x1C]; func_80235FF8_P *unk30; } func_80235FF8_S;
extern func_80235FF8_S *D_80240874;
extern func_80235FF8_S *D_80240878;
extern func_80235FF8_S *D_8024087C;
extern void (*D_80216D10[])(void *, s32);
extern void func_80002364(s32, s32, s32, u8);
extern void func_800058DC();
u8 func_80006214();
extern void func_80145310(s32, s32, s32);
extern void func_80147218(void *);
typedef struct func_80237004_Struct {
    u8 pad[0xA2];
    s8 unkA2;
    u8 pad2;
    s8 unkA4;
    u8 pad3[3];
    u8 unkA8;
    u8 unkA9;
} func_80237004_Struct;
s32 func_8023448C(func_80237004_Struct *arg0, s32 *arg1, u8 arg2, s16 arg3, s16 arg4, u8 arg5, u8 arg6);
s32 func_802345B0(s32 arg0, s32 *arg1, u8 arg2, s16 arg3, s16 arg4, u8 arg5);
extern void func_802397A8();


typedef struct func_80239048_Copy {
    s32 v[4];
} func_80239048_Copy;

typedef struct func_80239048_Sub {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    s16 unk10;
    s16 unk12;
    s16 unk14;
    u8 pad16[0x2];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    s32 unk24;
    u8 pad28[0x8];
    s32 unk30;
    s32 unk34;
} func_80239048_Sub;

typedef struct func_80239048_Mdl {
    u8 pad0[0x2C];
    func_80239048_Sub *unk2C;
} func_80239048_Mdl;

typedef struct func_80239048_Mid {
    u8 pad0[0x24];
    func_80239048_Mdl *unk24;
} func_80239048_Mid;

typedef struct func_80239048_Obj {
    u8 pad0[0x14];
    func_80235FF8_S *unk14;
    u8 pad18[0x18];
    func_80239048_Sub *unk30;
} func_80239048_Obj;

typedef struct func_80239048_Self {
    u8 pad0[0xA3];
    s8 unkA3;
    u8 padA4;
    s8 unkA5;
    u8 padA6[0x6];
    s16 unkAC;
} func_80239048_Self;

extern func_80239048_Copy D_80164F40;
extern u8 D_8023E408[];
extern u8 D_8023E468[];
extern u8 D_8023E4D0[];
extern f32 D_802405A8;
extern f32 D_802405AC;
extern void func_80005E44(void *, void *);
extern void func_8012C89C(void *, s32, s32, s32);
extern s32 func_801302CC(void);

#define PROBE 0
#define G1030 D_801BBBF0[0x1030]
#define GE0 ((func_80239048_Mdl **)D_801BBBF0)[0xE0 / 4]
#define G448 ((func_80239048_Mid ***)D_801BBBF0)[0x448 / 4]

void func_80239048(func_80239048_Self *arg0, s32 *volatile arg1) {
    func_80239048_Obj **p;
    s8 i;
    f32 k1;
    func_80239048_Copy sp74;
    f32 k05;

    sp74 = D_80164F40;
    func_80147218(arg0);
    func_80002364(0x0F000000, 8, 2, G1030 ^ 1);
    k05 = D_802405A8;
    k1 = D_802405AC;
    for (i = 0; i < 8; ) {
        func_80005E44(arg0, &sp74);
        func_80006214(arg0);
        func_8012C89C(arg0, i, 0x220, 0);
        p = (func_80239048_Obj **)((s32)arg1 + i * 4);
        (*p)->unk30->unk24 |= 0x300;
        if (func_801302CC() != 0) {
            (*p)->unk30->unk30 = (s32)D_8023E468 | 0x40000000;
            (*p)->unk30->unk34 = (s32)D_8023E4D0 | 0x40000000;
        } else {
            (*p)->unk30->unk30 = (s32)D_8023E408 | 0x40000000;
        }
        func_80145310((s32)*p, 0xD, 0xD);
#if PROBE != 1
        if (G1030 == 1) {
            (*p)->unk30->unk4 = GE0->unk2C->unk4;
            (*p)->unk30->unk8 = GE0->unk2C->unk8 + 1.0f;
            (*p)->unk30->unkC = GE0->unk2C->unkC;
            (*p)->unk30->unk12 = GE0->unk2C->unk12 + (i << 10);
        } else {
            (*p)->unk30->unk4 = (*G448)->unk24->unk2C->unk4;
            (*p)->unk30->unk8 = (*G448)->unk24->unk2C->unk8 + 1.0f;
            (*p)->unk30->unkC = (*G448)->unk24->unk2C->unkC;
            (*p)->unk30->unk12 = (*G448)->unk24->unk2C->unk12 + (i << 10);
        }
#endif
        i += 1;
        (*p)->unk30->unk18 = 0.02f;
        (*p)->unk30->unk1C = k1;
        (*p)->unk30->unk20 = k05;
        (*p)->unk30->unk10 = 0;
        (*p)->unk30->unk14 = 0;
    }
    if (k1 == 0.0f) {
    }
    func_8023448C((func_80237004_Struct *)arg0, arg1, 1, 0, -0x14, 1, 3);
    if (k05 == 0.0f) {
    }
    func_802345B0((s32)arg0, arg1, 0xC, 0, -0x14, 1);
    p = (func_80239048_Obj **)((s32)arg1 + i * 4);
    D_80240874 = (func_80235FF8_S *)p[0];
    D_80240878 = (func_80235FF8_S *)p[1];
    D_8024087C = ((func_80239048_Obj *)D_80240874)->unk14;
    arg0->unkAC = 0;
    arg0->unkA3 = 8;
    arg0->unkA5 = 0;
    func_800058DC(arg0, func_802397A8);
}
