#include "common.h"
extern u8 D_801BBBF0[];
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
void func_800058DC(void *arg0, void *arg1);
extern s32 func_80010550(s32, s32);
extern void func_802233B0(void *arg0, s32 arg1);
extern void func_802237B0(void *arg0, s32 arg1);
extern void func_8022397C(void *arg0);

extern void func_80222708(void);

typedef struct func_8035D9FC_Entry {
    u8 pad0[2];
    s16 unk2;
    u8 pad1[0x2C];
    u32 f0 : 1;
    u32 f1 : 2;
    u32 f2 : 6;
    u32 f3 : 2;
    u32 f4 : 2;
    u32 f5 : 3;
    u32 f6 : 3;
    u32 f7 : 13;
    u8 pad2[4];
    u8 b38_0 : 1;
    u8 b38_1 : 2;
    u8 b38_2 : 1;
    u8 b38_3 : 1;
    u8 b38_4 : 3;
} func_8035D9FC_Entry;

void func_8035D9FC(void *arg0, s32 arg1) {
    s32 sp1C = *(s32 *)((u8 *)arg0 + 0x5C);
    func_8035D9FC_Entry *e;

    if (arg0 == *(void **)(D_801BBBF0 + 0xDC)) {
        e = (func_8035D9FC_Entry *)D_801BC03C;
    } else {
        e = (func_8035D9FC_Entry *)D_801BC3D8;
    }
    if (e->unk2 <= 0 || e->f1 != 0) {
        func_802233B0(arg0, arg1);
        return;
    }
    if (D_801BBBF0[0x1031] >= 0xA && D_801BBBF0[0x1031] != 0xF) {
        func_8022310C(arg0, arg1);
        return;
    }
    if (D_801BBBF0[0x1031] != 0xF) {
        if (e->f5 == 5) {
            func_8022397C(arg0);
            return;
        }
        func_802237B0(arg0, 1);
        if (func_80010550(arg1, sp1C) != 0) {
            e->f3 = (e->f3 | 2);
            e->f6 = 0;
            e->b38_0 = 0;
            e->b38_2 = 0;
            e->b38_1 = 0;
            func_800058DC(arg0, func_80222708);
        }
        *((u8 *)e + 0x392) = 0;
    }
}
