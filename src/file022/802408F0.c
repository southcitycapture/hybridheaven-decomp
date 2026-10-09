#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file022/802408F0/func_802408F0.s")

void func_80240904(void) {
}


typedef struct func_8024090C_Struct {
    u8 pad0[0x15D];
    u8 unk15D;
    u8 pad1[6];
    u8 unk164;
    u8 pad2[0x1104 - 0x165];
    s32 unk1104;
} func_8024090C_Struct;

extern s32 func_8001E978();
extern s16 D_80089354;
extern func_8024090C_Struct D_801BBBF0;

void func_8024090C(void) {
    D_80089354 = 2;
    D_801BBBF0.unk164 = 0;
    D_801BBBF0.unk15D = 0;
    func_8001E978(D_801BBBF0.unk1104, 0, 0, 0, 0xF, 0, 2, 0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file022/802408F0/func_8024096C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file022/802408F0/func_80240AD4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file022/802408F0/func_80240B0C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file022/802408F0/func_80240BB8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file022/802408F0/func_80240BC4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file022/802408F0/func_80240C0C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file022/802408F0/func_80240C68.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file022/802408F0/func_80240DEC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file022/802408F0/func_80240E54.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file022/802408F0/func_80240ED0.s")


extern f64 D_80252518;

struct func_80240F14_Inner {
    u8 pad[0x22];
    u8 unk22;
};

struct func_80240F14_Arg0 {
    u8 pad[0x24];
    struct func_80240F14_Inner *unk24;
    u8 pad2[0x92 - 0x28];
    u16 unk92;
};

struct func_80240F14_Vec {
    u8 pad[0x18];
    f32 unk18;
    u8 pad2[0x20 - 0x1C];
    f32 unk20;
};

struct func_80240F14_Obj {
    u8 pad[0x2C];
    struct func_80240F14_Vec *unk2C;
};

void func_80240F14(struct func_80240F14_Arg0 *arg0, struct func_80240F14_Obj **arg1) {
    f64 temp_f0;
    struct func_80240F14_Vec *temp_v1;

    if (arg0->unk92 != 0) {
        temp_f0 = D_80252518;
        arg0->unk92 = arg0->unk92 - 1;
        temp_v1 = (*arg1)->unk2C;
        temp_v1->unk18 = (f32) ((f64) temp_v1->unk18 - temp_f0);
        temp_v1 = (*arg1)->unk2C;
        temp_v1->unk20 = (f32) ((f64) temp_v1->unk20 - temp_f0);
        return;
    }
    arg0->unk24->unk22 = 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file022/802408F0/func_80240F78.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file022/802408F0/func_80240FC8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file022/802408F0/func_802413B8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file022/802408F0/func_8024140C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file022/802408F0/func_80241484.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file022/802408F0/func_80241518.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file022/802408F0/func_8024162C.s")


typedef struct func_8024167C_Sub {
    u8 pad0[0x63];
    u8 unk63;
} func_8024167C_Sub;

typedef struct func_8024167C_Glob {
    u8 pad0[0xDC];
    func_8024167C_Sub *unkDC;
    u8 pad1[0xBA2 - 0xE0];
    u8 unkBA2;
} func_8024167C_Glob;

typedef struct func_8024167C_Obj {
    u8 pad0[0x18];
    void *unk18;
    u8 pad1[0x4];
    void *unk20;
    u8 pad2[0x38 - 0x24];
    u16 *unk38;
} func_8024167C_Obj;

extern s32 func_80126CC0(void *arg0, void *arg1);
extern void func_8013B570(void *arg0, u16 arg1, s32 arg2, s32 arg3, void *arg4);
extern void func_80127014(void);
extern void func_8012E5B0(void);
extern void func_8012E6BC(void);
extern void func_80241708(void);

void func_8024167C(void *arg0, s32 arg1) {
    func_8024167C_Glob *g = (func_8024167C_Glob *)&D_801BBBF0;
    func_8024167C_Obj *obj = arg0;

    g->unkBA2 = 1;
    if (g->unkDC->unk63 != 0 && func_80126CC0(arg0, func_80127014) != 0) {
        obj->unk18 = func_8012E5B0;
        obj->unk20 = func_8012E6BC;
        func_8013B570(obj, obj->unk38[1], 2, 3, func_80241708);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file022/802408F0/func_80241708.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file022/802408F0/func_80241764.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file022/802408F0/func_8024179C.s")


s32 func_801270C0(void *arg0);
void func_80020744(s32 arg0);

typedef struct func_802417D0_Struct {
    u8 pad[4];
    s16 unk4;
} func_802417D0_Struct;

extern func_802417D0_Struct D_801BBF90;

void func_802417D0(void *arg0, s32 arg1) {
    if (func_801270C0(arg0) != 0) {
        func_80020744(7);
        D_801BBF90.unk4 = 0x1F3;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file022/802408F0/func_8024180C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file022/802408F0/func_8024187C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file022/802408F0/func_802418B4.s")


extern void func_8012FE50(s32, s32, s32, s32, s32);

void func_802419B4(s32 arg0, s32 arg1) {
    func_8012FE50(0x10, 0xF0, 0, 1, 0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file022/802408F0/func_802419EC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file022/802408F0/func_80241A34.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file022/802408F0/func_80241AB8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file022/802408F0/func_80241AF0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file022/802408F0/func_80241B24.s")


extern void func_80020744(s32);
extern s32 D_801BCCF0;

void func_80241B30(void) {
    *(s16 *)((u8 *)&D_801BBBF0 + 2) = 2;
    func_80020744(7);
    func_8001E978(D_801BCCF0, 0, 0, 0, 0xF, 0, 1, 0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file022/802408F0/func_80241B8C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file022/802408F0/func_80241C7C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file022/802408F0/func_80241CB4.s")



void func_80241DCC(void) {
    func_80020744(7);
    func_8001E978(D_801BCCF0, 0, 0, 0, 0xF, 0, 1, 0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file022/802408F0/func_80241E1C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file022/802408F0/func_80241EF4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file022/802408F0/func_80241F2C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file022/802408F0/func_80242034.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file022/802408F0/func_80242140.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file022/802408F0/func_8024217C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file022/802408F0/func_80242220.s")


typedef struct func_8024225C_Leaf {
    u8 pad0[8];
    f32 unk8;
} func_8024225C_Leaf;

typedef struct func_8024225C_Inner {
    u8 pad0[0x30];
    func_8024225C_Leaf *unk30;
} func_8024225C_Inner;

typedef struct func_8024225C_Struct {
    u8 pad0[0x24];
    func_8024225C_Inner *unk24;
} func_8024225C_Struct;

extern void func_802422C8(void);
extern void func_800058DC(void *, void *);

void func_8024225C(void *arg0, void *arg1) {
    func_8024225C_Leaf *temp_v0;

    temp_v0 = ((func_8024225C_Struct *) arg0)->unk24->unk30;
    temp_v0->unk8 = temp_v0->unk8 - 1.0f;
    temp_v0 = ((func_8024225C_Struct *) arg0)->unk24->unk30;
    if (temp_v0->unk8 < 210.0f) {
        temp_v0->unk8 = 210.0f;
        func_800058DC(arg0, (void *) func_802422C8);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file022/802408F0/func_802422C8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file022/802408F0/func_802422D4.s")


typedef struct func_80242414_Inner {
    u8 pad0[0x10];
    u32 unk10;
} func_80242414_Inner;

typedef struct func_80242414_Outer {
    u8 pad0[0x38];
    func_80242414_Inner *unk38;
} func_80242414_Outer;

extern s32 func_80133A24(s32);
extern void func_8024247C(void);

void func_80242414(func_80242414_Outer *arg0, void *arg1) {
    if ((arg0->unk38->unk10 >> 0x18) != 0) {
        if (func_80133A24(0x1EF) == 0) {
            return;
        }
        goto block_4;
    }
    if (func_80133A24(0x1F0) != 0) {
block_4:
        func_800058DC(arg0, func_8024247C);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file022/802408F0/func_8024247C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file022/802408F0/func_802424EC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file022/802408F0/func_802424F8.s")


extern void func_802426D8(void);

void func_80242690(u8 *arg0, void **arg1) {
    u8 *temp_v0;
    s32 temp_v1;

    temp_v0 = *(u8 **)((u8 *)*arg1 + 0x30);
    temp_v0[0x4B] = temp_v0[0x4B] + 1;
    temp_v1 = *(u16 *)(arg0 + 0x92);
    *(u16 *)(arg0 + 0x92) = temp_v1 - 1;
    if (temp_v1 == 0) {
        func_800058DC(arg0, func_802426D8);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file022/802408F0/func_802426D8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file022/802408F0/func_802427CC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file022/802408F0/func_802428B8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file022/802408F0/func_802428F8.s")


u16 func_8012C6B4(s32 arg0, void *arg1, void *arg2);
void func_800058DC(void *arg0, void *arg1);
void func_802428B8(void);

void func_8024294C(void *arg0, void *arg1) {
    s32 temp_v0;

    ((u8 *) &D_801BBBF0)[0xF20] = (u8) (((u8 *) &D_801BBBF0)[0xF20] - 0x4B);
    temp_v0 = *(u16 *) ((u8 *) arg0 + 0x90);
    *(u16 *) ((u8 *) arg0 + 0x90) = (u16) (temp_v0 - 1);
    if (temp_v0 == 0) {
        ((u8 *) &D_801BBBF0)[0xF20] = 0;
        *(u16 *) ((u8 *) arg0 + 0x90) = func_8012C6B4(0x32, &D_801BBBF0, arg0);
        func_800058DC(arg0, func_802428B8);
    }
}

