#include "context.h"

typedef struct func_802408F0_Inner {
    u8 pad0[0x92];
    u16 unk92;
} func_802408F0_Inner;

typedef struct func_802408F0_Struct {
    u8 pad0[0xCC];
    func_802408F0_Inner *unkCC;
} func_802408F0_Struct;

extern func_802408F0_Struct D_801BCC24;

void func_802408F0(void) {
    D_801BCC24.unkCC->unk92 = 1;
}
