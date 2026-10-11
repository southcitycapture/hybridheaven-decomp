#include "context.h"

typedef struct func_80126B14_Struct {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad1[6];
    u16 unk36;
    u8 pad2[0x72 - 0x38];
    u16 unk72;
    u8 pad3[0x8C - 0x74];
    s32 unk8C;
} func_80126B14_Struct;

extern s32 D_8008D558[];
extern u16 **D_80171CEC[];

s32 func_80126B14(func_80126B14_Struct *arg0, s32 arg1, u16 arg2, u16 arg3) {
    u16 a;

    arg0->unk36 = arg3;
    if (D_801BBBF0.unk188 != 0) {
        if ((u32)arg0 != D_801BBBF0.unk188) {
            return 0;
        }
        D_801BBBF0.unk188 = 0;
    }
    if (arg0->unk36 == 0) {
        arg0->unk8C = arg1;
        arg0->unk72 = arg2;
        arg0->unk2C |= 0x8000;
        return 1;
    }
    if (D_801BBBF0.unk181 != 0) {
        return 0;
    }
    if ((u32)D_8008D558[10] >= 0x3001U) {
        D_801BBBF0.unk181 = 1;
        return 0;
    }
    arg0->unk72 = arg2;
    if (arg0->unk8C == 0) {
        a = D_80171CEC[arg3][0][0] & 0xFFFFFFF;
        if (a != 0) {
            if (func_801267B8(a, 0x3000) != 1) {
                D_801BBBF0.unk181 = 1;
                D_801BBBF0.unk188 = (u32)arg0;
                return 0;
            }
        }
    }
    arg0->unk8C = arg1;
    a = D_80171CEC[arg3][0][1] & 0xFFFFFFF;
    if (a != 0) {
        if (func_801267B8(a, 0x3000) != 1) {
            D_801BBBF0.unk181 = 1;
            D_801BBBF0.unk188 = (u32)arg0;
            return 0;
        }
    }
    arg0->unk2C |= 0x8000;
    return 1;
}
