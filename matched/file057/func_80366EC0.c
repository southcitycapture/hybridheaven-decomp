#include "common.h"

typedef struct func_80366EC0_Struct {
    u8 pad0[2];
    s16 unk2;
    u8 pad4[0x2C];
    u8 unk30;
    u8 pad31[0x392 - 0x31];
    u8 unk392;
} func_80366EC0_Struct;

extern void func_800058DC(s32 arg0, void *arg1);
extern s32 func_801DB6B8(s32 arg0, s32 arg1, s32 arg2);
extern void func_80225540(s32 arg0);
extern void func_80366F88(s32 arg0, s32 arg1);
extern s32 D_801BBCCC;
extern func_80366EC0_Struct D_801BC03C;
extern func_80366EC0_Struct D_801BC3D8;
extern void func_8036265C(void);

void func_80366EC0(s32 arg0, s32 arg1) {
    func_80366EC0_Struct *var_v1;

    if (arg0 == D_801BBCCC) {
        var_v1 = &D_801BC03C;
    } else {
        var_v1 = &D_801BC3D8;
    }
    var_v1->unk392 = 0;
    if (func_801DB6B8(arg0, arg1, 0) != 0) {
        func_80225540(arg0);
        var_v1->unk30 = var_v1->unk30 & 0xFFFE;
        if (var_v1->unk2 <= 0 || ((*(u32 *) &var_v1->unk30 << 1) >> 0x1E) != 0) {
            var_v1->unk30 = (var_v1->unk30 & 0xFF9F) | 0x20;
            func_80366F88(arg0, arg1);
            return;
        }
        func_800058DC(arg0, func_8036265C);
    }
}
