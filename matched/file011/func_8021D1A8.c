#include "common.h"

struct func_8021D1A8_Struct {
    u8 pad0[0xA4];
    s16 unkA4;
    u8 pad1[0xA];
    s16 unkB0;
};

extern s32 func_80005700(void *);
extern s32 func_8012FE50(s32, u16, s32, s32, s32);
extern u16 D_801BBBF4;

void func_8021D1A8(struct func_8021D1A8_Struct *arg0, s32 arg1) {
    s32 temp_v0;

    arg0->unkB0 = arg0->unkB0 + 1;
    if (arg0->unkB0 >= 0x1F) {
        temp_v0 = arg0->unkA4 & 0x7F;
        if (temp_v0 == 0) {
            func_8012FE50(0xB, D_801BBBF4, 5, 5, 0);
        } else if (temp_v0 == 1) {
            func_8012FE50(0xE, 0xC0, 1, 1, 0);
        } else {
            func_8012FE50(0xE, 0x73, 1, 1, 0);
        }
        func_80005700(arg0);
    }
}
