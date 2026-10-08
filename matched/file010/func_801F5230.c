#include "common.h"

struct func_801F5230_StructB {
    u8 pad0[0x78];
    s16 unk78;
};

struct func_801F5230_StructArg {
    u8 pad0[0x5C];
    struct func_801F5230_StructB *unk5C;
    u8 pad1[0xAF - 0x60];
    u8 unkAF;
};

struct func_801F5230_StructD {
    u8 pad0[0x18E];
    s16 unk18E;
    s16 unk190;
    s16 unk192;
};

extern void func_80126968();
extern void func_8013B5B4(void *, s32);
extern struct func_801F5230_StructD D_801BBBF0;

void func_801F5230(struct func_801F5230_StructArg *arg0) {
    struct func_801F5230_StructB *sp1C;

    sp1C = arg0->unk5C;
    func_80126968();
    if (arg0->unkAF != 2) {
        func_8013B5B4(arg0, 0);
    }
    D_801BBBF0.unk190 = 1;
    D_801BBBF0.unk192 = 1;
    D_801BBBF0.unk18E = 1;
    sp1C->unk78 = 1;
}
