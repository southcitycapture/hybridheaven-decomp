#include "context.h"
void func_800058DC(void *arg0, void *arg1);

extern s32 func_80126CC0(s32, void *);
extern u8 func_80126EAC[];
extern u8 func_801359C0[];

void func_80135980(s32 arg0, s32 arg1) {
    if (func_80126CC0(arg0, func_80126EAC) != 0) {
        func_800058DC(arg0, func_801359C0);
    }
}
