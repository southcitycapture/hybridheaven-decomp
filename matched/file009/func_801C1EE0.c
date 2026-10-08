#include "common.h"

typedef struct func_801C1EE0_StructInner {
    u8 pad0[0x78];
    s16 unk78;
} func_801C1EE0_StructInner;

typedef struct func_801C1EE0_StructArg {
    u8 pad0[0x5C];
    func_801C1EE0_StructInner *unk5C;
} func_801C1EE0_StructArg;

typedef struct func_801C1EE0_StructBBBF0 {
    u8 pad0[0xF00];
    u16 unkF00;
    u8 pad1[0x6];
    f32 unkF08;
    u8 pad2[0x4];
    s32 unkF10;
} func_801C1EE0_StructBBBF0;

typedef struct func_801C1EE0_StructB00 {
    s32 unk0;
    s16 unk4;
    u16 unk6;
    f32 unk8;
} func_801C1EE0_StructB00;

extern void func_800058DC(void *a, void *b, void *c);
extern void func_801C1F40(void);
extern func_801C1EE0_StructBBBF0 D_801BBBF0;
extern func_801C1EE0_StructB00 D_801E0B00;

void func_801C1EE0(func_801C1EE0_StructArg *arg0, s32 arg1) {
    func_801C1EE0_StructInner *inner;
    func_801C1EE0_StructBBBF0 *src;
    func_801C1EE0_StructB00 *dst;

    src = &D_801BBBF0;
    inner = arg0->unk5C;
    dst = &D_801E0B00;
    dst->unk4 = 0;
    dst->unk0 = src->unkF10;
    dst->unk6 = src->unkF00;
    dst->unk8 = src->unkF08;
    inner->unk78 = 1;
    func_800058DC(arg0, func_801C1F40, src);
}
