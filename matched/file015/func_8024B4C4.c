#include "common.h"

typedef struct func_8024B350_S2 { u8 pad[8]; f32 unk8; } func_8024B350_S2;
typedef struct func_8024B350_G { u8 pad[0x2C]; func_8024B350_S2 *unk2C; } func_8024B350_G;
extern func_8024B350_G *D_801BBCD0;
extern u8 D_80259368[];
extern void func_800058DC(void *, void *);
extern void func_80020718(s32);
extern void func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern void func_801518D4();
typedef struct func_8024B2D8_Struct {
    u8 pad[0x3C];
    u16 unk3C;
    u8 pad3E[6];
    f32 unk44;
} func_8024B2D8_Struct;
typedef struct func_8024B350_S1 { u8 pad[4]; struct { u8 pad[0x30]; func_8024B350_S2 *unk30; } *unk4; } func_8024B350_S1;
void func_8024B654(struct func_8024B654_StructState *arg0, struct func_8024B654_StructObject **arg1);
void func_8024B4C4(func_8024B2D8_Struct *arg0, func_8024B350_S1 *arg1) {
    f32 v;
    if (arg0->unk44 <= (-0.1)) {
        arg0->unk44 = arg0->unk44 + 0.05;
    }
    arg1->unk4->unk30->unk8 += arg0->unk44;
    v = arg1->unk4->unk30->unk8;
    if (v <= -410.0f) {
        arg0->unk3C = 0;
        func_80020718(0x1FC);
        func_801518D4(0, 1, 0xA);
        func_800058DC(arg0, func_8024B654);
        v = arg1->unk4->unk30->unk8;
    }
    D_801BBCD0->unk2C->unk8 = v;
    func_8011AAF4(D_80259368, 0xF0, arg0, 0, 1, 0.0f, 100.800003f, (f32)(arg1->unk4->unk30->unk8 + 16.1), 749.299988f, 0.0f, 100.599998f, (f32)(arg1->unk4->unk30->unk8 + 16.1), 735.200012f, 0.0f, 35.0f, -1, -1);
}
