#include "context.h"

extern f32 D_801E96CC;
extern f32 D_801E96D0;

typedef struct func_801E651C_Float {
    u8 pad0[0x4];
    f32 unk4;
    u8 pad1[0x4];
    f32 unkC;
} func_801E651C_Float;

typedef struct func_801E651C_Struct {
    u8 pad0[0x8];
    struct func_801E651C_Struct *unk8;
    u8 pad1[0x18];
    struct func_801E651C_Struct *unk24;
    u8 pad2[0x4];
    func_801E651C_Float *unk2C;
} func_801E651C_Struct;

s32 func_801E651C(s32 arg0, s32 arg1) {
    func_801CF450(1);
    ((func_801E651C_Struct *)D_801DAB14)->unk8->unk8->unk24->unk2C->unk4 = D_801E96CC;
    ((func_801E651C_Struct *)D_801DAB14)->unk8->unk8->unk24->unk2C->unkC = D_801E96D0;
    func_801CC470(1, 0x0410000F, 0, 0x1000, 5.0f);
    func_801C0D04(4, 1);
    D_801E8DF8 = 0;
    return 0x1F;
}
