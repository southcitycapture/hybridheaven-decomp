#include "common.h"

extern void func_800058DC(void *arg0, void *arg1);

extern f32 D_80246A30;
extern f32 D_80246C60;
extern void func_8024092C();

struct func_802408F0_Struct {
    u8 pad[0x3C];
    u16 unk3C;
};

void func_802408F0(struct func_802408F0_Struct *arg0, s32 arg1) {
    D_80246C60 = D_80246A30;
    arg0->unk3C = 0;
    func_800058DC(arg0, &func_8024092C);
}


extern f32 D_80246A34;

struct func_8024092C_Struct {
    u8 pad[0x3C];
    u16 unk3C;
};

void func_8024092C(struct func_8024092C_Struct *arg0, s32 arg1) {
    arg0->unk3C = arg0->unk3C + 1;
    D_80246C60 = D_80246A34;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file020/802408F0/func_80240950.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file020/802408F0/func_80240CF8.s")

extern void func_801C2F0C(s32 arg0, struct func_80240EF8_Struct *arg1);

struct func_80240DF4_Struct {
    f32 a;
    f32 b;
    f32 c;
    s16 d;
    s32 e;
    f32 f;
    s16 g;
    s16 h;
    s16 i;
};

extern f32 D_80246A58;
extern f32 D_80246A5C;
extern void func_80240E8C(void *arg0, s32 arg1);

void func_80240DF4(void *arg0, void *arg1) {
    struct func_80240DF4_Struct buf;

    if (func_801C2FF8() != 0) {
        buf.a = D_80246A58;
        buf.b = D_80246A5C;
        buf.c = 0.0f;
        buf.d = 0x1100;
        buf.e = 0x0168003E;
        buf.f = 1.5f;
        buf.g = 0;
        buf.h = 0x5A;
        buf.i = 0x15A2;
        func_801C2F0C(6, (void *) &buf);
        func_800058DC(arg0, func_80240E8C);
    }
}

void func_80240EF8(void *arg0, void *arg1);

struct func_80240E8C_Struct {
    s16 a;
    s32 b;
    f32 c;
    s16 d;
    u8 pad[0x10];
};

void func_80240E8C(void *arg0, s32 arg1) {
    struct func_80240E8C_Struct sp18;

    if (func_801C3044() == 0) {
        sp18.a = 0x1000;
        sp18.b = 0x0168002D;
        sp18.d = 0xF;
        sp18.c = 3.0f;
        func_801C2F0C(5, (void *) &sp18);
        func_800058DC(arg0, (void *) func_80240EF8);
    }
}


typedef struct func_80240EF8_Struct {
    s16 a;
    s32 b;
    f32 c;
    s16 d;
} func_80240EF8_Struct;

extern s32 func_801C3044(void);
extern void func_80020718(s32 arg0);
extern void func_80240F7C();

void func_80240EF8(void *arg0, void *arg1) {
    u8 pad[0x10];
    func_80240EF8_Struct sp18;

    if (func_801C3044() == 0) {
        sp18.a = 0x1000;
        sp18.b = 0x01680041;
        sp18.c = 3.0f;
        sp18.d = 0x14;
        func_801C2F0C(5, &sp18);
        *(s16 *)((u8 *)arg0 + 0x3C) = 0;
        func_80020718(0x153);
        func_80020718(0x154);
        func_800058DC(arg0, func_80240F7C);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file020/802408F0/func_80240F7C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file020/802408F0/func_80241068.s")


void func_80241214(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file020/802408F0/func_80241220.s")


s32 func_80126944(void);
s32 func_801C3B20(void);
s32 func_801C3D20(f32, f32, f32);
void func_801C3B10(s32);
void func_801C3B2C(s32);
void func_801FBB30(void);
void func_80241420(void);

void func_802413A0(void *arg0, s32 arg1) {
    if (func_80126944() == 0) {
        if (func_801C3D20(-180.0f, -90.0f, 20.0f) != 0) {
            if (func_801C3B20() == 0) {
                func_801FBB30();
                func_801C3B2C(2);
                func_801C3B10(1);
                func_800058DC(arg0, func_80241420);
            }
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file020/802408F0/func_80241420.s")

extern void func_80241524();

struct func_802414B8_Struct {
    s16 a;
    s32 b;
    f32 c;
    s16 d;
    u8 pad[0x10];
};

void func_802414B8(void *arg0, s32 arg1) {
    struct func_802414B8_Struct sp18;

    if (func_801C3044() == 0) {
        sp18.a = 0x1000;
        sp18.b = 0x0168002D;
        sp18.d = 0xF;
        sp18.c = 3.0f;
        func_801C2F0C(5, (void *) &sp18);
        func_800058DC(arg0, (void *) func_80241524);
    }
}


struct func_80241524_Struct {
    u8 pad[0x3C];
    s16 unk3C;
};

extern void func_8012C89C(void *arg0, s32 arg1, s32 arg2, s32 arg3);
extern void func_8001E978(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);
extern void func_802415B4();
extern s16 D_80089354;

void func_80241524(struct func_80241524_Struct *arg0, s32 arg1) {
    if (func_801C3044() == 0) {
        func_8012C89C(arg0, 0, 0x292, 3);
        D_80089354 = 0;
        func_8001E978(arg0, 0, 0, 0, 0x14, 0, 1, 0);
        arg0->unk3C = 0;
        func_80020718(0x153);
        func_800058DC(arg0, func_802415B4);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file020/802408F0/func_802415B4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file020/802408F0/func_802416EC.s")


void func_802418D4(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file020/802408F0/func_802418E0.s")


extern void func_80241AE8();

void func_80241A68(void *arg0, s32 arg1) {
    if (func_80126944() == 0) {
        if (func_801C3D20(-180.0f, 100.0f, 20.0f) != 0) {
            if (func_801C3B20() == 0) {
                func_801FBB30();
                func_801C3B2C(2);
                func_801C3B10(1);
                func_800058DC(arg0, func_80241AE8);
            }
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file020/802408F0/func_80241AE8.s")

extern void func_80241BEC();

struct func_80241B80_Struct {
    s16 a;
    s32 b;
    f32 c;
    s16 d;
    u8 pad[0x10];
};

void func_80241B80(void *arg0, s32 arg1) {
    struct func_80241B80_Struct sp18;

    if (func_801C3044() == 0) {
        sp18.a = 0x1000;
        sp18.b = 0x0168002D;
        sp18.d = 0xF;
        sp18.c = 3.0f;
        func_801C2F0C(5, (void *) &sp18);
        func_800058DC(arg0, (void *) func_80241BEC);
    }
}


struct func_80241BEC_Struct {
    u8 pad[0x3C];
    s16 unk3C;
};

extern void func_80241C7C(void);

void func_80241BEC(struct func_80241BEC_Struct *arg0, s32 arg1) {
    if (func_801C3044() == 0) {
        func_8012C89C(arg0, 0, 0x292, 5);
        D_80089354 = 0;
        func_8001E978(arg0, 0, 0, 0, 0x14, 0, 1, 0);
        arg0->unk3C = 0;
        func_80020718(0x153);
        func_800058DC(arg0, func_80241C7C);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file020/802408F0/func_80241C7C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file020/802408F0/func_80241DB4.s")


void func_80241FD4(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file020/802408F0/func_80241FE0.s")


typedef struct func_80242BE0_Struct_Obj {
    u8 pad0[0x6];
    s16 unk6;
    s16 unk8;
    s16 unkA;
    u8 pad1[0x4];
    u32 unk10;
} func_80242BE0_Struct_Obj;

typedef struct func_80242BE0_Struct {
    u8 pad0[0x38];
    func_80242BE0_Struct_Obj *unk38;
    u16 unk3C;
    u8 pad1[0x90 - 0x3E];
    f32 unk90;
    u8 unk94;
} func_80242BE0_Struct;

typedef struct func_80242BE0_Struct_Cam {
    u8 pad0[0x4];
    f32 unk4;
    u8 pad1[0x4];
    f32 unkC;
    u8 pad2[0x30 - 0x10];
    f32 unk30;
    f32 unk34;
    f32 unk38;
} func_80242BE0_Struct_Cam;

typedef struct func_80242BE0_Struct_Holder {
    u8 pad0[0x2C];
    func_80242BE0_Struct_Cam *unk2C;
} func_80242BE0_Struct_Holder;

extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern s32 func_8001EF38(f32, f32);
extern void func_80129FB8(f32, f32, f32, f32, f32, f32, f32, s32, s32, s32, s32, s32, s32, s32, s32, f32, s32, s32);
extern s16 func_8012C6B4(s32);
extern f32 func_8012FFDC(f32, f32, f32, f32, f32, f32);
extern s32 func_80150584(void);
extern void func_801FCA4C(f32, f32, f32, f32, s32);
extern void func_801FCAE0(f32, f32, f32, s32);
extern s32 func_801FD644(f32, f32, f32, f32, s32, f32, f32, s32);
extern void func_80380F94(f32, f32, f32, f32, f32, f32, s32);
extern u8 D_801BBC0D;
extern func_80242BE0_Struct_Holder *D_801BBCD0;
extern func_80242BE0_Struct_Holder *D_801BBCD8;
extern u16 D_802443D8[];
extern f32 D_80246AE8;
extern f64 D_80246AF0;
extern f64 D_80246AF8;

#define POS(f) ((f32)arg0->unk38->f / 10.0)

void func_80242BE0(func_80242BE0_Struct *arg0, s32 arg1) {
    f32 sp7C;
    f32 dist;
    s16 sp76;
    u16 sp74;
    s32 r;
    f32 sc[2];

    if ((arg0->unk38->unk10 >> 0x18) != 2 && arg0->unk94 == 0 && func_80150584() == 0) {
        func_80020718(0x1A0);
        arg0->unk94 = 1;
    }
    if ((arg0->unk38->unk10 >> 0x18) != 2) {
        dist = func_8012FFDC(POS(unk6), POS(unk8), POS(unkA), D_801BBCD8->unk2C->unk30, D_801BBCD8->unk2C->unk34, D_801BBCD8->unk2C->unk38);
        if (dist < D_80246C60) {
            D_80246C60 = dist;
            func_801FCA4C(POS(unk6), POS(unk8), POS(unkA), 500.0f, 0x1A0);
            func_801FCAE0(POS(unk6), POS(unk8), POS(unkA), 0x1A0);
        }
    }
    if ((arg0->unk38->unk10 >> 0x18) != 2) {
        if (!(arg0->unk3C++ & 1)) {
            sp76 = func_8012C6B4(0x2000);
            sp7C = func_8012C6B4(0x3E8) / 100.0;
            sc[0] = func_8001EAD0((s32)sp76);
            sc[1] = func_8001EB64((s32)sp76);
            r = func_8012C6B4(0x46);
            func_80129FB8(sc[0] * sp7C + POS(unk6), arg0->unk90 + POS(unk8) + 4.0, sc[1] * sp7C + POS(unkA), 0.0f, D_80246AE8, 0.0f, 0.0f, 0x38, 0x26, 0, 0x32, 0x32, 0x32, 0xB4, -4, r / D_80246AF0 + D_80246AF8, 0xB, 0);
        }
    }
    if ((arg0->unk38->unk10 >> 0x18) != 2) {
        sp74 = D_802443D8[D_801BBC0D];
        if (func_801FD644(POS(unk6), POS(unk8), POS(unkA), arg0->unk90,
                          func_8001EF38(POS(unk6) - D_801BBCD0->unk2C->unk4, POS(unkA) - D_801BBCD0->unk2C->unkC), 1.0f, 1.0f, sp74) != 0) {
            func_80380F94(POS(unk6), POS(unk8), POS(unkA), 0.0f, 0.0f, 0.0f, 2);
        }
    }
}

struct func_80243224_Inner {
    u8 pad[0x4C];
    u8 unk4C;
    u8 unk4D;
};
struct func_80243224_Outer {
    u8 pad[0x30];
    struct func_80243224_Inner *unk30;
};
void func_80243224(s32 arg0, struct func_80243224_Outer **arg1);

typedef struct func_802430FC_Struct_Quad {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
} func_802430FC_Struct_Quad;

typedef union func_802430FC_Union_Quad {
    s64 align;
    func_802430FC_Struct_Quad w;
} func_802430FC_Union_Quad;

typedef struct func_802430FC_Struct_Inner {
    u8 pad0[0x24];
    s32 unk24;
    u8 pad1[0x08];
    s32 unk30;
    u8 pad2[0x17];
    u8 unk4B;
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
    u8 unk4F;
} func_802430FC_Struct_Inner;

typedef struct func_802430FC_Struct_Outer {
    u8 pad0[0x30];
    func_802430FC_Struct_Inner *unk30;
} func_802430FC_Struct_Outer;

extern void func_80005E44(s32, void *);
extern void func_80006214(s32);
extern void func_8001F74C(s32);
extern void func_8012D918(s32, s32, s32, s32, s32);
extern func_802430FC_Union_Quad D_80164F40;
extern u32 D_80244338[];

void func_802430FC(s32 arg0, func_802430FC_Struct_Outer **arg1) {
    func_802430FC_Union_Quad sp28;

    sp28.w = D_80164F40.w;
    sp28.w.unk4 = 0x80000600;
    func_80005E44(arg0, &sp28);
    func_80006214(arg0);
    func_8012C89C((void *) arg0, 0, 0x293, 2);
    func_8012D918(arg0, 0x293, 3, 0, 0);
    (*arg1)->unk30->unk24 |= 0x4100;
    (*arg1)->unk30->unk30 = (s32) D_80244338 | 0x40000000;
    (*arg1)->unk30->unk4B = 0x80;
    (*arg1)->unk30->unk4C = 0;
    (*arg1)->unk30->unk4D = 0;
    (*arg1)->unk30->unk4E = 0xFF;
    (*arg1)->unk30->unk4F = 0xFF;
    func_8001F74C(arg0);
    func_800058DC((void *) arg0, (void *) func_80243224);
}




void func_80243224(s32 arg0, struct func_80243224_Outer **arg1) {
    struct func_80243224_Inner *temp_v0;

    temp_v0 = (*arg1)->unk30;
    temp_v0->unk4C++;
    temp_v0 = (*arg1)->unk30;
    temp_v0->unk4D++;
}

