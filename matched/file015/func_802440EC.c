#include "context.h"
extern void func_800058DC(void *, void *);
extern s32 func_80010550(s32, s32, s32);
extern void func_80133980(s32);
void func_80244138(s32 arg0, s32 arg1);


void func_802440EC(void *arg0, void *arg1) {
    s32 temp;

    temp = *(s32 *)((u8 *)arg0 + 0x5C);
    if (func_80010550((s32)arg1, temp, (s32)arg1) != 0) {
        func_80133980(0x73);
        func_800058DC(arg0, func_80244138);
    }
}
