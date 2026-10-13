/* starting point: func_801E60B4 (file039), whose assembly is 98% the same as this function's */
#include "context.h"
extern s32 func_801CC470(s32 arg0, s32 arg1, s32 arg2, s32 arg3, f32 arg4);

struct func_801E5D38_Struct_F {
    u8 pad[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad2[0x2];
    s16 unk12;
};

struct func_801E5D38_Struct_D {
    u8 pad[0x2C];
    struct func_801E5D38_Struct_F *unk2C;
};

struct func_801E5D38_Struct_C {
    u8 pad[0x24];
    struct func_801E5D38_Struct_D *unk24;
};

struct func_801E5D38_Struct_B {
    u8 pad[0x8];
    struct func_801E5D38_Struct_C *unk8;
};

extern struct func_801E5D38_Struct_B *D_801DAB14;

s32 func_801E5D38(s32 arg0, s32 arg1) {
    struct func_801E5D38_Struct_D *temp_v0;

    temp_v0 = D_801DAB14->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = 7.0f;
        D_801DAB14->unk8->unk24->unk2C->unk8 = 0.0f;
        D_801DAB14->unk8->unk24->unk2C->unkC = 0.0f;
        D_801DAB14->unk8->unk24->unk2C->unk12 = 0;
        func_801CC470(0, 0x04100026, 0, 0, 3.0f);
        return 3;
    }
    return 2;
}
