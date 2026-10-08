#include "context.h"

extern u8 D_801E0A48[];
extern u8 func_801DAE70[];
extern u8 func_801DAC30[];
extern u8 D_801DB084[];
extern u8 D_801DB088[];
extern void func_801CC318();
extern void func_801CC458(s32, void *);
extern void func_801CC4C0(s32, void *);

s32 func_801F465C(s32 arg0, s32 arg1) {
    func_801C2420(0x11C, D_801E0A48);
    func_801CC318();
    func_801CC458(0, func_801DAE70 + 0x5C);
    func_801CC4C0(0, func_801DAE70 + 0x60);
    func_801C2420(0x29, D_801E0A48 + 0x18);
    func_801CC318();
    func_801CC458(1, func_801DAC30 + 0x40);
    func_801CC4C0(1, func_801DAC30 + 0x44);
    func_801C2420(0x141, D_801E0A48 + 0x30);
    func_801CC318();
    func_801CC458(2, D_801DB084);
    func_801CC4C0(2, D_801DB088);
    return 1;
}
