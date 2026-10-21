#include "context.h"

typedef struct func_80366B30_StructArg {
    u8 pad[0x5C];
    void *unk5C;
} func_80366B30_StructArg;

extern void func_802237B0(void *, s32);
extern void func_80366BF4();

void func_80366B30(func_80366B30_StructArg *arg0, s32 arg1) {
    void *temp_a3;
    u8 *var_v0;

    temp_a3 = arg0->unk5C;
    if ((s32)arg0 == D_801BBCCC) {
        var_v0 = (u8 *)&D_801BC03C;
    } else {
        var_v0 = (u8 *)&D_801BC3D8;
    }
    func_802237B0(arg0, 0);
    var_v0[0x30] &= ~0x80;
    var_v0[0x30] &= 0xFE;
    var_v0[0x31] &= ~0x80;
    var_v0[0x38] &= ~0x80;
    var_v0[0x38] &= 0xEF;
    var_v0[0x38] &= 0x9F;
    var_v0[0x2F1] = 0;
    var_v0[0x391] = 0;
    var_v0[0x393] = 0;
    func_80011198(arg1, temp_a3);
    func_800058DC((s32)arg0, (void *)func_80366BF4);
}
