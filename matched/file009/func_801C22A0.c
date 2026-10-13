#include "context.h"

typedef struct func_801C22A0_StructInner {
    u8 pad0[0x78];
    s16 unk78;
} func_801C22A0_StructInner;

typedef struct func_801C22A0_StructArg {
    u8 pad0[0x5C];
    func_801C22A0_StructInner *unk5C;
} func_801C22A0_StructArg;

typedef struct func_801C22A0_StructBBBF0 {
    u8 pad0[0xF00];
    u16 unkF00;
    u8 pad1[0x6];
    f32 unkF08;
    u8 pad2[0x4];
    s32 unkF10;
} func_801C22A0_StructBBBF0;

extern void func_801C2300();

void func_801C22A0(func_801C22A0_StructArg *arg0, s32 arg1) {
    func_801C22A0_StructInner *inner;
    func_801C22A0_StructBBBF0 *src;

    src = (func_801C22A0_StructBBBF0 *) D_801BBBF0;
    inner = arg0->unk5C;
    D_801E0B00.unk4 = 0;
    D_801E0B00.unk0 = src->unkF10;
    D_801E0B00.unk6 = src->unkF00;
    D_801E0B00.unk8 = src->unkF08;
    inner->unk78 = 1;
    func_800058DC(arg0, func_801C2300, src);
}
