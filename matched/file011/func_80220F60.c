#include "context.h"

struct func_80220F60_Struct {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 pad1[0xEC - 0xE0];
    s32 unkEC;
    u8 pad2[0x1031 - 0xF0];
    u8 unk1031;
};

extern struct func_80220F60_Struct D_801BBBF0;
extern void func_800058DC(s32, void *);
extern void func_80359560(s32);
extern void func_80220FC0(void);

void func_80220F60(s32 arg0) {
    s32 sp1C;

    if (arg0 != D_801BBBF0.unkDC) {
        sp1C = D_801BBBF0.unkDC;
    } else {
        sp1C = D_801BBBF0.unkEC;
    }
    if (D_801BBBF0.unk1031 != 0xF) {
        func_80359560(arg0);
        func_800058DC(sp1C, func_80220FC0);
    }
}
