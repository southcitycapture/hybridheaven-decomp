#include "context.h"

typedef struct func_80117F64_Struct0 {
    u8 pad0[0x5C];
    void *unk5C;
} func_80117F64_Struct0;

typedef struct func_80117F64_Struct1 {
    u8 pad0[0x1C];
    u32 unk1C;
} func_80117F64_Struct1;

extern void func_80010550(s32, void *);

void func_80117F64(func_80117F64_Struct0 *arg0, s32 arg1) {
    func_80117F64_Struct1 *sp24;
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
    if (sp24->unk1C == 0x01680041) {
        func_80010550(arg1, sp24);
        return;
    }
    func_80011140(arg1, (s32) sp24, D_80216B90, 5);
}
