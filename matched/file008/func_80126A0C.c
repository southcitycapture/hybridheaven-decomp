#include "context.h"

extern s32 D_801267B8(u16, s32, void *, s32);

s32 func_80126A0C(s32 arg0, u16 arg1, u8 arg2) {
    u32 f = arg2;

    if (D_801BBBF0.unk188 != 0) {
        if (arg0 != D_801BBBF0.unk188) {
            return 0;
        }
        D_801BBBF0.unk188 = 0;
    }
    if (D_801BBBF0.unk181 != 0) {
        return 0;
    }
    if (f != 0) {
        if (*(u32 *)((u8 *)&D_800892B0 + 0x42D0) >= 0x3001U) {
            D_801BBBF0.unk181 = 1;
            return 0;
        }
    } else {
        if (*(u32 *)((u8 *)&D_800892B0 + 0x42D0) >= 0x3001U) {
            D_801BBBF0.unk181 = 1;
            return 0;
        }
    }
    if (f != 0) {
        *((u8 *)&D_800892B0 + 0x42FF) = 1;
    }
    if (D_801267B8(arg1, 0x3000, &D_800892B0, f) != 1) {
        D_801BBBF0.unk181 = 1;
        *((u8 *)&D_800892B0 + 0x42FF) = 0;
        D_801BBBF0.unk188 = arg0;
        return 0;
    }
    *((u8 *)&D_800892B0 + 0x42FF) = 0;
    return 1;
}
