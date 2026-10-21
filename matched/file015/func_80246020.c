#include "context.h"

struct func_80246020_Struct_A { u8 pad[0x3C]; u16 unk3C; u8 pad2[2]; f32 unk40; f32 unk44; };
struct func_80246020_Struct_S { u8 pad[0x4]; f32 unk4; };
struct func_80246020_Struct_P { u8 pad[0x30]; struct func_80246020_Struct_S *unk30; };
struct func_80246020_Struct_B { u8 pad[0xC]; struct func_80246020_Struct_P *unkC; struct func_80246020_Struct_P *unk10; };
struct func_80246020_Struct_G { u8 pad[0x1E8]; f32 f[6]; };
extern void func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern u8 D_80258980[];
extern struct func_80246020_Struct_G D_801BBBF0;
extern f64 D_80258B50;
extern f64 D_80258B58;
extern f32 D_80258B60;
extern f32 D_80258B64;
extern f32 D_80258B68;
extern f32 D_80258B6C;
extern f32 D_80258B70;
extern f32 D_80258B74;
extern f32 D_80258B78;
extern u8 func_802461CC[];
extern void func_80020718(s32);
extern s32 func_80010550();

void func_80246020(struct func_80246020_Struct_A *arg0, struct func_80246020_Struct_B *arg1) {
    u16 t = arg0->unk3C;
    arg0->unk3C = t + 1;
    if (t >= 0xF) {
        if (t == 0xF) {
            func_80020718(0x1B9);
        }
        arg1->unkC->unk30->unk4 = arg1->unkC->unk30->unk4 - arg0->unk40;
        arg1->unk10->unk30->unk4 = -arg1->unkC->unk30->unk4;
        arg0->unk40 = (f64)arg0->unk40 * D_80258B50;
        if ((f64)arg0->unk40 < D_80258B58) {
            D_801BBBF0.f[0] = D_80258B60;
            D_801BBBF0.f[1] = D_80258B64;
            D_801BBBF0.f[2] = D_80258B68;
            D_801BBBF0.f[3] = D_80258B6C;
            D_801BBBF0.f[4] = D_80258B70;
            D_801BBBF0.f[5] = D_80258B74;
            func_8011AAF4(D_80258980, 0x35D, arg0, 0, 1, 0.0f, D_801BBBF0.f[0], D_801BBBF0.f[1], D_801BBBF0.f[2], 0.0f, D_801BBBF0.f[3], D_801BBBF0.f[4], D_801BBBF0.f[5], 0.0f, 35.0f, -1, -1);
            arg0->unk3C = 0;
            arg0->unk44 = D_80258B78;
            func_800058DC(arg0, func_802461CC);
        }
    }
}
