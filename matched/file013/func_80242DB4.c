#include "context.h"
void func_80242E44(s32 arg0, s32 arg1);

typedef struct func_80242DB4_Struct {
    u8 pad0[0xA8];
    s16 unkA8;
} func_80242DB4_Struct;

extern void func_80005700(void *arg0);
extern void func_80020718(s32 arg0);
extern void func_80126968(void);
extern s32 func_80126CC0(void *arg0, void *arg1);
extern s32 func_80133A24(s32 arg0);
extern void func_8013B570(void *arg0, s32 arg1, s32 arg2, s32 arg3, void *arg4);
extern void func_80127014(void);

void func_80242DB4(void *arg0, s32 arg1) {
    if (func_80133A24(8) != 0) {
        func_80005700(arg0);
        return;
    }
    if (func_80126CC0(arg0, func_80127014) != 0) {
        func_80126968();
        func_80020718(7);
        ((func_80242DB4_Struct *) arg0)->unkA8 = 0x1E;
        func_8013B570(arg0, 0x58, 2, 4, func_80242E44);
    }
}
