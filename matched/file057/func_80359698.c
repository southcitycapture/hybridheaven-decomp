#include "context.h"

typedef struct func_80359698_Inner {
    u8 pad0[0x7C];
    s32 unk7C;
    u16 unk80;
    u16 unk82;
    u8 pad1[0x94 - 0x84];
    s32 unk94;
    u16 unk98;
    u16 unk9A;
} func_80359698_Inner;

typedef struct func_80359698_Outer {
    u8 pad0[0x5C];
    func_80359698_Inner *unk5C;
} func_80359698_Outer;

void func_80359698(void *arg0, void *arg1) {
    func_80359698_Inner *temp_v0;

    temp_v0 = ((func_80359698_Outer *) arg0)->unk5C;
    temp_v0->unk7C = temp_v0->unk94;
    temp_v0->unk80 = temp_v0->unk98;
    temp_v0->unk82 = temp_v0->unk9A;
}
