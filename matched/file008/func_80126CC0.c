#include "context.h"

typedef struct func_80126CC0_Inner {
    u8 pad[0x1E];
    u16 unk1E;
} func_80126CC0_Inner;

typedef struct func_80126CC0_Struct {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad1[6];
    u16 unk36;
    func_80126CC0_Inner *unk38;
    u8 pad2[0x72 - 0x3C];
    u16 unk72;
    u8 pad3[0x8C - 0x74];
    s32 unk8C;
} func_80126CC0_Struct;

extern s32 D_8008D558[];

s32 func_80126CC0(func_80126CC0_Struct *arg0, s32 arg1) {
    extern u16 **D_80171CEC[];
    u16 temp_a0;
    u16 temp_a0_2;

    if (arg0->unk38->unk1E == 0) {
        return 1;
    }
    if (D_801BBBF0.unk188 != 0) {
        if ((u32) arg0 != D_801BBBF0.unk188) {
            return 0;
        }
        D_801BBBF0.unk188 = 0;
    }
    if (arg0->unk36 == 0) {
        arg0->unk8C = arg1;
        arg0->unk2C = arg0->unk2C | 0x8000;
        arg0->unk72 = arg0->unk38->unk1E;
        return 1;
    }
    if (D_801BBBF0.unk181 != 0) {
        return 0;
    }
    if ((u32) D_8008D558[10] >= 0x3001) {
        D_801BBBF0.unk181 = 1;
        return 0;
    }
    arg0->unk72 = arg0->unk38->unk1E;
    if (arg0->unk8C == 0) {
        temp_a0 = **D_80171CEC[arg0->unk36] & 0x0FFFFFFF & 0xFFFF;
        if (temp_a0 != 0 && func_801267B8(temp_a0, 0x3000) != 1) {
            D_801BBBF0.unk181 = 1;
            D_801BBBF0.unk188 = (u32) arg0;
            return 0;
        }
    }
    arg0->unk8C = arg1;
    temp_a0_2 = (*D_80171CEC[arg0->unk36])[1] & 0x0FFFFFFF & 0xFFFF;
    if (temp_a0_2 != 0 && func_801267B8(temp_a0_2, 0x3000) != 1) {
        D_801BBBF0.unk181 = 1;
        D_801BBBF0.unk188 = (u32) arg0;
        return 0;
    }
    arg0->unk2C = arg0->unk2C | 0x8000;
    return 1;
}
