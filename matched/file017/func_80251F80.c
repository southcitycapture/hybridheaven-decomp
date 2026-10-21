#include "context.h"

typedef struct func_80251F80_Struct2C {
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
} func_80251F80_Struct2C;
typedef struct func_80251F80_Struct { u8 pad[0x2C]; func_80251F80_Struct2C *unk2C; } func_80251F80_Struct;
typedef struct func_80251F80_Glob { u8 pad[0xE0]; func_80251F80_Struct *unkE0; u8 padE4[4]; func_80251F80_Struct *unkE8; } func_80251F80_Glob;

extern s32 D_801C3DC8(void *, f32, f32, f32, f32, f32, f32, f32, f32);
extern s32 func_8015105C(s32);
extern s32 D_8001EF38(f32, f32);
void func_802521D0(func_80251E6C_Obj *arg0, s32 arg1);
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern void func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern s32 func_801C3D20(f32, f32, f32);
extern void func_80020718(s32);
extern u8 D_8025D5E0[];
extern f32 D_8025D798;
extern f64 D_8025D7A0;
extern f64 D_8025D7A8;
extern f64 D_8025D7B0;
extern f64 D_8025D7B8;

#define GG ((func_80251F80_Glob *)D_801BBBF0)

void func_80251F80(func_80251E6C_Obj *arg0, s32 arg1) {
    s16 sp66;
    s32 pad60;
    f32 sp5C;
    func_80251F80_Struct2C *p;

    sp5C = func_8001EAD0(GG->unkE0->unk2C->unk12);
    if (D_801C3DC8(arg0, GG->unkE0->unk2C->unk4, GG->unkE0->unk2C->unk8 + 18.0f, GG->unkE0->unk2C->unkC,
                   sp5C * 40.0f + GG->unkE0->unk2C->unk4, GG->unkE0->unk2C->unk8 + 15.0f,
                   func_8001EB64(GG->unkE0->unk2C->unk12) * 40.0f + GG->unkE0->unk2C->unkC, D_8025D798, 35.0f) == 0
        || func_801C3D20(GG->unkE8->unk2C->unk30, GG->unkE8->unk2C->unk38, 10.0f) != 0) {
        p = GG->unkE0->unk2C;
        sp66 = D_8001EF38(D_8025D7A0 - p->unk4, D_8025D7A8 - p->unkC);
        sp5C = func_8001EAD0(sp66 * 1);
        func_8011AAF4(D_8025D5E0, 0x25C, arg0, 0, 1, 0.0f, D_8025D7B0 - sp5C * 70.0f,
            GG->unkE0->unk2C->unk8 + 15.0f,
            D_8025D7B8 - func_8001EB64(sp66) * 70.0f, 0.0f, 150.0f, 14.0f, 125.0f, 0.0f, 35.0f, -1, -1);
        arg0->unk3C = 0;
        D_8025DE10 = func_8015105C(0xFD);
        func_800058DC(arg0, func_802521D0);
    }
}
