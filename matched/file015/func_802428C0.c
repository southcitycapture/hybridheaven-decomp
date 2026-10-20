#include "context.h"

typedef struct func_802428C0_Struct {
    u8 pad0[0x1E8];
    f32 unk1E8;
    f32 unk1EC;
    f32 unk1F0;
    f32 unk1F4;
    f32 unk1F8;
    f32 unk1FC;
} func_802428C0_Struct;
typedef struct func_802428C0_Arg {
    u8 pad0[0x90];
    u16 unk90;
} func_802428C0_Arg;
extern void func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern f32 D_802585EC, D_802585F0, D_802585F4, D_802585F8, D_802585FC;
extern u8 D_80258450[];
extern u8 D_80252164[];
struct func_802429D8_StructArg;
void func_802429D8(struct func_802429D8_StructArg *arg0, s32 arg1);

void func_802428C0(func_802428C0_Arg *arg0, s32 arg1) {
    func_802428C0_Struct *s;
    if (func_800178E8() != 0) {
        s = (func_802428C0_Struct *)&D_801BBBF0;
        s->unk1E8 = D_802585EC;
        s->unk1EC = D_802585F0;
        s->unk1F0 = D_802585F4;
        s->unk1F4 = D_802585F8;
        s->unk1F8 = 16.5f;
        s->unk1FC = D_802585FC;
        func_8011AAF4(D_80258450, 0x376, arg0, 0, 1, 0.0f, s->unk1E8, s->unk1EC, s->unk1F0, 0.0f, s->unk1F4, s->unk1F8, s->unk1FC, 0.0f, 35.0f, -1, -1);
        func_800179B0(D_80252164);
        arg0->unk90 = 0;
        func_800058DC(arg0, func_802429D8);
    }
}
