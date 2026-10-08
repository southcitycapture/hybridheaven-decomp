#include "context.h"

struct func_80243A00_Inner {
    u8 pad0[0x8];
    f32 unk8;
};

struct func_80243A00_Outer {
    u8 pad0[0x30];
    struct func_80243A00_Inner *unk30;
};

struct func_80243A00_Arg0 {
    u8 pad0[0x24];
    struct func_80243A00_Outer *unk24;
    u8 pad1[0x7C - 0x28];
    f32 unk7C;
};

void func_80243A00(struct func_80243A00_Arg0 *arg0, s32 arg1) {
    arg0->unk24->unk30->unk8 = -382.0f;
    arg0->unk7C = arg0->unk24->unk30->unk8;
}
