#include "common.h"

typedef struct func_80125774_Struct {
    u8 pad0[0x42A0];
    u8 unk42A0;
    u8 pad1[3];
    s32 unk42A4;
    s32 unk42A8;
    u8 unk42AC;
    u8 unk42AD;
    u8 pad2[2];
    s32 unk42B0;
    s32 unk42B4;
    s32 unk42B8;
    s32 unk42BC;
    u8 unk42C0;
    u8 unk42C1;
    u8 pad3[2];
    s32 unk42C4;
    u8 unk42C8;
    u8 pad4[3];
    s32 unk42CC;
    u8 pad5[0x42EC - 0x42D0];
    u8 unk42EC;
} func_80125774_Struct;

extern func_80125774_Struct D_800892B0;

s32 func_80125774(s32 arg0) {
    if (D_800892B0.unk42A0 != 0) {
        return 0;
    }
    D_800892B0.unk42A0 = 1;
    D_800892B0.unk42A4 = 0;
    D_800892B0.unk42A8 = 0;
    D_800892B0.unk42AD = 0;
    D_800892B0.unk42B0 = 0;
    D_800892B0.unk42B4 = 0;
    D_800892B0.unk42B8 = 0;
    D_800892B0.unk42BC = 0;
    D_800892B0.unk42C4 = 0;
    D_800892B0.unk42CC = arg0;
    D_800892B0.unk42AC = 0;
    D_800892B0.unk42EC = 0;
    D_800892B0.unk42C1 = 0;
    D_800892B0.unk42C0 = 0;
    D_800892B0.unk42C8 = 0;
    return 1;
}
