#include "context.h"
extern void func_800058DC(void *, void *);

struct func_8024EACC_Sub2 {
    u8 pad[0xC];
    f32 unkC;
    u8 pad2[0x2];
    s16 unk12;
};

struct func_8024EACC_Sub {
    u8 pad[0x2C];
    struct func_8024EACC_Sub2 *unk2C;
};

struct func_8024EACC_Glob {
    u8 pad[0xE0];
    struct func_8024EACC_Sub *unkE0;
};

struct func_8024EACC_Obj {
    u8 pad[0x3C];
    u16 unk3C;
};

struct func_8024EACC_Msg {
    s16 unk0;
    s32 unk4;
    f32 unk8;
    s16 unkC;
    u8 pad[0x12];
};

extern struct func_8024EACC_Glob D_801BBBF0;
extern s32 func_801C3044(void);
extern s32 func_801505AC(s32);
extern void *func_801C3B7C(s32);
extern void func_801C2F0C(s32, void *);
extern void func_8024EB90(void);

void func_8024EACC(struct func_8024EACC_Obj *arg0, s32 arg1) {
    struct func_8024EACC_Msg msg;

    if ((u32) arg0->unk3C++ < 1) {
        D_801BBBF0.unkE0->unk2C->unkC = 454.0f;
        D_801BBBF0.unkE0->unk2C->unk12 = 0x1800;
    }
    if (func_801C3044() == 0) {
        func_801C3B7C(func_801505AC(8));
        msg.unk0 = 0x1100;
        msg.unk4 = 0x0348007A;
        msg.unkC = 0x14;
        msg.unk8 = 5.0f;
        func_801C2F0C(5, &msg);
        arg0->unk3C = 0;
        func_800058DC(arg0, (void *) func_8024EB90);
    }
}
