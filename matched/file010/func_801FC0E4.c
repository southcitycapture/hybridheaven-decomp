#include "context.h"

typedef struct func_801FC0E4_Struct {
    u8 pad0[0x24];
    s32 unk24;
    u8 pad28[0x91 - 0x28];
    u8 unk91;
} func_801FC0E4_Struct;

extern s32 func_80126A0C(func_801FC0E4_Struct *, s32, s32);
extern void func_80147148(s32, s32);
extern void func_800058DC(s32, void *);
extern u8 func_801FBDF4[];

void func_801FC0E4(func_801FC0E4_Struct *arg0, s32 arg1) {
    if (*(u8 *)&D_8021B0E4 == 1) {
        arg0->unk91 = 1;
    }
    if (arg0->unk91 != 0 && func_80126A0C(arg0, 0x10E, 0) != 0) {
        func_80147148(arg0->unk24, 1);
        func_800058DC(arg0, func_801FBDF4);
    }
}
