#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80242620/func_80242620.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80242620/func_80242714.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80242620/func_80242868.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80242620/func_802429C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80242620/func_80242A5C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80242620/func_80242B30.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80242620/func_80242BC4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80242620/func_80242C60.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80242620/func_80242D98.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80242620/func_80242E5C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80242620/func_80242FE0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80242620/func_8024312C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80242620/func_802431FC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80242620/func_8024339C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80242620/func_8024368C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80242620/func_802437C4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80242620/func_802438BC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80242620/func_80243AF0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80242620/func_80243B94.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80242620/func_80243C54.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80242620/func_80243D20.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80242620/func_80243E0C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80242620/func_80243F08.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80242620/func_80243F68.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80242620/func_802442FC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80242620/func_80244418.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80242620/func_80244458.s")

void func_802444D4(void) {
}

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80242620/func_802444DC.s")


struct func_802445BC_Struct1 {
    u8 pad0[0x30];
    f32 unk30_f;
};

struct func_802445BC_Struct0 {
    u8 pad0[0x24];
    struct func_802445BC_Inner *unk24;
};

struct func_802445BC_Inner {
    u8 pad0[0x30];
    struct func_802445BC_Leaf *unk30;
};

struct func_802445BC_Leaf {
    u8 pad0[0x4];
    f32 unk4;
};

extern f32 D_8025BF7C;

void func_802445BC(struct func_802445BC_Struct0 *arg0, s32 arg1) {
    if (func_80133A24(0x144) != 0) {
        arg0->unk24->unk30->unk4 = D_8025BF7C;
    }
}


struct func_80244600_Struct2 {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
};

struct func_80244600_Struct1 {
    u8 pad0[0x30];
    struct func_80244600_Struct2 *unk30;
};

struct func_80244600_Struct0 {
    u8 pad0[0x90];
    s16 unk90;
};

s32 func_80133A24(s32);
void func_80005F6C(void *, void *);
void func_80006214(void *);
void func_8012C89C(void *, s32, s32, s32);
void func_8012C2DC(s32);
void func_800058DC(void *, void (*)());
extern u8 D_80164F40[];
extern f32 D_8025BF80;
extern void func_802446CC();

void func_80244600(struct func_80244600_Struct0 *arg0, struct func_80244600_Struct1 **arg1) {
    if (func_80133A24(0x146) == 0) {
        func_80005F6C(arg0, D_80164F40);
        func_80006214(arg0);
        func_8012C89C(arg0, 0, 0x3CB, 5);
        func_8012C2DC(0);
        (*arg1)->unk30->unk4 = D_8025BF80;
        (*arg1)->unk30->unk8 = 200.0f;
        (*arg1)->unk30->unkC = 240.0f;
        (*arg1)->unk30->unk12 = 0;
        arg0->unk90 = 0x30;
        func_800058DC(arg0, func_802446CC);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80242620/func_802446CC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80242620/func_80244714.s")


struct func_80244788_Inner {
    u8 pad0[0x8];
    f32 unk8;
};

struct func_80244788_Mid {
    u8 pad0[0x30];
    struct func_80244788_Inner *unk30;
};

struct func_80244788_Struct {
    u8 pad0[0x24];
    struct func_80244788_Mid *unk24;
    u8 pad1[0x90 - 0x28];
    u16 unk90;
};

void func_80244788(struct func_80244788_Struct *arg0, s32 arg1) {
    struct func_80244788_Inner *temp_v0;
    extern s32 func_80133A24();

    if (func_80133A24(0x146, arg0) == 0) {
        if (arg0->unk90 != 0) {
            arg0->unk90 = arg0->unk90 - 1;
            temp_v0 = arg0->unk24->unk30;
            temp_v0->unk8 = temp_v0->unk8 - 2.0f;
        }
    }
}


extern void func_8012C228(s32, s32, s32);
extern void func_802448BC(void);
extern s32 D_8025C6F4;

void func_802447F0(s32 arg0, struct func_80244600_Struct1 **arg1) {
    func_80005F6C((void *) arg0, D_80164F40);
    func_80006214((void *) arg0);
    D_8025C6F4 = arg0;
    func_8012C89C((void *) arg0, 0, 0x3CB, 6);
    func_8012C2DC(0);
    (*arg1)->unk30->unk4 = 0.0f;
    (*arg1)->unk30->unk8 = 200.0f;
    (*arg1)->unk30->unkC = 404.0f;
    (*arg1)->unk30->unk12 = 0x1000;
    func_8012C228(arg0, 0x3CB, 0xA);
    func_800058DC((void *) arg0, func_802448BC);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80242620/func_802448BC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80242620/func_8024490C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80242620/func_8024495C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80242620/func_802449AC.s")


extern void func_80005700(void);

typedef struct func_802449FC_StructB {
    u8 pad0[0x8];
    f32 unk8;
    f32 unkC;
    s16 unk10;
} func_802449FC_StructB;

typedef struct func_802449FC_StructC {
    u8 pad0[0x30];
    func_802449FC_StructB *unk30;
} func_802449FC_StructC;

typedef struct func_802449FC_StructA {
    u8 pad0[0x24];
    func_802449FC_StructC *unk24;
    u8 pad1[0x90 - 0x28];
    u16 unk90;
} func_802449FC_StructA;

void func_802449FC(func_802449FC_StructA *arg0, s32 arg1) {
    func_802449FC_StructB *temp_v0;

    arg0->unk90 = arg0->unk90 + 1;
    temp_v0 = arg0->unk24->unk30;
    temp_v0->unkC = temp_v0->unkC + 1.0f;
    temp_v0 = arg0->unk24->unk30;
    temp_v0->unk10 = temp_v0->unk10 - 0x80;
    temp_v0 = arg0->unk24->unk30;
    temp_v0->unk8 = temp_v0->unk8 - (f32) ((s32) arg0->unk90 / 10);
    if (arg0->unk24->unk30->unk8 < -800.0f) {
        func_80005700();
    }
}

