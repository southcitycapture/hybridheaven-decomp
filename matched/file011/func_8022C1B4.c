#include "context.h"

struct func_8022C1B4_Struct {
    u8 pad0[0x30];
    u32 unk30;
    u8 pad1[0x2D4 - 0x34];
    u8 *unk2D4;
    u8 unk2D8;
    u8 unk2D9;
    u8 unk2DA;
    u8 pad2[0x2DF - 0x2DB];
    u8 unk2DF;
    u8 pad3[0x2F0 - 0x2E0];
    u8 unk2F0;
    u8 pad4[0x2FA - 0x2F1];
    u8 unk2FA;
};

s32 func_80376300(void *arg0);
void func_8022C0A0(void);

s32 func_8022C1B4(s32 arg0) {
    struct func_8022C1B4_Struct *var_v1;
    struct func_8022C1B4_Struct *var_a1;
    s32 var_v0;
    extern void func_80232E94();
    extern u8 D_801842A0[];

    if (D_801BCC20 == 0) {
        var_v1 = (struct func_8022C1B4_Struct *) D_801BC03C;
    } else {
        var_v1 = (struct func_8022C1B4_Struct *) D_801BC3D8;
    }
    if (D_801BCC20 == 0) {
        var_a1 = (struct func_8022C1B4_Struct *) D_801BC3D8;
    } else {
        var_a1 = (struct func_8022C1B4_Struct *) D_801BC03C;
    }
    var_v0 = 0;
    if ((var_v1->unk2D8 == 0xF) && (var_v1->unk2DA != 0) && (var_a1->unk2FA != 0)) {
        if (((u32) (var_v1->unk30 << 0xB) >> 0x1E) == 1) {
            if (func_80376300(var_a1) != 0) {
                var_v1->unk2D9 = 0x51;
            } else {
                var_v1->unk2D9 = 0x50;
            }
        } else {
            if (func_80376300(var_a1) != 0) {
                var_v1->unk2D9 = 0x50;
            } else {
                var_v1->unk2D9 = 0x51;
            }
        }
        var_v1->unk2D4 = D_801842A0 + var_v1->unk2D9 * 0x1C;
        func_8022C0A0();
        var_a1->unk2F0 = var_v1->unk2D4[0xC];
        var_a1->unk2DF = var_v1->unk2DF = 1;
        var_a1->unk2FA = var_v1->unk2DA = 0;
        func_80232E94(arg0);
        return 1;
    }
    return var_v0;
}
