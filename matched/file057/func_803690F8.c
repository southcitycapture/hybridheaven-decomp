#include "context.h"

typedef struct func_803690F8_Struct {
    u8 pad0[2];
    s16 unk2;
    u8 pad4[0x2C];
    u32 unk30;
    u8 pad34[0x2FA - 0x34];
    u8 unk2FA;
} func_803690F8_Struct;

extern void func_80225540();
extern void func_800058DC(s32, void *);
extern void func_80365FE0(s32, s32);
extern void func_80222E84();
extern void func_8036648C();

void func_803690F8(s32 arg0, s32 arg1) {
    func_803690F8_Struct *var_v0;
    func_803690F8_Struct *var_v1;

    if (arg0 == D_801BBCCC) {
        var_v0 = (func_803690F8_Struct *) &D_801BC03C;
    } else {
        var_v0 = (func_803690F8_Struct *) &D_801BC3D8;
    }
    if (arg0 != D_801BBCCC) {
        var_v1 = (func_803690F8_Struct *) &D_801BC03C;
    } else {
        var_v1 = (func_803690F8_Struct *) &D_801BC3D8;
    }
    func_80225540();
    if ((var_v0->unk2 <= 0) || (((var_v0->unk30 * 2) >> 0x1E) != 0)) {
        if (((var_v0->unk30 * 2) >> 0x1E) == 0) {
            *(u8 *) &var_v0->unk30 = (u8) ((*(u8 *) &var_v0->unk30 & 0xFF9F) | 0x20);
        }
        func_800058DC(arg0, &func_80222E84);
        return;
    }
    var_v0->unk2FA = 0;
    *(u8 *) &var_v0->unk30 = (u8) (*(u8 *) &var_v0->unk30 & 0xFFFE);
    if ((var_v1->unk2 <= 0) || (((var_v1->unk30 * 2) >> 0x1E) != 0)) {
        func_800058DC(arg0, &func_8036648C);
        return;
    }
    func_80365FE0(arg0, arg1);
}
