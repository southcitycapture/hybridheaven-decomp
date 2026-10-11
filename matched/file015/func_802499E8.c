#include "context.h"

struct func_802499E8_Inner {
    u8 pad[0xC];
    f32 unkC;
};
struct func_802499E8_Struct {
    u8 pad[0x2C];
    struct func_802499E8_Inner *unk2C;
};
struct func_802499E8_Arg {
    u8 pad[0x5C];
    s32 unk5C;
};

extern s32 func_80010550(s32, s32);
extern void func_80249A84();
extern func_8024AA38_Struct D_80253070;
extern f64 D_80259178;

void func_802499E8(struct func_802499E8_Arg *arg0, void **arg1) {
    s32 val;

    val = arg0->unk5C;
    func_80010550(arg1, val);
    if ((f64) ((struct func_802499E8_Struct *) *arg1)->unk2C->unkC <= D_80259178) {
        func_8013A1B4((s32) arg1, D_80253070, 0xFFFFFF);
        func_800058DC(arg0, (void *) func_80249A84);
    }
}
