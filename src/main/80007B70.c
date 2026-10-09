#include "common.h"


struct func_80007B70_Struct {
    u8 pad0[0x98];
    s16 unk98;
    s16 unk9A;
    u8 pad9C[0xDC - 0x9C];
    s32 unkDC;
    u8 padE0[0x1A0 - 0xE0];
    s32 unk1A0;
};

extern void func_8001F160(void *a0, s32 a1);
extern void func_8001F6D0(void);
extern u8 D_800692B0[];
extern struct func_80007B70_Struct D_800892B0;

void func_80007B70(void) {
    func_8001F160(D_800692B0, 0x24308);
    D_800892B0.unk98 = 1;
    D_800892B0.unk9A = 2;
    D_800892B0.unkDC = -1;
    D_800892B0.unk1A0 = -1;
    func_8001F6D0();
}

