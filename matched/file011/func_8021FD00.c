#include "common.h"
struct func_80220F60_Struct {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 pad1[0xEC - 0xE0];
    s32 unkEC;
    u8 pad2[0x1031 - 0xF0];
    u8 unk1031;
};
extern struct func_80220F60_Struct D_801BBBF0;
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
extern struct func_8021F9C8_Struct D_801BC03C;
extern struct func_8021F9C8_Struct D_801BC3D8;
extern void func_800058DC(s32 arg0, void *arg1);
extern s32 func_80010550(s32, s32);
struct func_8021F9C8_Actor {
    u8 pad0[0x5C];
    s32 unk5C;
};
s32 func_802233B0(s32 arg0, s32 arg1);
extern s32 func_8022397C();

extern void func_80222708();

struct func_8021FD00_Struct {
    u8 pad0[2];
    s16 unk2;
    u8 pad4[0x2C];
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
            u16 pad : 13;
            u16 e : 3;
            u8 d : 3;
            u8 rest : 5;
            u8 last;
        } g;
    } unk30;
    u8 pad34[0x392 - 0x34];
    u8 unk392;
};

void func_8021FD00(s32 arg0, s32 arg1) {
    s32 temp_a3;
    struct func_8021FD00_Struct *var_v1;

    temp_a3 = ((struct func_8021F9C8_Actor *)arg0)->unk5C;
    if (arg0 == D_801BBBF0.unkDC) {
        var_v1 = (struct func_8021FD00_Struct *)&D_801BC03C;
    } else {
        var_v1 = (struct func_8021FD00_Struct *)&D_801BC3D8;
    }
    var_v1->unk392 = 0;
    if (D_801BBBF0.unk1031 == 5) {
        if (var_v1->unk2 <= 0 || var_v1->unk30.f.b != 0) {
            func_802233B0(arg0, arg1);
            return;
        }
        if ((*(u16 *)&var_v1->unk30 & 7) == 5U) {
            func_8022397C(arg0);
            return;
        }
        if (func_80010550(arg1, temp_a3) != 0) {
            var_v1->unk30.f.c ^= 1;
            var_v1->unk30.g.d = 0;
            func_800058DC(arg0, func_80222708);
        }
    }
}
