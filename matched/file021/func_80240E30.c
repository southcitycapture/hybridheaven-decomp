#include "common.h"

struct func_80240E30_Struct {
    u8 pad0[0x40];
    s32 unk40;
    u8 pad1[0x196 - 0x44];
    u16 unk196;
    u8 pad2[0x1088 - 0x198];
    s32 unk1088;
    u8 pad3[0x10A0 - 0x108C];
    s32 unk10A0;
};

extern struct func_80240E30_Struct D_801BBBF0;
extern u8 D_80245DFC[];
extern void func_80240E94(void);
void func_800058DC(s32 arg0, void *arg1);
void func_80203830(s32 arg0, void *arg1);

void func_80240E30(s32 arg0, s32 arg1) {
    if (D_801BBBF0.unk196 == 1) {
        func_80203830(arg0, D_80245DFC);
        D_801BBBF0.unk1088 = arg0;
        D_801BBBF0.unk10A0 = D_801BBBF0.unk40;
        func_800058DC(arg0, func_80240E94);
    }
}
