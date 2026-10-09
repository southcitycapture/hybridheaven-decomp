#include "context.h"

typedef struct func_801F4C4C_SubB {
    u8 pad0[0x8];
    f32 unk8;
} func_801F4C4C_SubB;

typedef struct func_801F4C4C_SubA {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad1[0x9];
    func_801F4C4C_SubB *unk2C;
} func_801F4C4C_SubA;

typedef struct func_801F4C4C_Struct {
    u8 pad0[0x24];
    func_801F4C4C_SubA *unk24;
    u8 pad1[0x16];
    u8 unk3E;
    u8 pad2[0x53];
    s16 unk92;
    f32 unk94;
    u8 pad3[0x16];
    u8 unkAE;
    u8 pad4[0x1];
    void *unkB0;
} func_801F4C4C_Struct;

typedef struct func_801F4C4C_Global {
    s32 unk0;
    s16 unk4;
    s16 unk6;
    s32 unk8;
} func_801F4C4C_Global;

extern s32 func_8013A1B4(s32, func_801F4C4C_Global, s32);
extern void func_801F3B5C(s32);
extern s16 func_801F3F70(void);
extern func_801F4C4C_Global D_80216ED0;
extern void func_801F9974(void);

void func_801F4C4C(func_801F4C4C_Struct *arg0, s32 arg1) {
    arg0->unk92 = func_801F3F70();
    if (arg0->unk92 >= 0xC9) {
        arg0->unk24->unk22 = 0;
    }
    if (arg0->unkAE == 0) {
        arg0->unkAE = 0x23;
    }
    arg0->unk3E = 3;
    arg0->unk94 = (f32) ((arg0->unk24->unk2C->unk8 - (f32) arg0->unk92) + 3.0f);
    D_80216ED0.unk6 = 1;
    func_8013A1B4(arg1, D_80216ED0, 0x1FFFFF);
    arg0->unkB0 = func_801F9974;
    func_801F3B5C(0);
}
