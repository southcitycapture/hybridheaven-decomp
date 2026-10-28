#include "common.h"
struct func_80245DCC_Struct3 { u8 pad[4]; f32 unk4; u8 pad2[4]; f32 unkC; };
struct func_80245DCC_Struct2 { u8 pad[0x2C]; struct func_80245DCC_Struct3 *unk2C; };
extern struct func_80245DCC_Struct2 *D_801BBCD0;
extern s32 D_80258A88;
extern void func_800058DC(void *, void *);
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern void func_80020718(s32);
extern void func_800208C4(s32);
extern void func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern void func_801C3B10(s32);
extern void func_801C3B2C(s32);
extern s32 func_801C3D20(f32, f32, f32);


struct func_80247530_Struct { u8 pad[0x9C]; s16 unk9C; u8 pad2[2]; f32 unkA0; f32 unkA4; f32 unkA8; };
extern u8 D_8025C9D0[];
void func_802476F0();

void func_80247530(struct func_80247530_Struct *arg0, s32 arg1)
{
    s32 i;
    s16 a;
    s32 t;
    f32 s;
    f32 f;

    for (i = -0x28; i != 0x2C; i += 4) {
        s = func_8001EB64(arg0->unk9C);
        f = (f32) i;
        if (func_801C3D20(arg0->unkA4 - (s * f), (func_8001EAD0(arg0->unk9C) * f) + arg0->unkA8, 3.0f) != 0) {
            func_801C3B2C(2);
            func_801C3B10(1);
            t = (s16) ((u16) arg0->unk9C - 0x2AA) & 0x1FFF;
            a = t;
            s = func_8001EAD0(a), f = func_8001EB64(a);
            func_8011AAF4(D_8025C9D0, 0x14E, arg0, 0, 1, 0.0f, (s * 30.0f) + D_801BBCD0->unk2C->unk4, -70.0f,
                          (f * 30.0f) + D_801BBCD0->unk2C->unkC, 0.0f, D_801BBCD0->unk2C->unk4, -90.0f, D_801BBCD0->unk2C->unkC, 0.0f, 35.0f, -1, -1);
            arg0->unkA0 = 0.0f;
            func_800208C4(0x44);
            func_80020718(0x12F);
            D_80258A88 = 0;
            func_800058DC(arg0, func_802476F0);
            return;
        }
    }
}
