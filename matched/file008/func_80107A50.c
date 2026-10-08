#include "common.h"

extern void func_80005444(s32, s32, s32, s32, s32);
extern void func_80005624(void *);
extern void func_80016DF0(void);
extern void func_8001F204(void *, s32);
extern void func_80020744(s32);
extern u8 D_80163518[];
extern u8 D_8038F800[];
extern u8 func_801BF1A0[];

void func_80107A50(s32 arg0, s32 arg1) {
    func_80020744(1);
    func_8001F204(func_801BF1A0, D_8038F800 - func_801BF1A0);
    func_80016DF0();
    func_80005444(0x64, 0x12C, 0x190, 0xC8, 0x12C);
    func_80005624(D_80163518);
}
