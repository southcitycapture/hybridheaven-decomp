#include "context.h"
typedef struct func_8024FEC4_Struct { u8 pad0[0x3C]; u16 unk3C; } func_8024FEC4_Struct;
typedef struct func_8024FEC4_Obj { u8 pad0[0x2C]; func_8024F4F0_Inner *unk2C; } func_8024FEC4_Obj;
typedef struct func_8024FEC4_Glob { u8 pad0[0xE0]; func_8024FEC4_Obj *unkE0; } func_8024FEC4_Glob;
extern s32 func_8024CF9C(f32, f32, f32);
extern s16 func_8001EF38(f32, f32);
extern void func_80020718(s32);
extern s32 func_801512CC(s32, f32, f32, f32);
extern void func_80151430(s32, s32);
extern void func_801515B0(s32, u8, s32);
extern s32 func_801516CC(s32);
extern void D_80151700(s32, u8, void *);
extern s32 func_801517CC(s32);
extern u8 D_8017BAD8[];
extern f32 D_8025D510;
extern f64 D_8025D518;
extern f64 D_8025D520;
extern f64 D_8025D528;
extern f64 D_8025D530;
extern s32 D_8025DE00;
extern u8 func_8025006C[];

void func_8024FEC4(func_8024FEC4_Struct *arg0, s32 arg1) {
    s32 i;
    u8 j;
    u16 t;
    func_8024F4F0_Inner *p;
    func_8024F4F0_Inner *q;

    t = arg0->unk3C;
    arg0->unk3C = t + 1;
    if (t == 0) {
        func_8024CF9C(125.0f, D_8025D510, -142.0f);
        p = ((func_8024FEC4_Glob *)D_801BBBF0)->unkE0->unk2C;
        ((func_8024FEC4_Glob *)D_801BBBF0)->unkE0->unk2C->unk12 = func_8001EF38(D_8025D518 - p->unk4, D_8025D520 - p->unkC);
        func_80020718(0x182);
    }
    if (t >= 0x1E && func_801517CC(D_8025DE00) != 0) {
        func_801512CC(D_8025DE00, 125.0f, 0.0f, -142.0f);
        q = ((func_8024FEC4_Glob *)D_801BBBF0)->unkE0->unk2C;
        func_80151430(D_8025DE00, func_8001EF38(q->unk4 - D_8025D528, q->unkC - D_8025D530) & 0xFFFF);
        i = 0;
        if (func_801516CC(D_8025DE00) > 0) {
            do {
                j = i;
                D_80151700(D_8025DE00, j, D_8017BAD8);
                func_801515B0(D_8025DE00, j, 0);
                i++;
            } while (i < func_801516CC(D_8025DE00));
        }
        arg0->unk3C = 0;
        func_800058DC(arg0, func_8025006C);
    }
}
