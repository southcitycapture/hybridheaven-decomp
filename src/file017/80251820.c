#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80251820/func_80251820.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80251820/func_80251E6C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80251820/func_80251F80.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80251820/func_802521D0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80251820/func_80252378.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80251820/func_80252538.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80251820/func_802525FC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80251820/func_802526DC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80251820/func_802527C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80251820/func_80252A54.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80251820/func_80252C14.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80251820/func_80252DBC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80251820/func_80252E0C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80251820/func_80252E78.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80251820/func_80252FC0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80251820/func_80253220.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80251820/func_80253680.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80251820/func_80253824.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80251820/func_8025386C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80251820/func_802538A4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80251820/func_80253A80.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80251820/func_80253C20.s")


extern void func_802577B4(void *, void *);
extern s32 func_80133A24(s32);
extern void func_80005670(void *, void *);
extern void func_801FBB30(void);
extern void func_80020718(s32);
extern void func_800058DC(void *, void *);
extern u8 D_80259720[];
extern u8 func_80254470[];

typedef struct func_802543F8_Struct_Inner {
    u8 pad[0x22];
    u8 unk22;
} func_802543F8_Struct_Inner;

typedef struct func_802543F8_Struct {
    u8 pad[0x14];
    func_802543F8_Struct_Inner *unk14;
} func_802543F8_Struct;

typedef struct func_802543F8_Obj {
    u8 pad[0x90];
    s16 unk90;
    s16 unk92;
} func_802543F8_Obj;

