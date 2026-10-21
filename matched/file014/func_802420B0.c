#include "context.h"

struct func_802420B0_StructB { u8 pad0[4]; f32 unk4; f32 unk8; f32 unkC; };
struct func_802420B0_StructC { u8 pad0[0x30]; struct func_802420B0_StructB *unk30; };
struct func_802420B0_Struct { u8 pad0[0x24]; struct func_802420B0_StructC *unk24; u8 pad1[0x14]; u16 unk3C; };
extern void func_80129FB8(f32, f32, f32, f32, f32, f32, f32, s32, s32, s32, s32, s32, s32, s32, s32, f32, s32, s32);
extern s32 func_8012C6B4(s32);
void func_802422C0(s32 arg0, s32 arg1);
extern u8 D_8024A42C[];
extern f32 D_8024A5BC;
extern f64 D_8024A5C0;
extern f64 D_8024A5C8;

void func_802420B0(struct func_802420B0_Struct *arg0, s32 arg1) {
    s32 sp64;

    sp64 = arg0->unk3C++;
    if ((sp64 < 0xF) && !(sp64 % 2)) {
        func_80129FB8((f32) (((f64) (func_8012C6B4(0x3E8) - 0x1F4) / 100.0) + (f64) arg0->unk24->unk30->unk4), arg0->unk24->unk30->unk8 + 2.0f, (f32) (((f64) (func_8012C6B4(0x3E8) - 0x1F4) / 100.0) + (f64) arg0->unk24->unk30->unkC), 0.0f, D_8024A5BC, 0.0f, 0.0f, 0, 0, 0, 0, 0, 0, 0x50, -4, (f32) (((f64) func_8012C6B4(0x3C) / D_8024A5C0) + D_8024A5C8), 1, 0);
    }
    if (sp64 >= 0x1E) {
        func_8011AAF4(D_8024A42C, 0x1DE, (s32)arg0, 0, 1, 0.0f, 35.0f, 34.0f, 134.0f, 0.0f, 35.0f, 5.0f, 310.0f, 0.0f, 35.0f, -1, -1);
        func_800058DC(arg0, (void *)func_802422C0);
    }
}
