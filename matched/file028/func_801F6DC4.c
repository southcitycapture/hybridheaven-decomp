#include "context.h"

extern u8 func_801DAEE8[];
extern u8 D_801DB334[];
extern u8 D_801DB338[];
extern u8 D_801DB354[];
extern u8 D_801DB358[];
extern u8 D_801DB258[];
extern u8 D_801DB25C[];
extern u8 D_801DAFD8[];
extern u8 D_801DAFDC[];
extern u8 D_801DB660[];
extern u8 D_801DB664[];

s32 func_801F6DC4(s32 arg0, s32 arg1) {
    func_801C2420(0x2F, D_801E0A48);
    func_801CC318();
    func_801CC458(0, D_801DB314);
    func_801CC4C0(0, D_801DB318);
    func_801CC458(1, D_801DB334);
    func_801CC4C0(1, D_801DB338);
    func_801CC458(2, D_801DB354);
    func_801CC4C0(2, D_801DB358);
    func_801C2420(0x32, D_801E0A48 + 0x18);
    func_801CC318();
    func_801CC458(3, D_801DB258);
    func_801CC4C0(3, D_801DB25C);
    func_801C2420(0x57, D_801E0A48 + 0x30);
    func_801CC318();
    func_801CC458(4, func_801DAEE8 + 0x30);
    func_801CC4C0(4, func_801DAEE8 + 0x34);
    func_801CC458(5, D_801DAFD8);
    func_801CC4C0(5, D_801DAFDC);
    func_801C2420(0x11B, D_801E0A48 + 0x48);
    func_801CC318();
    func_801CC458(6, D_801DB660);
    func_801CC4C0(6, D_801DB664);
    return 1;
}
