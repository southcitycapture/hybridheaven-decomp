#include "common.h"


extern void func_80004484(s32);
extern void func_80005444(s32, s32, s32, s32, s32);
extern void func_80005624(void *);
extern void func_80016DF0(void);
extern void func_80016E40(s32);
extern void func_8001F204(void *, s32);
extern void func_80020744(s32);
extern void func_80133AAC(s32);
extern u8 D_8038DC70[];
extern u8 D_8038DC84[];
extern u8 D_8038F800[];
extern u8 func_801BF1A0[];

void func_801079B0(s32 arg0, s32 arg1) {
    func_80020744(1);
    func_8001F204(func_801BF1A0, D_8038F800 - func_801BF1A0);
    func_80016DF0();
    func_80005444(0xA, 0x14, 0x14, 0x14, 0x14);
    func_80016E40(0xC000);
    func_80004484(0x37);
    func_80005624(D_8038DC84);
    func_80005624(D_8038DC70);
    func_80133AAC(-1);
}

