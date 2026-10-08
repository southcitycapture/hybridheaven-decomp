#include "common.h"

typedef struct func_80243D1C_Struct {
    u8 pad0[4];
    u16 unk4;
    u8 pad6[0x434 - 6];
    u8 unk434;
} func_80243D1C_Struct;

extern s32 func_801C3044(void);
extern s32 func_800058DC(s32 arg0, void *arg1);
extern s32 func_8012FE50(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
extern func_80243D1C_Struct D_801BBBF0;
extern void func_80243D88(void);

void func_80243D1C(s32 arg0, s32 arg1) {
    if (func_801C3044() == 0) {
        D_801BBBF0.unk434 = 4;
        D_801BBBF0.unk4 = 0x48;
        func_8012FE50(9, D_801BBBF0.unk4, 1, 1, 1);
        func_800058DC(arg0, func_80243D88);
    }
}
