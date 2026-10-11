#include "context.h"

typedef struct func_8035C4C0_Struct {
    u8 pad0[0x4C];
    u16 unk4C;
    u16 unk4E;
} func_8035C4C0_Struct;

extern void func_80222708(void);

void func_8035C4C0(s32 arg0, s32 arg1) {
    u8 *v0;
    u8 *a3;
    func_8035C4C0_Struct *p;

    if (arg0 == D_801BBCCC) {
        v0 = D_801BC03C;
    } else {
        v0 = D_801BC3D8;
    }
    if (arg0 != D_801BBCCC) {
        a3 = D_801BC03C;
    } else {
        a3 = D_801BC3D8;
    }
    v0[0x392] = 0;
    if (D_8038CC10 != NULL) {
        return;
    }
    p = (func_8035C4C0_Struct *)D_8038CC14;
    if (p != NULL) {
        if (p->unk4C >= p->unk4E) {
            p->unk4C |= 0x8000;
        }
        return;
    }
    v0[0x2FA] = 0;
    v0[0x31] &= 0xFFF8;
    v0[0x30] &= 0xFF7F;
    v0[0x30] &= 0xFE;
    v0[0x31] &= 0x7F;
    func_8013AE20((void *)arg0, arg1, 0, a3);
    v0[0x394] = 1;
    if (v0[0x2DA] != 0 || (a3[0x2D8] != 0 && a3[0x2D8] != 1 && a3[0x2D8] != 9 && a3[0x2D8] != 0xA && a3[0x2D8] != 0xF && a3[0x2D8] != 0xD)) {
        a3[0x31] &= 0xFFF8;
        a3[0x30] &= 0xFF7F;
        a3[0x30] &= 0xFE;
        a3[0x31] &= 0x7F;
    }
    p = (func_8035C4C0_Struct *)D_8038CC14;
    if (p != NULL) {
        p->unk4C |= 0x8000;
    }
    func_800058DC((void *)arg0, func_80222708);
}
