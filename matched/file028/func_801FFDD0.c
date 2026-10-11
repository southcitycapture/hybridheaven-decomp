#include "context.h"

extern u8 D_801DB258[];
extern u8 D_801DB25C[];

s32 func_801FFDD0(s32 arg0, s32 arg1) {
    func_801C2420(0x2F, D_801E0A48);
    func_801CC318();
    func_801CC458(0, D_801DB314);
    func_801CC4C0(0, D_801DB318);
    func_801CC458(1, D_801DB334);
    func_801CC4C0(1, D_801DB338);
    func_801C2420(0x29, D_801E0A48 + 0x18);
    func_801CC318();
    func_801CC458(2, func_801DAC30 + 0x40);
    func_801CC4C0(2, func_801DAC30 + 0x44);
    func_801C2420(0x32, D_801E0A48 + 0x30);
    func_801CC318();
    func_801CC458(3, D_801DB258);
    func_801CC4C0(3, D_801DB25C);
    func_801C2420(0x57, D_801E0A48 + 0x48);
    func_801CC318();
    func_801CC458(4, func_801DAEE8 + 0x30);
    func_801CC4C0(4, func_801DAEE8 + 0x34);
    return 1;
}
