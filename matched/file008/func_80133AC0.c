#include "context.h"

extern s32 func_80126CC0(s32, void *);
extern void func_800058DC(s32, void *);
extern u8 func_80126EAC[];
extern u8 func_80133B00[];

void func_80133AC0(s32 arg0, s32 arg1) {
    if (func_80126CC0(arg0, func_80126EAC) != 0) {
        func_800058DC(arg0, func_80133B00);
    }
}
