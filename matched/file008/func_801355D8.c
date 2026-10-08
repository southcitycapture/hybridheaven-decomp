#include "common.h"

typedef struct func_801355D8_Struct {
    u8 pad0[0x14];
    u32 unk14;
} func_801355D8_Struct;

typedef struct func_801355D8_Obj {
    u8 pad0[0x36];
    u16 unk36;
    func_801355D8_Struct *unk38;
    u8 pad3c[0x74 - 0x3C];
    s32 unk74;
} func_801355D8_Obj;

s32 func_80126944();                                /* extern */
s32 func_8012C97C(s32, s32);                        /* extern */
extern u8 D_801BCC21;

void func_801355D8(func_801355D8_Obj *arg0, s32 arg1) {
    s32 var_v0;

    if ((func_80126944() == 1 && D_801BCC21 == 0xE) || func_80126944() != 1) {
        var_v0 = func_8012C97C(arg0->unk36 - 1, (arg0->unk38->unk14 >> 16) & 0xFF);
    } else {
        var_v0 = func_8012C97C(arg0->unk36 - 1, (arg0->unk38->unk14 >> 8) & 0xFF);
    }
    arg0->unk74 = var_v0;
}
