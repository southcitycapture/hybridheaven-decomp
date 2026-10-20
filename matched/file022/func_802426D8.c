#include "context.h"

typedef struct func_802426D8_StructB {
    u8 pad0[0x18];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
} func_802426D8_StructB;
typedef struct func_802426D8_StructA {
    u8 pad0[0x30];
    func_802426D8_StructB *unk30;
} func_802426D8_StructA;

extern u16 D_80089474[];

void func_802426D8(s32 arg0, func_802426D8_StructA **arg1) {
    if (D_80089474[1] & 2) {
        (*arg1)->unk30->unk18 = (f32)((f64)(*arg1)->unk30->unk18 + 1.0);
        (*arg1)->unk30->unk1C = (f32)((f64)(*arg1)->unk30->unk1C + 1.0);
        (*arg1)->unk30->unk20 = (f32)((f64)(*arg1)->unk30->unk20 + 1.0);
    }
    if (D_80089474[1] & 1) {
        (*arg1)->unk30->unk18 = (f32)((f64)(*arg1)->unk30->unk18 - 1.0);
        (*arg1)->unk30->unk1C = (f32)((f64)(*arg1)->unk30->unk1C - 1.0);
        (*arg1)->unk30->unk20 = (f32)((f64)(*arg1)->unk30->unk20 - 1.0);
    }
}
