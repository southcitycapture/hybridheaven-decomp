#include "context.h"

extern struct func_801E6850_StructRoot func_801DAAF0;

extern void func_80005670(void *a0, void *a1);
extern void func_801CC530(void);
extern void func_801CEDBC(s32 a0);
extern void func_801CEDC8(s32 a0);
extern void func_801D11AC(s32 a0);
extern void func_801D11B8(s32 a0);
extern u8 func_801DAC30[];
extern u8 D_801DAD14[];
extern u8 D_801DB300[];
extern u8 D_801DB070[];

s32 func_801E3CA8(s32 arg0, s32 arg1) {
    func_80005670(*(void **)((u8 *)&func_801DAAF0 + 0x24), func_801DAC30 + 0x2C);
    func_801CEDBC(0);
    func_801CEDC8(0);
    func_80005670(*(void **)(*(u8 **)((u8 *)&func_801DAAF0 + 0x24) + 0x8), D_801DAD14);
    func_80005670(*(void **)(*(u8 **)(*(u8 **)((u8 *)&func_801DAAF0 + 0x24) + 0x8) + 0x8), D_801DB300);
    func_801D11AC(0);
    func_801D11B8(0);
    func_80005670(*(void **)(*(u8 **)(*(u8 **)(*(u8 **)((u8 *)&func_801DAAF0 + 0x24) + 0x8) + 0x8) + 0x8), D_801DB070);
    func_801CC530();
    return 2;
}
