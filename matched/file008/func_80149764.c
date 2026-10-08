#include "context.h"

struct func_80149764_Struct {
    u8 pad0[0x28];
    s16 unk28;
    u8 pad1[0x92 - 0x2A];
    u8 unk92;
    u8 unk93;
    u8 pad2[4];
    void *unk98;
    u8 pad3[6];
    s8 unkA2;
    u8 pad4[1];
    void *unkA4;
};

extern s32 func_80126A0C(s32, u16, s32);
extern s32 func_80148044();
extern void func_801FBB30();
extern void func_80020744();
extern void func_80116E80();
extern void func_80146178();
extern s32 func_80006214();
extern s8 D_801BCC25;
extern u8 D_801BBC8C;
extern u8 D_801BC03C;
extern void func_801498CC();

void func_80149764(struct func_80149764_Struct *arg0, s32 *arg1) {
    u8 sp47;

    sp47 = 0;
    if (func_80126A0C((s32)arg0, 0x113, 0) != 0) {
        D_801BCC25 = 3;
        if (func_80148044() == 0) {
            func_801FBB30();
        }
        func_80020744(3);
        func_80116E80(0x200);
        func_80116E80(0x10);
        func_80116E80(0x800);
        func_80146178(arg0, &sp47, 0, 0, 0x140, 0xF0, 2, 0, 0, 0, 0x66);
        ((struct func_80149764_Struct *)arg1[func_80006214(arg0) - 1])->unk28 = 0x800;
        arg0->unk92 = 1;
        arg0->unkA4 = &D_801BBC8C;
        arg0->unk93 = 3;
        arg0->unkA2 = 1;
        arg0->unk98 = &D_801BC03C;
        func_800058DC(arg0, func_801498CC);
    }
}
