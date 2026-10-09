#include "context.h"
extern void *D_801DAB14;
extern s32 func_801C0B8C(u64);
extern void func_801CC470(s32 a0, s32 a1, s32 a2, s32 a3, f32 f12);

struct func_801E3DE8_Struct4 {
    u8 pad[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad2[2];
    s16 unk12;
};

struct func_801E3DE8_Struct3 {
    u8 pad[0x2C];
    struct func_801E3DE8_Struct4 *unk2C;
};

struct func_801E3DE8_Struct2 {
    u8 pad[0x24];
    struct func_801E3DE8_Struct3 *unk24;
};

struct func_801E3DE8_Struct1 {
    u8 pad[8];
    struct func_801E3DE8_Struct2 *unk8;
};

extern f32 D_801E6B08;

s32 func_801E3DE8(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xB40DC1) != 0) {
        ((struct func_801E3DE8_Struct1 *) D_801DAB14)->unk8->unk24->unk2C->unk4 = -3.0f;
        ((struct func_801E3DE8_Struct1 *) D_801DAB14)->unk8->unk24->unk2C->unk8 = 0.0f;
        ((struct func_801E3DE8_Struct1 *) D_801DAB14)->unk8->unk24->unk2C->unkC = D_801E6B08;
        ((struct func_801E3DE8_Struct1 *) D_801DAB14)->unk8->unk24->unk2C->unk12 = 0;
        func_801CC470(0, 0x0348001E, 0, 0x100, 5.0f);
        return 0x13;
    }
    return 0x12;
}