void func_802543F8(func_802543F8_Obj *arg0, func_802543F8_Struct *arg1) {
    func_802577B4(arg0, arg1);
    if (func_80133A24(0x138) != 0) {
        arg1->unk14->unk22 = 0;
        func_80005670(arg0, D_80259720);
        arg0->unk90 = 0;
        arg0->unk92 = 0;
        func_801FBB30();
        func_80020718(8);
        func_800058DC(arg0, func_80254470);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80251820/func_80254470.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80251820/func_80254808.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80251820/func_80254B3C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80251820/func_80254BFC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80251820/func_80254D48.s")


extern void func_8025799C(void);
extern s32 func_801C2FF8(void);
extern void func_801C2F0C(s32, void *);
extern void func_80255134(void);

typedef struct func_802550A8_Struct {
    s16 unk0;
    u8 pad2[2];
    s32 unk4;
    f32 unk8;
    s16 unkC;
    u8 pad3[0x10];
} func_802550A8_Struct;

void func_802550A8(void *arg0) {
    func_802550A8_Struct sp18;

    func_8025799C();
    if ((func_80133A24(0x138) != 0) && (func_801C2FF8() != 0)) {
        sp18.unk0 = 0;
        sp18.unk4 = 0x04100026;
        sp18.unkC = 0xF;
        sp18.unk8 = 3.0f;
        func_801C2F0C(3, &sp18);
        *(s16 *)((u8 *)arg0 + 0x90) = 0;
        func_80020718(0x18D);
        func_800058DC(arg0, func_80255134);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80251820/func_80255134.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80251820/func_802551A0.s")


extern s32 func_800178E8(void);
extern void func_80255278(void);

typedef struct func_80255204_Struct {
    s16 unk0;
    s32 unk4;
    f32 unk8;
    s16 unkC;
    u8 pad[0x10];
} func_80255204_Struct;

void func_80255204(s16 *arg0) {
    func_80255204_Struct sp18;

    func_8025799C();
    if (func_800178E8() != 0) {
        sp18.unk0 = 0x1000;
        sp18.unk4 = 0x03480027;
        sp18.unkC = 0xA;
        sp18.unk8 = 4.0f;
        func_801C2F0C(5, &sp18);
        arg0[0x92 / 2] = 0;
        func_800058DC(arg0, func_80255278);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80251820/func_80255278.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80251820/func_802552E4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80251820/func_802556EC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80251820/func_8025584C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80251820/func_80255B30.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80251820/func_80255CA0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80251820/func_80256034.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80251820/func_80256308.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80251820/func_80256314.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80251820/func_802564DC.s")


typedef struct func_80256590_StructB {
    u8 pad0[8];
    f32 unk8;
    u8 pad1[0x3F];
    u8 unk4B;
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
} func_80256590_StructB;

typedef struct func_80256590_StructA {
    u8 pad0[0x30];
    func_80256590_StructB *unk30;
} func_80256590_StructA;

s32 func_80133A24(s32);
void func_80005700(s32, void **);
extern u8 *D_8025DE20;
extern u8 D_801BBBF0[];

void func_80256590(s32 arg0, void **arg1) {
    (*(func_80256590_StructA **)arg1)->unk30->unk8 = *(f32 *)(D_8025DE20 + 0x9C) + 43.0f;
    (*(func_80256590_StructA **)arg1)->unk30->unk4C = D_801BBBF0[0x208];
    (*(func_80256590_StructA **)arg1)->unk30->unk4D = D_801BBBF0[0x209];
    (*(func_80256590_StructA **)arg1)->unk30->unk4E = D_801BBBF0[0x20A];
    if (func_80133A24(0x13A) != 0) {
        (*(func_80256590_StructA **)arg1)->unk30->unk4B -= 2;
        if ((*(func_80256590_StructA **)arg1)->unk30->unk4B < 2) {
            func_80005700(arg0, arg1);
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80251820/func_80256650.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80251820/func_802567F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80251820/func_802569D0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80251820/func_80256A1C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80251820/func_80256BC4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80251820/func_80256CB0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80251820/func_80256EA8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80251820/func_80256F0C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80251820/func_80257114.s")


extern f64 D_8025DC98;
extern f64 D_8025DCA0;

struct func_80257418_Struct30 {
    u8 pad0[0x18];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    u8 pad1[0x4B - 0x24];
    u8 unk4B;
};

struct func_80257418_Struct0 {
    u8 pad0[0x30];
    struct func_80257418_Struct30 *unk30;
};

void func_80257418(s32 arg0, struct func_80257418_Struct0 **arg1) {
    struct func_80257418_Struct30 *temp_v0;
    f64 temp_f0;

    temp_f0 = D_8025DC98;
    temp_v0 = (*arg1)->unk30;
    temp_v0->unk18 = (f32) ((f64) temp_v0->unk18 * temp_f0);
    temp_v0 = (*arg1)->unk30;
    temp_v0->unk20 = (f32) ((f64) temp_v0->unk20 * temp_f0);
    temp_v0 = (*arg1)->unk30;
    temp_v0->unk1C = (f32) ((f64) temp_v0->unk1C + D_8025DCA0);
    temp_v0 = (*arg1)->unk30;
    temp_v0->unk4B = (u8) (temp_v0->unk4B - 8);
    if ((s32) (*arg1)->unk30->unk4B < 8) {
        func_80005700(arg0, (void **) arg1);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80251820/func_802574C8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80251820/func_80257684.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80251820/func_802577B4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80251820/func_8025799C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80251820/func_80257B10.s")


typedef struct func_80257DA0_Struct {
    u8 pad0[0x3C];
    s16 unk3C;
    u8 pad1[0x74 - 0x3E];
    s32 unk74;
} func_80257DA0_Struct;

extern s32 func_80126944(void);
extern s32 func_8012C97C(s32, s32);
extern void func_80257E48(void);

void func_80257DA0(func_80257DA0_Struct *arg0, s32 arg1) {
    if (func_80126944() == 1) {
        arg0->unk74 = func_8012C97C(0x302, 3);
    } else {
        arg0->unk74 = func_8012C97C(0x302, 1);
    }
    if (func_80133A24(0x133) != 0) {
        if (func_80133A24(0x134) != 0) {
            if (func_80133A24(0x135) != 0) {
                if (func_80133A24(0x136) != 0) {
                    arg0->unk3C = 0;
                    func_800058DC(arg0, func_80257E48);
                }
            }
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80251820/func_80257E48.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80251820/func_80257F34.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80251820/func_80258268.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80251820/func_802583FC.s")


typedef struct func_80258514_Struct_B {
    u8 pad0[4];
    f32 unk4;
    u8 pad1[4];
    f32 unkC;
    u8 pad2[2];
    s16 unk12;
} func_80258514_Struct_B;

typedef struct func_80258514_Struct_A {
    u8 pad[0x2C];
    func_80258514_Struct_B *unk2C;
} func_80258514_Struct_A;

typedef struct func_80258514_Struct_Global {
    u8 pad[0xE0];
    func_80258514_Struct_A *unkE0;
} func_80258514_Struct_Global;

typedef struct func_80258514_Struct_Arg1 {
    u8 pad[0x22];
    u8 unk22;
} func_80258514_Struct_Arg1;

typedef struct func_80258514_Struct_Arg0 {
    u8 pad[0x74];
    s32 unk74;
} func_80258514_Struct_Arg0;

extern u8 func_80258580[];

void func_80258514(func_80258514_Struct_Arg0 *arg0, func_80258514_Struct_Arg1 **arg1) {
    func_80258514_Struct_Global *g = (func_80258514_Struct_Global *) D_801BBBF0;

    g->unkE0->unk2C->unk4 = -76.0f;
    g->unkE0->unk2C->unkC = 0.0f;
    g->unkE0->unk2C->unk12 = 0x800;
    (*arg1)->unk22 = 0;
    arg0->unk74 = 0;
    func_800058DC(arg0, func_80258580);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80251820/func_80258580.s")

