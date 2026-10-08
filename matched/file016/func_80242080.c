#include "common.h"

extern u8 func_80126EAC[];
extern u8 func_8024216C[];
extern u8 D_80249AB8[];

s32 func_80126CC0(void *, void *);
void func_80005E44(void *, void *);
void func_80006214(void *);
void func_8012C89C(void *, s32, s32, s32);
void func_800058DC(void *, void *);

typedef struct func_80242080_Struct2 {
    u8 pad0[0x24];
    s32 unk24;
    u8 pad1[0x8];
    s32 unk30;
    u8 pad2[0x17];
    u8 unk4B;
} func_80242080_Struct2;

typedef struct func_80242080_Struct1 {
    u8 pad0[0x30];
    func_80242080_Struct2 *unk30;
} func_80242080_Struct1;

typedef struct func_80242080_Struct3 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
} func_80242080_Struct3;

extern func_80242080_Struct3 D_80164F40;

void func_80242080(void *arg0, func_80242080_Struct1 **arg1) {
    func_80242080_Struct3 sp20;

    if (func_80126CC0(arg0, func_80126EAC) != 0) {
        sp20 = D_80164F40;
        sp20.unk4 = 0x80000C00;
        func_80005E44(arg0, &sp20);
        func_80006214(arg0);
        func_8012C89C(arg0, 0, 0x39E, 4);
        (*arg1)->unk30->unk24 |= 0x100;
        (*arg1)->unk30->unk30 = (s32) D_80249AB8 | 0x40000000;
        (*arg1)->unk30->unk4B = 0xFF;
        *(s16 *) ((u8 *) arg0 + 0x3C) = 0;
        func_800058DC(arg0, func_8024216C);
    }
}
