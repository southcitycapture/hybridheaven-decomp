#include "context.h"

struct func_8022B8C4_Inner {
    u8 pad0[0xC];
    u8 unkC;
};

struct func_8022B8C4_Struct {
    u8 pad0[0x30];
    u32 unk30;
    u8 pad00[0x2D4 - 0x34];
    struct func_8022B8C4_Inner *unk2D4;
    u8 pad1[0x2DF - 0x2D8];
    u8 unk2DF;
    u8 pad2[0x2F0 - 0x2E0];
    u8 unk2F0;
};

void func_8022B8C4(struct func_8022B8C4_Struct *arg0, struct func_8022B8C4_Struct *arg1) {
    s32 var_v0;
    s32 var_v1;
    s32 var_v1_2;

    var_v0 = arg0->unk2D4->unkC;
    if (var_v0 == 0) {
        arg0->unk2DF = 1;
        arg1->unk2F0 = 2;
    } else {
        var_v1 = var_v0;
        if (var_v0 & 1) {
            arg1->unk2F0 |= 1;
            var_v1 = arg0->unk2D4->unkC;
        }
        if (var_v1 & 2) {
            arg1->unk2F0 |= 2;
            var_v1 = arg0->unk2D4->unkC;
        }
        if ((var_v1 & 0xC) == 0xC) {
            arg1->unk2F0 |= 0xC;
            var_v1 = arg0->unk2D4->unkC;
        } else if ((var_v1 & 0xC) != 0) {
            if (((u32) (arg0->unk30 << 9) >> 0x1E) == 3) {
                arg1->unk2F0 |= ((var_v1 & 0xC) ^ 0xC);
                var_v1 = arg0->unk2D4->unkC;
            } else {
                arg1->unk2F0 |= (var_v1 & 0xC);
                var_v1 = arg0->unk2D4->unkC;
            }
        }
        var_v0 = var_v1 & 0x30;
        if (var_v0 == 0x30) {
            arg1->unk2F0 |= 0x30;
        } else if (var_v0 != 0) {
            if (((u32) (arg0->unk30 << 9) >> 0x1E) == 3) {
                arg1->unk2F0 |= (var_v0 ^ 0x30);
            } else {
                arg1->unk2F0 |= var_v0;
            }
        }
    }
    var_v0 = 0;
    var_v1_2 = 0;
    do {
        if (arg1->unk2F0 & (1 << var_v1_2)) {
            arg0->unk2DF++;
        }
        var_v0 = (var_v0 + 1) & 0xFF;
        var_v1_2 = var_v0;
    } while (var_v0 < 6);
    arg1->unk2DF = arg0->unk2DF;
}
