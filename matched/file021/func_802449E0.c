#include "common.h"

extern void func_800058DC(s32, void *);
typedef struct func_802449E0_Inner {
    u8 pad0[0x8];
    f32 unk8;
} func_802449E0_Inner;
typedef struct func_802449E0_Outer {
    u8 pad0[0x30];
    func_802449E0_Inner *unk30;
} func_802449E0_Outer;
typedef struct func_802449E0_Arg0 {
    u8 pad0[0x24];
    func_802449E0_Outer *unk24;
} func_802449E0_Arg0;
extern void func_80244A54();
void func_802449E0(func_802449E0_Arg0 *arg0, s32 arg1) {
    func_802449E0_Inner *temp_v0;

    temp_v0 = arg0->unk24->unk30;
    temp_v0->unk8 = (f32) ((f64) temp_v0->unk8 + 0.23);
    if (!((f64) arg0->unk24->unk30->unk8 < (-34.3))) {
        func_800058DC((s32) arg0, func_80244A54);
    }
}
