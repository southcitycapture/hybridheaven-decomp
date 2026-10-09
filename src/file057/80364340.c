#include "common.h"


extern void func_8013A334(void *, s32, s32, s32);

typedef struct func_80364340_Struct {
    s32 unk0;
    f32 unk4;
    s32 unk8;
} func_80364340_Struct;

s32 func_80364340(void *arg0, s32 arg1, s32 arg2, f32 arg3) {
    s32 temp_a2;
    func_80364340_Struct sp28;
    func_80364340_Struct sp1C;
    s32 var_v1;

    temp_a2 = *(s32 *)((u8 *)arg0 + 0x5C);
    func_8013A334(&sp28, arg1, temp_a2, 0x19);
    func_8013A334(&sp1C, arg1, temp_a2, 6);
    if (arg3 < sp28.unk4) {
        var_v1 = 2;
    } else if (arg3 < sp1C.unk4) {
        var_v1 = 1;
    } else {
        var_v1 = 0;
    }
    return var_v1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80364340/func_803643CC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80364340/func_8036445C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80364340/func_80364D2C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80364340/func_80364F74.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80364340/func_803650AC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80364340/func_80365410.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80364340/func_80365AAC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80364340/func_80365FE0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80364340/func_80366090.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80364340/func_80366278.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80364340/func_8036648C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80364340/func_80366648.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80364340/func_803667C4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80364340/func_80366888.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80364340/func_80366A0C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80364340/func_80366B30.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80364340/func_80366BF4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80364340/func_80366D28.s")


typedef struct func_80366EC0_Struct {
    u8 pad0[2];
    s16 unk2;
    u8 pad4[0x2C];
    u8 unk30;
    u8 pad31[0x392 - 0x31];
    u8 unk392;
} func_80366EC0_Struct;

extern void func_800058DC(s32 arg0, void *arg1);
extern s32 func_801DB6B8(s32 arg0, s32 arg1, s32 arg2);
extern void func_80225540(s32 arg0);
extern void func_80366F88(s32 arg0, s32 arg1);
extern s32 D_801BBCCC;
extern func_80366EC0_Struct D_801BC03C;
extern func_80366EC0_Struct D_801BC3D8;
extern void func_8036265C(void);

void func_80366EC0(s32 arg0, s32 arg1) {
    func_80366EC0_Struct *var_v1;

    if (arg0 == D_801BBCCC) {
        var_v1 = &D_801BC03C;
    } else {
        var_v1 = &D_801BC3D8;
    }
    var_v1->unk392 = 0;
    if (func_801DB6B8(arg0, arg1, 0) != 0) {
        func_80225540(arg0);
        var_v1->unk30 = var_v1->unk30 & 0xFFFE;
        if (var_v1->unk2 <= 0 || ((*(u32 *) &var_v1->unk30 << 1) >> 0x1E) != 0) {
            var_v1->unk30 = (var_v1->unk30 & 0xFF9F) | 0x20;
            func_80366F88(arg0, arg1);
            return;
        }
        func_800058DC(arg0, func_8036265C);
    }
}


extern void func_80011198(s32 arg0, void *arg1);
extern void func_80367050(void);
extern u8 D_803868C8[];
extern u8 D_803868D8[];

typedef struct func_80366F88_Struct {
    u8 pad0[0x30];
    s32 unk30;
    u8 pad34[0x390 - 0x34];
    u8 unk390;
    u8 pad391;
    u8 unk392;
} func_80366F88_Struct;

typedef struct func_80366F88_Struct2 {
    u8 pad0[0x7C];
    void *unk7C;
    s16 unk80;
    s16 unk82;
} func_80366F88_Struct2;

void func_80366F88(s32 arg0, s32 arg1) {
    func_80366F88_Struct *var_v0;
    func_80366F88_Struct2 *temp_a1;
    if (arg0 == D_801BBCCC) {
        var_v0 = (func_80366F88_Struct *) &D_801BC03C;
    } else {
        var_v0 = (func_80366F88_Struct *) &D_801BC3D8;
    }
    temp_a1 = *(func_80366F88_Struct2 **) (arg0 + 0x5C);
    var_v0->unk392 = 0;
    func_80011198(arg1, temp_a1);
    if ((((u32) var_v0->unk30 << 27) >> 30) != 0 && (var_v0->unk390 == 2 || var_v0->unk390 == 2)) {
        temp_a1->unk7C = D_803868C8;
    } else {
        temp_a1->unk7C = D_803868D8;
    }
    temp_a1->unk82 = 5;
    temp_a1->unk80 = 3;
    func_800058DC(arg0, (void *) func_80367050);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80364340/func_80367050.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80364340/func_803671A0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80364340/func_80367288.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80364340/func_803673B4.s")


typedef struct func_80367460_Struct {
    u8 pad0[0x365];
    u8 unk365;
    u8 pad366[2];
    f32 unk368;
    u8 pad36C[4];
    f32 unk370;
} func_80367460_Struct;

typedef struct func_80367460_Inner {
    u8 pad0[4];
    f32 unk4;
    u8 pad8[4];
    f32 unkC;
} func_80367460_Inner;

typedef struct func_80367460_Outer {
    u8 pad0[0x2C];
    func_80367460_Inner *unk2C;
} func_80367460_Outer;

extern void func_801CD3FC(s32, u8, void **);

void func_80367460(s32 arg0, void **arg1) {
    func_80367460_Struct *var_v0;
    f32 temp_fv0;
    u8 temp_a1;
    func_80367460_Inner *temp_v1;

    if (arg0 == D_801BBCCC) {
        var_v0 = (func_80367460_Struct *) &D_801BC03C;
    } else {
        var_v0 = (func_80367460_Struct *) &D_801BC3D8;
    }
    temp_a1 = var_v0->unk365;
    temp_v1 = ((func_80367460_Outer *) *arg1)->unk2C;
    if ((s32) temp_a1 > 0) {
        temp_fv0 = (f32) ((f64) (f32) temp_a1 / 15.0);
        temp_v1->unk4 = (f32) (temp_v1->unk4 + (var_v0->unk368 * temp_fv0));
        temp_v1->unkC = (f32) (temp_v1->unkC + (var_v0->unk370 * temp_fv0));
        var_v0->unk365 = (u8) (var_v0->unk365 - 1);
        func_801CD3FC(arg0, temp_a1, arg1);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80364340/func_80367518.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80364340/func_803675F8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80364340/func_803676B8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80364340/func_80367788.s")

