#include "context.h"

typedef struct func_80240D6C_Struct {
    u8 pad[0x90];
    u16 unk90;
} func_80240D6C_Struct;

extern s32 func_80126B14(void *, void *, u16, s32);
extern void func_80240DB4();

void func_80240D6C(func_80240D6C_Struct *arg0, s32 arg1) {
    if (func_80126B14(arg0, func_80127014, arg0->unk90, 0x32) != 0) {
        func_800058DC((s32)arg0, func_80240DB4);
    }
}
