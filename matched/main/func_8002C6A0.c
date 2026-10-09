#include "context.h"

struct func_8002C6A0_Struct {
    u8 pad[0x2C];
    struct func_8002C6A0_Struct *unk2C;
};

extern struct func_8002C6A0_Struct *D_800498F0;

struct func_8002C6A0_Struct *func_8002C6A0(void) {
    struct func_8002C6A0_Struct *base;
    struct func_8002C6A0_Struct *node;
    struct func_8002C6A0_Struct *ret;

    ret = NULL;
    base = D_800498F0;
    node = base->unk2C;
    if (node != NULL) {
        ret = node;
        base->unk2C = *(struct func_8002C6A0_Struct **)node;
        *(struct func_8002C6A0_Struct **)node = NULL;
    }
    return ret;
}
