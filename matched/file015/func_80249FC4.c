#include "common.h"

typedef struct func_8024AA38_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_8024AA38_Struct;
extern func_8024AA38_Struct D_802530AC;
extern u8 D_8025906C[];
struct func_8024A434_Sub {
    u8 pad[0x40];
    f32 unk40;
    u8 pad2[4];
    f32 unk48;
};
struct func_8024A434_StructBBF0 {
    u8 pad[0xDC];
    struct func_8024A434_Sub *unkDC;
};
extern struct func_8024A434_StructBBF0 D_801BBBF0;
typedef struct func_80249FC4_G {
    u8 pad[0x1E8];
    f32 unk1E8;
    f32 unk1EC;
    f32 unk1F0;
    f32 unk1F4;
    f32 unk1F8;
    f32 unk1FC;
} func_80249FC4_G;
#define G ((func_80249FC4_G *)&D_801BBBF0)
extern void func_800058DC(void *, void *);
extern s32 func_80010550(s32, s32);
extern s32 func_800178E8(void);
extern void func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern void func_8013A1B4();
typedef struct func_80249FC4_Arg {
    u8 pad[0x5C];
    s32 unk5C;
    u8 pad2[0x3C];
    s16 unk9C;
} func_80249FC4_Arg;
extern void func_8024A120();
void func_80249FC4(arg0, arg1)
func_80249FC4_Arg *arg0;
volatile s32 arg1;
{
    s32 t = arg0->unk5C;
    if (func_80010550(arg1, t) != 0) {
        if (func_800178E8() != 0) {
            G->unk1E8 = 109.300003f;
            G->unk1EC = (-186.100006f);
            G->unk1F0 = (-425.299988f);
            G->unk1F4 = 113.300003f;
            G->unk1F8 = -184.0f;
            G->unk1FC = (-439.100006f);
            func_8011AAF4(D_8025906C, 0x3B0, arg0, 0, 1, 0.0f, G->unk1E8, G->unk1EC, G->unk1F0, 0.0f, G->unk1F4, G->unk1F8, G->unk1FC, 0.0f, 21.2000008f, -1, -1);
            func_8013A1B4(arg1, D_802530AC, 0xFFFFFF);
            arg0->unk9C = 0;
            func_800058DC(arg0, func_8024A120);
        }
    }
}
