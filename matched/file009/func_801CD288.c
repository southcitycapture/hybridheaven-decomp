#include "context.h"
struct func_801CD288_Struct {
    u8 pad[0x6C];
    f32 unk6C;
    f32 unk70;
    f32 unk74;
    u8 unk78[4];
};
extern f32 D_801E3434;
extern f32 D_801E3438;
extern s32 D_801CE330(void *, s32, f32, f32, f32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, f32, s32);

void func_801CD288(struct func_801CD288_Struct *arg0, s32 arg1) {
    f32 sp6C;
    f32 sp68;
    f32 sp64;
    u8 *p;
    u8 sp5F;
    s32 t;

    sp6C = arg0->unk6C;
    sp68 = arg0->unk70;
    sp64 = arg0->unk74;
    t = func_8012C6B4(3) + 1;
    sp5F = t;
    func_801CE330(arg0, 0x14, sp6C, sp68, sp64, 0xFF, 0xFF, 0xFF, 0xFF, 0x40, 0x40, 0x40, 0, t, 0x18, D_801E3434, 1);
    p = &arg0->unk78[3];
    t = D_801CE330(arg0, 0x15, sp6C, sp68, sp64, 0xFF, 0xFF, 0xFF, 0xFF, 0x40, 0x40, 0x40, 0, 1, 0x18, D_801E3438, 1);
    *p += sp5F;
    if (t) {
    }
    if (*p >= 6) {
        func_800058DC(arg0, func_801CD1CC);
    }
}
