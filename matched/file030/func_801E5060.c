#include "common.h"

struct func_801E5060_StructB {
    u8 pad[0x8];
    f32 unk8;
};

struct func_801E5060_StructA {
    u8 pad[0x30];
    struct func_801E5060_StructB *unk30;
};

struct func_801E5060_StructC {
    u8 pad[0xC];
    struct func_801E5060_StructA *unkC;
};

s32 func_801C0DE4(s32 arg0, s32 arg1, s32 arg2);
s32 func_801C0EB0(s32 arg0, s32 arg1);
u64 func_801C0F18(s32 arg0, s32 arg1);
f64 func_80034C24(u64 arg0);
extern struct func_801E5060_StructC *D_8038D8D0;
extern f64 D_801EC708;

s32 func_801E5060(s32 arg0, s32 arg1) {
    u64 temp_ret;

    if (func_801C0DE4(3, 3, 0x40A00000) != 0) {
        func_801C0EB0(3, 3);
        return 0xE;
    }
    temp_ret = func_801C0F18(3, 3);
    D_8038D8D0->unkC->unk30->unk8 = (f32) (((func_80034C24(temp_ret) / D_801EC708) / 5.0) * 31.0);
    return 0xD;
}
