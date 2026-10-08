#include "common.h"

struct func_801E7ECC_Struct3 {
    u8 pad[0x30];
    f32 unk30;
    f32 unk34;
    f32 unk38;
};

struct func_801E7ECC_Struct2 {
    u8 pad[0x2C];
    struct func_801E7ECC_Struct3 *unk2C;
};

struct func_801E7ECC_Struct1 {
    u8 pad[0xE8];
    struct func_801E7ECC_Struct2 *unkE8;
};

s32 func_801C0B8C(u64 time);
void func_8038BD50(f32 arg0, f32 arg1, f32 arg2);
void D_8038BD88(f32 arg0, f32 arg1, f32 arg2);

extern struct func_801E7ECC_Struct1 D_801BBBF0;
extern f32 D_801FC2F8;
extern f32 D_801FC2FC;
extern f32 D_801FC300;
extern f32 D_801FC304;
extern f32 D_801FC308;
extern f32 D_801FC30C;
extern f32 D_801FC310;

s32 func_801E7ECC(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x044AA200) != 0) {
        func_8038BD50(D_801FC2F8, D_801FC2FC, -20.1f);
        D_8038BD88(D_801FC300, D_801FC304, -5.0f);
        return 0xC;
    }
    D_801BBBF0.unkE8->unk2C->unk30 = D_801BBBF0.unkE8->unk2C->unk30 + D_801FC308;
    D_801BBBF0.unkE8->unk2C->unk34 = D_801BBBF0.unkE8->unk2C->unk34 + D_801FC30C;
    D_801BBBF0.unkE8->unk2C->unk38 = D_801BBBF0.unkE8->unk2C->unk38 + D_801FC310;
    return 0xB;
}
