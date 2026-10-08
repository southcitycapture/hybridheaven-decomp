#include "context.h"

extern s32 func_801DB6B8(s32, s32, s32);
extern void func_802237B0(s32, s32);
extern void func_800058DC(s32, void *);
extern void func_80223260(void);

void func_8022321C(s32 arg0, s32 arg1) {
    if (func_801DB6B8(arg0, arg1, 0) != 0) {
        func_802237B0(arg0, 0);
        func_800058DC(arg0, func_80223260);
    }
}
