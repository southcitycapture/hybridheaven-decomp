#include "context.h"

typedef struct func_802454C8_StructA {
    u8 pad0[0x30];
    struct func_802454C8_StructB *unk30;
} func_802454C8_StructA;
typedef struct func_802454C8_StructB {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    u16 unk12;
} func_802454C8_StructB;
typedef struct func_802454C8_Obj {
    u8 pad0[0x91];
    u8 unk91;
    u8 pad92[2];
    f32 unk94;
    f32 unk98;
    f32 unk9C;
    u8 padA0[2];
    u16 unkA2;
} func_802454C8_Obj;
extern void func_801FD168(f32, f32, f32, f32, f32, f32, s32, s32, s32, s32, s32, s32);

s32 func_802454C8(func_802454C8_Obj *arg0, func_802454C8_StructA **arg1) {
    if (D_801BBCD0->unk2C->unk4 + 60.0f <= arg0->unk94) {
        return 0;
    }
    func_801FD168(arg0->unk94, arg0->unk98, arg0->unk9C, 0.0f, 0.0f, 0.0f, 0, arg0->unkA2, 0, 0xB, 0, 0);
    if (func_801FD644(arg0->unk94, arg0->unk98, arg0->unk9C, 0.1f, 0x800, 1.0f, 1.0f, (u32)(func_801FD780(arg0->unk91) * 70.0f))) {
        func_80380F94(arg0->unk94, arg0->unk98, arg0->unk9C, 0.0f, 0.0f, 0.0f, 1);
        return 0;
    }
    (*arg1)->unk30->unk4 = arg0->unk94;
    (*arg1)->unk30->unk8 = arg0->unk98;
    (*arg1)->unk30->unkC = arg0->unk9C;
    (*arg1)->unk30->unk12 = arg0->unkA2;
    return 1;
}
