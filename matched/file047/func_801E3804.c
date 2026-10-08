#include "common.h"

extern void func_801C2420(s32 arg0, void *arg1);
extern void func_801CC318(void);
extern void func_801CC458(s32 arg0, void *arg1);
extern void func_801CC4C0(s32 arg0, void *arg1);
extern u8 D_801E0A48[];
extern u8 func_801DAC30[];

s32 func_801E3804(s32 arg0, s32 arg1) {
    func_801C2420(0x29, D_801E0A48);
    func_801CC318();
    func_801CC458(0, func_801DAC30 + 0x40);
    func_801CC4C0(0, func_801DAC30 + 0x44);
    return 1;
}
