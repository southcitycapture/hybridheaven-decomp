#include "common.h"

extern u8 *D_801DAB14;
extern s32 func_801CC470(s32 arg0, s32 arg1, s32 arg2, s32 arg3, f32 arg4);
typedef struct func_801EBA6C_StructD {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
} func_801EBA6C_StructD;
typedef struct func_801EBA6C_StructC {
    u8 pad0[0x2C];
    func_801EBA6C_StructD *unk2C;
} func_801EBA6C_StructC;
typedef struct func_801EBA6C_StructB {
    u8 pad0[0x24];
    func_801EBA6C_StructC *unk24;
} func_801EBA6C_StructB;
typedef struct func_801EBA6C_StructA {
    u8 pad0[8];
    func_801EBA6C_StructB *unk8;
} func_801EBA6C_StructA;
s32 func_801EBA6C(s32 arg0, s32 arg1) {
    func_801EBA6C_StructC *temp_v0;

    temp_v0 = ((func_801EBA6C_StructA *) D_801DAB14)->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = 0.0f;
        ((func_801EBA6C_StructA *) D_801DAB14)->unk8->unk24->unk2C->unk8 = 10.6999998f;
        ((func_801EBA6C_StructA *) D_801DAB14)->unk8->unk24->unk2C->unkC = (-1.79999995f);
        ((func_801EBA6C_StructA *) D_801DAB14)->unk8->unk24->unk2C->unk12 = 0;
        func_801CC470(0, 0x0348000F, 0x50, 0x1001, 1.0f);
        return 3;
    }
    return 2;
}
