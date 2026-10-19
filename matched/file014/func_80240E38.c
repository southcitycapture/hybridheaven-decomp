#include "context.h"

typedef struct func_80240E38_StructC {
    u8 pad[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
} func_80240E38_StructC;
typedef struct func_80240E38_StructB {
    u8 pad[0x2C];
    func_80240E38_StructC *unk2C;
} func_80240E38_StructB;
typedef struct func_80240E38_StructGlobal {
    u8 pad0[0xE0];
    func_80240E38_StructB *volatile unkE0;
    u8 pad1[0x354 - 0xE4];
    s16 unk354;
    u8 pad2[0x1058 - 0x356];
    s32 unk1058;
    s32 unk105C;
    s32 unk1060;
    s32 unk1064;
    s32 unk1068;
    s32 unk106C;
} func_80240E38_StructGlobal;
extern u8 D_801BBBF0[];
extern f64 D_8024A330;
extern f32 D_8024A338;
extern void func_80020744(s32);
extern void func_800058DC(void *, void *);
extern void func_80240F48(s32, s32);

void func_80240E38(func_80240D74_StructA *arg0, s32 arg1) {
    s16 temp_a1;
    func_80240D74_StructC *temp_v1;

    ((func_80240E38_StructGlobal *)D_801BBBF0)->unk354 = 1;
    temp_v1 = arg0->unk24->unk30;
    temp_v1->unk8 = (f32)((f64)temp_v1->unk8 + D_8024A330);
    temp_a1 = arg0->unk94;
    arg0->unk94 = temp_a1 - 1;
    if (temp_a1 == 0) {
        ((func_80240E38_StructGlobal *)D_801BBBF0)->unk354 = 0;
        ((func_80240E38_StructGlobal *)D_801BBBF0)->unk1058 = 0x13C68;
        ((func_80240E38_StructGlobal *)D_801BBBF0)->unk105C = 0xA028;
        ((func_80240E38_StructGlobal *)D_801BBBF0)->unk1060 = 0xFFF7A360;
        ((func_80240E38_StructGlobal *)D_801BBBF0)->unk1064 = (s32)(((func_80240E38_StructGlobal *)D_801BBBF0)->unkE0->unk2C->unk4 * 1000.0f);
        ((func_80240E38_StructGlobal *)D_801BBBF0)->unk1068 = (s32)(((func_80240E38_StructGlobal *)D_801BBBF0)->unkE0->unk2C->unk8 + D_8024A338);
        ((func_80240E38_StructGlobal *)D_801BBBF0)->unk106C = (s32)(((func_80240E38_StructGlobal *)D_801BBBF0)->unkE0->unk2C->unkC * 1000.0f);
        func_80020744(0x142);
        func_800058DC(arg0, func_80240F48);
    }
}
