#include "context.h"
extern void func_800058DC(s32, void *);
void func_801BF500(s32 arg0, s32 arg1);

extern s16 D_80089354;
extern void D_8038C97C(s32, s32, s32, s32, s32, s32, s32);

void func_801BF4A4(s32 arg0, s32 arg1) {
    D_80089354 = 0;
    D_8038C97C(arg0, 0, 0, 0, 0xF, 0, 1);
    func_800058DC(arg0, func_801BF500);
}
