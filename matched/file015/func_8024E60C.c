#include "context.h"
extern void func_800058DC(void *, void *);

extern s32 func_80005670(s32, void *);
extern s32 func_80126A0C(s32, s32, s32);
extern u8 func_8024E67C[];
extern u8 D_80254A54[];
extern u8 D_80254A68[];
extern s32 D_8025A2F4;
extern s32 D_8025A2F8;

void func_8024E60C(s32 arg0, s32 arg1) {
    if (func_80126A0C(arg0, 0x85, 0) != 0) {
        D_8025A2F4 = func_80005670(arg0, D_80254A54);
        D_8025A2F8 = func_80005670(arg0, D_80254A68);
        func_800058DC(arg0, func_8024E67C);
    }
}
