#include "context.h"

struct func_801D7464_Struct {
    u8 pad0[0x91];
    u8 unk91;
    u8 pad1[0x9E - 0x92];
    s16 unk9E;
};

extern u8 D_801BBCDC[];

void func_801D7464(struct func_801D7464_Struct *arg0, s32 arg1) {
    if (D_801BBCDC[0xA] == 3) {
        arg0->unk91 |= 8;
        arg0->unk9E = 0x76;
        func_80020718(8);
    }
}
