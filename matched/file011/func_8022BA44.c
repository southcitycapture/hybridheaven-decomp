#include "context.h"

struct func_8022BA44_Struct {
    u8 pad0[0x30];
    u32 unk30;
    u8 pad1[0x2D8 - 0x34];
    u8 unk2D8;
    u8 pad2[0x2DA - 0x2D9];
    u8 unk2DA;
    u8 pad3[0x2DF - 0x2DB];
    u8 unk2DF;
    u8 pad4[0x2FA - 0x2E0];
    u8 unk2FA;
};

extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
extern u8 D_801BCC20;
extern void func_8022B8C4(struct func_8022BA44_Struct *arg0, struct func_8022BA44_Struct *arg1);

s32 func_8022BA44(s32 arg0) {
    struct func_8022BA44_Struct *sp1C;
    struct func_8022BA44_Struct *var_a0;
    struct func_8022BA44_Struct *var_a1;
    s32 temp_v0;
    s32 unused;
    extern void func_80232E94();

    if (D_801BCC20 == 0) {
        var_a0 = (struct func_8022BA44_Struct *) D_801BC03C;
    } else {
        var_a0 = (struct func_8022BA44_Struct *) D_801BC3D8;
    }
    if (D_801BCC20 == 0) {
        var_a1 = (struct func_8022BA44_Struct *) D_801BC3D8;
    } else {
        var_a1 = (struct func_8022BA44_Struct *) D_801BC03C;
    }
    temp_v0 = var_a0->unk2D8;
    if (((temp_v0 == 2) || (temp_v0 == 4) || (temp_v0 == 5) || (temp_v0 == 6) || (temp_v0 == 7)) && (var_a1->unk2FA == 1)) {
        var_a1->unk2FA = 0;
        var_a0->unk2DF = 0;
        sp1C = var_a1;
        func_8022B8C4(var_a0, var_a1);
        if ((var_a0->unk2DA != 0) && (((u32) (sp1C->unk30 * 2) >> 0x1E) == 0)) {
            func_80232E94(arg0);
            return 1;
        }
    }
    return 0;
}
