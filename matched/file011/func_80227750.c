#include "context.h"

struct func_80227750_Inner {
    u8 pad[8];
    u8 unk8;
    u8 unk9;
    u8 unkA;
};

struct func_80227750_Outer {
    u8 pad[0x30];
    struct func_80227750_Inner *unk30;
};

extern s8 func_8012C6B4(s32 arg0);

void func_80227750(struct func_80227750_Outer *arg0) {
    struct func_80227750_Inner *sp1C;

    sp1C = arg0->unk30;
    sp1C->unk8 = func_8012C6B4(0xFF);
    sp1C->unk9 = func_8012C6B4(0xFF);
    sp1C->unkA = func_8012C6B4(0xFF);
}
