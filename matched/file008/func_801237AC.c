#include "context.h"

typedef struct func_801237AC_Struct {
    u8 pad[0x92];
    s16 unk92;
    s16 unk94;
    s16 unk96;
    s16 unk98;
} func_801237AC_Struct;

extern s32 func_80004484(s32);
extern void func_80005444(s32, s32, s32, s32, s32);
extern s32 func_80005624(void *);
extern void func_80016DF0(void);
extern void func_80016E40(s32);
extern void func_8001F204(void *, s32);
extern func_801237AC_Struct D_800892B0;
extern s32 D_8008D5D4;
extern u8 D_80164E44[];
extern s32 D_801BBC10;
extern s8 D_801BBD6E;
extern u8 D_8038F800[];
extern u8 func_801BF1A0[];

void func_801237AC(s32 arg0, s32 arg1) {
    D_801BBD6E = 1;
    func_80016DF0();
    D_801BBC10 = 0;
    func_8001F204(func_801BF1A0, D_8038F800 - func_801BF1A0);
    func_80005444(0x64, 0xC8, 0x190, 0xC8, 0x64);
    func_80016E40(0x4000);
    func_80004484(0x63);
    D_800892B0.unk92 = 0;
    D_800892B0.unk94 = 0;
    D_800892B0.unk96 = 0;
    D_800892B0.unk98 = 0;
    D_8008D5D4 = func_80005624(D_80164E44);
}
