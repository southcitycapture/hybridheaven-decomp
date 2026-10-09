#include "context.h"
extern u8 D_801DB258[];
extern u8 D_801DB25C[];
extern u8 D_801E0A48[];
extern s32 func_801C2420(s32 arg0, void *arg1);
extern void func_801CC318(void);
extern void func_801CC458(s32 a0, void *a1);
extern void func_801CC4C0(s32 a0, void *a1);
extern u8 func_801DAE70[];
extern u8 func_801DAEE8[];
extern u8 func_801DB190[];


s32 func_801ECA04(s32 arg0, s32 arg1) {
    func_801C2420(0x11C, D_801E0A48);
    func_801CC318();
    func_801CC458(0, (u8 *)func_801DAE70 + 0x5C);
    func_801C2420(0x31, D_801E0A48 + 0x18);
    func_801CC318();
    func_801CC458(1, (u8 *)func_801DB190 + 8);
    func_801C2420(0x32, D_801E0A48 + 0x30);
    func_801CC318();
    func_801CC458(2, D_801DB258);
    func_801CC4C0(2, D_801DB25C);
    func_801C2420(0x57, D_801E0A48 + 0x48);
    func_801CC318();
    func_801CC458(3, (u8 *)func_801DAEE8 + 0x30);
    func_801CC4C0(3, (u8 *)func_801DAEE8 + 0x34);
    return 1;
}
