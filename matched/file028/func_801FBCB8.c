#include "context.h"

extern s32 D_8020790C;
extern s8 D_80208E34;
extern s8 D_80208E35;
extern s8 D_80208E36;

s32 func_801FBCB8(s32 arg0, s32 arg1) {
    func_801CCE0C(1);
    func_801CCE88(0, 0xFF, 0, 0);
    func_801CCEC8(0, D_80208E34, D_80208E35, D_80208E36);
    if (D_8020790C != 0) {
        D_80208E36 = (u8) D_80208E36 + 4 + (D_80208E35 = (u8) D_80208E35 + 4 + (D_80208E34 = (u8) D_80208E34 + 4, 0), 0);
        if ((u8) D_80208E34 >= 0x7C) {
            D_8020790C = 0;
        }
    } else {
        D_80208E36 = (u8) D_80208E36 - 4 + (D_80208E35 = (u8) D_80208E35 - 4 + (D_80208E34 = (u8) D_80208E34 - 4, 0), 0);
        if ((u8) D_80208E34 < 5) {
            D_8020790C = 1;
        }
    }
    return 5;
}
