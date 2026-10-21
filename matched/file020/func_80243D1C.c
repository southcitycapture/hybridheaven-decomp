#include "common.h"


extern s32 func_801C3044(void);
extern void func_800058DC(void *, void *);
extern s32 func_8012FE50(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
extern struct func_80243D1C_Struct D_801BBBF0;
extern void func_80243D88(s32 arg0, s32 arg1);

void func_80243D1C(s32 arg0, s32 arg1) {
    if (func_801C3044() == 0) {
        D_801BBBF0.unk434 = 4;
        D_801BBBF0.unk4 = 0x48;
        func_8012FE50(9, D_801BBBF0.unk4, 1, 1, 1);
        func_800058DC(arg0, func_80243D88);
    }
}
