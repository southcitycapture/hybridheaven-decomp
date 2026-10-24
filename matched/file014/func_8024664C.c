#define CQ(p, l) p##_##l
#define CP(p, l) CQ(p, l)
#define func_80243820 CP(fA, __LINE__)
#define func_802448C8 CP(fA, __LINE__)
#define func_80244988 CP(fA, __LINE__)
#include "context.h"
#undef func_80243820
#undef func_802448C8
#undef func_80244988

extern u8 D_8024AA2C[];
extern u8 D_8024AA64[];
extern s16 D_801BBD84;
extern void func_80243820();
extern s32 D_8013A334(f32 *, s32, void *, s32);
typedef struct { u8 pad0[0x30]; f32 unk30; u8 pad1[4]; f32 unk38; } func_8024664C_Sub;
typedef struct { u8 pad0[0x2C]; func_8024664C_Sub *unk2C; } func_8024664C_Mid;
extern func_8024664C_Mid *D_801BBCD8;
typedef struct { u8 pad0[0x24]; func_802455D8_Mid *unk24; u8 pad1[0x34]; void *unk5C; } func_8024664C_Obj;

void func_8024664C(func_8024664C_Obj *arg0, s32 arg1) {
    void *sp64;
    f32 sp58[3];

    sp64 = arg0->unk5C;
    D_8013A334(sp58, arg1, sp64, 6);
    func_8011AAF4(D_8024AA2C, 0x5D1, arg0, 0, 1, 4294967296.0f, D_801BBCD8->unk2C->unk30, -544.0f, D_801BBCD8->unk2C->unk38, 4.0f, sp58[0], sp58[1], sp58[2], 0.0f, 35.0f, -1, -1);
    if (func_8012CE9C(arg1, sp64, D_802484DC, 0xA) == 0) {
        func_8011AAF4(D_8024AA64, 0x5D6, arg0, 2, 1, 4294967296.0f, arg0->unk24->unk2C->unk4, arg0->unk24->unk2C->unk8, arg0->unk24->unk2C->unkC, 4.0f, D_801BBCD0->unk2C->unk4, D_801BBCD0->unk2C->unk8 + 15.0f, D_801BBCD0->unk2C->unkC, 0.0f, 35.0f, -1, -1);
        D_801BBD84 = 2;
        func_800058DC(arg0, func_80243820);
    }
}
