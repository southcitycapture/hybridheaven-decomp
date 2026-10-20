#include "context.h"

extern u8 func_80002BE0(u8);
extern u8 func_80002DBC(u8, u8, u8 *);

u8 func_800031EC(u8 arg0, u8 arg1, u16 arg2, u16 arg3, s32 arg4) {
    u8 v;
    u8 sp26;
    s32 r;

    v = func_80002BE0(arg0);
    if (v == 0) {
        v = func_80002DBC(arg0, arg1, &sp26);
        if (v == 0) {
            r = func_80029784(&D_8005CE70[arg0 * 0x68], sp26, 0, arg2, arg3, arg4);
            switch (r) {
            case 0: v = 0; break;
            case 1: v = 1; break;
            case 2: v = 2; break;
            case 3: v = 8; break;
            case 4: v = 3; break;
            case 5: v = 9; break;
            case 6: v = 0xD; break;
            default: v = 0; break;
            }
        }
    }
    return v;
}
