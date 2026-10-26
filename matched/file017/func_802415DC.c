#include "context.h"
extern s16 func_801FD284(s16, s16, s32);

struct func_802415DC_StructB {
    u8 pad[0x12];
    s16 unk12;
};

struct func_802415DC_StructA {
    u8 pad[0x2C];
    struct func_802415DC_StructB *unk2C;
};

struct func_802415DC_StructC {
    u8 pad[0x9C];
    u16 unk9C;
};

struct func_802415DC_StructD {
    s16 unk0;
    s32 unk4;
    f32 unk8;
};

extern void func_8024168C();

#define G_BBCD0 (*(struct func_802415DC_StructA **)&D_801BBCD0)

void func_802415DC(struct func_802415DC_StructC *arg0, void *arg1) {
    u8 pad[0x14];
    struct func_802415DC_StructD sp18;

    G_BBCD0->unk2C->unk12 = func_801FD284(G_BBCD0->unk2C->unk12, (s16) ((s16) (arg0->unk9C + 0x1000) & 0x1FFF), 0x3DCCCCCD);
    if (func_801C3044() == 0) {
        sp18.unk0 = 0x1000;
        sp18.unk4 = 0x0168002D;
        sp18.unk8 = 3.0f;
        func_801C2F0C(4, &sp18);
        func_800058DC(arg0, &func_8024168C);
    }
}
