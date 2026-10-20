#include "context.h"
extern s32 D_80246C70;
void func_8024363C(void *arg0, s32 arg1);
extern void func_80243B04(s32 arg0, s32 arg1);
void func_80243B04(s32 arg0, s32 arg1);

extern s32 func_80126CC0(void *, void *);
extern void func_80126EAC(void);
extern s32 func_8015105C(s32);
extern u8 D_801BC3D8[];

void func_802435B8(void *arg0, s32 arg1) {
    if (func_80126CC0(arg0, func_80126EAC) != 0) {
        if (func_80133A24(0x170) != 0) {
            func_800058DC(arg0, func_80243B04);
            return;
        }
        D_80246C70 = func_8015105C(0x4057);
        D_801BC3D8[0x3BA] = 1;
        func_800058DC(arg0, func_8024363C);
    }
}
