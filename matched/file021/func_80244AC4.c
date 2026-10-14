/* starting point: func_80243A00 (file021), whose assembly is 100% the same as this function's */
#include "context.h"

struct func_80244AC4_Inner {
    u8 pad0[0x8];
    f32 unk8;
};

struct func_80244AC4_Outer {
    u8 pad0[0x30];
    struct func_80244AC4_Inner *unk30;
};

struct func_80244AC4_Arg0 {
    u8 pad0[0x24];
    struct func_80244AC4_Outer *unk24;
    u8 pad1[0x7C - 0x28];
    f32 unk7C;
};

void func_80244AC4(struct func_80244AC4_Arg0 *arg0, s32 arg1) {
    arg0->unk24->unk30->unk8 = -34.0f;
    arg0->unk7C = arg0->unk24->unk30->unk8;
}
