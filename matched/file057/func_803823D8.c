#include "common.h"
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
void *func_800058DC(void *, void *);
extern void func_80006214(void *);
extern void func_8001B204();
extern void func_801460C8(void *, s8 *, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
void func_803821B0(void *arg0, s16 arg1, s16 arg2, u8 arg3, u8 arg4, u8 arg5, u8 arg6, s8 *arg7);


typedef struct func_803823D8_StructInner {
    u8 pad0[0xAE];
    u8 unkAE;
} func_803823D8_StructInner;
typedef struct func_803823D8_Struct {
    u8 pad0[0xC];
    func_803823D8_StructInner *unkC;
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
    s8 result;

    sp67 = 0;
    if (arg0->unkC->unkAE != 0) {
        result = func_80232A80();
        D_801BC03C[0x2FF] = result;
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
