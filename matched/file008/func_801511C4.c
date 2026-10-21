#include "context.h"

typedef struct func_801511C4_V { s32 x, y, z; } func_801511C4_V;

typedef struct func_801511C4_Struct {
    u8 pad0[0x91];
    u8 unk91;
    u8 pad1[2];
    u16 unk94;
    u8 pad2[2];
    func_801511C4_V v;
} func_801511C4_Struct;

s32 func_801511C4(func_801511C4_Struct *arg0, func_801511C4_V *volatile arg1, u16 arg2) {
    if (func_801517CC(arg0) != 0) {
        arg0->unk91 = 2;
        arg0->v = *arg1;
        arg0->unk94 = arg2;
        return 1;
    }
    return 0;
}
