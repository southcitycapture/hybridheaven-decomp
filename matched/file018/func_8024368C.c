#include "context.h"

struct func_8024368C_Inner {
    u8 pad0[0x78];
    s16 unk78;
};
struct func_8024368C_Struct {
    u8 pad0[0x30];
    s32 unk30;
    u8 pad1[0x5C - 0x34];
    struct func_8024368C_Inner *unk5C;
    u8 pad2[0x94 - 0x60];
    s16 unk94;
};
extern struct func_80242C60_Cfg D_80258DB0;
extern void func_80242E5C();
extern s32 func_8012A564(void *, s32);
extern u8 D_802438BC[];

void func_8024368C(struct func_8024368C_Struct *arg0, s32 arg1) {
    struct func_8024368C_Inner *sp2C[1];

    sp2C[0] = arg0->unk5C;
    if (func_80242620() == 0 && D_80242714(arg0) == 0) {
        if ((arg0->unk30 & 8) || (arg0->unk30 & 0x80)) {
            sp2C[0]->unk78 = 1;
            arg0->unk94 = 0x40;
            func_800058DC(arg0, (void (*)())D_802438BC);
            return;
        }
        if (func_8012CE9C(arg1, sp2C[0], D_80258DB0, 10) == 0) {
            func_80010550(arg1, sp2C[0]);
            if (arg0->unk94-- == 0) {
                sp2C[0]->unk78 = 1;
                func_800058DC(arg0, func_80242E5C);
                return;
            }
            if (func_8012A564(arg0, 0x43340000) == 0) {
                sp2C[0]->unk78 = 1;
                func_800058DC(arg0, func_80242E5C);
            }
        }
    }
}
