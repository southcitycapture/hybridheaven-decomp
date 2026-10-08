#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file021/80242200/func_80242200.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file021/80242200/func_802423B4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file021/80242200/func_80242688.s")


extern s32 func_80133A24(s32 arg0);

struct func_802427B4_Inner {
    u8 pad[0x4C];
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
};

struct func_802427B4_Outer {
    u8 pad[0x30];
    struct func_802427B4_Inner *unk30;
};

void func_802427B4(s32 arg0, struct func_802427B4_Outer **arg1) {
    if (func_80133A24(0x1A1) != 0) {
        (*arg1)->unk30->unk4C = 0xFF;
        (*arg1)->unk30->unk4D = 0x13;
        (*arg1)->unk30->unk4E = 0;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file021/80242200/func_80242810.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file021/80242200/func_8024286C.s")


extern void func_8001F74C();
extern s32 func_80126CC0(s32, void *);
extern void func_800058DC(s32, void *);
extern void func_80126EAC();
extern void func_80242A6C();

void func_80242A24(s32 arg0, s32 arg1) {
    func_8001F74C();
    if (func_80126CC0(arg0, func_80126EAC) != 0) {
        func_800058DC(arg0, func_80242A6C);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file021/80242200/func_80242A6C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file021/80242200/func_80242BE8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file021/80242200/func_80242C38.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file021/80242200/func_80242CB8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file021/80242200/func_80242D08.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file021/80242200/func_80242D88.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file021/80242200/func_80242DD8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file021/80242200/func_80242DF8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file021/80242200/func_80242E40.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file021/80242200/func_80242FE8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file021/80242200/func_802432D4.s")


typedef struct func_8024345C_Struct {
    u8 pad0[0xF23];
    u8 unkF23;
    u8 unkF24;
    u8 unkF25;
    u8 pad1[0x1044 - 0xF26];
    struct func_8024345C_Inner *unk1044;
} func_8024345C_Struct;

typedef struct func_8024345C_Inner {
    u8 pad0[0x24];
    struct func_8024345C_Inner2 *unk24;
} func_8024345C_Inner;

typedef struct func_8024345C_Inner2 {
    u8 pad0[0x22];
    u8 unk22;
} func_8024345C_Inner2;

s32 func_80133A24(s32);
void func_800058DC(s32, void *);
extern func_8024345C_Struct D_801BBBF0;
void func_802434C4(void);

void func_8024345C(s32 arg0, s32 arg1) {
    if (func_80133A24(0x1A2) != 0) {
        D_801BBBF0.unk1044->unk24->unk22 = 1;
        D_801BBBF0.unkF23 = 0x64;
        D_801BBBF0.unkF24 = 0xFF;
        D_801BBBF0.unkF25 = 0xFF;
        func_800058DC(arg0, func_802434C4);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file021/80242200/func_802434C4.s")


struct func_8024358C_StructArg0 {
    u8 pad0[0x90];
    u16 unk90;
};

struct func_8024358C_StructZ {
    u8 pad0[0x22];
    u8 unk22;
};

struct func_8024358C_StructY {
    u8 pad0[0x18];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    s32 unk24;
    u8 pad1[0x30 - 0x28];
    void *unk30;
    u8 pad2[0x4C - 0x34];
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
    u8 unk4F;
};

struct func_8024358C_StructX {
    u8 pad0[0x30];
    struct func_8024358C_StructY *unk30;
};

struct func_8024358C_StructArg1 {
    struct func_8024358C_StructX *unk0;
    struct func_8024358C_StructZ *unk4;
    struct func_8024358C_StructZ *unk8;
};

void func_8012C89C(void *, s32, s32, s32);
void func_8012D918(void *, s32, s32, s32, s32);
void func_802436A8(void);

extern u8 D_8017AF38[];

void func_8024358C(struct func_8024358C_StructArg0 *arg0, struct func_8024358C_StructArg1 *arg1) {
    f32 temp_fv0;
    s32 temp_v0;

    temp_v0 = arg0->unk90;
    arg0->unk90 = temp_v0 - 1;
    if (temp_v0 == 0) {
        arg1->unk4->unk22 = 0;
        arg1->unk8->unk22 = 0;
        arg1->unk0->unk30->unk30 = D_8017AF38;
        arg1->unk0->unk30->unk24 = 0x400;
        arg1->unk0->unk30->unk4C = ((u8 *) &D_801BBBF0)[0xF32];
        arg1->unk0->unk30->unk4D = ((u8 *) &D_801BBBF0)[0xF33];
        arg1->unk0->unk30->unk4E = ((u8 *) &D_801BBBF0)[0xF34];
        arg1->unk0->unk30->unk4F = ((u8 *) &D_801BBBF0)[0xF35];
        func_8012C89C(arg0, 0, 0x501, 0x12);
        func_8012D918(arg0, 0x500, 1, 0, 0);
        arg1->unk0->unk30->unk20 = 1.0f;
        temp_fv0 = arg1->unk0->unk30->unk20;
        arg1->unk0->unk30->unk1C = temp_fv0;
        arg1->unk0->unk30->unk18 = temp_fv0;
        func_800058DC((s32) arg0, (void *) func_802436A8);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file021/80242200/func_802436A8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file021/80242200/func_802436C8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file021/80242200/func_80243824.s")


typedef struct func_8024386C_Leaf {
    u8 pad0[0x8];
    f32 unk8;
} func_8024386C_Leaf;

typedef struct func_8024386C_Mid {
    u8 pad0[0x30];
    func_8024386C_Leaf *unk30;
} func_8024386C_Mid;

typedef struct func_8024386C_Arg0 {
    u8 pad0[0x24];
    func_8024386C_Mid *unk24;
} func_8024386C_Arg0;

extern f64 D_802570B8;
extern f64 D_802570C0;
extern void func_802438E0(void);

void func_8024386C(func_8024386C_Arg0 *arg0, s32 arg1) {
    func_8024386C_Leaf *temp_v0;

    temp_v0 = arg0->unk24->unk30;
    temp_v0->unk8 = (f32) ((f64) temp_v0->unk8 + D_802570B8);
    if (!((f64) arg0->unk24->unk30->unk8 < D_802570C0)) {
        func_800058DC((s32) arg0, (void *) func_802438E0);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file021/80242200/func_802438E0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file021/80242200/func_80243958.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file021/80242200/func_80243990.s")


struct func_80243A00_Inner {
    u8 pad0[0x8];
    f32 unk8;
};

struct func_80243A00_Outer {
    u8 pad0[0x30];
    struct func_80243A00_Inner *unk30;
};

struct func_80243A00_Arg0 {
    u8 pad0[0x24];
    struct func_80243A00_Outer *unk24;
    u8 pad1[0x7C - 0x28];
    f32 unk7C;
};

void func_80243A00(struct func_80243A00_Arg0 *arg0, s32 arg1) {
    arg0->unk24->unk30->unk8 = -382.0f;
    arg0->unk7C = arg0->unk24->unk30->unk8;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file021/80242200/func_80243A2C.s")


struct func_802440B4_Inner {
    u8 pad0[0x22];
    u8 unk22;
};

struct func_802440B4_Outer {
    struct func_802440B4_Inner *unk0;
    struct func_802440B4_Inner *unk4;
    struct func_802440B4_Inner *unk8;
};

extern void func_80244110(void);

void func_802440B4(s32 arg0, struct func_802440B4_Outer *arg1) {
    if (func_80133A24(0x1A5) != 0) {
        arg1->unk0->unk22 = 1;
        arg1->unk4->unk22 = 1;
        arg1->unk8->unk22 = 1;
        func_800058DC(arg0, func_80244110);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file021/80242200/func_80244110.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file021/80242200/func_80244458.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file021/80242200/func_80244478.s")


typedef struct func_802445E8_StructInner {
    u8 pad[0x4C];
    u8 unk4C;
    u8 unk4D;
} func_802445E8_StructInner;

typedef struct func_802445E8_StructOuter {
    u8 pad[0x30];
    func_802445E8_StructInner *unk30;
} func_802445E8_StructOuter;

extern void func_80244644(void);

void func_802445E8(s32 arg0, func_802445E8_StructOuter **arg1) {
    func_802445E8_StructInner *temp_v0;

    temp_v0 = (*arg1)->unk30;
    temp_v0->unk4C = temp_v0->unk4C;
    temp_v0 = (*arg1)->unk30;
    temp_v0->unk4D = temp_v0->unk4D + 1;
    if (func_80133A24(0x1A6) != 0) {
        func_800058DC(arg0, func_80244644);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file021/80242200/func_80244644.s")


typedef struct func_80244720_Struct {
    u8 pad0[0x8];
    f32 unk8;
    u8 pad1[0x40];
    u8 unk4C;
    u8 unk4D;
} func_80244720_Struct;

typedef struct func_80244720_Outer {
    u8 pad0[0x30];
    func_80244720_Struct *unk30;
} func_80244720_Outer;

typedef struct func_80244720_Arg0 {
    u8 pad0[0x24];
    func_80244720_Outer *unk24;
} func_80244720_Arg0;

void func_80244720(func_80244720_Arg0 *arg0, func_80244720_Outer **arg1) {
    func_80244720_Struct *temp_v0;

    temp_v0 = (*arg1)->unk30;
    temp_v0->unk4C = temp_v0->unk4C;
    temp_v0 = (*arg1)->unk30;
    temp_v0->unk4D = temp_v0->unk4D + 1;
    arg0->unk24->unk30->unk8 = -32.0f;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file021/80242200/func_8024475C.s")


extern void func_80020744(s32);
extern f32 D_80257110;
extern void func_8024495C(void);

void func_80244904(void *arg0, void *arg1) {
    if (func_80133A24(0x1A7) != 0) {
        func_80020744(0x1A2);
        func_800058DC((s32) arg0, func_8024495C);
        ((f32 *) arg0)[0x9C / 4] = D_80257110;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file021/80242200/func_8024495C.s")


extern f64 D_80257120;
extern f64 D_80257128;
extern void func_80244A54(void);

typedef struct func_802449E0_Inner {
    u8 pad0[0x8];
    f32 unk8;
} func_802449E0_Inner;

typedef struct func_802449E0_Outer {
    u8 pad0[0x30];
    func_802449E0_Inner *unk30;
} func_802449E0_Outer;

typedef struct func_802449E0_Arg0 {
    u8 pad0[0x24];
    func_802449E0_Outer *unk24;
} func_802449E0_Arg0;

void func_802449E0(func_802449E0_Arg0 *arg0, s32 arg1) {
    func_802449E0_Inner *temp_v0;

    temp_v0 = arg0->unk24->unk30;
    temp_v0->unk8 = (f32) ((f64) temp_v0->unk8 + D_80257120);
    if (!((f64) arg0->unk24->unk30->unk8 < D_80257128)) {
        func_800058DC((s32) arg0, func_80244A54);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file021/80242200/func_80244A54.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file021/80242200/func_80244AC4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file021/80242200/func_80244AF0.s")


struct func_80244C14_Inner {
    u8 pad[0x10];
    s16 unk10;
};

struct func_80244C14_Mid {
    u8 pad[0x30];
    struct func_80244C14_Inner *unk30;
};

extern s32 func_8012AAE8(s32, s32, s32, s32, f32);

void func_80244C14(s32 arg0, struct func_80244C14_Mid **arg1) {
    struct func_80244C14_Inner *temp_v0;

    if ((func_80133A24(0x1AD) != 0) && (func_8012AAE8(arg0, 0x43480000, 0xC4960000, 0xC4394000, 1.0f) != 0)) {
        temp_v0 = (*arg1)->unk30;
        temp_v0->unk10 = (s16) (temp_v0->unk10 + 5);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file021/80242200/func_80244C80.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file021/80242200/func_80244DA0.s")


extern void func_80005700(void);

struct func_80244E28_Sub38 {
    u8 pad0[0x14];
    u32 unk14;
};

struct func_80244E28_Arg0 {
    u8 pad0[0x38];
    struct func_80244E28_Sub38 *unk38;
    u8 pad1[0x90 - 0x3C];
    u16 unk90;
};

struct func_80244E28_Inner {
    u8 pad0[0x10];
    s16 unk10;
};

struct func_80244E28_Outer {
    u8 pad0[0x30];
    struct func_80244E28_Inner *unk30;
};

void func_80244E28(struct func_80244E28_Arg0 *arg0, struct func_80244E28_Outer **arg1) {
    s32 temp_v0;

    if ((arg0->unk38->unk14 >> 0x10) & 1) {
        (*arg1)->unk30->unk10 += 0x80;
    } else {
        (*arg1)->unk30->unk10 -= 0x80;
    }
    temp_v0 = arg0->unk90;
    arg0->unk90 = temp_v0 - 1;
    if (temp_v0 == 0) {
        func_80005700();
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file021/80242200/func_80244E9C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file021/80242200/func_80244FCC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file021/80242200/func_80244FD8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file021/80242200/func_8024522C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file021/80242200/func_802453E0.s")


extern void func_802455F0();

void func_80245588(s32 arg0, s32 arg1) {
    func_8001F74C();
    if (func_80133A24(0x1A9) != 0) {
        ((s8 *)&D_801BBBF0)[0xF29] = 0;
        ((s8 *)&D_801BBBF0)[0xF2A] = 0;
        ((s8 *)&D_801BBBF0)[0xF2B] = 0;
        ((s8 *)&D_801BBBF0)[0xF2C] = -0x20;
        ((s8 *)&D_801BBBF0)[0xF2D] = -0x40;
        ((s8 *)&D_801BBBF0)[0xF2E] = 0;
        func_800058DC(arg0, func_802455F0);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file021/80242200/func_802455F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file021/80242200/func_80245674.s")


typedef struct func_80245680_StructB {
    u8 pad0[0x18];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    s32 unk24;
    u8 pad1[0x8];
    void *unk30;
    u8 pad2[0x18];
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
    u8 unk4F;
} func_80245680_StructB;

typedef struct func_80245680_StructA {
    u8 pad0[0x30];
    func_80245680_StructB *unk30;
} func_80245680_StructA;

typedef struct func_80245680_Struct38 {
    u8 pad0[0x10];
    u32 unk10;
} func_80245680_Struct38;

typedef struct func_80245680_Arg0 {
    u8 pad0[0x38];
    func_80245680_Struct38 *unk38;
} func_80245680_Arg0;

extern void func_80005F6C(void *, void *);
extern void func_80006214(void *);
extern void func_8012636C(void *, s32);
extern void func_800062F8(void *, u32);
extern void func_8012C784(void *, s32, u32);
extern u8 D_80164F40[];
extern void func_802457A8(void);

void func_80245680(func_80245680_Arg0 *arg0, func_80245680_StructA **arg1) {
    f32 temp_fv0;
    func_80245680_StructB *temp_v0;

    func_8001F74C();
    func_80005F6C(arg0, D_80164F40);
    func_80006214(arg0);
    func_8012636C(arg0, 0);
    func_800062F8(*arg1, 0x80000C00);
    (*arg1)->unk30->unk30 = D_8017AF38;
    (*arg1)->unk30->unk24 = 0x400;
    (*arg1)->unk30->unk4C = D_801BBBF0.pad1[0xF32 - 0xF26];
    (*arg1)->unk30->unk4D = D_801BBBF0.pad1[0xF33 - 0xF26];
    (*arg1)->unk30->unk4E = D_801BBBF0.pad1[0xF34 - 0xF26];
    (*arg1)->unk30->unk4F = D_801BBBF0.pad1[0xF35 - 0xF26];
    func_8012C784(arg0, 0, arg0->unk38->unk10 >> 24);
    (*arg1)->unk30->unk20 = 1.0f;
    temp_v0 = (*arg1)->unk30;
    temp_fv0 = temp_v0->unk20;
    temp_v0->unk1C = temp_fv0;
    (*arg1)->unk30->unk18 = temp_fv0;
    func_800058DC((s32) arg0, func_802457A8);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file021/80242200/func_802457A8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file021/80242200/func_8024580C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file021/80242200/func_8024593C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file021/80242200/func_802459C8.s")

