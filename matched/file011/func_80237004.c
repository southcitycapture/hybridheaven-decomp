#include "context.h"

typedef struct func_80237004_Struct {
    u8 pad[0xA2];
    s8 unkA2;
    u8 pad2;
    s8 unkA4;
    u8 pad3[3];
    u8 unkA8;
    u8 unkA9;
} func_80237004_Struct;

extern s32 func_80234CE8(func_80237004_Struct *);
extern void func_8023448C(func_80237004_Struct *, s32 *, s32, s16, s32, s32, s32);
extern void func_80237250();
extern void func_800058DC();
extern s8 func_802242D0(s32);
extern struct func_802387D4_Glob D_801BBBF0;

void func_80237004(func_80237004_Struct *arg0, s32 *arg1) {
    s8 sp5F;
    s8 sp58[7];
    s8 sp57;
    s8 i;
    s32 off;
    s32 a0;

    sp5F = 0;
    func_80234450();
    if (*(u8 *)((u8 *)&D_801BBBF0 + 0x1030) == 0) {
        a0 = *(s32 *)((u8 *)&D_801BBBF0 + 0xDC);
    } else {
        a0 = *(s32 *)((u8 *)&D_801BBBF0 + 0xEC);
    }
    arg0->unkA8 = func_802242D0(a0);
    arg0->unkA9 = func_80234CE8(arg0);
    func_80146208((s32)arg0, &sp5F, 0xE6, 0x85, 0x72, 0x20, 0x20, 0x20, 0, 0xFF, 0x220, 0x15);
    func_80146208((s32)arg0, &sp5F, 0x66, 0x9C, 0x72, 0x20, 0x20, 0, 0, 0xFF, 0x220, 0x15);
    func_80234828((func_80234828_Struct0 *)arg0, (func_80234828_Struct1 *)arg1);
    arg0->unkA4 = 2;
    sp57 = func_80006214(arg0);
    for (i = 0; i < arg0->unkA4; i++) {
        func_8023448C(arg0, arg1, 1, i * 0x8C - 0x46, 0, 1, 7);
    }
    off = sp57 * 4;
    func_80234D70((func_80234D70_Struct *)arg0, *(func_80234D70_Struct2 **)((u8 *)arg1 + off));
    D_8024086C = (u32)off + (u32)arg1;
    sp57 = func_80006214(arg0);
    func_802345B0((s32)arg0, arg1, 4, -0x46, 0, 1);
    func_802345B0((s32)arg0, arg1, 3, 0x46, 0, 1);
    off = sp57 * 4;
    func_80234DD4((func_80234DD4_Struct *)arg0, *(func_80234DD4_Struct1 **)((u8 *)arg1 + off));
    D_80240870 = (u32)off + (u32)arg1;
    arg0->unkA2 = 0;
    func_800058DC(arg0, func_80237250);
}
