#include "context.h"

extern f32 D_801E7754;
extern f32 D_801E7758;

struct func_801E5E10_Struct {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
};

struct func_801E5E10_Mid {
    u8 pad0[0x2C];
    struct func_801E5E10_Struct *unk2C;
};

struct func_801E5E10_Node {
    u8 pad0[8];
    struct func_801E5E10_Node *next;
    u8 pad1[0x18];
    struct func_801E5E10_Mid *unk24;
};

s32 func_801E5E10(s32 arg0, s32 arg1) {
    struct func_801E5E10_Mid *temp_v0;

    temp_v0 = ((struct func_801E5E10_Node *)D_801DAB14)->next->next->next->next->next->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = D_801E7754;
        ((struct func_801E5E10_Node *)D_801DAB14)->next->next->next->next->next->unk24->unk2C->unk8 = 0.0f;
        ((struct func_801E5E10_Node *)D_801DAB14)->next->next->next->next->next->unk24->unk2C->unkC = D_801E7758;
        ((struct func_801E5E10_Node *)D_801DAB14)->next->next->next->next->next->unk24->unk2C->unk12 = 0x12D8;
        func_801CC470(4, 0x0320001A, 0, 0x1100, 10.0f);
        return 2;
    }
    return 1;
}
