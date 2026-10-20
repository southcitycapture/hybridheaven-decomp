#include "context.h"

typedef struct func_8024B350_S2 { u8 pad[8]; f32 unk8; } func_8024B350_S2;
typedef struct func_8024B350_S1 { u8 pad[4]; struct { u8 pad[0x30]; func_8024B350_S2 *unk30; } *unk4; } func_8024B350_S1;
typedef struct func_8024B350_G { u8 pad[0x2C]; func_8024B350_S2 *unk2C; } func_8024B350_G;
typedef struct func_8024B350_A0 { u8 pad[0x44]; f32 unk44; } func_8024B350_A0;
extern func_8024B350_G *D_801BBCD0;
extern u8 D_80259330[];
extern f64 D_802593E0;
extern f32 D_802593E8;
extern f64 D_802593F0;
extern f32 D_802593F8;
extern f32 D_802593FC;
extern f32 D_80259400;
extern void func_8024B4C4();
extern void func_800058DC(void *, void *);
extern void func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);

void func_8024B350(func_8024B350_A0 *arg0, func_8024B350_S1 *arg1) {
    if (arg0->unk44 > -1.0) {
        arg0->unk44 = arg0->unk44 - D_802593E0;
    }
    arg1->unk4->unk30->unk8 = arg1->unk4->unk30->unk8 + arg0->unk44;
    if (arg1->unk4->unk30->unk8 <= -390.0f) {
        func_800058DC(arg0, func_8024B4C4);
    }
    D_801BBCD0->unk2C->unk8 = arg1->unk4->unk30->unk8;
    func_8011AAF4(D_80259330, 0xDA, arg0, 0, 1, 0.0f, D_802593E8, (f32)(arg1->unk4->unk30->unk8 + D_802593F0), D_802593F8, 0.0f, D_802593FC, (f32)(arg1->unk4->unk30->unk8 + D_802593F0), D_80259400, 0.0f, 35.0f, -1, -1);
}
