#include "context.h"

typedef struct func_801CB85C_Inner {
    u8 pad[0x12];
    s16 unk12;
    u8 pad2[0x8];
    f32 unk1C;
    u8 pad3[0x2B];
    u8 unk4B;
} func_801CB85C_Inner;
typedef struct func_801CB85C_Obj {
    u8 pad[0x30];
    func_801CB85C_Inner *unk30;
} func_801CB85C_Obj;
typedef struct func_801CB85C_Struct {
    u8 pad[0xA0];
    f32 unkA0;
    u8 pad2[4];
    f32 unkA8;
    u8 pad3[4];
    u16 unkB0;
    u16 unkB2;
} func_801CB85C_Struct;
extern f32 D_801DD308;
extern void D_80005700(func_801CB85C_Struct *, s32, func_801CB85C_Obj **);

void func_801CB85C(func_801CB85C_Struct *arg0, func_801CB85C_Obj **arg1) {
    f32 t;
    func_801CA628_Cam *c;
    s32 cond;

    t = (f32)arg0->unkB0 / (f32)arg0->unkB2;
    t /= arg0->unkA8;
    (*arg1)->unk30->unk4B = (u32)(-255.0f * t + 255.0f);
    c = D_801BBCD8->unk2C;
    (*arg1)->unk30->unk12 = ((s16)func_8001EF38(c->unk3C - c->unk30, c->unk44 - c->unk38) + 0x1000) & 0x1FFF;
    (*arg1)->unk30->unk1C = arg0->unkA0 * D_801DD308 * 300.0f * t;
    cond = (s32)(arg0->unkA8 * (f32)arg0->unkB2) < arg0->unkB0++;
    if (cond) {
        D_80005700(arg0, cond, arg1);
    }
}
