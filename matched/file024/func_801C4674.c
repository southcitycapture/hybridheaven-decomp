#include "context.h"
void func_801C47C4(s32 arg0, s32 arg1);

extern s32 func_801403F8();
extern s32 func_8013EA54();
extern void func_80152D0C();
extern void func_80152D3C();
extern void func_80152D4C();
extern void func_80152F7C();
extern s32 func_80153008();
void func_801C4674(s32 arg0, s32 arg1) {
    u8 sp27;

    if ((sp27 = func_801403F8()) == 1) {
        func_80142570();
        func_800179B0(0);
        if (D_801CC8BC != 0) {
            func_80005700(D_801CC8BC);
            D_801CC8BC = 0;
        }
        if (func_8013EA54() < 3) {
            func_80152D0C(0);
        } else {
            func_80152D0C(1);
        }
        if (func_8013EA54() == 0xFF) {
            func_80152D3C(1);
        } else {
            func_80152D3C(0);
        }
        if (D_801CC8C8 == 0) {
            func_80152D4C();
        }
        func_80152F7C();
        func_80020718(0xA);
        arg1 = func_80153008();
        func_8012FE50(0x20, arg1 & 0xFFFF, 1, 1, 0);
        func_800058DC(arg0, func_801C47C4);
    }
    if (sp27 == 2) {
        func_8012FE50(0x17, 0x73, 1, 1, 0);
        func_800058DC(arg0, func_801C47C4);
    }
}
