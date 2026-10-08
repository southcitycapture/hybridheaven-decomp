#include "common.h"

struct func_801E58F0_StructA;
struct func_801E58F0_StructB;

struct func_801E58F0_StructC {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    s32 unkC;
};

struct func_801E58F0_StructB {
    u8 pad0[0x2C];
    struct func_801E58F0_StructC *unk2C;
};

struct func_801E58F0_StructA {
    u8 pad0[8];
    struct func_801E58F0_StructA *unk8;
    u8 pad1[0x18];
    struct func_801E58F0_StructB *unk24;
};

extern s32 func_801CF3BC(void);
extern void func_8038D33C(f32 arg0, f32 arg1, s32 arg2, s32 arg3, f32 arg4, f32 arg5);
extern f32 D_801E967C;
extern struct func_801E58F0_StructA *D_801DAB14;

s32 func_801E58F0(s32 arg0, s32 arg1) {
    struct func_801E58F0_StructC *temp_v0;

    if (func_801CF3BC() != 0) {
        return 5;
    }
    temp_v0 = D_801DAB14->unk8->unk8->unk24->unk2C;
    func_8038D33C(temp_v0->unk4, temp_v0->unk8, temp_v0->unkC, 0x676, D_801E967C, 1.0f);
    return 6;
}
