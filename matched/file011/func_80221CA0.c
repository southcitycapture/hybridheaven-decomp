#include "common.h"
extern s32 D_801BBCCC;
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


struct func_80221CA0_Struct {
    u8 pad0[0x30];
    union {
        u32 w;
        struct {
            u8 b0;
            u8 b1x : 1;
            u8 f : 2;
            u8 b1y : 5;
        } b;
    } u30;
    u8 pad1[0x2D8 - 0x34];
    u8 unk2D8;
    u8 unk2D9;
    u8 pad2[0x392 - 0x2DA];
    u8 unk392;
};

#define PC03C ((struct func_80221CA0_Struct *)&D_801BC03C)
#define PC3D8 ((struct func_80221CA0_Struct *)&D_801BC3D8)

void func_80221CA0(s32 arg0) {
    struct func_80221CA0_Struct *p1;
    struct func_80221CA0_Struct *p0;
    s32 var_a0;
    s32 var_v0;
    s32 var_a1;
    u8 x;

    if (arg0 == D_801BBCCC) {
        p1 = PC03C;
    } else {
        p1 = PC3D8;
    }
    if (arg0 != D_801BBCCC) {
        p0 = PC03C;
    } else {
        p0 = PC3D8;
    }
    p1->unk392 = 0;
    x = p0->unk2D8;
    if ((x == 0) || (x == 1) || (x == 0xF) || (x == 9) || (x == 0xA)) {
        switch (p0->unk2D9) {
        case 0x52:
            var_a0 = 0;
            if (p0->u30.b.f == 3) {
                var_v0 = 1;
            } else {
                var_v0 = 0;
            }
            break;
        case 0x23:
            var_a0 = 2;
            if (p0->u30.b.f == 3) {
                var_v0 = 0;
            } else {
                var_v0 = 1;
            }
            break;
        case 0x24:
            var_a0 = 1;
            if (p0->u30.b.f == 3) {
                var_v0 = 0;
            } else {
                var_v0 = 1;
            }
            break;
        case 0xF:
        case 0x20:
            var_a0 = 0;
            var_v0 = 0;
            break;
        case 0x11:
            var_a0 = 1;
            var_v0 = 0;
            break;
        case 0x13:
        case 0x19:
        case 0x1F:
            var_a0 = 2;
            var_v0 = 0;
            break;
        case 0xE:
        case 0x21:
            var_a0 = 0;
            var_v0 = 1;
            break;
        case 0x10:
            var_a0 = 1;
            var_v0 = 1;
            break;
        case 0x12:
        case 0x18:
        case 0x1E:
            var_a0 = 2;
            var_v0 = 1;
            break;
        case 0x0:
        case 0x1:
        case 0x2:
        case 0x3:
        case 0x4:
        case 0x5:
        case 0x6:
        case 0x7:
        case 0x14:
        case 0x15:
        case 0x1A:
        case 0x1B:
        case 0x54:
            var_a0 = 0;
            var_v0 = 2;
            break;
        case 0x55:
        default:
            var_a0 = 1;
            var_v0 = 2;
            break;
        }
        var_a1 = var_v0;
        if (var_v0 < 2) {
            var_v0 ^= 1;
            if (p1->u30.b.f == 3) {
                var_a1 = var_v0 & 0xFF;
            }
        }
        p1->unk2D9 = (u32)&((u8 (*)[3])0)[var_a1][var_a0];
        return;
    }
    p1->unk2D9 = 7;
}
