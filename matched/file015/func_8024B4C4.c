#include "context.h"
extern u8 D_80259368[];
extern f64 D_80259408;
extern f64 D_80259410;
extern f32 D_80259418;
extern f64 D_80259420;
extern f32 D_80259428;
extern f32 D_8025942C;
extern f32 D_80259430;
struct func_8024B654_StructState;
struct func_8024B654_StructObject;
void func_8024B654(struct func_8024B654_StructState *arg0, struct func_8024B654_StructObject **arg1);

void func_8024B4C4(func_8024B2D8_Struct *arg0, func_8024B350_S1 *arg1) {
    f32 v;
    if (arg0->unk44 <= D_80259408) {
        arg0->unk44 = arg0->unk44 + D_80259410;
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
    func_8011AAF4(D_80259368, 0xF0, arg0, 0, 1, 0.0f, D_80259418, (f32)(arg1->unk4->unk30->unk8 + D_80259420), D_80259428, 0.0f, D_8025942C, (f32)(arg1->unk4->unk30->unk8 + D_80259420), D_80259430, 0.0f, 35.0f, -1, -1);
}
