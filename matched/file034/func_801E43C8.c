#include "context.h"

extern u8 D_801E0A48[];
extern u8 D_801DADFC[];
extern u8 D_801DAE00[];
extern u8 func_801DAC30[];
extern u8 func_801DAEE8[];
extern void func_801CC318();
extern void func_801CC458(s32, void *);
extern void func_801CC4C0(s32, void *);

s32 func_801E43C8(s32 arg0, s32 arg1) {
    func_801C2420(0x29, D_801E0A48);
    func_801CC318();
    func_801CC458(0, func_801DAC30 + 0x40);
    func_801CC4C0(0, func_801DAC30 + 0x44);
    func_801C2420(0x30, D_801E0A48 + 0x18);
    func_801CC318();
    func_801CC458(1, D_801DADFC);
    func_801CC4C0(1, D_801DAE00);
    func_801C2420(0x57, D_801E0A48 + 0x30);
    func_801CC318();
    func_801CC458(2, func_801DAEE8 + 0x30);
    func_801CC4C0(2, func_801DAEE8 + 0x34);
    return 1;
}
