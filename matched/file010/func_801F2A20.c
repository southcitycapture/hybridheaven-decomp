#include "context.h"

struct func_801F2A20_Struct30 {
    u8 pad0[4];
    s32 unk4;
    f32 unk8;
    s32 unkC;
};
struct func_801F2A20_Struct24 {
    u8 pad0[0x30];
    struct func_801F2A20_Struct30 *unk30;
};
struct func_801F2A20_Struct38 {
    u8 pad0[0x10];
    u32 unk10;
    u8 pad14[4];
    u32 unk18;
};
struct func_801F2A20_Arg0 {
    u8 pad0[0x24];
    struct func_801F2A20_Struct24 *unk24;
    u8 pad28[0x10];
    struct func_801F2A20_Struct38 *unk38;
};
struct func_801F2A20_Arg1 {
    struct func_801F2A20_Struct24 *unk0;
    struct func_801F2A20_Struct24 *unk4;
};
extern s32 func_8012AAE8(void *, s32, f32, s32, f32);
extern void func_801F1D74(func_801F1D74_Arg0 *arg0, s32 arg1);

void func_801F2A20(struct func_801F2A20_Arg0 *arg0, struct func_801F2A20_Arg1 *arg1) {
    struct func_801F2A20_Struct30 *p;
    u32 v;

    p = arg0->unk24->unk30;
    v = arg0->unk38->unk10;

    if (func_8012AAE8(arg0, p->unk4, (f32)((f64)(f32)(s16)(v >> 16) + 0.5), p->unkC, (f32)(v & 0xFFFF)) == 0) {
        arg0->unk24->unk30->unk8 = (f32)((f64)(f32)(s16)(arg0->unk38->unk10 >> 16) + 0.5);
        func_800058DC((s32)arg0, func_801F1D74);
    }
    if ((arg0->unk38->unk18 >> 8) & 0xFF) {
        arg1->unk4->unk30->unk8 = arg1->unk0->unk30->unk8;
    }
}
