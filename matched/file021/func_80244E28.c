#include "context.h"

extern void func_80005700(void);

struct func_80244E28_Sub38 {
    u8 pad0[0x14];
    u32 unk14;
};

struct func_80244E28_Arg0 {
    u8 pad0[0x38];
    struct func_80244E28_Sub38 *unk38;
    u8 pad1[0x90 - 0x3C];
    u16 unk90;
};

struct func_80244E28_Inner {
    u8 pad0[0x10];
    s16 unk10;
};

struct func_80244E28_Outer {
    u8 pad0[0x30];
    struct func_80244E28_Inner *unk30;
};

void func_80244E28(struct func_80244E28_Arg0 *arg0, struct func_80244E28_Outer **arg1) {
    s32 temp_v0;

    if ((arg0->unk38->unk14 >> 0x10) & 1) {
        (*arg1)->unk30->unk10 += 0x80;
    } else {
        (*arg1)->unk30->unk10 -= 0x80;
    }
    temp_v0 = arg0->unk90;
    arg0->unk90 = temp_v0 - 1;
    if (temp_v0 == 0) {
        func_80005700();
    }
}
