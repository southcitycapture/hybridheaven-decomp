#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file056/80379970/func_80379970.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/80379970/func_80379F04.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/80379970/func_8037A320.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/80379970/func_8037A6F4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/80379970/func_8037A960.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/80379970/func_8037AA80.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/80379970/func_8037AB08.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/80379970/func_8037AC08.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/80379970/func_8037AEA8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/80379970/func_8037AFD0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/80379970/func_8037B08C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/80379970/func_8037B118.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/80379970/func_8037B240.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/80379970/func_8037B4E4.s")


typedef struct func_8037B5FC_Struct {
    u8 pad[0x5C];
    s32 unk5C;
} func_8037B5FC_Struct;

s32 func_80010550(s32, s32, s32);
void func_80020744(s32);
void func_800058DC(void *, void *);
extern s8 D_8038A93C;
extern void func_8037B86C(void);

void func_8037B5FC(void *arg0, s32 arg1) {
    s32 temp;

    temp = ((func_8037B5FC_Struct *)arg0)->unk5C;
    if (func_80010550(arg1, temp, arg1) != 0) {
        D_8038A93C = 0;
        func_80020744(0xA);
        func_800058DC(arg0, func_8037B86C);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file056/80379970/func_8037B64C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/80379970/func_8037B758.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/80379970/func_8037B86C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/80379970/func_8037B9E4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/80379970/func_8037B9F0.s")


typedef struct func_8037BAEC_StructBBBF0 {
    u8 pad[0xEF0];
    u16 unkEF0;
} func_8037BAEC_StructBBBF0;

typedef struct func_8037BAEC_StructA930 {
    f32 unk0;
    f32 unk4;
    f32 unk8;
} func_8037BAEC_StructA930;

extern func_8037BAEC_StructBBBF0 D_801BBBF0;
extern s16 D_80388A68;
extern func_8037BAEC_StructA930 D_8038A930;

s32 func_8037BAEC(f32 arg0, f32 arg1, f32 arg2, s16 arg3) {
    if (D_801BBBF0.unkEF0 & 0x1050) {
        return 0;
    }
    D_801BBBF0.unkEF0 = D_801BBBF0.unkEF0 | 0x1000;
    D_8038A930.unk0 = arg0;
    D_8038A930.unk4 = arg1;
    D_8038A930.unk8 = arg2;
    D_80388A68 = arg3;
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file056/80379970/func_8037BB4C.s")

