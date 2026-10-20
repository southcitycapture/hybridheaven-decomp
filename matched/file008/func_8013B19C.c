#include "context.h"

struct func_8013B19C_Struct {
    u8 pad[4];
    u16 unk4;
    u8 pad6[0x1A];
};

extern struct func_8013B19C_Struct D_8017D460[];

s32 func_8013B19C(u16 arg0) {
    u8 i;

    i = 0;
    arg0 &= 0xFFF;
    for (; D_8017D460[i].unk4 != 0xFFFF; i++) {
        if (arg0 == D_8017D460[i].unk4) {
            return i;
        }
    }
    return 0xFF;
}
