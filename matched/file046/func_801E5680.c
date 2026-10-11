#include "context.h"

extern void func_801C2420(s32, u8 *);
extern void func_801CC318(void);
extern void func_801CC458(s32, u8 *);
extern void func_801CC4C0(s32, u8 *);
extern u8 D_801E0A48[];
extern u8 func_801DAC30[];
extern u8 D_801DAD28[];
extern u8 D_801DAD2C[];
extern u8 D_801DB374[];
extern u8 D_801DB378[];
extern u8 func_801DB190[];
extern u8 D_801DB314[];
extern u8 D_801DB318[];
extern u8 D_801DB334[];
extern u8 D_801DB338[];

s32 func_801E5680(s32 arg0, s32 arg1) {
    func_801C2420(0x29, D_801E0A48);
    func_801CC318();
    func_801CC458(0, func_801DAC30 + 0x40);
    func_801CC4C0(0, func_801DAC30 + 0x44);
    func_801C2420(0x2D, D_801E0A48 + 0x18);
    func_801CC318();
    func_801CC458(1, D_801DAD28);
    func_801CC4C0(1, D_801DAD2C);
    func_801C2420(0x148, D_801E0A48 + 0x30);
    func_801CC318();
    func_801CC458(2, D_801DB374);
    func_801CC4C0(2, D_801DB378);
    func_801C2420(0x31, D_801E0A48 + 0x48);
    func_801CC318();
    func_801CC458(3, func_801DB190 + 8);
    func_801CC4C0(3, func_801DB190 + 0xC);
    func_801C2420(0x2F, D_801E0A48 + 0x60);
    func_801CC318();
    func_801CC458(4, D_801DB314);
    func_801CC4C0(4, D_801DB318);
    func_801CC458(5, D_801DB334);
    func_801CC4C0(5, D_801DB338);
    return 1;
}
