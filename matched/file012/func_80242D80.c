#include "context.h"

struct func_80242D80_Struct {
    u8 pad[4];
    u16 unk4;
};

extern void func_8001B204(s32, s32, s32, void *);
extern void func_80020718(s32);
extern void func_8012FE50(s32, s32, s32, s32, s32);
extern s32 func_80130078(void);
extern u16 D_80089358;
extern struct func_80242D80_Struct D_80089474;
extern struct func_80242D80_Struct D_801BBBF0;
extern u8 D_8024917C[];
extern u8 D_80249188[];

void func_80242D80(void) {
    if (D_80089358 & 0x10) {
        func_8001B204(0x13, 0x18, 0xD0, D_8024917C);
    } else {
        func_8001B204(0x13, 0, 0, D_80249188);
    }
    if ((func_80130078() == 0) && (D_80089474.unk4 & 0xF000)) {
        D_801BBBF0.unk4 = 0x73;
        func_8012FE50(2, D_801BBBF0.unk4, 1, 1, 2);
        func_80020718(0xA);
    }
}
