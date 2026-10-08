#include "common.h"

typedef struct func_8021CDE8_Struct {
    u8 pad0[0x9B];
    u8 unk9B;
    u8 pad1[0xAE - 0x9C];
    u8 unkAE;
    u8 unkAF;
    s16 unkB0;
} func_8021CDE8_Struct;

extern void func_800058DC(void *, void *);
extern void func_80020744();
extern void func_80126E88(s32);
extern s8 D_801BCC21;
extern void func_8021D264(void);

void func_8021CDE8(func_8021CDE8_Struct *arg0, s32 arg1) {
    func_8021CDE8_Struct *temp = arg0;

    if (arg0->unkAE != 0 && arg0->unkAF == 0 && arg0->unk9B == 0) {
        arg0->unkB0 = arg0->unkB0 - 1;
        if (arg0->unkB0 < 0) {
            arg0->unkB0 = 0x1E;
            func_80020744(7);
            func_80126E88(0x125);
            D_801BCC21 = 0xE;
            func_800058DC(temp, func_8021D264);
        }
    }
}
