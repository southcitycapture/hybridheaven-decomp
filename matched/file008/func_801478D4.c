#include "context.h"

typedef struct func_801478D4_Inner {
    u8 pad0[0xC];
    u16 unkC;
} func_801478D4_Inner;

typedef struct func_801478D4_Struct {
    u8 pad0[0x5C];
    func_801478D4_Inner *unk5C;
} func_801478D4_Struct;

s32 func_801478D4(func_801478D4_Struct *arg0, u8 arg1) {
    func_801478D4_Inner *inner;

    if (arg0 != NULL) {
        inner = arg0->unk5C;
        if (func_80147828((struct func_80147828_Owner *) arg0, arg1, 0, (inner->unkC - 1) & 0xFF) != 0) {
            return 1;
        }
    }
    return 0;
}
