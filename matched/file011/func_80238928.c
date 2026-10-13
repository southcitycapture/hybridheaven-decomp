#include "context.h"

typedef struct func_80238928_Struct98 {
    u8 pad[0x38];
    u32 unk38;
} func_80238928_Struct98;

typedef struct func_80238928_Struct {
    u8 pad0[0x98];
    func_80238928_Struct98 *unk98;
    u8 pad1[0x6];
    s8 unkA2;
    u8 pad2;
    s8 unkA4;
    s8 unkA5;
} func_80238928_Struct;

extern s32 func_80226980(u8);
extern void func_80238E60();

void func_80238928(func_80238928_Struct *arg0, s32 *arg1) {
    u8 a;
    u8 b;
    u8 c;
    s16 sp5A;
    s8 sp59;
    func_80238928_Struct98 *sp54;
    s32 *p;
    u8 sp4F;
    s8 i;

    sp59 = 0;
    sp54 = arg0->unk98;
    if ((s32)sp54 == (s32)&D_801BBBF0 + 0x44C) {
        sp4F = 0;
    } else {
        sp4F = 1;
    }
    sp5A = func_80006214(arg0);
    if (func_80236348((struct func_80236348_StructArg *)arg0) != 0) {
        func_80146208((s32)arg0, &sp59, 0xE6, 0x90, 0x7E, 8, 8, 8, 0, 0xFF, 0x209, 6);
        func_80146208((s32)arg0, &sp59, 0x66, 0xA8, 0x7E, 8, 8, 0, 0, 0xFF, 0x209, 6);
        arg0->unkA4 = 2;
    } else {
        func_80146208((s32)arg0, &sp59, 0xE6, 0x90, 0x90, 8, 8, 8, 0, 0xFF, 0x209, 6);
        func_80146208((s32)arg0, &sp59, 0x66, 0xA8, 0x90, 8, 8, 0, 0, 0xFF, 0x209, 6);
        func_80146208((s32)arg0, &sp59, 0x66, 0x9C, 0x7E, 8, 8, 0, 0, 0xFF, 0x209, 5);
        arg0->unkA4 = 3;
    }
    for (i = 0; i < arg0->unkA4; i++) {
        if (i == 1 && func_80226980(sp4F) != 0) {
            D_802407E0[i] = 1;
        } else {
            D_802407E0[i] = 0;
        }
    }
    p = (s32 *)((s32)arg1 + sp5A * 4);
    for (i = 0; i < arg0->unkA4; i++) {
        if (D_802407E0[i] != 0) {
            func_80145310(p[i], 0xF, 2);
        } else {
            func_80145310(p[i], 1, 3);
        }
    }
    sp5A = func_80006214(arg0);
    if (func_80236348((struct func_80236348_StructArg *)arg0) != 0) {
        func_8023448C((func_80237004_Struct *)arg0, arg1, 1, -0x46, 0, 2, 4);
        func_8023448C((func_80237004_Struct *)arg0, arg1, 1, 0x46, 0, 2, 4);
    } else {
        func_8023448C((func_80237004_Struct *)arg0, arg1, 1, -0x46, 0x14, 2, 4);
        func_8023448C((func_80237004_Struct *)arg0, arg1, 1, 0x46, 0x14, 2, 4);
        func_8023448C((func_80237004_Struct *)arg0, arg1, 1, 0, -0x14, 2, 4);
    }
    a = 0xD;
    b = 0xE;
    c = 0xC;
    if (sp54->unk38 >> 31) {
        a = 0x11;
        b = 0x12;
        c = 0x10;
    } else {
        a = 0xD;
        b = 0xE;
        c = 0xC;
    }
    if (func_80236348((struct func_80236348_StructArg *)arg0) != 0) {
        func_802345B0((s32)arg0, arg1, 0xF, -0x46, 0, 2);
        func_802345B0((s32)arg0, arg1, 0xE, 0x46, 0, 2);
    } else {
        func_802345B0((s32)arg0, arg1, a, -0x46, 0x14, 2);
        func_802345B0((s32)arg0, arg1, b, 0x46, 0x14, 2);
        func_802345B0((s32)arg0, arg1, c, 0, -0x14, 2);
    }
    D_8024086C = (s32)(arg1 + sp5A);
    D_80240870 = (s32)(arg1 + (arg0->unkA4 + sp5A));
    arg0->unkA2 = 0;
    arg0->unkA5 = 3;
    func_80235C1C((func_80235C1C_Struct *)arg0);
    func_800058DC(arg0, func_80238E60);
}
