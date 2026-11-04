#include "common.h"
extern s32 func_80010550();
extern s32 func_8013A1B4();
extern void (*D_80216D10[])(void *, s32);
void func_801F3B5C(s32 arg0);
typedef struct func_801F8E4C_Struct {
    u8 pad0[0x90];
    u8 unk90;
    u8 unk91;
    u8 unk92;
    u8 pad93[0x98 - 0x93];
    s16 unk98;
    u8 pad9A[0xAE - 0x9A];
    u8 unkAE;
} func_801F8E4C_Struct;
void func_801F8E4C(func_801F8E4C_Struct *arg0, s32 arg1);
typedef struct func_801F908C_Struct {
    u8 pad0[0xAE];
    u8 unkAE;
} func_801F908C_Struct;
void func_801F908C(func_801F908C_Struct *arg0, s32 arg1);
typedef struct func_801F94AC_Struct {
    u8 pad0[0xAE];
    u8 unkAE;
} func_801F94AC_Struct;
void func_801F94AC(func_801F94AC_Struct *arg0, s32 arg1);


struct func_801F5104_StructInner {
    u8 pad[0x18];
    u32 unk18;
};

struct func_801F5104_StructSub {
    u8 pad[0x78];
    s16 unk78;
};

struct func_801F5104_StructArg {
    u8 pad0[0x38];
    struct func_801F5104_StructInner *unk38;
    s16 unk3C;
    u8 pad3E[0x5C - 0x3E];
    struct func_801F5104_StructSub *unk5C;
    u8 pad60[0x92 - 0x60];
    u8 unk92;
    u8 pad93[0xAE - 0x93];
    u8 unkAE;
    u8 padAF;
    void *unkB0;
};

struct func_801F5104_StructVec {
    s32 unk0;
    s32 unk4;
    f32 unk8;
};

extern struct func_801F5104_StructVec D_80216EC4;

void func_801F5104(struct func_801F5104_StructArg *arg0, s32 arg1) {
    struct func_801F5104_StructSub *sub;

    sub = arg0->unk5C;
    sub->unk78 = 1;
    arg0->unk3C = 100;
    arg0->unk92 = 0;
    if (arg0->unkAE == 0) {
        arg0->unkAE = 40;
    }
    D_80216EC4.unk8 = 0.7f;
    switch ((s32)((arg0->unk38->unk18 >> 16) & 0xFF)) {
    default:
        arg0->unkB0 = (void *)func_801F8E4C;
        break;
    case 0:
        arg0->unkB0 = (void *)func_801F908C;
        break;
    case 1:
        arg0->unkB0 = (void *)func_801F8E4C;
        break;
    case 2:
        D_80216EC4.unk8 = 1.5f;
        arg0->unkB0 = (void *)func_801F94AC;
        break;
    }
    func_8013A1B4(arg1, D_80216EC4, 0x1FFFFF);
    func_80010550(arg1, sub);
    func_801F3B5C(0);
}
