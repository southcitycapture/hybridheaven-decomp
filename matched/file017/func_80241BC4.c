#include "common.h"

extern void func_800058DC(void *, void *);
extern void func_80005E44(void *, void *);
extern void func_80006214(void *);
extern s32 func_8012C97C(s32, s32);
extern u8 D_80164F40[];
extern void func_80241C28(void);

void func_80241BC4(void *arg0, void *arg1) {
    func_80005E44(arg0, D_80164F40);
    func_80006214(arg0);
    *(s32 *)((u8 *)arg0 + 0x2C) = 0xC00;
    *(s32 *)((u8 *)arg0 + 0x74) = func_8012C97C(0x2FA, 8);
    func_800058DC(arg0, func_80241C28);
}
