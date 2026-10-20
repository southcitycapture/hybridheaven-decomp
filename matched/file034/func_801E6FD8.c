#include "context.h"

extern void func_801C10D8(s32, s32);
extern u32 func_801C1134(s32, s32);
extern s32 D_801E8E98;
extern f32 D_801E9718;
extern f32 D_801E971C;
extern f32 D_801E9720;

typedef struct func_801E6FD8_StructLeaf {
    u8 pad[4];
    f32 unk4;
    u8 pad8[4];
    f32 unkC;
} func_801E6FD8_StructLeaf;

typedef struct func_801E6FD8_StructB {
    u8 pad[0x2C];
    func_801E6FD8_StructLeaf *unk2C;
} func_801E6FD8_StructB;

typedef struct func_801E6FD8_StructA {
    u8 pad[8];
    struct func_801E6FD8_StructA *unk8;
    u8 padC[0x18];
    func_801E6FD8_StructB *unk24;
} func_801E6FD8_StructA;

s32 func_801E6FD8(s32 arg0, s32 arg1) {
    f32 temp_fv0;

    if (func_801C0B8C(0xC042C0) != 0) {
        func_801C10D8(4, 2);
        D_801E8E98 = 0;
        return 0x17;
    }
    temp_fv0 = (f32) func_801C1134(4, 2) / 138.0f;
    ((func_801E6FD8_StructA *)D_801DAB14)->unk8->unk8->unk8->unk24->unk2C->unk4 = D_801E9718 * temp_fv0 + -56.0f;
    ((func_801E6FD8_StructA *)D_801DAB14)->unk8->unk8->unk8->unk24->unk2C->unkC = D_801E971C * temp_fv0 + D_801E9720;
    return 0x16;
}
