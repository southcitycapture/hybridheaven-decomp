#include "common.h"

extern void func_80005670(s32 arg0, u8 *arg1);
extern void func_800058DC(s32 arg0, void *arg1);
extern void func_8001F74C(s32 arg0);
extern u8 D_80249B94[];
extern f32 D_8024F128;
extern f32 D_8024F500;
extern void func_80246A84(void);

void func_80246A30(s32 arg0, s32 arg1) {
    D_8024F500 = D_8024F128;
    func_80005670(arg0, D_80249B94);
    func_8001F74C(arg0);
    func_800058DC(arg0, func_80246A84);
}
