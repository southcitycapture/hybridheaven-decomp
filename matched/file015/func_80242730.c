#include "context.h"
struct func_80243290_StructTriple {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};
extern s32 func_8013A1B4();
void func_802427E8(void *arg0, s32 volatile arg1, s32 arg2);

typedef struct func_80242730_StructInner {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    u16 unk12;
} func_80242730_StructInner;

typedef struct func_80242730_StructOuter {
    u8 pad0[0x2C];
    func_80242730_StructInner *unk2C;
} func_80242730_StructOuter;

typedef struct func_80242730_StructArg {
    u8 pad0[0x90];
    s16 unk90;
} func_80242730_StructArg;

extern f32 D_802585E8;
extern struct func_80243290_StructTriple D_802520BC;

void func_80242730(func_80242730_StructArg *arg0, void **arg1) {
    ((func_80242730_StructOuter *) *arg1)->unk2C->unk4 = -59.5f;
    ((func_80242730_StructOuter *) *arg1)->unk2C->unk8 = 0.0f;
    ((func_80242730_StructOuter *) *arg1)->unk2C->unkC = D_802585E8;
    ((func_80242730_StructOuter *) *arg1)->unk2C->unk12 = 0x1B1C;
    func_8013A1B4(arg1, D_802520BC, 0xFFFFFF);
    arg0->unk90 = 0;
    func_800058DC(arg0, func_802427E8);
}
