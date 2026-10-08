#include "context.h"

extern void func_80005670(void *a0, void *a1);
extern void func_801CC530(void);
extern void func_801D517C(s32 a0);
extern void func_801D5188(s32 a0);
extern u8 D_801DB300[];
extern u8 D_801DB64C[];
extern u8 func_801DAAF0[];
extern u8 func_801DAC30[];

s32 func_801E3744(s32 arg0, s32 arg1) {
    func_80005670(*(void **)(func_801DAAF0 + 0x24), func_801DAC30 + 0x2C);
    func_801D517C(0);
    func_801D5188(0);
    func_80005670(*(void **)(*(u8 **)(func_801DAAF0 + 0x24) + 0x8), D_801DB64C);
    func_80005670(*(void **)(*(u8 **)(*(u8 **)(func_801DAAF0 + 0x24) + 0x8) + 0x8), D_801DB300);
    func_801CC530();
    return 2;
}
