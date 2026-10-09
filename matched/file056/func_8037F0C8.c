#include "context.h"

struct func_8037F0C8_Sub {
    u8 pad0[0x2];
    s16 unk2;
};

struct func_8037F0C8_Inner {
    u8 pad0[0x30];
    struct func_8037F0C8_Sub *unk30;
};

struct func_8037F0C8_Struct {
    u8 pad0[0x96];
    s8 unk96;
};

void func_8037F0C8(struct func_8037F0C8_Struct *arg0) {
    ((struct func_8037F0C8_Inner *) D_8038A9C0)->unk30->unk2 = (s16) ((arg0->unk96 * 0x14) + 0x4A);
    func_801453CC(D_8038A9C0, 0x180, 0, 0x1A, 1, 3, 0x1A);
}
