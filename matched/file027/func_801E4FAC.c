#include "context.h"
extern u8 *D_801DAB14;
extern s32 func_801CC470(s32 arg0, s32 arg1, s32 arg2, s32 arg3, f32 arg4);

struct func_801E4FAC_Struct1 {
    u8 pad0[0x8];
    struct func_801E4FAC_Struct2 *unk8;
};

struct func_801E4FAC_Struct2 {
    u8 pad0[0x24];
    struct func_801E4FAC_Struct3 *unk24;
};

struct func_801E4FAC_Struct3 {
    u8 pad0[0x2C];
    struct func_801E4FAC_Struct4 *unk2C;
};

struct func_801E4FAC_Struct4 {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[0x2];
    s16 unk12;
};

extern f32 D_801F5864;
extern f32 D_801F5868;

s32 func_801E4FAC(s32 arg0, s32 arg1) {
    struct func_801E4FAC_Struct3 *temp_v0;

    temp_v0 = ((struct func_801E4FAC_Struct1 *) D_801DAB14)->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = D_801F5864;
        ((struct func_801E4FAC_Struct1 *) D_801DAB14)->unk8->unk24->unk2C->unk8 = 0.0f;
        ((struct func_801E4FAC_Struct1 *) D_801DAB14)->unk8->unk24->unk2C->unkC = D_801F5868;
        ((struct func_801E4FAC_Struct1 *) D_801DAB14)->unk8->unk24->unk2C->unk12 = 0x1000;
        func_801CC470(0, 0x03480017, 0, 0x1000, 4.0f);
        return 3;
    }
    return 2;
}
