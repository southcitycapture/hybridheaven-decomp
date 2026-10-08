#include "common.h"

void func_801C2420(s32 arg0, void *arg1);
void func_801CC318(void);
void func_801CC458(s32 arg0, void *arg1);
void func_801CC4C0(s32 arg0, void *arg1);
extern u8 D_801DAFD8[];
extern u8 D_801DB084[];
extern u8 D_801DB088[];
extern u8 D_801DB164[];
extern u8 D_801E0A48[];
extern u8 func_801DAE70[];
extern u8 func_801DAEE8[];

s32 func_801EC234(s32 arg0, s32 arg1) {
    func_801C2420(0x2B, D_801E0A48);
    func_801CC318();
    func_801CC458(0, D_801DB164);
    func_801C2420(0x141, D_801E0A48 + 0x18);
    func_801CC318();
    func_801CC458(1, D_801DB084);
    func_801CC4C0(1, D_801DB088);
    func_801C2420(0x11C, D_801E0A48 + 0x30);
    func_801CC318();
    func_801CC458(2, func_801DAE70 + 0x5C);
    func_801C2420(0x57, D_801E0A48 + 0x48);
    func_801CC318();
    func_801CC458(3, func_801DAEE8 + 0x30);
    func_801CC458(4, D_801DAFD8);
    return 1;
}
