#include "common.h"

extern u8 D_801BEB00[];

extern void func_800279F0(void *a0, s32 a1);

void func_8013B130(void) {
    func_800279F0(&D_801BEB00, 0x14);
}



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


extern void func_80005700(s32);

void func_8013BD58(s32 arg0, s32 arg1) {
    func_8013B208((struct func_8013B208_Struct *) arg0);
    func_80005700(arg0);
}


s32 func_8013B19C(u16);

struct func_8013BD84_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

struct func_8013BD84_Entry {
    struct func_8013BD84_Struct *unk0;
    u8 pad[0x1C];
};

extern struct func_8013BD84_Entry D_8017D478[];

struct func_8013BD84_Struct *func_8013BD84(struct func_8013BD84_Struct *arg0, void *arg1) {
    struct func_8013BD84_Struct *temp_v1;

    temp_v1 = arg0;
    *temp_v1 = *D_8017D478[func_8013B19C(((u16 *)arg1)[0x36 / 2])].unk0;
    return temp_v1;
}


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


struct func_8013BE9C_Struct {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad1[6];
    u16 unk36;
    u8 pad2[6];
    u8 unk3E;
    u8 pad3[0xD];
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
    u8 unk4F;
    u8 pad4[4];
    s32 unk54;
};

void func_8013BE9C(struct func_8013BE9C_Struct *arg0, s32 arg1) {
    arg0->unk2C = 0x3E0;
    arg0->unk4C = 0xA;
    arg0->unk4D = 0x12;
    arg0->unk4E = 0xA;
    arg0->unk3E = 5;
    arg0->unk4F = 1;
    arg0->unk54 = arg0->unk54 | 0xE1;
    func_8013B570(arg0, arg0->unk36, 2, 2, 0);
}


struct func_8013BF04_Struct {
    u8 pad0[0x36];
    u16 unk36;
    u8 pad1[0x3E - 0x38];
    u8 unk3E;
    u8 pad2[0x4D - 0x3F];
    u8 unk4D;
    u8 pad3[0x4F - 0x4E];
    u8 unk4F;
};

extern void func_8013BF54();

void func_8013BF04(struct func_8013BF04_Struct *arg0, s32 arg1) {
    arg0->unk4D = 0x12;
    arg0->unk3E = 5;
    arg0->unk4F = 1;
    func_8013B570(arg0, arg0->unk36, 2, 0, (s32)func_8013BF54);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8013B130/func_8013BF54.s")


struct func_8013BFB8_Struct { u8 pad0[0x5C]; struct func_8013BFB8_Struct2 *unk5C; };
struct func_8013BFB8_Struct2 { u8 pad0[0xE]; u16 unkE; u8 pad1[0x8E]; u16 unk9E; u16 unkA0; };
extern s32 func_8012C6B4(s32);
extern void func_8012D844(void *, u16, u16);
extern void func_8012D894(void *, u16, u16);
extern u16 D_8017D1D4[];
extern u16 D_8017D1D6;
extern u16 D_8017D1DC[];
extern u16 D_801BBC20;

void func_8013BFB8(struct func_8013BFB8_Struct *arg0, u16 *arg1) {
    s32 padv[1];
    u16 sp2A;
    s32 sp24;
    s32 v0;
    s32 v1;
    struct func_8013BFB8_Struct2 *s0;

    s0 = arg0->unk5C;
    sp2A = s0->unkE;
    if (s0->unk9E != 0) {
        s0->unk9E--;
        if (s0->unk9E == 0) {
            func_8012D844(arg0, arg1[0], arg1[2]);
        }
    } else {
        if (D_801BBC20 & 1) return;
        sp24 = func_8012C6B4(0x2BC);
        if ((arg1[1] & 0x100) && sp24 >= 0x119 && sp24 < 0x12D) {
            func_8012D844(arg0, arg1[0], arg1[3]);
            s0->unk9E = func_8012C6B4(0xA) + 5;
        }
        v0 = arg1[1] & 0xFF;
        if (v0 != 0) {
            v1 = (sp24 / 20) & 0xFF;
            if (v1 < v0) {
                func_8012D844(arg0, arg1[0], arg1[4 + v1]);
                s0->unk9E = func_8012C6B4(0xA) + 5;
            }
        }
    }
    if (sp2A == 0x141 || sp2A == 0x142) {
        if (s0->unkA0 != 0) {
            s0->unkA0--;
            if (s0->unkA0 == 0) {
                func_8012D894(arg0, D_8017D1D4[0], D_8017D1D4[2]);
            }
        } else if (D_801BBC20 & 1) {
            if (func_8012C6B4(0x2BC) < 0x28) {
                func_8012D894(arg0, arg1[0], D_8017D1DC[func_8012C6B4(D_8017D1D6 & 0xFF) & 0xFF]);
                s0->unkA0 = func_8012C6B4(0xA) + 5;
            }
        }
    }
}


void func_8013C184(struct func_8013BFB8_Struct *arg0, u16 *arg1) {
    struct func_8013BFB8_Struct2 *temp_v1;
    u16 temp_v0;
    u16 temp_t7;

    temp_v1 = arg0->unk5C;
    if (temp_v1->unk9E != 0) {
        if (--temp_v1->unk9E == 0) {
            func_8012D844(arg0, arg1[0], arg1[2]);
        }
    } else if ((arg1[1] & 0x100) && (D_801BBC20 & 1)) {
        if (func_8012C6B4(0x2BC) < 0x14) {
            func_8012D844(arg0, arg1[0], arg1[3]);
            temp_v1->unk9E = func_8012C6B4(0xA) + 5;
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8013B130/func_8013C244.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8013B130/func_8013C3CC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8013B130/func_8013C52C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8013B130/func_8013C608.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8013B130/func_8013C6FC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8013B130/func_8013C7F8.s")


extern u16 D_8017DCDC;

u16 func_8013C8E0(void) {
    return D_8017DCDC;
}

