#include "context.h"

typedef struct func_80366648_StructA {
    u8 pad0[2];
    s16 unk2;
    u8 pad4[0x2C];
    u8 unk30;
    u8 unk31_a : 3;
    u8 unk31_b : 2;
    u8 unk31_c : 3;
    u8 pad32;
    u8 unk33_a : 1;
    u8 unk33_b : 7;
    u8 pad34[0x392 - 0x34];
    u8 unk392;
} func_80366648_StructA;
typedef struct func_80366648_StructI {
    u8 pad0[0x1C];
    s32 unk1C;
} func_80366648_StructI;
typedef struct func_80366648_StructO {
    u8 pad0[0x5C];
    func_80366648_StructI *unk5C;
} func_80366648_StructO;

extern s32 func_802242D0(s32, void *);
extern s32 func_802320E8(void *);
extern void func_802237B0(s32, s32);
extern void func_8036265C();

void func_80366648(s32 arg0, s32 arg1) {
    func_80366648_StructA *a;
    func_80366648_StructI *p;
    s32 v;

    if (arg0 == *(s32 *)((u8 *)&D_801BBBF0 + 0xDC)) {
        a = (func_80366648_StructA *)&D_801BC03C;
    } else {
        a = (func_80366648_StructA *)&D_801BC3D8;
    }
    p = ((func_80366648_StructO *)arg0)->unk5C;
    a->unk392 = 0;
    if (a->unk2 <= 0) {
        func_800058DC(arg0, func_80222E84);
        return;
    }
    if (((u8 *)&D_801BBBF0)[0x1031] != 0xF) {
        if ((*(u16 *)&a->unk30 & 7) == 5) {
            func_8022397C(arg0);
            return;
        }
        v = p->unk1C;
        if (v == 0x0190001A) {
            a->unk31_b = 3;
        } else if (v == 0x01900075 || v == 0x01900077) {
            a->unk31_b = 0;
        }
        if (func_802242D0(arg0, a) != 0 || func_802320E8(a) == 0) {
            a->unk33_a = 0;
        } else {
            a->unk33_a = 1;
        }
        if (func_801DB6B8(arg0, arg1, 0) != 0) {
            func_802237B0(arg0, 0);
            func_800058DC(arg0, func_8036265C);
        }
    }
}
