#include "common.h"
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
extern struct func_801E58F0_StructA *D_801DAB14;
extern s32 func_801C1088(s32, s32, s32);
extern void func_801C10D8(s32, s32);
extern u32 func_801C1134(s32, s32);
s32 func_801D0408(void);


extern f32 D_801E970C;
extern f32 D_801E9710;
extern f32 D_801E9714;

typedef struct func_801E6E68_StructLeaf {
    u8 pad[4];
    f32 unk4;
    u8 pad8[4];
    f32 unkC;
} func_801E6E68_StructLeaf;
typedef struct func_801E6E68_StructB {
    u8 pad[0x2C];
    func_801E6E68_StructLeaf *unk2C;
} func_801E6E68_StructB;
typedef struct func_801E6E68_StructA {
    u8 pad[8];
    struct func_801E6E68_StructA *unk8;
    u8 padC[0x18];
    func_801E6E68_StructB *unk24;
} func_801E6E68_StructA;

s32 func_801E6E68(s32 arg0, s32 arg1) {
    f32 temp_fv0;
    func_801E6E68_StructA **root;

    if ((func_801C1088(4, 2, 0x37) != 0) && (func_801D0408() != 0)) {
        func_801C10D8(4, 2);
        return 0x15;
    }
    temp_fv0 = (f32)func_801C1134(4, 2) / 55.0f;
    root = (func_801E6E68_StructA **)&D_801DAB14;
    (*root)->unk8->unk8->unk8->unk24->unk2C->unk4 = D_801E970C * temp_fv0 + D_801E9710;
    (*root)->unk8->unk8->unk8->unk24->unk2C->unkC = 1.5f * temp_fv0 + D_801E9714;
    return 0x14;
}
