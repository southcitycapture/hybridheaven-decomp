#include "context.h"
extern u8 *D_801DAB14;
extern s32 D_801E7144;
extern void func_801C1000(s32, s32);
extern s32 func_801CC470(s32 a0, s32 a1, s32 a2, s32 a3, f32 f);

typedef struct func_801E3CF8_Struct4 {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[0x2];
    s16 unk12;
} func_801E3CF8_Struct4;

typedef struct func_801E3CF8_Struct3 {
    u8 pad0[0x2C];
    func_801E3CF8_Struct4 *unk2C;
} func_801E3CF8_Struct3;

typedef struct func_801E3CF8_Struct2 {
    u8 pad0[0x24];
    func_801E3CF8_Struct3 *unk24;
} func_801E3CF8_Struct2;

typedef struct func_801E3CF8_Struct1 {
    u8 pad0[0x8];
    func_801E3CF8_Struct2 *unk8;
} func_801E3CF8_Struct1;

extern f32 D_801E76E0;

s32 func_801E3CF8(s32 arg0, s32 arg1) {
    func_801E3CF8_Struct3 *temp_v0;

    temp_v0 = ((func_801E3CF8_Struct1 *) D_801DAB14)->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = D_801E76E0;
        ((func_801E3CF8_Struct1 *) D_801DAB14)->unk8->unk24->unk2C->unk8 = 0.0f;
        ((func_801E3CF8_Struct1 *) D_801DAB14)->unk8->unk24->unk2C->unkC = 50.0f;
        ((func_801E3CF8_Struct1 *) D_801DAB14)->unk8->unk24->unk2C->unk12 = 0;
        func_801CC470(0, 0x01B8001B, 0, 0x1100, 1.0f);
        func_801C1000(4, 0);
        D_801E7144 = 0;
        return 3;
    }
    return 2;
}
