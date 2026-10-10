#include "context.h"

struct func_8021F9C8_Struct {
    u8 pad0[0x2];
    s16 unk2;
    u8 pad1[0x30 - 0x4];
    u16 unk30;
    u8 unk32;
    u8 pad2[0x328 - 0x33];
    u8 unk328;
    u8 pad3[0x392 - 0x329];
    u8 unk392;
};

struct func_8021F9C8_Actor {
    u8 pad0[0x5C];
    s32 unk5C;
};

struct func_8021F9C8_Dev {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 pad1[0xEC - 0xE0];
    s32 unkEC;
    u8 pad2[0x1031 - 0xF0];
    u8 unk1031;
};

extern struct func_80220F60_Struct D_801BBBF0;
extern struct func_8021F9C8_Struct D_801BC03C;
extern struct func_8021F9C8_Struct D_801BC3D8;
extern s32 func_80010550(s32, s32);
extern void func_802233B0(s32, s32);
extern void func_8022397C(s32);
extern void func_802237B0(s32, s32);

void func_8021F9C8(s32 arg0, s32 arg1) {
    s32 sp2C;
    struct func_8021E52C_Struct *sp20;
    struct func_8021F9C8_Struct *var_s0;

    sp2C = ((struct func_8021F9C8_Actor *) arg0)->unk5C;
    if (arg0 == ((struct func_8021F9C8_Dev *) &D_801BBBF0)->unkDC) {
        var_s0 = &D_801BC03C;
    } else {
        var_s0 = &D_801BC3D8;
    }
    if ((var_s0->unk2 <= 0) || ((((*(u32 *) &var_s0->unk30) << 1) >> 30) != 0)) {
        func_802233B0(arg0, arg1);
    } else if (((struct func_8021F9C8_Dev *) &D_801BBBF0)->unk1031 == 5) {
        if ((var_s0->unk30 & 7) - 5 == 0) {
            func_8022397C(arg0);
        } else {
            func_802237B0(arg0, 1);
            if (func_80010550(arg1, sp2C) != 0) {
                var_s0->unk328 = 0;
                var_s0->unk32 = var_s0->unk32 & 0xFF1F;
                sp20 = (struct func_8021E52C_Struct *) (sp2C + 0x1C);
                func_802256E4(sp20, arg0, 0);
                func_8013A28C(arg1, *sp20);
                func_800058DC(arg0, &func_8021E59C);
            }
            var_s0->unk392 = 0;
        }
    }
}
