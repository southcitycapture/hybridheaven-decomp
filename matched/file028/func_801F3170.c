#include "context.h"

extern void func_801CC318();
extern void func_801CC458(s32 arg0, void *arg1);
extern void func_801CC4C0(s32 arg0, void *arg1);
extern u8 D_801E0A48[];
extern u8 D_801DB314[];
extern u8 D_801DB318[];
extern u8 D_801DB334[];
extern u8 D_801DB338[];
extern u8 D_801DB354[];
extern u8 D_801DB358[];
extern u8 func_801DAE70[];

s32 func_801F3170(s32 arg0, s32 arg1) {
    func_801C2420(0x2F, D_801E0A48);
    func_801CC318();
    func_801CC458(0, D_801DB314);
    func_801CC4C0(0, D_801DB318);
    func_801CC458(1, D_801DB334);
    func_801CC4C0(1, D_801DB338);
    func_801CC458(2, D_801DB354);
    func_801CC4C0(2, D_801DB358);
    func_801C2420(0x11C, D_801E0A48 + 0x18);
    func_801CC318();
    func_801CC458(3, func_801DAE70 + 0x5C);
    func_801CC4C0(3, func_801DAE70 + 0x60);
    return 1;
}
