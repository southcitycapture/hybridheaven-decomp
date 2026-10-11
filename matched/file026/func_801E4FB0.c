#include "context.h"

extern void func_801CED5C(s32 arg0);
extern f32 D_801FBFDC;

struct func_801E4FB0_Struct3 {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
};

struct func_801E4FB0_Node {
    u8 pad0[8];
    struct func_801E4FB0_Node *unk8;
    u8 pad1[0x18];
    struct func_801E4FB0_Node *unk24;
    u8 pad2[4];
    struct func_801E4FB0_Struct3 *unk2C;
};

s32 func_801E4FB0(s32 arg0, s32 arg1) {
    if (((struct func_801E4FB0_Node *) D_801DAB14)->unk8->unk24 != 0) {
        ((struct func_801E4FB0_Node *) D_801DAB14)->unk8->unk8->unk24->unk2C->unk4 = 0.0f;
        ((struct func_801E4FB0_Node *) D_801DAB14)->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        ((struct func_801E4FB0_Node *) D_801DAB14)->unk8->unk8->unk24->unk2C->unkC = D_801FBFDC;
        ((struct func_801E4FB0_Node *) D_801DAB14)->unk8->unk8->unk24->unk2C->unk12 = 0;
        if (func_801C0B8C(0x01399170) != 0) {
            func_801CED5C(1);
            func_801CC470(1, 0x01B80016, 0, 0, 1.0f);
            return 2;
        }
    }
    return 1;
}
