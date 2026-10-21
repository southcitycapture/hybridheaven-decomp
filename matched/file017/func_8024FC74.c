#include "context.h"

typedef struct func_8024FC74_Obj {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
    u8 pad14[0x1C];
    f32 unk30;
    u8 pad34[4];
    f32 unk38;
} func_8024FC74_Obj;
typedef struct func_8024FC74_Ent {
    u8 pad0[0x2C];
    func_8024FC74_Obj *unk2C;
} func_8024FC74_Ent;
typedef struct func_8024FC74_G {
    u8 pad0[0xE0];
    func_8024FC74_Ent *unkE0;
    u8 padE4[4];
    func_8024FC74_Ent *unkE8;
} func_8024FC74_G;
typedef struct func_8024FC74_Arg {
    u8 pad0[0x3C];
    s16 unk3C;
} func_8024FC74_Arg;

extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern s16 func_8001EF38(f32, f32);
extern void func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern s32 func_8015105C(s32);
extern s32 func_801C3D20(f32, f32, f32);
extern s32 D_801C3DC8(void *, f32, f32, f32, f32, f32, f32, f32, f32);
extern u8 D_8025D330[];
extern f32 D_8025D4E8;
extern f64 D_8025D4F0;
extern f64 D_8025D4F8;
extern f64 D_8025D500;
extern f64 D_8025D508;
extern s32 D_8025DE00;
extern void func_8024FEC4();

void func_8024FC74(func_8024FC74_Arg *arg0, s32 arg1) {
    u16 sp66;
    func_8024FC74_Obj *obj;
    f32 sp5C;
    f32 c;
#define g ((func_8024FC74_G *)D_801BBBF0)

    sp5C = func_8001EAD0(g->unkE0->unk2C->unk12);
    c = func_8001EB64(g->unkE0->unk2C->unk12);
    obj = g->unkE0->unk2C;
    if (D_801C3DC8(arg0, obj->unk4, obj->unk8 + 18.0f, obj->unkC,
            sp5C * 40.0f + obj->unk4, obj->unk8 + 15.0f,
            c * 40.0f + obj->unkC, D_8025D4E8, 35.0f) == 0
        || func_801C3D20(g->unkE8->unk2C->unk30, g->unkE8->unk2C->unk38, 10.0f) != 0) {
        sp66 = func_8001EF38(D_8025D4F0 - g->unkE0->unk2C->unk4, D_8025D4F8 - g->unkE0->unk2C->unkC);
        sp5C = func_8001EAD0(sp66);
        func_8011AAF4(D_8025D330, 0x269, arg0, 0, 1, 0.0f, D_8025D500 - sp5C * 70.0f, 15.0f + g->unkE0->unk2C->unk8,
            D_8025D508 - func_8001EB64(sp66) * 70.0f, 0.0f, 125.0f, 14.0f, -142.0f, 0.0f, 35.0f, -1, -1);
        arg0->unk3C = 0;
        D_8025DE00 = func_8015105C(0xFC);
        func_800058DC(arg0, func_8024FEC4);
    }
}
