#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/main/800270B0/D_8004D220.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800270B0/D_8004D2A0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800270B0/func_800270B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800270B0/func_800275E4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800270B0/func_800276CC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800270B0/func_800277CC.s")


typedef struct func_80027814_Struct {
    struct func_80027814_Struct *next;
} func_80027814_Struct;

typedef struct func_80027814_Empty {
    u8 a[0];
} func_80027814_Empty;

void func_80027814(func_80027814_Struct *arg0) {
    func_80027814_Struct *p = arg0->next;
    *(func_80027814_Empty *)arg0 = *(func_80027814_Empty *)p;
    *arg0 = *p;
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/800270B0/func_80027824.s")

