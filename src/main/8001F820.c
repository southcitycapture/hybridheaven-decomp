#include "common.h"


extern void func_80030388(s32 a0, s32 a1, s32 a2, f32 a3, f32 f4, f32 f5, f32 f6, f32 f7, f32 s0, f32 s1, f32 s2, f32 s3, f32 s4, f32 s5, f32 s6, f32 s7, f32 s8, f32 s9, s32 s10, s32 s11);

void func_8001F820(void) {
    func_80030388(0, 0, 0, 0.0f, 0.0f, 0.0f, 10.0f, 10.0f, 10.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x20, 0x20);
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/8001F820/func_8001F8A0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/8001F820/func_8001FBA8.s")


extern void func_800200B0(void);
extern s32 func_80028A10(s32);
extern u32 func_80033C60(void);
extern void func_80034F70(s32, s32);
extern s32 func_8002C4D0(s32, s32 *, s32, s16);
extern void func_80026300(s32, void *, s32, s32);
extern void func_800350D0(void);
extern u8 D_800351A0[];
extern u8 D_80036530[];
extern s32 D_80047958;
extern u8 D_8004D910[];
extern s32 D_80091BD0;
extern s32 D_80091BD8[];
extern u8 D_80091EB8[];
extern u32 D_8009633C;
extern s32 D_80096340;

struct func_8001FD14_Struct {
    void *unk0;
    s16 unk4;
    u8 pad6[2];
    s32 unk8;
    u8 padC[0xC];
    s32 unk18;
    s32 unk1C;
    void *unk20;
    s32 unk24;
    void *unk28;
    s32 unk2C;
    void *unk30;
    s32 unk34;
    u8 pad38[0x10];
    s32 unk48;
    s32 unk4C;
    s32 unk50;
    s32 unk54;
    void *unk58;
    void *unk5C;
};

s32 func_8001FD14(struct func_8001FD14_Struct *arg0, struct func_8001FD14_Struct *arg1) {
    s32 sp3C;
    s32 sp34[2];
    s32 temp_a3;
    s32 pad[2];

    func_800200B0();
    sp3C = func_80028A10((s32) arg0->unk0);
    if (arg1 != NULL) {
        func_80034F70((s32) arg1->unk0, arg1->unk4 * 4);
    }
    arg0->unk4 = (s16) (((D_80096340 - (func_80033C60() >> 2)) + 0x100) & 0xFFF0);
    if ((u32) arg0->unk4 < D_8009633C) {
        arg0->unk4 = (s16) D_8009633C;
    }
    temp_a3 = func_8002C4D0(D_80091BD8[D_80047958], sp34, sp3C, arg0->unk4);
    if (sp34[0] == 0) {
        return 0;
    }
    arg0->unk8 = 0;
    arg0->unk58 = D_80091EB8;
    arg0->unk5C = (u8 *) arg0 + 0x60;
    arg0->unk48 = D_80091BD8[D_80047958];
    arg0->unk4C = ((temp_a3 - D_80091BD8[D_80047958]) >> 3) * 8;
    arg0->unk18 = 2;
    arg0->unk20 = func_800350D0;
    arg0->unk24 = (s32) (D_800351A0 - (u8 *) func_800350D0);
    arg0->unk1C = 0;
    arg0->unk28 = D_80036530;
    arg0->unk30 = D_8004D910;
    arg0->unk34 = 0x800;
    arg0->unk50 = 0;
    arg0->unk54 = 0;
    func_80026300(D_80091BD0, (u8 *) arg0 + 8, 1, temp_a3);
    D_80047958 ^= 1;
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/8001F820/func_8001FEBC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/8001F820/func_8001FEFC.s")


struct func_80020078_Struct {
    u8 unk0;
    u8 pad[3];
    s32 unk4;
    void *unk8;
};

extern struct func_80020078_Struct D_80096020;
extern u8 D_80096030[];
extern void func_8001FEFC();

void *func_80020078(void **arg0) {
    if (D_80096020.unk0 == 0) {
        D_80096020.unk4 = 0;
        D_80096020.unk8 = D_80096030;
        D_80096020.unk0 = 1;
    }
    *arg0 = &D_80096020;
    return func_8001FEFC;
}


struct func_800200B0_Struct {
    struct func_800200B0_Struct *unk0;
    s32 unk4;
    u8 pad[4];
    s32 unkC;
};

extern void func_800266B0(void *a0, void *a1, s32 a2);
extern void func_80026890(void *a0);
extern void func_800268C0(void *a0, void *a1);
extern u32 D_80047950;
extern u32 D_80047954;
extern u8 D_80096950[];

void func_800200B0(void) {
    u32 sp40[2];
    u32 var_s0;
    struct func_800200B0_Struct *var_s0_2;
    struct func_800200B0_Struct *temp_v0;

    var_s0 = 0;
    if (D_80047954 != 0) {
        do {
            func_800266B0(D_80096950, sp40, 0);
            var_s0 += 1;
        } while (var_s0 < D_80047954);
    }
    var_s0_2 = (struct func_800200B0_Struct *) D_80096020.unk4;
    if (var_s0_2 != NULL) {
        do {
            temp_v0 = var_s0_2->unk0;
            if ((u32) (var_s0_2->unkC + 4) < D_80047950) {
                if (var_s0_2 == (struct func_800200B0_Struct *) D_80096020.unk4) {
                    D_80096020.unk4 = (s32) var_s0_2->unk0;
                }
                func_80026890(var_s0_2);
                if (D_80096020.unk8 != NULL) {
                    func_800268C0(var_s0_2, D_80096020.unk8);
                } else {
                    D_80096020.unk8 = var_s0_2;
                    var_s0_2->unk0 = NULL;
                    var_s0_2->unk4 = 0;
                }
            }
            var_s0_2 = temp_v0;
        } while (temp_v0 != NULL);
    }
    D_80047954 = 0;
    D_80047950 += 1;
}

