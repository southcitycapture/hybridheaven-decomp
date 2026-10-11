#include "context.h"

typedef struct func_80117DA0_Struct0 {
    u8 pad0[0x5C];
    s32 unk5C;
} func_80117DA0_Struct0;

typedef struct func_80117DA0_Struct1 {
    u8 pad0[0xEF0];
    u16 unkEF0;
} func_80117DA0_Struct1;

typedef struct func_80117DA0_Struct2 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_80117DA0_Struct2;

extern s32 func_80011140(s32, s32, func_80117DA0_Struct2, s32);
extern s16 D_80216BF8;
extern func_80117DA0_Struct2 D_80216B90;

s32 func_80117DA0(arg0, arg1)
func_80117DA0_Struct0 *arg0;
s32 arg1;
{
    s32 sp24;
    s32 flags;

    sp24 = arg0->unk5C;
    flags = ((func_80117DA0_Struct1 *) &D_801BBBF0)->unkEF0;
    if (flags & 0x2000) {
        D_80216BF8 -= 1;
        if (D_80216BF8 <= 0) {
            D_80216BF8 = 0;
            ((func_80117DA0_Struct1 *) &D_801BBBF0)->unkEF0 = flags & 0xDFFF;
        }
    } else {
        D_80216BF8 = 0;
    }
    if (func_80011140(arg1, sp24, D_80216B90, 5) != 0) {
        return 0;
    }
    return 1;
}
