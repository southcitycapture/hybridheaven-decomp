#include "context.h"





extern struct func_801E337C_Node *D_801DAB14;
extern void func_801CC470(s32, s32, s32, s32, f32);

s32 func_801E337C(s32 arg0, s32 arg1) {
    struct func_801E337C_Obj *temp_v0;

    temp_v0 = D_801DAB14->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = -4.5f;
        D_801DAB14->unk8->unk24->unk2C->unk8 = 0.0f;
        D_801DAB14->unk8->unk24->unk2C->unkC = -9.0f;
        D_801DAB14->unk8->unk24->unk2C->unk12 = 0;
        func_801CC470(0, 0x0348005E, 0, 0x100, 6.0f);
        return 3;
    }
    return 2;
}
