#include "common.h"

typedef struct func_801CA530_Struct {
    u8 pad[0x8E];
    u16 unk8E;
    u16 unk90;
    u16 unk92;
    u16 unk94;
    u16 unk96;
    u16 unk98;
    u16 unk9A;
} func_801CA530_Struct;

extern func_801CA530_Struct D_8017DC40;

s32 func_801CA530(void) {
    func_801CA530_Struct *p = &D_8017DC40;
    return (p->unk9A + p->unk8E + p->unk90 + p->unk92 + p->unk94 + p->unk96 + p->unk98) & 0xFFFF;
}
