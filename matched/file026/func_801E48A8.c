#include "context.h"
extern u8 D_801E0A48[];
void func_801C2420(s32 arg0, void *arg1);
void func_801CC318(void);
void func_801CC458(s32 arg0, void *arg1);
void func_801CC4C0(s32 arg0, void *arg1);
extern u8 func_801DAEE8[];

extern u8 D_801DAD28[];
extern u8 D_801DADFC[];
extern u8 D_801DAE00[];
extern u8 D_801DB144[];

s32 func_801E48A8(s32 arg0, s32 arg1) {
    func_801C2420(0x2A, D_801E0A48);
    func_801CC318();
    func_801CC458(0, D_801DB144);
    func_801C2420(0x2D, D_801E0A48 + 0x18);
    func_801CC318();
    func_801CC458(1, D_801DAD28);
    func_801C2420(0x30, D_801E0A48 + 0x30);
    func_801CC318();
    func_801CC458(2, D_801DADFC);
    func_801CC4C0(2, D_801DAE00);
    func_801C2420(0x57, D_801E0A48 + 0x48);
    func_801CC318();
    func_801CC458(3, func_801DAEE8 + 0x30);
    return 1;
}
