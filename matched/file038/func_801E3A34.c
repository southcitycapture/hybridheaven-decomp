#include "common.h"

struct func_801E3A34_Struct2 {
    u8 pad[0x8];
    f32 unk8;
};

struct func_801E3A34_Struct1 {
    u8 pad[0x30];
    struct func_801E3A34_Struct2 *unk30;
};

struct func_801E3A34_Struct0 {
    u8 pad[0x8];
    struct func_801E3A34_Struct1 *unk8;
};

extern s32 func_801C0DE4(s32, s32, s32);
extern void func_801C0EB0(s32, s32);
extern u64 func_801C0F18(s32, s32);
extern f64 func_80034C24(u64);
extern f64 D_801E7248;
extern struct func_801E3A34_Struct0 *D_8038D8D0;

s32 func_801E3A34(s32 arg0, s32 arg1) {
    if (func_801C0DE4(3, 2, 0x40200000) != 0) {
        func_801C0EB0(3, 2);
        return 8;
    }
    D_8038D8D0->unk8->unk30->unk8 = (f32) ((((f32) (func_80034C24(func_801C0F18(3, 2)) / D_801E7248)) / 2.5f) * -212.0f) + 158.0f;
    return 7;
}
