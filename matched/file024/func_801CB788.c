#include "common.h"
extern u8 D_8017DD93;
extern void func_800058DC(void *, void *);
struct func_801CB5A0_StructArg0 {
    u8 pad[0x90];
    u8 unk90;
    u8 pad2[0x1B];
    s32 unkAC;
};
void func_801CBB88(void *arg0, void **arg1);
void func_801CBBEC(void *arg0, void *arg1);
struct func_801CBCE8_Struct {
    u8 pad[0x22];
    u8 unk22;
};

extern s32 func_8001B204(s32, s32, s32, void *, ...);
extern void func_8037D508(void);
struct func_801CB788_StructInput {
    u8 pad[4];
    u16 buttons;
};
extern struct func_801CB788_StructInput D_80089474;
extern u8 D_8017DD9E;
extern u32 D_8017DDA0;
extern u8 D_801BBC0D;
extern u16 D_801BBC8E[];
extern u8 D_801CF978[];
extern u8 D_801CF9A0[];
extern u8 D_801CF9BC[];
extern u8 D_801CF9D4[];
extern u8 D_801CF9F4[];
extern u8 D_801CFA28[];
extern u8 D_801CFA4C[];
extern u8 D_801CFA6C[];
extern u8 D_801CFA70[];
extern u8 D_801CFA74[];
extern u8 D_801CFA78[];
extern u8 D_801CFA7C[];

void func_801CB788(struct func_801CB5A0_StructArg0 *arg0, struct func_801CBCE8_Struct **arg1) {
    u32 ticks;
    s32 h;
    u8 a, b, c;
    s32 pad1;
    {
    u8 m;
    u8 hours;
    ticks = D_8017DDA0;
    hours = (u8)(ticks / 108000U);
    if ((s32)((ticks / 108000U) & 0xFF) > 0) {
        ticks -= hours * 108000;
    }
    m = (u8)(ticks / 1800U);
    if ((s32)((ticks / 1800U) & 0xFF) > 0) {
        ticks -= m * 1800;
    }
    if (hours >= 100) {
        hours = 99;
    }
    func_8001B204(0, 0x50, 0x46, D_801CF978, 2);
    if (D_801BBC0D == 0) {
        func_8001B204(4, 0x50, 0x64, D_801CF9A0, 2, 2, 0);
    } else if (D_801BBC0D == 1) {
        func_8001B204(4, 0x50, 0x64, D_801CF9BC, 2, 4, 0);
    } else {
        func_8001B204(4, 0x50, 0x64, D_801CF9D4, 2, 1, 0);
    }
    func_8001B204(1, 0x50, 0x74, D_801CF9F4, 2, 2, hours, 0, 2, m, 0, 2, (ticks / 30U) & 0xFF);
    func_8001B204(2, 0x50, 0x84, D_801CFA28, 2, 2, (s32) D_8017DD9E);
    }
    if (D_8017DD93 != 0) {
        if (arg0->unk90 == 0) { a = 1; } else { a = 0; }
        if (arg0->unk90 == 0) { b = 0; } else { b = 3; }
        if (arg0->unk90 == 0) { c = 0; } else { c = 1; }
        func_8001B204(3, 0x68, 0xC8, D_801CFA4C, a, b, c,
                      arg0->unk90 == 0 ? 3 : 0);
        if (D_801BBC8E[5] & 0x200) {
            arg0->unk90 = 0;
        } else if (D_801BBC8E[5] & 0x100) {
            arg0->unk90 = 1;
        }
        if (D_80089474.buttons & 0x8000) {
            if (arg0->unk90 == 0) {
                func_800058DC(arg0, func_801CBBEC);
                return;
            }
            func_8001B204(0, 0, 0, D_801CFA6C);
            func_8001B204(1, 0, 0, D_801CFA70);
            func_8001B204(2, 0, 0, D_801CFA74);
            func_8001B204(3, 0, 0, D_801CFA78);
            func_8001B204(4, 0, 0, D_801CFA7C);
            pad1 = 0;
            do {
                arg1[pad1]->unk22 = 0;
                pad1 = (pad1 + 1) & 0xFF;
            } while (pad1 < 9);
            func_8037D508();
            func_800058DC(arg0, func_801CBB88);
        }
    } else {
        if ((301 <= arg0->unkAC++) || (D_80089474.buttons & 0x4000)) func_800058DC(arg0, func_801CBBEC);
    }
}
