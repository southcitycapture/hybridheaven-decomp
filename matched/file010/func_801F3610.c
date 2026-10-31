#include "common.h"
extern void func_800058DC(void *, void *);
extern s32 func_8012AAE8(void *, s32, f32, s32, f32);
struct func_801F2A20_Struct30 {
    u8 pad0[4];
    s32 unk4;
    f32 unk8;
    s32 unkC;
};
void func_801F3430(void *arg0, void *arg1);


struct func_801F3610_S38 {
    u8 pad0[8];
    s16 unk8;
    u8 padA[6];
    u32 unk10;
};
struct func_801F3610_S24 {
    u8 pad0[0x30];
    struct func_801F2A20_Struct30 *unk30;
};
struct func_801F3610_Arg {
    u8 pad0[0x24];
    struct func_801F3610_S24 *unk24;
    u8 pad28[0x10];
    struct func_801F3610_S38 *unk38;
    u8 pad3C[0x64];
    f32 unkA0;
    f32 unkA4;
};

void func_801F3610(struct func_801F3610_Arg *arg0, s32 arg1) {
    struct func_801F3610_S38 *v1;
    f32 a;
    f32 u;
    f32 q;
    f32 t;
    f32 divisor;

    if (arg0->unkA4 == 0.0) {
        v1 = arg0->unk38;
        divisor = 20.0f;
        if ((a = arg0->unkA0, a < (t = (u = (f32)(v1->unk10 & 0xFFFF)) / divisor))) {
            q = u / 1000.0f;
            arg0->unkA0 = a + q;
        } else {
            arg0->unkA0 = t;
            arg0->unkA4 = (f32)((f64)arg0->unk24->unk30->unk8 - ((f64)(f32)v1->unk8 / 10.0 + 0.5) - (f64)((f32)(v1->unk10 & 0xFFFF) / divisor));
        }
    } else {
        v1 = arg0->unk38;
        if ((f64)(f32)(s16)(v1->unk10 >> 16) + 0.5 - (f64)arg0->unk24->unk30->unk8 < (f64)arg0->unkA4) {
            u = (f32)(v1->unk10 & 0xFFFF);
            a = arg0->unkA0;
            if (u / 100.0f < a) {
                arg0->unkA0 = a - u / 1000.0f;
            }
        }
    }
    if (func_8012AAE8(arg0, arg0->unk24->unk30->unk4, (f32)((f64)(f32)(s16)(v1->unk10 >> 16) + 0.5), arg0->unk24->unk30->unkC, arg0->unkA0) == 0) {
        arg0->unk24->unk30->unk8 = (f32)((f64)(f32)(s16)(arg0->unk38->unk10 >> 16) + 0.5);
        func_800058DC((s32)arg0, (void *)func_801F3430);
    }
}
