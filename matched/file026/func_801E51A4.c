#include "context.h"
extern void func_801CF450(s32 arg0);

extern f32 D_801FBFE0;

struct func_801E51A4_StructLeaf {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
};
struct func_801E51A4_StructNode {
    u8 pad0[8];
    struct func_801E51A4_StructNode *unk8;
    u8 padC[0x18];
    struct func_801E51A4_StructNode *unk24;
    u8 pad28[4];
    struct func_801E51A4_StructLeaf *unk2C;
};
#define ROOT51 (*(struct func_801E51A4_StructNode **)&D_801DAB14)
#define NODE51 (ROOT51->unk8->unk8->unk8->unk24)

s32 func_801E51A4(s32 arg0, s32 arg1) {
    if (NODE51 != NULL) {
        func_801CF450(0);
        if (func_801C0B8C(0x0294B4A0) != 0) {
            NODE51->unk2C->unk4 = 45.0f;
            NODE51->unk2C->unk8 = 0.0f;
            NODE51->unk2C->unkC = 4.0f;
            NODE51->unk2C->unk12 = 0x800;
            func_801CC470(2, 0x01B80003, 0, 0x1001, 1.0f);
            return 2;
        }
        NODE51->unk2C->unk4 = D_801FBFE0;
        NODE51->unk2C->unk8 = 0.0f;
        NODE51->unk2C->unkC = 77.0f;
        NODE51->unk2C->unk12 = 0;
        func_801CC470(2, 0x01B80013, 0, 0x1001, 1.0f);
    }
    return 1;
}
