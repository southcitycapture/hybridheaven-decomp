#include "context.h"

struct func_801FAAB8_StructInner {
    u8 pad[0x22];
    u8 unk22;
};
struct func_801FAAB8_Struct {
    u8 pad[0x24];
    struct func_801FAAB8_StructInner *unk24;
    u8 pad28[0x3C - 0x28];
    u16 unk3C;
    u8 pad3E[0x92 - 0x3E];
    s16 unk92;
};
extern f32 func_8001EAD0(s16);
extern void func_801453CC(void *, s32, s32, s32, s32, s32, s32);
extern f64 D_80218E10;
struct func_801FAAB8_StructSub {
    u8 pad[0x1C];
    f32 unk1C;
};
struct func_801FAAB8_StructObj {
    u8 pad[0x30];
    struct func_801FAAB8_StructSub *unk30;
};
struct func_801FAB94_Struct;
extern void func_801FAB94(s32, struct func_801FAB94_Struct **);

void func_801FAAB8(struct func_801FAAB8_Struct *arg0, struct func_801FAAB8_StructObj **arg1) {
    arg0->unk24->unk22 = 1;
    if (arg0->unk3C++ < 0x10) {
        func_801453CC(*arg1, 0x100, 0, 3, 1, 3, 5);
    }
    (*arg1)->unk30->unk1C = (f32) ((f64) (func_8001EAD0(arg0->unk92) + 1.0f) * D_80218E10);
    arg0->unk92 = arg0->unk92 + 0x100;
    if (arg0->unk92 >= 0x1001) {
        func_800058DC((s32) arg0, func_801FAB94);
    }
}
