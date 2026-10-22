#include "context.h"

struct func_8022FFFC_Struct {
    u8 pad0[0x30];
    u16 unk30;
    u8 pad1[0x40 - 0x32];
    s16 unk40;
    u8 pad2[0x9E - 0x42];
    u16 unk9E;
    u8 pad3[0xA4 - 0xA0];
    u8 unkA4;
};
extern void func_803796E4();

void func_8022FFFC(struct func_8022FFFC_Struct *arg0) {
    s32 g = (s32)D_801BBBF0;
    struct func_8022FFFC_Struct *v1;
    u16 t;

    if ((s32)arg0 == g + 0x44C) {
        v1 = (struct func_8022FFFC_Struct *)D_801BC3D8;
    } else {
        v1 = (struct func_8022FFFC_Struct *)D_801BC03C;
    }
    if (arg0->unk9E != 0 && (*(u16 *)(g + 0x30) & 1) && !(arg0->unk30 & 7) && !(v1->unk30 & 7)) {
        if ((arg0->unk9E % 10) == 0) {
            arg0->unk40 = (arg0->unkA4 * 10) / 100;
        }
        arg0->unk9E = arg0->unk9E - 1;
        if (arg0->unk9E == 0) {
            func_803796E4(arg0, g);
        }
    }
}
