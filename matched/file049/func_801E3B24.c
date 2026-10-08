#include "context.h"

extern void func_801C2420(s32, void *);
extern void func_801CC318();
extern void func_801CC458(s32, void *);
extern void func_801CC4C0(s32, void *);
extern u8 func_801DAC30[];
extern u8 D_801E0A48[];
extern u8 D_801DAD28[];
extern u8 D_801DAD2C[];
extern u8 D_801DB314[];
extern u8 D_801DB318[];
extern u8 D_801DB334[];
extern u8 D_801DB338[];
extern u8 D_801DB354[];
extern u8 D_801DB358[];

s32 func_801E3B24(s32 arg0, s32 arg1) {
    func_801C2420(0x29, D_801E0A48);
    func_801CC318();
    func_801CC458(0, func_801DAC30 + 0x40);
    func_801CC4C0(0, func_801DAC30 + 0x44);
    func_801C2420(0x2D, D_801E0A48 + 0x18);
    func_801CC318();
    func_801CC458(1, D_801DAD28);
    func_801CC4C0(1, D_801DAD2C);
    func_801C2420(0x2F, D_801E0A48 + 0x30);
    func_801CC318();
    func_801CC458(2, D_801DB314);
    func_801CC4C0(2, D_801DB318);
    func_801CC458(3, D_801DB334);
    func_801CC4C0(3, D_801DB338);
    func_801CC458(4, D_801DB354);
    func_801CC4C0(4, D_801DB358);
    return 1;
}
