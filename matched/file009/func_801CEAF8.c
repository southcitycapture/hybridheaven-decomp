#include "context.h"
typedef struct func_801CEB64_StructC {
    u8 pad0[0x4C];
    u16 unk4C;
} func_801CEB64_StructC;
typedef struct func_801CEB64_StructArg0 {
    u8 pad0[0x0C];
    func_801CEB64_StructC *unkC;
    u8 pad10[0x90 - 0x10];
    u16 unk90;
    u16 unk92;
} func_801CEB64_StructArg0;
void func_801CEB64(func_801CEB64_StructArg0 *arg0, void **arg1);
extern s32 func_801CE0E8(void *, s8 *);

typedef struct func_801CEAF8_StructD {
    u8 pad0[0x12];
    s16 unk12;
} func_801CEAF8_StructD;

typedef struct func_801CEAF8_StructC {
    u8 pad0[0x2C];
    func_801CEAF8_StructD *unk2C;
} func_801CEAF8_StructC;

typedef struct func_801CEAF8_StructB {
    u8 pad0[0x24];
    func_801CEAF8_StructC *unk24;
} func_801CEAF8_StructB;

typedef struct func_801CEAF8_StructA {
    u8 pad0[0xC];
    func_801CEAF8_StructB *unkC;
} func_801CEAF8_StructA;

typedef struct func_801CEAF8_StructTop {
    u8 pad0[0xC];
    func_801CEAF8_StructA *unkC;
    u8 pad10[0x94 - 0x10];
    u8 unk94;
} func_801CEAF8_StructTop;

typedef struct func_801CEAF8_StructF {
    u8 pad0[0x12];
    s16 unk12;
} func_801CEAF8_StructF;

typedef struct func_801CEAF8_StructE {
    u8 pad0[0x30];
    func_801CEAF8_StructF *unk30;
} func_801CEAF8_StructE;

void func_801CEAF8(func_801CEAF8_StructTop *arg0, func_801CEAF8_StructE **arg1) {
    func_801CEAF8_StructF *dst;
    s8 sp1B;

    sp1B = 0;
    arg0->unk94 = 1;
    if (func_801CE0E8(arg0, &sp1B) == 0) {
        dst = (*arg1)->unk30;
        dst->unk12 = arg0->unkC->unkC->unk24->unk2C->unk12;
        func_800058DC(arg0, (s32) func_801CEB64);
    }
}
