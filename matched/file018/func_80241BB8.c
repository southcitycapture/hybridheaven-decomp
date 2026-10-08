#include "context.h"

extern void func_80020718(s32);
extern s32 func_80126CC0(s32, void *);
extern u8 *D_801BBCCC;
extern u8 func_80127014[];
extern u8 func_80241C18[];

void func_80241BB8(s32 arg0, s32 arg1) {
    if (D_801BBCCC[0x63] != 0 && func_80126CC0(arg0, func_80127014) != 0) {
        func_80020718(0x54);
        func_800058DC(arg0, func_80241C18);
    }
}
