#include "common.h"

extern void func_80030610(void *, void *, s32);
extern void func_8002FB60(s32, void *, s32);
extern void func_80027F20(void *, u8 *, void *);
extern void func_800023A8(s32 arg0);
extern u8 D_8005CE20[];
extern u8 D_8005CE38[];
extern u8 D_8005CE40[];
extern u8 D_800892B0[];

void func_800020B0(void) {
    u8 sp40[0x18];
    s32 sp3C;
    s32 i;
    u8 sp37;
    u8 *p;

    func_80030610(sp40, &sp3C, 1);
    func_8002FB60(5, sp40, 1);
    func_80027F20(sp40, &sp37, D_8005CE40);
    func_80030610(D_8005CE20, D_8005CE38, 1);
    func_8002FB60(5, D_8005CE20, 0);
    p = D_800892B0;
    for (i = 0; i != 4; i++) {
        func_800023A8(i & 0xFF);
        if ((sp37 & (1 << i)) && !(D_8005CE40[i * 4 + 3] & 8)) {
            *(s16 *)(p + 0x1C4) = 1;
        } else {
            *(s16 *)(p + 0x1C4) = 0;
        }
        p += 0x20;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/800020B0/func_800021B4.s")

extern u8 D_800692B0[];

typedef struct func_80002364_Struct {
    u8 pad[0x1D2];
    s16 unk1D2;
    s32 unk1D4;
    s32 unk1D8;
    s16 unk1DC;
    s16 unk1DE;
    u8 unk1E0;
} func_80002364_Struct;

void func_80002364(s32 arg0, u16 arg1, u16 arg2, u8 arg3) {
    func_80002364_Struct *temp_v0;

    temp_v0 = (func_80002364_Struct *)(D_800692B0 + ((arg3 << 5) + 0x20000));
    temp_v0->unk1D8 = 0;
    temp_v0->unk1D4 = arg0;
    temp_v0->unk1DC = arg1;
    temp_v0->unk1DE = arg2;
    temp_v0->unk1D2 = 0;
    temp_v0->unk1E0 = 0;
}



void func_800023A8(s32 arg0) {
    u8 *temp_v0;
    s32 *temp_p;

    temp_p = &arg0;
    arg0 &= 0xFF;
    temp_v0 = (arg0 << 5) + 0x20000 + D_800692B0;
    *(s32 *)(temp_v0 + 0x1D8) = 0;
    *(s32 *)(temp_v0 + 0x1D4) = 0;
    *(s16 *)(temp_v0 + 0x1DC) = 0xA;
    *(s16 *)(temp_v0 + 0x1DE) = 2;
    *(s16 *)(temp_v0 + 0x1D2) = 0;
    *(u8 *)(temp_v0 + 0x1E0) = 0;
}



void func_800023EC(void) {
    s32 var_s0;

    var_s0 = 0;
    do {
        func_800023A8(var_s0 & 0xFF);
        var_s0 = (var_s0 + 1) & 0xFF;
    } while (var_s0 < 4);
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/800020B0/func_8000242C.s")

