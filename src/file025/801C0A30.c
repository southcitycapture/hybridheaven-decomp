#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C0A30/func_801C0A30.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C0A30/func_801C0A68.s")


u64 func_801C0C08();                                /* extern */
extern u64 D_801D8D80;

u64 func_801C0AE4(void) {
    u64 temp;

    temp = func_801C0C08() - D_801D8D80;
    return temp;
}


u64 func_80026F58(u64 a, u64 b);
void func_80026E58(u64 a, u64 b);

void func_801C0B2C(void) {
    u64 temp;

    temp = func_801C0C08();
    temp = func_80026F58(temp - D_801D8D80, 0x40);
    func_80026E58(temp, 0xBB8);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C0A30/func_801C0B8C.s")


u64 func_80031190();                                /* extern */
extern u64 D_801D8D88;

u64 func_801C0C08(void) {
    u64 temp_ret;

    temp_ret = func_80031190();
    return temp_ret - D_801D8D88;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C0A30/func_801C0C44.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C0A30/func_801C0C50.s")


extern u32 D_801D8DA8;

s32 func_801C0C68(u32 arg0) {
    return D_801D8DA8 >= arg0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C0A30/func_801C0C7C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C0A30/func_801C0D04.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C0A30/func_801C0DE4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C0A30/func_801C0EB0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C0A30/func_801C0F18.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C0A30/func_801C0FA8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C0A30/func_801C1000.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C0A30/func_801C1088.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C0A30/func_801C10D8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C0A30/func_801C1134.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C0A30/func_801C117C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C0A30/func_801C11B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C0A30/func_801C11F4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C0A30/func_801C1228.s")


s32 func_801C1228();
s32 func_801C1284();
s32 func_801C133C();

s32 func_801C1234(void) {
    s32 sp1C;

    sp1C = 0;
    if (func_801C1228() != 0) {
        if (func_801C1284() != 0) {
            sp1C = 1;
        } else {
            sp1C = func_801C133C();
        }
    }
    return sp1C;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C0A30/func_801C1284.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C0A30/func_801C133C.s")

