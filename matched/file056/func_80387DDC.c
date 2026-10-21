#include "context.h"
typedef struct func_80387DDC_Struct {
    u8 pad0[8];
    s16 x, y, w, h;
    u8 c0[4];
    u8 c1[4];
    s16 s34, s36;
    u8 pad38[4];
    u16 s3C;
    u8 pad3E[2];
    s32 s40;
    u8 pad44[8];
    s16 s4C, s4E, s50, s52, s54, s56;
    u8 pad58[8];
} func_80387DDC_Struct;
typedef struct {
    u8 pad[0xC];
    void *unkC;
} func_80387DDC_Struct2;
typedef struct {
    u16 *unk0;
    s32 *unk4;
} func_80387DDC_Struct3;
extern void func_80146088(s32, func_80387DDC_Struct2 *, s32, u8);
extern func_80387DDC_Struct3 *D_80172594;
extern func_80387DDC_Struct2 D_80388F14;
void func_80387DDC(s32 arg0, s16 arg1, s16 arg2, u8 arg3, s32 arg4) {
    func_80387DDC_Struct s;
    s.x = arg1;
    s.y = arg2;
    s.w = 0x10;
    s.h = 0x30;
    s.s4C = 0x10; s.s54 = 0x10;
    s.c0[2] = 0xA0; s.s4E = 0x30; s.s56 = 0x30;
    s.c0[2] = 0xA0; s.c0[1] = 0xA0; s.c0[0] = 0xA0;
    s.c0[3] = 0xFF;
    s.c1[2] = 0; s.c1[1] = 0; s.c1[0] = 0;
    s.c1[3] = 0xFF;
    s.s34 = 0x66; s.s36 = 0;
    s.s3C = *D_80172594->unk0;
    s.s40 = D_80172594->unk4[arg3 & 0xFFFF];
    s.s50 = 0; s.s52 = 0;
    D_80388F14.unkC = &s.x;
    func_80146088(arg0, &D_80388F14, arg4, arg3);
}
