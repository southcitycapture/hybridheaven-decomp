#include "context.h"

struct func_8024CEA0_StructSub {
    u8 pad0[0x12];
    s16 unk12;
    u8 pad1[0x4B - 0x14];
    u8 unk4B;
};

struct func_8024CEA0_StructMid {
    u8 pad0[0x30];
    struct func_8024CEA0_StructSub *unk30;
};

struct func_8024CEA0_StructArg1 {
    u8 pad0[0x10];
    struct func_8024CEA0_StructMid *unk10;
};

struct func_8024CEA0_StructArg0 {
    u8 pad0[0x90];
    u16 unk90;
    u16 unk92;
    s16 unk94;
};

void func_8024CEA0(struct func_8024CEA0_StructArg0 *arg0, struct func_8024CEA0_StructArg1 *arg1) {
    struct func_8024CEA0_StructSub *temp_v0;
    u8 temp_v1;

    temp_v0 = arg1->unk10->unk30;
    temp_v0->unk12 = (s16) (temp_v0->unk12 - 0x36) & 0x1FFF;
    temp_v0 = arg1->unk10->unk30;
    temp_v0->unk4B = (u8) (temp_v0->unk4B + arg0->unk94);
    temp_v1 = arg1->unk10->unk30->unk4B;
    if (((s32) temp_v1 >= 0x9A) || ((s32) temp_v1 < 0x25)) {
        arg0->unk94 = (s16) -arg0->unk94;
    }
    arg0->unk90 = (u16) (arg0->unk90 + 1);
    arg0->unk92 = (u16) (arg0->unk92 - 1);
}
