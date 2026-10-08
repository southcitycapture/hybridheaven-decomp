#include "common.h"

extern s32 func_80005670(void *a0, void *a1);
extern s32 func_801CC530();
extern s32 func_801CEDBC(s32 arg0);
extern s32 func_801CEDC8(s32 arg0);
extern s32 func_801D367C(s32 arg0);
extern u8 D_801DAD14[];
extern u8 D_801DB360[];
extern u8 func_801DAAF0[];
extern u8 func_801DAC30[];

s32 func_801E6A14(s32 arg0, s32 arg1) {
    func_80005670(*(void **)(func_801DAAF0 + 0x24), func_801DAC30 + 0x2C);
    func_801CEDBC(0);
    func_801CEDC8(0);
    func_80005670(*(void **)(*(u8 **)(func_801DAAF0 + 0x24) + 0x8), D_801DAD14);
    func_801D367C(0);
    func_80005670(*(void **)(*(u8 **)(*(u8 **)(func_801DAAF0 + 0x24) + 0x8) + 0x8), D_801DB360);
    func_801CC530();
    return 2;
}
