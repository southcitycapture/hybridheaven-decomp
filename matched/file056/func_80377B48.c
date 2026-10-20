#include "context.h"
struct func_80377B48_Struct { u8 pad0[8]; u8 unk8; u8 padC[3]; };
extern struct func_80377B48_Struct D_803887E8[];

s32 *func_80377B48(u8 arg0) {
    struct func_80377B48_Struct *p;
    s32 b = arg0;
    for (p = D_803887E8; p->unk8 != 0xFF; p++) {
        if (b == p->unk8) return (s32 *)p;
    }
    return NULL;
}
