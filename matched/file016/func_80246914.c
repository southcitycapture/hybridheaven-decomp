#include "common.h"
struct func_80246830_StructInner {
    u8 pad0[0x24];
    s32 unk24;
    u8 pad1[0x30 - 0x28];
    s32 unk30;
    u8 pad2[0x4B - 0x34];
    u8 unk4B;
};
struct func_80246830_StructOuter {
    u8 pad0[0x30];
    struct func_80246830_StructInner *unk30;
};

extern f32 func_8001EAD0(s16);

struct func_80246914_StructArg0 {
    u8 pad[0x3C];
    u16 unk3C;
};

void func_80246914(struct func_80246914_StructArg0 *arg0, struct func_80246830_StructOuter **arg1) {
    (*arg1)->unk30->unk4B = (u32) ((func_8001EAD0((s16) ((s16) (arg0->unk3C * 0x50) & 0x1FFF)) * 127.0f) + 128.0f);
    arg0->unk3C = arg0->unk3C + 1;
}
