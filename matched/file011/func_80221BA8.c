#include "context.h"

extern void func_80222B08();

struct func_80221BA8_Struct {
    u8 pad0[2];
    s16 unk2;
    u8 pad4[0x30 - 4];
    union {
        u32 w;
        struct {
            u32 a : 1;
            u32 b : 2;
            u32 pad : 6;
            u32 c : 2;
            u32 rest : 21;
        } f;
        struct {
            u8 b0;
            u8 top : 1;
            u8 mode : 2;
            u8 low : 5;
        } b;
    } flags;
    u8 pad34[0x2F9 - 0x34];
    u8 unk2F9;
    u8 pad2FA[0x392 - 0x2FA];
    u8 unk392;
};

void func_80221BA8(s32 arg0, s32 arg1) {
    s32 temp;
    struct func_80221BA8_Struct *p;

    temp = ((struct func_8021F9C8_Actor *)arg0)->unk5C;
    if (arg0 == D_801BBBF0.unkDC) {
        p = (struct func_80221BA8_Struct *)&D_801BC03C;
    } else {
        p = (struct func_80221BA8_Struct *)&D_801BC3D8;
    }
    p->unk392 = 0;
    if (D_801BBBF0.unk1031 != 0xF) {
        func_802237B0(arg0, 1);
        if (func_80010550(arg1, temp)) {
            if (p->unk2 <= 0 || p->flags.f.b != 0) {
                func_800058DC(arg0, func_80222B08);
                return;
            }
            if (p->flags.f.c == 0) {
                p->flags.b.mode = p->unk2F9 + 2;
            }
            func_800058DC(arg0, func_80222708);
        }
    }
}
