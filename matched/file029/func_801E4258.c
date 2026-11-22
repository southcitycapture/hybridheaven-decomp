#include "common.h"

extern void *D_801DAB14;
extern void func_801CC470(s32 a0, s32 a1, s32 a2, s32 a3, f32 f12);
struct func_801E4258_Vec {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
};
struct func_801E4258_Struct {
    u8 pad0[8];
    struct func_801E4258_Struct *unk8;
    u8 pad1[0x18];
    struct func_801E4258_Struct *unk24;
    u8 pad2[4];
    struct func_801E4258_Vec *unk2C;
};
s32 func_801E4258(s32 arg0, s32 arg1) {
    struct func_801E4258_Struct *temp_v0;

    temp_v0 = ((struct func_801E4258_Struct *) D_801DAB14)->unk8->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = -4.0f;
        ((struct func_801E4258_Struct *) D_801DAB14)->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        ((struct func_801E4258_Struct *) D_801DAB14)->unk8->unk8->unk24->unk2C->unkC = (-0.200000003f);
        ((struct func_801E4258_Struct *) D_801DAB14)->unk8->unk8->unk24->unk2C->unk12 = 0;
        func_801CC470(1, 0x0348001C, 0, 1, 1.0f);
        return 2;
    }
    return 1;
}
