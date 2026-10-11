#include "context.h"
struct func_802488E8_StructArg {
    u8 pad0[0x2C];
    u32 unk2C;
    u8 pad1[0x40 - 0x30];
    f32 unk40;
    f32 unk44;
    f32 unk48;
    u8 pad2[0x54 - 0x4C];
    s32 unk54;
};

extern void func_80005700(void *arg0);
extern s32 func_80126944(void);
extern s32 D_8024F518;

void func_80247634(struct func_802488E8_StructArg *arg0, s32 arg1) {
    if (D_8024F518 == 8 && func_80126944() == 1) {
        arg0->unk2C &= ~0xC00;
    } else {
        arg0->unk2C |= 0xC00;
    }
    if (D_8024F518 >= 0xB) {
        func_80005700(arg0);
    }
}
