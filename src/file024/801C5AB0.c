#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801C5AB0/func_801C5AB0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801C5AB0/func_801C5AD4.s")


extern s32 D_801CFDB8[];

s32 func_801C5B38(void) {
    if (D_801CFDB8[0] == 1 && D_801CFDB8[1] == 1) {
        return 1;
    }
    return 0;
}

extern u32 D_80171CF0[];

void func_801C5B70(u8 *arg0, u16 arg1, u16 arg2) {
    u32 *temp_v0;

    temp_v0 = &D_80171CF0[arg1];
    *(u16 *)(*(u8 **)(arg0 + 0x30) + 0x18) = *(u16 *)*(u8 **)temp_v0[-1];
    *(u32 *)(*(u8 **)(arg0 + 0x30) + 0x1C) = *(u32 *)(*(u8 **)(temp_v0[-1] + 4) + arg2 * 4);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801C5AB0/func_801C5BC4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801C5AB0/func_801C5C18.s")


typedef struct func_801C5C70_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801C5C70_Struct;

extern void func_801477C4(void *arg0, f32 arg1);
extern void func_80147734(void *arg0, void *arg1, void *arg2);

void func_801C5C70(void *arg0, func_801C5C70_Struct *arg1, f32 arg2) {
    func_801C5C70_Struct sp1C;

    sp1C = *arg1;
    func_801477C4(&sp1C, arg2);
    func_80147734(arg0, &sp1C, arg0);
}


void func_80147768(f32 *arg0, s32 arg1);

void func_801C5CC8(f32 *arg0, f32 *arg1, u8 *arg2) {
    f32 sp24;
    f32 sp20;
    f32 sp1C;

    sp1C = arg1[0] - arg0[0];
    sp20 = arg1[1] - arg0[1];
    sp24 = arg1[2] - arg0[2];
    func_80147768(&sp1C, 0x42FA0000);
    arg2[8] = (s32) sp1C;
    arg2[9] = (s32) sp20;
    arg2[10] = (s32) sp24;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801C5AB0/func_801C5D64.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801C5AB0/func_801C5DAC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801C5AB0/func_801C5F04.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801C5AB0/func_801C63CC.s")


extern void func_801C63CC(s32);

void func_801C655C(void) {
    s32 var_s0;

    var_s0 = 0;
    do {
        func_801C63CC(var_s0 & 0xFF);
        var_s0 = (var_s0 + 1) & 0xFF;
    } while (var_s0 < 2);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801C5AB0/func_801C659C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801C5AB0/func_801C6C6C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801C5AB0/func_801C6D94.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801C5AB0/func_801C70E8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801C5AB0/func_801C7264.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801C5AB0/func_801C72F8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801C5AB0/func_801C7364.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801C5AB0/func_801C7C64.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801C5AB0/func_801C7D5C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801C5AB0/func_801C813C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801C5AB0/func_801C81C8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801C5AB0/func_801C8220.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801C5AB0/func_801C8328.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801C5AB0/func_801C8568.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801C5AB0/func_801C896C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801C5AB0/func_801C8B20.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801C5AB0/func_801C8E20.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801C5AB0/func_801C909C.s")


typedef struct func_801C9154_Struct {
    u8 pad0[0x90];
    u8 unk90;
    u8 unk91;
    u8 pad92[2];
    s16 unk94;
    s16 unk96;
    s16 unk98;
} func_801C9154_Struct;

extern void *func_80005670(s32, void *);
extern s16 func_8012C6B4(s32);
extern u8 D_801CD164;
extern u8 D_801CFD70;

void func_801C9154(s32 arg0, void *arg1) {
    u8 var_s1;
    u8 *temp_s2;
    func_801C9154_Struct *temp_v0;

    for (var_s1 = 0; var_s1 < 4; var_s1++) {
        temp_s2 = &D_801CFD70 + var_s1;
        if (*temp_s2 == 0) {
            temp_v0 = func_80005670(arg0, &D_801CD164);
            if (temp_v0 != NULL) {
                temp_v0->unk90 = var_s1;
                temp_v0->unk91 = func_8012C6B4(0x28) + 0xA;
                temp_v0->unk94 = func_8012C6B4(0xFF);
                temp_v0->unk96 = func_8012C6B4(0xFF);
                temp_v0->unk98 = func_8012C6B4(0xFF);
            }
            *temp_s2 = 1;
        }
    }
}


typedef struct func_801C9234_Struct {
    f32 unk0;
    f32 unk4;
    f32 unk8;
} func_801C9234_Struct;

extern void func_800058DC(void *, void *, void *, void *);
extern func_801C9234_Struct D_801CFD10[];
extern func_801C9234_Struct D_801CFD40[];
extern u8 func_801C9328[];

void func_801C9234(void *arg0, s32 arg1) {
    u8 temp_v1;
    func_801C9234_Struct *temp_a2;

    D_801CFD10[((u8 *)arg0)[0x90]].unk0 = 1000.0f;
    temp_v1 = ((u8 *)arg0)[0x90];
    D_801CFD10[temp_v1].unk4 = (f32) (temp_v1 * 0xA);
    temp_a2 = &D_801CFD10[((u8 *)arg0)[0x90]];
    temp_a2->unk8 = 300.0f - temp_a2->unk0;
    D_801CFD40[((u8 *)arg0)[0x90]].unk0 = -1.0f;
    D_801CFD40[((u8 *)arg0)[0x90]].unk4 = 0.0f;
    D_801CFD40[((u8 *)arg0)[0x90]].unk8 = 1.0f;
    func_800058DC(arg0, func_801C9328, temp_a2, D_801CFD10);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801C5AB0/func_801C9328.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801C5AB0/func_801C9678.s")

