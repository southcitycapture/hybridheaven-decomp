#include "common.h"

typedef struct func_80243D1C_Struct {
    u8 pad0[4];
    u16 unk4;
    u8 pad6[0x434 - 6];
    u8 unk434;
} func_80243D1C_Struct;
extern struct func_80243D1C_Struct D_801BBBF0;
extern const u8 D_80246B9C[];
extern void func_800058DC(void *, void *);
extern void func_8011AAF4(void *, s32, s32, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern void func_801C3B10(s32);
extern void func_801C3B2C(s32);
extern void func_801C3BC8();
extern void func_801C3C3C(s32);
typedef struct func_80243F38_Sub {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad30[0x14];
    f32 unk44;
} func_80243F38_Sub;
typedef struct func_80243F38_Sub2 {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
} func_80243F38_Sub2;
typedef struct func_80243F38_Sub3 {
    u8 pad0[0x2C];
    func_80243F38_Sub2 *unk2C;
} func_80243F38_Sub3;
typedef struct func_80243F38_Struct {
    u8 pad0[0xDC];
    func_80243F38_Sub *unkDC;
    func_80243F38_Sub3 *unkE0;
} func_80243F38_Struct;
void func_80244074(s32 arg0, s32 arg1);
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
    func_8011AAF4(D_80246B9C, 0x2C3, arg0, 0, 1, 0.0f, 1.10000002f, 10.6999998f, 19.7999992f, 0.0f, (-0.300000012f), 14.1000004f, 1.79999995f, 0.0f, 35.0f, -1, -1);
    func_800058DC((void *)arg0, func_80244074);
}
