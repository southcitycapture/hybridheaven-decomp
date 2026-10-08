#include "context.h"

typedef struct func_80359674_StructInner {
    u8 pad0[0x7C];
    s32 unk7C;
    u16 unk80;
    u16 unk82;
    u8 pad1[0x94 - 0x84];
    s32 unk94;
    u16 unk98;
    u16 unk9A;
} func_80359674_StructInner;

typedef struct func_80359674_StructOuter {
    u8 pad0[0x5C];
    func_80359674_StructInner *unk5C;
} func_80359674_StructOuter;

void func_80359674(func_80359674_StructOuter *arg0, s32 arg1) {
    func_80359674_StructInner *temp_v0;

    temp_v0 = arg0->unk5C;
    temp_v0->unk94 = temp_v0->unk7C;
    temp_v0->unk98 = temp_v0->unk80;
    temp_v0->unk9A = temp_v0->unk82;
}
