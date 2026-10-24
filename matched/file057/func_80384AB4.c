#include "context.h"
extern void func_8001B204();
extern u16 D_801BBC1C;
extern u8 D_80389B8C[];
extern u8 D_8038CB20[];
extern s32 func_80231D84(f32, f32, f32, s32, s32);
struct func_80384AB4_Struct {
    u8 pad0[0x0C];
    u8 *unkC;
    u8 pad10[0xA0];
    s16 unkB0;
};
void func_80384AB4(struct func_80384AB4_Struct *arg0, s32 arg1) {
    s32 i = 0;
    s32 r;
    u8 v;
    if (arg0->unkB0-- == 0 || (D_80089474[2] & 0x8000) || (D_80089474[2] & 0x2000)) {
        do {
            func_8001B204(i & 0xFF, 0, 0, D_8038CB20);
            i = (i + 1) & 0xFF;
        } while (i < 5);
        if (D_801BBC1C == 5) {
            r = func_80231D84(0.0f, 0.0f, 0.0f, 0, 0);
            v = r;
            if (r != 0) {
                ((u8 *)func_80005670(arg0->unkC, D_80389B8C))[0xA1] = v;
            } else {
                arg0->unkC[0xB3] = 1;
            }
        } else {
            arg0->unkC[0xB3] = 1;
        }
        func_80005700(arg0);
    }
}
