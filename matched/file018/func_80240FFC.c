#include "common.h"
extern void func_800058DC(s32, void *);

extern void func_80241078();

extern const f64 D_8025BE08;

typedef struct func_80240FFC_Struct {
    u8 pad0[0x18];
    f32 unk18;
    f32 unk1C;
} func_80240FFC_Struct;

typedef struct func_80240FFC_Outer {
    u8 pad0[0x2C];
    func_80240FFC_Struct *unk2C;
} func_80240FFC_Outer;

void func_80240FFC(u8 *arg0, func_80240FFC_Outer **arg1) {
    s32 temp_v0;
    f64 temp_f0;
    func_80240FFC_Struct *temp_v0_2;

    temp_v0 = *(u16 *)(arg0 + 0x92);
    *(u16 *)(arg0 + 0x92) = (u16) (temp_v0 - 1);
    if (temp_v0 != 0) {
        temp_v0_2 = (*arg1)->unk2C;
        temp_f0 = D_8025BE08;
        temp_v0_2->unk18 = (f32) ((f64) temp_v0_2->unk18 + temp_f0);
        temp_v0_2 = (*arg1)->unk2C;
        temp_v0_2->unk1C = (f32) ((f64) temp_v0_2->unk1C + temp_f0);
        return;
    }
    *(u16 *)(arg0 + 0x92) = 0;
    func_800058DC((s32)arg0, func_80241078);
}
