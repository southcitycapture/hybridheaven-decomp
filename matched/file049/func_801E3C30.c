#include "context.h"

extern void func_80005670(s32, void *);
extern void func_801CEDBC(s32);
extern void func_801CEDC8(s32);
extern void func_801CC530();
extern u8 func_801DAC30[];
extern u8 D_801DAD14[];
extern u8 D_801DB300[];
extern u8 D_801DB320[];
extern u8 D_801DB340[];

s32 func_801E3C30(s32 arg0, s32 arg1) {
    func_80005670(*(s32 *)(func_801DAAF0 + 0x24), func_801DAC30 + 0x2C);
    func_801CEDBC(0);
    func_801CEDC8(0);
    func_80005670(*(s32 *)(*(s32 *)(func_801DAAF0 + 0x24) + 0x8), D_801DAD14);
    func_80005670(*(s32 *)(*(s32 *)(*(s32 *)(func_801DAAF0 + 0x24) + 0x8) + 0x8), D_801DB300);
    func_80005670(*(s32 *)(*(s32 *)(*(s32 *)(*(s32 *)(func_801DAAF0 + 0x24) + 0x8) + 0x8) + 0x8), D_801DB320);
    func_80005670(*(s32 *)(*(s32 *)(*(s32 *)(*(s32 *)(*(s32 *)(func_801DAAF0 + 0x24) + 0x8) + 0x8) + 0x8) + 0x8), D_801DB340);
    func_801CC530();
    return 2;
}
