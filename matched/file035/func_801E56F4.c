#include "context.h"
extern void func_801C2420(s32, void *);
extern void func_801CC318(void);
extern void func_801CC458(s32, void *);
extern void func_801CC4C0(s32, void *);
extern u8 D_801E0A48[];
extern u8 func_801DAC30[];
extern u8 func_801DB868[];
extern u8 D_801DAD28[];
extern u8 D_801DAD2C[];
extern u8 func_801DB788[];
extern u8 func_801DAEE8[];

s32 func_801E56F4(s32 arg0, s32 arg1) {
    func_801C2420(0x29, D_801E0A48);
    func_801CC318();
    func_801CC458(0, func_801DAC30 + 0x40);
    func_801CC4C0(0, func_801DAC30 + 0x44);
    func_801C2420(0x36, D_801E0A48 + 0x18);
    func_801CC318();
    func_801CC458(1, func_801DB868 + 0x34);
    func_801CC4C0(1, func_801DB868 + 0x38);
    func_801C2420(0x2D, D_801E0A48 + 0x30);
    func_801CC318();
    func_801CC458(2, D_801DAD28);
    func_801CC4C0(2, D_801DAD2C);
    func_801CC458(3, func_801DB788 + 0x70);
    func_801CC4C0(3, func_801DB788 + 0x74);
    func_801C2420(0x57, D_801E0A48 + 0x48);
    func_801CC318();
    func_801CC458(4, func_801DAEE8 + 0x30);
    func_801CC4C0(4, func_801DAEE8 + 0x34);
    return 1;
}
