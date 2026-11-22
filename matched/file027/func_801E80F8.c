#include "common.h"

extern u8 *D_801DAB14;
extern s32 func_801C0B8C(u64);
extern s32 func_801CC470(s32 arg0, s32 arg1, s32 arg2, s32 arg3, f32 arg4);
struct func_801E80F8_StructC {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
};
struct func_801E80F8_StructB {
    u8 pad0[0x2C];
    struct func_801E80F8_StructC *unk2C;
};
struct func_801E80F8_StructA {
    u8 pad0[8];
    struct func_801E80F8_StructA *unk8;
    u8 pad1[0x18];
    struct func_801E80F8_StructB *unk24;
};
s32 func_801E80F8(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x1E8480) != 0) {
        ((struct func_801E80F8_StructA *) D_801DAB14)->unk8->unk8->unk8->unk8->unk8->unk24->unk2C->unk4 = (-31.6000004f);
        ((struct func_801E80F8_StructA *) D_801DAB14)->unk8->unk8->unk8->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        ((struct func_801E80F8_StructA *) D_801DAB14)->unk8->unk8->unk8->unk8->unk8->unk24->unk2C->unkC = -29.0f;
        ((struct func_801E80F8_StructA *) D_801DAB14)->unk8->unk8->unk8->unk8->unk8->unk24->unk2C->unk12 = 0x1471;
        func_801CC470(4, 0x02A80004, 0, 0x1100, 1.0f);
        return 0xE;
    }
    return 0xD;
}
