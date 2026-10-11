#include "context.h"

struct func_802416A8_Struct0 {
    u8 pad[0x92];
    u16 unk92;
};

struct func_802416A8_Struct1 {
    u8 pad0[0x18];
    f32 unk18;
    u8 pad1[0x4];
    f32 unk20;
};

struct func_802416A8_Struct2 {
    u8 pad0[0x14];
    struct func_802416A8_Struct3 *unk14;
};

struct func_802416A8_Struct3 {
    u8 pad0[0x30];
    struct func_802416A8_Struct1 *unk30;
};

/* D_801BCC25 + 0x9B is 0x801BCCC0, so the pointer sits at +0x9C from D_801BCC24 (4-byte aligned) */
struct func_802416A8_Globals {
    u8 pad[0x9C];
    struct func_802416A8_Struct0 *unk9C;
};

extern struct func_802416A8_Globals D_801BCC24;
extern f64 D_8025BE40;
extern void func_8024173C(void);

void func_802416A8(struct func_802416A8_Struct0 *arg0, struct func_802416A8_Struct2 *arg1) {
    u32 temp_v0;
    struct func_802416A8_Struct1 *temp_v0_2;
    f64 temp_f0;
    u16 one;

    one = 1;
    temp_v0 = arg0->unk92;
    arg0->unk92 = temp_v0 - 1;
    if (temp_v0 != 0) {
        temp_f0 = D_8025BE40;
        temp_v0_2 = arg1->unk14->unk30;
        temp_v0_2->unk18 = (f32) ((f64) temp_v0_2->unk18 + temp_f0);
        temp_v0_2 = arg1->unk14->unk30;
        temp_v0_2->unk20 = (f32) ((f64) temp_v0_2->unk20 + temp_f0);
        return;
    }
    D_801BCC24.unk9C->unk92 = one;
    func_800058DC((s32) arg0, (void *) func_8024173C);
    arg0->unk92 = 0;
}
