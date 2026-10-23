#include "context.h"
typedef struct { u8 pad0[0x3C]; s16 unk3C; } func_8024ACD8_Arg;
typedef struct { u8 pad0[4]; f32 unk4; f32 unk8; f32 unkC; u8 pad10[2]; s16 unk12; u8 pad14[0x1C]; f32 unk30; u8 pad34[4]; f32 unk38; } func_8024ACD8_In;
typedef struct { u8 pad0[0x2C]; func_8024ACD8_In *unk2C; } func_8024ACD8_N;
typedef struct { u8 pad0[0xE0]; func_8024ACD8_N *unkE0; u8 padE4[4]; func_8024ACD8_N *unkE8; } func_8024ACD8_G;
extern s32 func_8015105C(s32);
extern s32 func_801C3D20(f32, f32, f32);
extern u8 D_8025CD9C[];
extern s16 func_8001EF38(f32, f32);
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern void func_800058DC(s32, void (*)());
extern void func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern s32 D_801C3DC8(void *, f32, f32, f32, f32, f32, f32, f32, f32);
extern void func_8024AF30();
extern s32 D_8025DDE0;
extern f32 D_8025CFB4;
extern f64 D_8025CFB8;
extern f64 D_8025CFC0;

#define g ((func_8024ACD8_G *)D_801BBBF0)
void func_8024ACD8(func_8024ACD8_Arg *arg0, s32 arg1) {
    u16 sp66;
    s32 pad;
    f32 sp5C;

    sp5C = func_8001EAD0(g->unkE0->unk2C->unk12);
    if (D_801C3DC8(arg0, g->unkE0->unk2C->unk4, g->unkE0->unk2C->unk8 + 18.0f, g->unkE0->unk2C->unkC, (sp5C * 40.0f) + g->unkE0->unk2C->unk4, g->unkE0->unk2C->unk8 + 15.0f, (func_8001EB64(g->unkE0->unk2C->unk12) * 40.0f) + g->unkE0->unk2C->unkC, D_8025CFB4, 35.0f) == 0
        || func_801C3D20(g->unkE8->unk2C->unk30, g->unkE8->unk2C->unk38, 10.0f) != 0) {
        sp66 = func_8001EF38((f32)(-128.0 - (f64)g->unkE0->unk2C->unk4), (f32)(D_8025CFB8 - (f64)g->unkE0->unk2C->unkC));
        sp5C = func_8001EAD0(sp66 * 1);
        func_8011AAF4(D_8025CD9C, 0x28D, arg0, 0, 1, 0.0f, (f32)(-128.0 - (f64)(sp5C * 70.0f)), g->unkE0->unk2C->unk8 + 15.0f, (f32)(D_8025CFC0 - (f64)(func_8001EB64(sp66) * 70.0f)), 0.0f, -128.0f, 14.0f, 150.0f, 0.0f, 35.0f, -1, -1);
        D_8025DDE0 = func_8015105C(0xFB);
        arg0->unk3C = 0;
        func_800058DC((s32)arg0, (void (*)())func_8024AF30);
    }
}
