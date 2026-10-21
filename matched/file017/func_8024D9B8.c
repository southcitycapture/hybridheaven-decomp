#include "context.h"

typedef struct func_8024D9B8_Struct { u8 pad0[0x3C]; u16 unk3C; } func_8024D9B8_Struct;
typedef struct func_8024D9B8_P { u8 pad0[4]; f32 unk4; u8 pad8[4]; f32 unkC; u8 pad10[2]; s16 unk12; } func_8024D9B8_P;
typedef struct func_8024D9B8_Q { u8 pad0[0x2C]; func_8024D9B8_P *unk2C; } func_8024D9B8_Q;
typedef struct func_8024D9B8_G { u8 pad0[0xE0]; func_8024D9B8_Q *unkE0; } func_8024D9B8_G;
extern s32 func_8024CF9C(f32, f32, f32);
extern s16 func_8001EF38(f32, f32);
extern void func_80020718(s32);
extern s32 func_801517CC(s32);
extern s32 func_801512CC(s32, f32, f32, f32);
extern void func_80151430(s32, s32);
extern void func_801515B0(s32, u8, s32);
extern void D_80151700(s32, u8, void *);
extern f32 D_8025D258;
extern f64 D_8025D260;
extern f64 D_8025D268;
extern f64 D_8025D270;
extern f64 D_8025D278;
extern u8 func_8024DB60[];

void func_8024D9B8(func_8024D9B8_Struct *arg0, s32 arg1) {
    s32 i;
    u16 t;
    func_8024D9B8_P *p;

    t = arg0->unk3C;
    arg0->unk3C = t + 1;
    if (t == 0) {
        func_8024CF9C(-143.0f, D_8025D258, -130.0f);
        p = ((func_8024D9B8_G *)D_801BBBF0)->unkE0->unk2C;
        ((func_8024D9B8_G *)D_801BBBF0)->unkE0->unk2C->unk12 = func_8001EF38(D_8025D260 - p->unk4, D_8025D268 - p->unkC);
        func_80020718(0x182);
    }
    if (t >= 0x1E && func_801517CC(D_8025DDF0) != 0) {
        func_801512CC(D_8025DDF0, -143.0f, 0.0f, -130.0f);
        p = ((func_8024D9B8_G *)D_801BBBF0)->unkE0->unk2C;
        func_80151430(D_8025DDF0, func_8001EF38(p->unk4 - D_8025D270, p->unkC - D_8025D278) & 0xFFFF);
        i = 0;
        if (func_801516CC(D_8025DDF0) > 0) {
            do {
                D_80151700(D_8025DDF0, i, D_8017BAD8);
                func_801515B0(D_8025DDF0, i, 0);
                i += 1;
            } while (i < func_801516CC(D_8025DDF0));
        }
        arg0->unk3C = 0;
        func_800058DC(arg0, func_8024DB60);
    }
}
