#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8013B130/func_8013B130.s")


extern u8 D_801BEB00[];

s32 func_8013B158(void) {
    s32 var_v1;

    for (var_v1 = 0; var_v1 < 0x14; var_v1 = (var_v1 + 1) & 0xFF) {
        if (D_801BEB00[var_v1] == 0) {
            return var_v1;
        }
    }
    return 0xFF;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8013B130/func_8013B19C.s")


struct func_8013B208_Struct {
    u8 pad[0x60];
    u8 unk60;
};

extern void func_800279F0(void *, s32);
extern u8 D_801BD980[];

s32 func_8013B208(struct func_8013B208_Struct *arg0) {
    u8 temp_v0;

    temp_v0 = arg0->unk60;
    if ((s32) temp_v0 < 0x14) {
        D_801BEB00[temp_v0] = 0;
        func_800279F0(&D_801BD980[arg0->unk60 * 0xE0], 0xE0);
        return 0;
    }
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8013B130/func_8013B268.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8013B130/func_8013B570.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8013B130/func_8013B5B4.s")


void func_8013B5B4(s32 arg0, u16 arg1);
void func_8013C7F8(s32 arg0, s32 arg1, s32 arg2);

void func_8013B808(s32 arg0, s32 arg1, u16 arg2) {
    func_8013C7F8(arg0, arg1, 1);
    func_8013B5B4(arg0, arg2);
}


struct func_8013B83C_Target {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
};

struct func_8013B83C_Obj {
    u8 pad[0x2C];
    struct func_8013B83C_Target *unk2C;
};

struct func_8013B83C_Inner {
    s16 pad[3];
    s16 unk6;
    s16 unk8;
    s16 unkA;
    s16 unkC;
};

struct func_8013B83C_Mid {
    u8 pad[0x38];
    struct func_8013B83C_Inner *unk38;
};

struct func_8013B83C_Outer {
    u8 pad[0xC];
    struct func_8013B83C_Mid *unkC;
};

extern struct func_8013B83C_Obj *D_8008DA88[];

void func_8013B83C(struct func_8013B83C_Outer *arg0, s32 arg1) {
    struct func_8013B83C_Inner *temp_v0;

    temp_v0 = arg0->unkC->unk38;
    D_8008DA88[arg1]->unk2C->unk4 = (f32) ((f64) (f32) temp_v0->unk6 / 10.0);
    D_8008DA88[arg1]->unk2C->unk8 = (f32) ((f64) (f32) temp_v0->unk8 / 10.0);
    D_8008DA88[arg1]->unk2C->unkC = (f32) ((f64) (f32) temp_v0->unkA / 10.0);
    D_8008DA88[arg1]->unk2C->unk12 = temp_v0->unkC;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8013B130/func_8013B8E0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8013B130/func_8013BCD8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8013B130/func_8013BD58.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8013B130/func_8013BD84.s")


struct func_8013BDD8_Struct {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad1[6];
    u16 unk36;
    u8 pad2[0x14];
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
};

extern void func_8013B570(void *, u16, s32, s32, s32);

void func_8013BDD8(struct func_8013BDD8_Struct *arg0, s32 arg1) {
    arg0->unk2C = 0;
    arg0->unk4C = 0xA;
    arg0->unk4D = 0x12;
    arg0->unk4E = 0xA;
    func_8013B570(arg0, arg0->unk36, 2, 4, 0);
}


extern u16 D_801BBC1C;
void func_8013B570(void *arg0, u16 arg1, s32 arg2, s32 arg3, s32 arg4);

void func_8013BE20(u8 *arg0, s32 arg1) {
    s32 var_v0;

    arg0[0x4C] = 0xA;
    arg0[0x4D] = 0x12;
    arg0[0x4E] = 0xA;
    arg0[0x3E] = 5;
    arg0[0x4F] = 1;
    if ((D_801BBC1C == 0xA) || (D_801BBC1C == 0xB)) {
        var_v0 = 1;
    } else {
        var_v0 = 3;
    }
    func_8013B570(arg0, *(u16 *)(arg0 + 0x36), 2, var_v0 & 0xFF, 0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8013B130/func_8013BE9C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8013B130/func_8013BF04.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8013B130/func_8013BF54.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8013B130/func_8013BFB8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8013B130/func_8013C184.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8013B130/func_8013C244.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8013B130/func_8013C3CC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8013B130/func_8013C52C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8013B130/func_8013C608.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8013B130/func_8013C6FC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8013B130/func_8013C7F8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8013B130/func_8013C8E0.s")

