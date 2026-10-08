#include "context.h"

extern f64 D_8025DC98;
extern f64 D_8025DCA0;

struct func_80257418_Struct30 {
    u8 pad0[0x18];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    u8 pad1[0x4B - 0x24];
    u8 unk4B;
};

struct func_80257418_Struct0 {
    u8 pad0[0x30];
    struct func_80257418_Struct30 *unk30;
};

void func_80257418(s32 arg0, struct func_80257418_Struct0 **arg1) {
    struct func_80257418_Struct30 *temp_v0;
    f64 temp_f0;

    temp_f0 = D_8025DC98;
    temp_v0 = (*arg1)->unk30;
    temp_v0->unk18 = (f32) ((f64) temp_v0->unk18 * temp_f0);
    temp_v0 = (*arg1)->unk30;
    temp_v0->unk20 = (f32) ((f64) temp_v0->unk20 * temp_f0);
    temp_v0 = (*arg1)->unk30;
    temp_v0->unk1C = (f32) ((f64) temp_v0->unk1C + D_8025DCA0);
    temp_v0 = (*arg1)->unk30;
    temp_v0->unk4B = (u8) (temp_v0->unk4B - 8);
    if ((s32) (*arg1)->unk30->unk4B < 8) {
        func_80005700(arg0, (void **) arg1);
    }
}
