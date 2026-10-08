#include "context.h"

extern s16 D_801BBBF6;
extern void func_8012FE50(s32, s32, s32, s32, s32);

typedef struct func_80242080_Struct2 {
    u8 pad0[0x10];
    s16 unk10;
} func_80242080_Struct2;

typedef struct func_80242080_Struct1 {
    u8 pad0[0x30];
    func_80242080_Struct2 *unk30;
} func_80242080_Struct1;

typedef struct func_80242080_Struct0 {
    u8 pad0[0x92];
    u16 unk92;
} func_80242080_Struct0;

void func_80242080(func_80242080_Struct0 *arg0, func_80242080_Struct1 **arg1) {
    s32 temp_a2;

    temp_a2 = arg0->unk92;
    if (temp_a2 != 0) {
        arg0->unk92 = temp_a2 - 1;
        arg1[0]->unk30->unk10 += 0xC0;
        arg1[1]->unk30->unk10 -= 0xC0;
        return;
    }
    D_801BBBF6 = 0x400;
    func_8012FE50(0x1E, 0x38, 6, 1, 1);
}
