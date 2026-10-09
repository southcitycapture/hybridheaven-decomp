#include "context.h"
extern void func_800058DC(void *arg0, void *arg1);
void func_802418D8(void *arg0, s32 arg1);

struct func_80241834_StructArg0 {
    u8 pad0[0x3C];
    u16 unk3C;
    u8 pad1[0x90 - 0x3E];
    f32 unk90;
    f32 unk94;
    f32 unk98;
};

struct func_80241834_StructObj2C {
    u8 pad0[0xC];
    f32 unkC;
    u8 pad1[0x12 - 0x10];
    u16 unk12;
};

struct func_80241834_StructObj1 {
    u8 pad0[0x2C];
    struct func_80241834_StructObj2C *unk2C;
};

struct func_80241834_StructBBBF0 {
    u8 pad0[0xE0];
    struct func_80241834_StructObj1 *unkE0;
};

extern struct func_80241834_StructBBBF0 D_801BBBF0;

void func_80241834(struct func_80241834_StructArg0 *arg0, s32 arg1) {
    u16 temp;

    temp = arg0->unk3C;
    if (temp == 0) {
        D_801BBBF0.unkE0->unk2C->unkC = D_801BBBF0.unkE0->unk2C->unkC + 10.0f;
        D_801BBBF0.unkE0->unk2C->unk12 = 0;
    }
    if (arg0->unk3C++ >= 0x28) {
        arg0->unk3C = 0;
        arg0->unk90 = 2.0f;
        arg0->unk94 = 5.0f;
        arg0->unk98 = 260.0f;
        func_800058DC(arg0, (void *) func_802418D8);
    }
}
