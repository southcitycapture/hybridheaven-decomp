#include "context.h"
extern void func_80005700();
extern void func_801FA624(s32);

extern s32 D_802170B8;
extern f64 D_80218E18;
extern f64 D_80218E20;

struct func_801FABC8_Sub {
    u8 pad0[0x1C];
    f32 unk1C;
};

struct func_801FABC8_Obj {
    u8 pad0[0x30];
    struct func_801FABC8_Sub *unk30;
};

void func_801FABC8(s32 arg0, struct func_801FABC8_Obj **arg1) {
    struct func_801FABC8_Sub *temp_v0;
    f32 temp_fv0;

    temp_v0 = (*arg1)->unk30;
    temp_fv0 = temp_v0->unk1C;
    temp_fv0 = (f32) ((f64) temp_fv0 * D_80218E18);
    if ((f64) temp_fv0 < D_80218E20) {
        D_802170B8 = 0;
        func_80005700(arg0);
        func_801FA624(0x12C);
        return;
    }
    temp_v0->unk1C = temp_fv0;
}
