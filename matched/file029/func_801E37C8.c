#include "context.h"
extern void *D_801DAB14;
extern void func_801CC470(s32 a0, s32 a1, s32 a2, s32 a3, f32 f12);

struct func_801E37C8_Struct2 {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
};

struct func_801E37C8_Struct {
    u8 pad0[8];
    struct func_801E37C8_Struct *unk8;
    u8 pad1[0x18];
    struct func_801E37C8_Struct *unk24;
    u8 pad2[4];
    struct func_801E37C8_Struct2 *unk2C;
};

extern f32 D_801E6AE8;

s32 func_801E37C8(s32 arg0, s32 arg1) {
    struct func_801E37C8_Struct *temp_v0;

    temp_v0 = ((struct func_801E37C8_Struct *) D_801DAB14)->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = D_801E6AE8;
        ((struct func_801E37C8_Struct *) D_801DAB14)->unk8->unk24->unk2C->unk8 = 54.0f;
        ((struct func_801E37C8_Struct *) D_801DAB14)->unk8->unk24->unk2C->unkC = 0.0f;
        ((struct func_801E37C8_Struct *) D_801DAB14)->unk8->unk24->unk2C->unk12 = 0x800;
        func_801CC470(0, 0x0348007A, 0, 0, 1.0f);
        return 3;
    }
    return 2;
}
