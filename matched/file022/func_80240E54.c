#include "context.h"

extern f64 D_80252510;
extern void func_80240ED0(void);

typedef struct func_80240E54_Struct {
    u8 pad0[0x18];
    f32 unk18;
    f32 unk1C;
} func_80240E54_Struct;

typedef struct func_80240E54_Outer {
    u8 pad0[0x2C];
    func_80240E54_Struct *unk2C;
} func_80240E54_Outer;

void func_80240E54(u8 *arg0, func_80240E54_Outer **arg1) {
    s32 temp_v0;
    f64 temp_f0;
    func_80240E54_Struct *temp_v0_2;

    temp_v0 = *(u16 *)(arg0 + 0x92);
    *(u16 *)(arg0 + 0x92) = (u16) (temp_v0 - 1);
    if (temp_v0 != 0) {
        temp_v0_2 = (*arg1)->unk2C;
        temp_f0 = D_80252510;
        temp_v0_2->unk18 = (f32) ((f64) temp_v0_2->unk18 + temp_f0);
        temp_v0_2 = (*arg1)->unk2C;
        temp_v0_2->unk1C = (f32) ((f64) temp_v0_2->unk1C + temp_f0);
        return;
    }
    *(u16 *)(arg0 + 0x92) = 0;
    func_800058DC(arg0, func_80240ED0);
}
