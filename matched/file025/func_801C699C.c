#include "context.h"

typedef struct func_801C699C_Struct {
    u8 pad[0xB0];
    u16 unkB0;
    u16 unkB2;
} func_801C699C_Struct;

extern s32 D_801DA560[];

void func_801C699C(func_801C699C_Struct *arg0, func_801C6580_Struct2 **arg1) {
    f32 sp24;
    f32 sp20;
    f32 x;
    f32 z;
    f32 ratio;
    u16 next;
    func_801C6580_Struct4 *p;
    func_801C6580_Struct3 *q;

    ratio = (f32)(u32)arg0->unkB0 / (f32)(u32)arg0->unkB2;
    func_8012CF8C(arg0, (u8 *)(*arg1)->unk30 + 0x40, 0x473,
        D_801DA560[(u32)(8.0f * ratio) & 7]);
    (*arg1)->unk22 = 1;
    p = D_801BBCD8->unk2C;
    x = p->unk3C - p->unk30;
    z = p->unk44 - p->unk38;
    sp24 = x;
    sp20 = z;
    (*arg1)->unk30->unk12 = (s16)(((s16)func_8001EF38(x, z) + 0x1000) & 0x1FFF);
    z = func_8002FC20(sp24 * sp24 + sp20 * sp20);
    p = D_801BBCD8->unk2C;
    (*arg1)->unk30->unk10 = (s16)(func_8001EF38(p->unk40 - p->unk34, z) & 0x1FFF);
    q = (*arg1)->unk30;
    q->unk4C = (u8)(q->unk4C + 1);
    q = (*arg1)->unk30;
    q->unk4D = (u8)(q->unk4D + 1);
    q = (*arg1)->unk30;
    q->unk4E = (u8)(q->unk4E + 1);
    q = (*arg1)->unk30;
    q->unk4C &= 0xFF;
    q = (*arg1)->unk30;
    q->unk4D &= 0xFF;
    q = (*arg1)->unk30;
    q->unk4E &= 0xFF;
    arg0->unkB0++;
    arg0->unkB0 %= arg0->unkB2;
    if (D_801DA230 == 0) {
        func_80005700(arg0);
    }
}
