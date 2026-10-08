#include "common.h"

typedef struct func_8024388C_StructD {
    s32 a;
    s32 b;
    s32 c;
} func_8024388C_StructD;

extern void func_8012636C(void *, s32);
extern void func_8013A1B4(s32, func_8024388C_StructD, s32);
extern void func_800058DC(void *, void *);
extern void func_80243930(void);
extern func_8024388C_StructD D_8017DC2C;

void func_8024388C(u8 *arg0, s32 arg1) {
    u8 *sp2C;

    sp2C = *(u8 **)(arg0 + 0x5C);
    func_8012636C(arg0, 0);
    *(s16 *)(sp2C + 0x78) = 1;
    *(f32 *)(*(u8 **)(*(u8 **)(arg0 + 0x24) + 0x2C) + 0xC) = -30.0f;
    arg0[0x94] = 0;
    arg0[0x91] = 0;
    func_8013A1B4(arg1, D_8017DC2C, 0xE00000);
    func_800058DC(arg0, (void *)func_80243930);
}
