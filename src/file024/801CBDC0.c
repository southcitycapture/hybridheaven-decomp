#include "common.h"


struct func_801CBDC0_Struct2 {
    u8 pad[0x18];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
};

struct func_801CBDC0_Struct1 {
    u8 pad[0x30];
    struct func_801CBDC0_Struct2 *unk30;
};

extern void func_80005E44(s32, void *);
extern void func_80006214(s32);
extern void func_8012636C(s32, s32);
extern void func_8012C89C(s32, s32, s32, s32);
extern void func_800062F8(void *, u32);
extern void func_800058DC(s32, void *);
extern u8 D_80164F40[];
extern s16 D_801CFE00;
extern s8 D_801CFE02;
extern s8 D_801CFE03;
extern void func_801CBE88();

void func_801CBDC0(s32 arg0, struct func_801CBDC0_Struct1 **arg1) {
    func_80005E44(arg0, D_80164F40);
    func_80006214(arg0);
    func_8012636C(arg0, 0);
    func_8012C89C(arg0, 0, 0xE8, 0);
    func_800062F8(*arg1, 0x80000C00);
    (*arg1)->unk30->unk18 = 1.0f;
    (*arg1)->unk30->unk1C = 1.0f;
    (*arg1)->unk30->unk20 = 1.0f;
    D_801CFE03 = 0;
    D_801CFE00 = 0;
    D_801CFE02 = 0;
    func_800058DC(arg0, func_801CBE88);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801CBDC0/func_801CBE88.s")

struct func_801CC2CC_Struct2 {
    u8 pad[0x78];
    s16 unk78;
};
struct func_801CC2CC_Struct1 {
    u8 pad[0x5C];
    struct func_801CC2CC_Struct2 *unk5C;
};
void func_801CC2CC(struct func_801CC2CC_Struct1 *arg0, s32 arg1);

extern void func_8013B570(void *arg0, s32 arg1, s32 arg2, s32 arg3, void *arg4);

void func_801CC294(void *arg0, s32 arg1) {
    func_8013B570(arg0, 0x50, 2, 3, func_801CC2CC);
}


struct func_801CC2CC_Struct3 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

extern void func_8013A28C(s32, struct func_801CC2CC_Struct3);
extern s32 func_80010550();
extern struct func_801CC2CC_Struct3 D_801CE688;
extern void func_801CC344();

void func_801CC2CC(struct func_801CC2CC_Struct1 *arg0, s32 arg1) {
    struct func_801CC2CC_Struct2 *temp_v0;

    temp_v0 = arg0->unk5C;
    temp_v0->unk78 = 1;
    func_8013A28C(arg1, D_801CE688);
    func_80010550(arg1, temp_v0);
    func_800058DC((s32)arg0, (void *)func_801CC344);
}


extern void func_80127014();
extern void func_801CC3DC();
extern struct func_801CC2CC_Struct3 D_801CE6AC;

void func_801CC344(struct func_801CC2CC_Struct1 *arg0, s32 volatile arg1) {
    struct func_801CC2CC_Struct2 *temp_a1;
    u16 sp1A;

    temp_a1 = arg0->unk5C;
    sp1A = (u16) func_80010550(arg1, (s32) temp_a1);
    if ((u8) D_801CFE02 >= 3) {
        func_800058DC((s32) arg0, func_80127014);
    }
    if (sp1A != 0) {
        func_8013A28C(arg1, D_801CE6AC);
        func_800058DC((s32) arg0, func_801CC3DC);
    }
}

extern f32 D_801CFE04;

extern struct func_801CC2CC_Struct3 D_801CE6B8;
struct func_801CC484_Struct1;
void func_801CC484(struct func_801CC484_Struct1 *arg0, s32 volatile arg1);

void func_801CC3DC(struct func_801CC2CC_Struct1 *arg0, s32 volatile arg1) {
    struct func_801CC2CC_Struct2 *temp_a1;
    u16 sp1A;

    temp_a1 = arg0->unk5C;
    sp1A = (u16) func_80010550(arg1, temp_a1);
    if ((u8) D_801CFE02 >= 3) {
        func_800058DC((s32) arg0, func_80127014);
    }
    if (sp1A != 0) {
        func_8013A28C(arg1, D_801CE6B8);
        D_801CFE04 = 3.0f;
        func_800058DC((s32) arg0, func_801CC484);
    }
}

void func_801CC574(struct func_801CC2CC_Struct1 *arg0, s32 arg1);

struct func_801CC484_Struct3 {
    u8 pad[8];
    f32 unk8;
};
struct func_801CC484_Struct2 {
    u8 pad[0x2C];
    struct func_801CC484_Struct3 *unk2C;
};
struct func_801CC484_Struct1 {
    u8 pad[0x24];
    struct func_801CC484_Struct2 *unk24;
    u8 pad2[0x5C - 0x28];
    void *unk5C;
};

extern struct func_801CC2CC_Struct3 D_801CE6C4;
extern f64 D_801CFCE8;

void func_801CC484(struct func_801CC484_Struct1 *arg0, s32 volatile arg1) {
    struct func_801CC484_Struct3 *temp_v0;
    void *temp_a1;

    temp_a1 = arg0->unk5C;
    func_80010550(arg1, temp_a1);
    temp_v0 = arg0->unk24->unk2C;
    temp_v0->unk8 = temp_v0->unk8 + D_801CFE04;
    D_801CFE04 = (f32) ((f64) D_801CFE04 - D_801CFCE8);
    if (*(u8 *)&D_801CFE02 >= 3) {
        func_800058DC((s32) arg0, func_80127014);
    }
    if ((f64) D_801CFE04 <= 0.0) {
        func_8013A28C(arg1, D_801CE6C4);
        func_800058DC((s32) arg0, func_801CC574);
    }
}


extern void func_801CC618();
extern struct func_801CC2CC_Struct3 D_801CE6D0;

void func_801CC574(struct func_801CC2CC_Struct1 *arg0, s32 arg1) {
    struct func_801CC2CC_Struct2 *temp_a1;
    u16 temp_v1;

    temp_a1 = arg0->unk5C;
    temp_v1 = func_80010550(arg1, temp_a1);
    if ((u8) D_801CFE02 >= 3) {
        func_800058DC((s32) arg0, func_80127014);
    }
    if (temp_v1 != 0) {
        func_8013A28C(arg1, D_801CE6D0);
        D_801CFE02 = 1;
        func_800058DC((s32) arg0, func_801CC618);
    }
}

/* starting point: func_801CC344 (file024), whose assembly is 100% the same as this function's */

extern void func_801CC6B0();
extern struct func_801CC2CC_Struct3 D_801CE6DC;

void func_801CC618(struct func_801CC2CC_Struct1 *arg0, s32 volatile arg1) {
    struct func_801CC2CC_Struct2 *temp_a1;
    u16 sp1A;

    temp_a1 = arg0->unk5C;
    sp1A = (u16) func_80010550(arg1, (s32) temp_a1);
    if ((u8) D_801CFE02 >= 3) {
        func_800058DC((s32) arg0, func_80127014);
    }
    if (sp1A != 0) {
        func_8013A28C(arg1, D_801CE6DC);
        func_800058DC((s32) arg0, func_801CC6B0);
    }
}


extern void func_801CC748();
extern struct func_801CC2CC_Struct3 D_801CE6E8;

void func_801CC6B0(struct func_801CC2CC_Struct1 *arg0, s32 volatile arg1) {
    struct func_801CC2CC_Struct2 *temp_a1;
    u16 sp1A;

    temp_a1 = arg0->unk5C;
    sp1A = (u16) func_80010550(arg1, (s32) temp_a1);
    if ((u8) D_801CFE02 >= 3) {
        func_800058DC((s32) arg0, func_80127014);
    }
    if (sp1A != 0) {
        func_8013A28C(arg1, D_801CE6E8);
        func_800058DC((s32) arg0, func_801CC748);
    }
}


extern struct func_801CC2CC_Struct3 D_801CE694;

void func_801CC748(struct func_801CC2CC_Struct1 *arg0, s32 volatile arg1) {
    struct func_801CC2CC_Struct2 *temp_a1;
    u16 sp1A;

    temp_a1 = arg0->unk5C;
    sp1A = (u16) func_80010550(arg1, (s32) temp_a1);
    if ((u8) D_801CFE02 >= 3) {
        func_800058DC((s32) arg0, func_80127014);
    }
    if (sp1A != 0) {
        func_8013A28C(arg1, D_801CE694);
        D_801CFE02 = 2;
    }
}

