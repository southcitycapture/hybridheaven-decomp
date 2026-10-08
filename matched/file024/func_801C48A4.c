#include "common.h"

extern s32 func_801406A4();
extern void func_80142570();
extern void func_800179B0(s32);
extern void func_80005700(s32);
extern void func_800023A8(s32);
extern void func_8012FE50(s32, s32, s32, s32, s32);
extern void func_800058DC(s32, void *);
extern void func_801C4954();
extern s32 D_801CC8BC;
extern s32 D_801CC8C0;

void func_801C48A4(s32 arg0, s32 arg1) {
    if (func_801406A4() & 0xFF) {
        func_80142570();
        func_800179B0(0);
        if (D_801CC8BC != 0) {
            func_80005700(D_801CC8BC);
            D_801CC8BC = 0;
        }
        if (D_801CC8C0 != 0) {
            func_80005700(D_801CC8C0);
            D_801CC8C0 = 0;
        }
        func_800023A8(0);
        func_8012FE50(0x17, 0x73, 1, 1, 0);
        func_800058DC(arg0, func_801C4954);
    }
}
