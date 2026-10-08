#include "context.h"

typedef struct func_80126820_Struct {
    u8 pad0[4];
    u16 unk4;
    u8 pad1[0x181 - 6];
    u8 unk181;
    u8 unk182;
    u8 pad2[4];
    u8 unk187;
    u8 pad3[0x1114 - 0x188];
    u16 unk1114;
} func_80126820_Struct;

void func_801266B8(u16 arg0, u16 arg1);

s32 func_80126820(u16 arg0) {
    u16 temp_a1;

    temp_a1 = arg0;
    ((func_80126820_Struct *) &D_801BBBF0)->unk1114 = temp_a1;
    if ((((func_80126820_Struct *) &D_801BBBF0)->unk182 != 0) || (((func_80126820_Struct *) &D_801BBBF0)->unk187 != 0)) {
        return 0;
    }
    ((func_80126820_Struct *) &D_801BBBF0)->unk182 = 1;
    ((func_80126820_Struct *) &D_801BBBF0)->unk181 = 1;
    func_801266B8(((func_80126820_Struct *) &D_801BBBF0)->unk4, temp_a1);
    return 1;
}
