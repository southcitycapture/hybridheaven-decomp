#include "context.h"

typedef struct func_803823D8_Inner {
    u8 pad0[0xAE];
    u8 unkAE;
} func_803823D8_Inner;
typedef struct func_803823D8_Struct {
    u8 pad0[0xC];
    func_803823D8_Inner *unkC;
    u8 pad10[0xA0];
    s16 unkB0;
    u8 padB2;
    u8 unkB3;
} func_803823D8_Struct;
extern s8 func_80232A80();
extern void func_80233288(u8);
extern s32 func_8013D5F4(u8);
extern void func_803825CC();
extern u8 D_8038CA3C[];
extern u8 D_8038CA54[];
extern u8 D_8038CA5C[];

void func_803823D8(func_803823D8_Struct *arg0, s32 arg1) {
    s8 sp67;
    u8 *p;
    s32 state;

    sp67 = 0;
    if (arg0->unkC->unkAE != 0) {
        D_801BC03C[0x2FF] = func_80232A80();
        arg0->unkB3 = 0;
        func_801460C8(arg0, &sp67, 0x24, 0x56, 0xF0, 0x64, 0xB, 0x20, 0x20, 0x20, 0x80, 2, 0x20, 0x20, 0x20, 0x40);
        func_803821B0(arg0, 0x2E, 0x60, 0x50, 0x50, 0xFF, 0, &sp67);
        func_80006214(arg0);
        p = D_801BC03C + 0x2D8;
        if (*(u16 *)(D_801BC3D8 + 0x9E) == 0xFFFF) {
            func_8001B204(2, 0x6A, 0x64, D_8038CA3C, 4);
        } else {
            if (*p < 0xB || *p == 0xF) {
                func_8001B204(2, 0x6A, 0x64, D_8038CA54, 4, ***(s32 ****)(p - 4));
                func_80233288(p[1]);
            } else if (*p == 0xB || *p == 0xC) {
                func_8001B204(2, 0x6A, 0x64, D_8038CA5C, 4, func_8013D5F4(p[1]));
            }
        }
        arg0->unkB0 = 0x14;
        func_800058DC(arg0, func_803825CC);
    }
}
