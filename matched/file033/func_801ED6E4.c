#include "context.h"

extern f32 D_801F4ACC;
extern f32 D_801F4AD0;
extern f32 D_801F4AD4;

typedef struct func_801ED6E4_Out {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[0x2];
    s16 unk12;
} func_801ED6E4_Out;

typedef struct func_801ED6E4_Ext {
    u8 pad0[0x2C];
    func_801ED6E4_Out *unk2C;
} func_801ED6E4_Ext;

typedef struct func_801ED6E4_Node {
    u8 pad0[0x8];
    struct func_801ED6E4_Node *unk8;
    u8 pad1[0x24 - 0xC];
    func_801ED6E4_Ext *unk24;
} func_801ED6E4_Node;

s32 func_801ED6E4(s32 arg0, s32 arg1) {
    func_801ED6E4_Ext *temp_v0;

    temp_v0 = ((func_801ED6E4_Node *)D_801DAB14)->unk8->unk8->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = D_801F4ACC;
        ((func_801ED6E4_Node *)D_801DAB14)->unk8->unk8->unk8->unk24->unk2C->unk8 = D_801F4AD0;
        ((func_801ED6E4_Node *)D_801DAB14)->unk8->unk8->unk8->unk24->unk2C->unkC = D_801F4AD4;
        ((func_801ED6E4_Node *)D_801DAB14)->unk8->unk8->unk8->unk24->unk2C->unk12 = 0;
        func_801CC470(2, 0x0320004B, 0, 1, 1.0f);
        return 2;
    }
    return 1;
}
