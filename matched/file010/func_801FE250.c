#include "context.h"
struct func_801FE5F0_Struct {
    u8 pad0[0xAB];
    u8 unkAB;
    u8 pad1[0xB0 - 0xAC];
    s16 unkB0;
};
void func_801FE5F0(struct func_801FE5F0_Struct *arg0, s32 arg1);

extern void func_801FDCD0(void *, s32, s32, s32, s32, s32, s32, s8 *);
extern void func_80006214(void *);

void func_801FE250(struct func_801FE250_Struct *arg0, struct func_801FE250_Obj **arg1) {
    s8 sp3F;

    sp3F = 0;
    if (arg0->unkB0++ > 0x20) {
        func_801FDCD0(arg0, 0x20, 0x5A, 0xFF, 0xFF, 0xFF, 8, &sp3F);
        func_801FDCD0(arg0, 0x40, 0x5A, 0xFF, 0xFF, 0xFF, 9, &sp3F);
        func_801FDCD0(arg0, 0x60, 0x5A, 0xFF, 0xFF, 0xFF, 10, &sp3F);
        func_801FDCD0(arg0, 0x80, 0x5A, 0xFF, 0xFF, 0xFF, 11, &sp3F);
        func_801FDCD0(arg0, 0xA0, 0x5A, 0xFF, 0xFF, 0xFF, 12, &sp3F);
        func_801FDCD0(arg0, 0xC0, 0x5A, 0xFF, 0xFF, 0xFF, 13, &sp3F);
        func_801FDCD0(arg0, 0xE0, 0x5A, 0xFF, 0xFF, 0xFF, 14, &sp3F);
        func_801FDCD0(arg0, 0x100, 0x5A, 0xFF, 0xFF, 0xFF, 15, &sp3F);
        func_801FDCD0(arg0, 0x20, 0x5A, 0xFF, 0xFF, 0xFF, 0, &sp3F);
        func_801FDCD0(arg0, 0x40, 0x5A, 0xFF, 0xFF, 0xFF, 1, &sp3F);
        func_801FDCD0(arg0, 0x60, 0x5A, 0xFF, 0xFF, 0xFF, 2, &sp3F);
        func_801FDCD0(arg0, 0x80, 0x5A, 0xFF, 0xFF, 0xFF, 3, &sp3F);
        func_801FDCD0(arg0, 0xA0, 0x5A, 0xFF, 0xFF, 0xFF, 4, &sp3F);
        func_801FDCD0(arg0, 0xC0, 0x5A, 0xFF, 0xFF, 0xFF, 5, &sp3F);
        func_801FDCD0(arg0, 0xE0, 0x5A, 0xFF, 0xFF, 0xFF, 6, &sp3F);
        func_801FDCD0(arg0, 0x100, 0x5A, 0xFF, 0xFF, 0xFF, 7, &sp3F);
        func_80006214(arg0);
        arg1[arg0->unkAB]->unk30->unk4 = 0x140;
        arg1[arg0->unkAB]->unk30->unk6 = 0x100;
        arg0->unkB0 = 0xF0;
        func_800058DC(arg0, func_801FE5F0);
    }
}
