#include "context.h"

extern func_801451C0_StructA *D_8008DA88[];
extern s32 D_80006214(void *);

void func_80145348(void *arg0, u8 arg1, u8 arg2) {
    func_80145310(D_8008DA88[(u8)(D_80006214(arg0) - 1)], arg1, arg2);
}
