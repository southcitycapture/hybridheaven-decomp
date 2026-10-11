#include "context.h"
extern s32 func_80133A24(s32);
extern void func_80005700();
extern void func_800058DC(void *arg0, void *arg1);
extern s32 func_801267B8(s32, s32);
extern void func_802409AC();
extern void func_80240F0C();
extern void *D_80171CEC[];
extern struct func_80241AF0_StructBBBF0 D_801BBBF0;

struct func_802408F0_Self {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad1[0x36 - 0x30];
    u16 unk36;
    u8 pad2[0x8C - 0x38];
    void *unk8C;
};

void func_802408F0(struct func_802408F0_Self *arg0, s32 arg1) {
    if (func_80133A24(3) != 0) {
        func_80005700(arg0);
    }
    if (*(s32 *)((u8 *)&D_801BBBF0 + 0xE0) != 0) {
        *((u8 *)&D_801BBBF0 + 0x181) = 1;
        arg0->unk2C |= 0x8000;
        arg0->unk8C = (void *)func_80240F0C;
        if (func_801267B8((*(u16 *)*(void **)D_80171CEC[arg0->unk36] & 0x0FFFFFFF) & 0xFFFF, 0x3000) == 1) {
            func_800058DC(arg0, (void *)func_802409AC);
        }
    }
}
