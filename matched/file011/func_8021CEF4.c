#include "context.h"

extern u8 D_80389B00[];
extern void func_8021CF50();

typedef struct func_8021CEF4_Struct {
    u8 pad0[0x9C];
    s32 unk9C;
    u8 pad1[0xB3 - 0xA0];
    u8 unkB3;
} func_8021CEF4_Struct;

void func_8021CEF4(func_8021CEF4_Struct *arg0, s32 arg1) {
    if (func_80126A0C((s32)arg0, 0x129, 0) != 0) {
        arg0->unk9C = func_80005670(arg0, D_80389B00);
        arg0->unkB3 = 0;
        func_800058DC(arg0, func_8021CF50);
    }
}
