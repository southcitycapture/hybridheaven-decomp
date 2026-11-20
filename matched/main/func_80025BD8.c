#include "common.h"
extern s32 D_800498F0;
extern u8 D_800CBAB4;
extern u8 D_800CBBE0[];
extern u8 *D_800CBDA0;
struct func_800243F0_Struct {
    u8 pad[0x18];
    s16 unk18;
    u8 pad2[0x1D - 0x1A];
    u8 unk1D;
};
extern struct func_800243F0_Struct *D_800CBDA4;
extern void func_80030770(s32, void *, u8);


struct func_80025BD8_Struct {
    u32 unk0;
    u8 pad4[0xC];
    u8 unk10;
};
extern u8 D_800CBAD0[];

/* GGA: sndCmdFxMix */
void func_80025BD8(void) {
    s32 var_a0;
    u8 var_a2;
    struct func_80025BD8_Struct *ptr;

    ptr = (struct func_80025BD8_Struct *) D_800CBDA4;
    if ((ptr->unk0 & 0x7FFF) < 0x100U) {
        var_a0 = 0;
    } else {
        var_a0 = 1;
    }
    var_a2 = *D_800CBDA0;
    D_800CBDA0 += 1;
    var_a2 += D_800CBAD0[var_a0];
    if (var_a2 >= 0x80) {
        var_a2 = 0x7F;
    }
    if (var_a2 != ptr->unk10) {
        ptr->unk10 = var_a2;
        func_80030770(D_800498F0, D_800CBBE0 + D_800CBAB4 * 0x1C, var_a2);
    }
}
