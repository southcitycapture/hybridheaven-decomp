#include "context.h"
extern void func_80030610(void *, void *, s32);
extern void func_8002FB60(s32, void *, s32);
extern void func_80027F20(void *, u8 *, void *);
extern void func_800023A8(s32 arg0);
extern u8 D_8005CE20[];
extern u8 D_8005CE38[];
extern u8 D_8005CE40[];
extern u8 D_800892B0[];

void func_800020B0(void) {
    u8 sp40[0x18];
    s32 sp3C;
    s32 i;
    u8 sp37;
    u8 *p;

    func_80030610(sp40, &sp3C, 1);
    func_8002FB60(5, sp40, 1);
    func_80027F20(sp40, &sp37, D_8005CE40);
    func_80030610(D_8005CE20, D_8005CE38, 1);
    func_8002FB60(5, D_8005CE20, 0);
    p = D_800892B0;
    for (i = 0; i != 4; i++) {
        func_800023A8(i & 0xFF);
        if ((sp37 & (1 << i)) && !(D_8005CE40[i * 4 + 3] & 8)) {
            *(s16 *)(p + 0x1C4) = 1;
        } else {
            *(s16 *)(p + 0x1C4) = 0;
        }
        p += 0x20;
    }
}
