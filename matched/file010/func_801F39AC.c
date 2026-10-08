#include "common.h"

extern void func_80005E44(s32, u8 *);
extern void func_80006214(s32);
extern void func_8012636C(s32, s32);
extern void func_8012C89C(s32, s32, s32, s32);
extern void func_800058DC(s32, void *);
extern u8 D_80164F40[];
extern void func_801F3A18(void);

void func_801F39AC(s32 arg0, s32 arg1) {
    func_80005E44(arg0, D_80164F40);
    func_80006214(arg0);
    func_8012636C(arg0, 0);
    func_8012C89C(arg0, 0, 0x86, 0);
    func_800058DC(arg0, func_801F3A18);
}
