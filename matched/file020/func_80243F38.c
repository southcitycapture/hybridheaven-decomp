#define func_80243F38 func_80243F38_data
#include "context.h"
#undef func_80243F38

typedef struct func_80243F38_Sub2 {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
} func_80243F38_Sub2;

typedef struct func_80243F38_Sub {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad30[0x14];
    f32 unk44;
} func_80243F38_Sub;

typedef struct func_80243F38_Sub3 {
    u8 pad0[0x2C];
    func_80243F38_Sub2 *unk2C;
} func_80243F38_Sub3;

typedef struct func_80243F38_Struct {
    u8 pad0[0xDC];
    func_80243F38_Sub *unkDC;
    func_80243F38_Sub3 *unkE0;
} func_80243F38_Struct;

extern void func_801C3BC8();
void func_80244074(s32 arg0, s32 arg1);
extern void func_801C3C3C(s32);
extern u8 D_80246B9C[];
extern f32 D_80246C2C;
extern f32 D_80246C30;
extern f32 D_80246C34;
extern f32 D_80246C38;
extern f32 D_80246C3C;
extern f32 D_80246C40;

void func_80243F38(s32 arg0, s32 arg1) {
    func_801C3BC8();
    func_801C3C3C(0);
    ((func_80243F38_Struct *)&D_801BBBF0)->unkDC->unk2C &= ~0x40;
    ((func_80243F38_Struct *)&D_801BBBF0)->unkDC->unk44 = 0.0f;
    ((func_80243F38_Struct *)&D_801BBBF0)->unkE0->unk2C->unk4 = 0.0f;
    ((func_80243F38_Struct *)&D_801BBBF0)->unkE0->unk2C->unk8 = 0.0f;
    ((func_80243F38_Struct *)&D_801BBBF0)->unkE0->unk2C->unkC = 0.0f;
    ((func_80243F38_Struct *)&D_801BBBF0)->unkE0->unk2C->unk12 = 0x1C00;
    func_801C3B2C(2);
    func_801C3B10(1);
    func_8011AAF4(D_80246B9C, 0x2C3, arg0, 0, 1, 0.0f, D_80246C2C, D_80246C30, D_80246C34, 0.0f, D_80246C38, D_80246C3C, D_80246C40, 0.0f, 35.0f, -1, -1);
    func_800058DC((void *)arg0, func_80244074);
}
