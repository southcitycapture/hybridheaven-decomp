#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file056/803757E0/func_803757E0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/803757E0/func_80375A04.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/803757E0/func_80375B6C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/803757E0/func_80375F98.s")


struct func_803760D8_Sub {
    u8 pad[0x18];
    s32 unk18;
};

struct func_803760D8_Struct {
    u8 pad[0x38];
    struct func_803760D8_Sub *unk38;
};

extern s32 func_80005700(s32);
extern void func_800058DC(void *, void *);
extern void func_8001F74C(void *);
extern s32 func_80126CC0(void *, void *);
extern s32 func_80133A24(s32);
extern void func_80127014();
extern void func_80376160();

void func_803760D8(struct func_803760D8_Struct *arg0, s32 arg1)
{
  s32 temp_v0;
  temp_v0 = arg0->unk38->unk18 & 0xFFFF;
  if ((temp_v0 != 0) && (func_80133A24(temp_v0 ^ 0) != (0 & 0xFFFFFFFFu)))
  {
    func_80005700(arg0);
    return;
  }
  func_8001F74C(arg0);
  if (func_80126CC0(arg0, func_80127014) != 0)
  {
    func_800058DC(arg0, func_80376160);
  }
}


struct func_80376160_Struct {
    u8 pad0[0x18];
    void *unk18;
    u8 pad1C[0x4];
    void *unk20;
    u8 pad24[0x14];
    struct func_80376160_Inner *unk38;
};

struct func_80376160_Inner {
    u8 pad0[0x2];
    u16 unk2;
    u8 pad4[0xC];
    u32 unk10;
};

extern void func_80126968(void);
extern void func_8013B570(void *, u16, s32, s32, void *);
extern void func_8012E5B0(void);
extern void func_8012E6BC(void);
extern void func_80376218();

void func_80376160(struct func_80376160_Struct *arg0, s32 arg1) {
    struct func_80376160_Inner *temp_v1;
    u32 temp_v0;

    temp_v1 = arg0->unk38;
    temp_v0 = temp_v1->unk10 >> 0x18;
    if (temp_v0 == 0 || temp_v0 == 1 || temp_v0 == 2 || temp_v0 == 3) {
        arg0->unk18 = func_8012E5B0;
        arg0->unk20 = func_8012E6BC;
        if ((temp_v1->unk10 >> 0x18) == 2) {
            func_8013B570(arg0, temp_v1->unk2, 2, 3, func_80376218);
            func_80126968();
            return;
        }
        func_8013B570(arg0, temp_v1->unk2, 2, 4, func_80376218);
    }
}

extern void func_803762E0();
extern s32 func_80010550();

struct func_80376218_Sub {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[0x2];
    s16 unk12;
};

struct func_80376218_Mid {
    u8 pad0[0x2C];
    struct func_80376218_Sub *unk2C;
};

struct func_80376218_Obj {
    u8 pad0[0x78];
    s16 unk78;
};

struct func_80376218_Struct {
    u8 pad0[0x24];
    struct func_80376218_Mid *unk24;
    s32 unk28;
    s32 unk2C;
    u8 pad30[0x2C];
    struct func_80376218_Obj *unk5C;
    u8 pad60[0x14];
    s32 unk74;
    f32 unk78;
    f32 unk7C;
    f32 unk80;
    s16 unk84;
    s16 unk86;
    s16 unk88;
};

struct func_80376218_Ptrs {
    u16 *unk0;
    s32 *unk4;
};

extern s32 func_8000522C(u16, s32);
extern void func_8012636C(void *, s32);
extern struct func_80376218_Ptrs *D_8017201C;

void func_80376218(struct func_80376218_Struct *arg0, s32 arg1) {
    struct func_80376218_Obj *sp24;
    struct func_80376218_Mid *temp_v1;

    sp24 = arg0->unk5C;
    func_80010550(arg1, sp24);
    func_8012636C(arg0, 0);
    sp24->unk78 = 1;
    arg0->unk2C = arg0->unk2C | 0xC00;
    arg0->unk74 = func_8000522C(*D_8017201C->unk0, *D_8017201C->unk4);
    temp_v1 = arg0->unk24;
    arg0->unk78 = temp_v1->unk2C->unk4;
    arg0->unk7C = temp_v1->unk2C->unk8;
    arg0->unk80 = temp_v1->unk2C->unkC;
    arg0->unk84 = 0;
    arg0->unk86 = temp_v1->unk2C->unk12;
    arg0->unk88 = 0;
    func_800058DC(arg0, &func_803762E0);
}

extern s32 func_803757E0(void *, s32, s32, s32);
struct func_8037644C_Sub {
    u8 pad[0x10];
    u32 unk10;
};
struct func_8037644C_Obj {
    u8 pad[0x78];
    s16 unk78;
};
struct func_8037644C_Struct {
    u8 pad0[0x38];
    struct func_8037644C_Sub *unk38;
    u8 pad3C[0x20];
    struct func_8037644C_Obj *unk5C;
};
typedef struct func_80377140_Struct {
    u8 pad[6];
    u16 unk6;
    u16 unk8;
} func_80377140_Struct;
extern func_80377140_Struct D_801BBBF0;

struct func_803762E0_S { u8 pad[0x78]; s16 unk78; };
struct func_803762E0_F { u8 pad0[4]; f32 unk4; u8 pad8[4]; f32 unkC; };
struct func_803762E0_M { u8 pad[0x2C]; struct func_803762E0_F *unk2C; };
struct func_803762E0_O { u8 pad[0x24]; struct func_803762E0_M *unk24; u8 pad28[0x10]; struct func_80376160_Inner *unk38; u8 pad3C[0x20]; struct func_803762E0_S *unk5C; };
struct func_803762E0_G { u8 pad0[0xE0]; struct func_803762E0_M *unkE0; };
struct func_8037644C_Struct;
void func_8037644C(struct func_8037644C_Struct *arg0, s32 arg1);
extern s32 func_801C3B3C();
extern s32 func_8012A630(void *, f32);
extern s32 func_80375A04(void *);

void func_803762E0(struct func_803762E0_O *arg0, s32 arg1) {
    struct func_803762E0_S *sp24;
    f32 one;
    f32 f;

    sp24 = arg0->unk5C;
    func_803757E0(arg0, arg1, 4, (arg0->unk38->unk10 >> 8) & 0xFF);
    if ((arg0->unk38->unk10 >> 24) != 3) {
        if ((arg0->unk38->unk10 >> 16) & 0xFF) {
            if (func_801C3B3C() == 0) {
                if (func_8012A630(arg0, (f32)((arg0->unk38->unk10 >> 16) & 0xFF)) != 0) goto blk;
            }
        }
        if (((arg0->unk38->unk10 >> 16) & 0xFF) == 0) {
            if (func_80375A04(arg0) != 0) {
blk:
                one = 1.0f;
                *(s16 *)((u8 *)&D_801BBBF0 + 0x18E) = 1;
                *(s16 *)((u8 *)&D_801BBBF0 + 0x190) = 4;
                *(s16 *)((u8 *)&D_801BBBF0 + 0x192) = 6;
                *(f32 *)((u8 *)&D_801BBBF0 + 0xF14) = arg0->unk24->unk2C->unk4;
                *(f32 *)((u8 *)&D_801BBBF0 + 0xF18) = arg0->unk24->unk2C->unkC;
                *(f32 *)((u8 *)&D_801BBBF0 + 0x198) = ((struct func_803762E0_G *)&D_801BBBF0)->unkE0->unk2C->unk4;
                *(f32 *)((u8 *)&D_801BBBF0 + 0x1A0) = ((struct func_803762E0_G *)&D_801BBBF0)->unkE0->unk2C->unkC;
                *(s16 *)((u8 *)&D_801BBBF0 + 0xF00) = 0x1100;
                *(f32 *)((u8 *)&D_801BBBF0 + 0xF04) = one;
                *(f32 *)((u8 *)&D_801BBBF0 + 0xF08) = one;
                sp24->unk78 = 1;
                func_800058DC(arg0, func_8037644C);
            }
        }
    }
}


extern s32 func_8012A94C(void *, s32);
extern void func_803764BC();




void func_8037644C(struct func_8037644C_Struct *arg0, s32 arg1) {
    struct func_8037644C_Obj *sp1C;

    sp1C = arg0->unk5C;
    if (func_803757E0(arg0, arg1, 1, (arg0->unk38->unk10 >> 8) & 0xFF) == 0 && func_8012A94C(arg0, 0x80) == 0) {
        sp1C->unk78 = 1;
        func_800058DC(arg0, (void *) func_803764BC);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file056/803757E0/func_803764BC.s")


struct func_803768AC_Sub {
    u8 pad0[0x10];
    u32 unk10;
};
struct func_803768AC_Struct {
    u8 pad0[0x24];
    struct func_803768AC_S24 *unk24;
    u8 pad28[0x10];
    struct func_803768AC_Sub *unk38;
    u8 pad3C[0x20];
    u8 *unk5C;
    u8 pad60[0x32];
    s16 unk92;
};
struct func_803768AC_S24 {
    u8 pad0[0x2C];
    f32 *unk2C;
};
extern s32 func_800178E8();
extern void func_801FA2E0();
extern void func_80375F98(void *, s32);
extern void func_80379498(s32, s32, f32, s32, f32, f32);
extern u8 D_80388940[];
extern u8 D_80389EE1;
extern u8 func_80376ADC[];
extern void func_803769FC();
extern void *func_80005670(s32, void *);

void func_803768AC(struct func_803768AC_Struct *arg0, s32 arg1) {
    u8 *sp2C;
    f32 *v;

    sp2C = arg0->unk5C;
    func_80010550(arg1, sp2C, arg1);
    if (func_800178E8() != 0) {
        *(s16 *)(sp2C + 0x78) = 1;
        if ((arg0->unk92 == 0x5A) && ((arg0->unk38->unk10 >> 0x18) != 2)) {
            v = arg0->unk24->unk2C;
            func_80379498(0x27, ((s32 *)v)[1], (f32)((f64)v[2] + 14.0), ((s32 *)v)[3], 225.0f, 80.0f);
            func_80005670((s32)arg0, D_80388940);
        }
        if (arg0->unk92--) {
        } else {
            if ((arg0->unk38->unk10 >> 0x18) == 2) {
                func_801FA2E0();
                func_800058DC(arg0, func_80376ADC);
                return;
            }
            if (D_80389EE1 != 0) {
                func_80375F98(arg0, 0);
            }
            func_800058DC(arg0, (void *)func_803769FC);
        }
    }
}


struct func_803769FC_Sub {
    u8 pad0[0xC];
    s16 unkC;
    u8 pad2[2];
    u32 unk10;
};

struct func_803769FC_Obj2 {
    u8 pad0[0x78];
    s16 unk78;
};

struct func_803769FC_Obj {
    u8 pad0[0x38];
    struct func_803769FC_Sub *unk38;
    u8 pad3C[0x20];
    struct func_803769FC_Obj2 *unk5C;
};

extern s32 func_8012A774(void *, s16, s32);
extern s16 D_801BBD84;
extern void func_80376A80();

void func_803769FC(struct func_803769FC_Obj *arg0, s32 arg1) {
    struct func_803769FC_Obj2 *sp1C;

    sp1C = arg0->unk5C;
    if (func_803757E0(arg0, arg1, 1, (arg0->unk38->unk10 >> 8) & 0xFF) == 0) {
        if (func_8012A774(arg0, arg0->unk38->unkC, 0x80) != 0) {
            sp1C->unk78 = 1;
            D_801BBD84 = 2;
            func_800058DC(arg0, &func_80376A80);
        }
    }
}


struct func_80376A80_Inner {
    u8 pad0[0x10];
    s32 unk10;
};

struct func_80376A80_Sub {
    u8 pad0[0x78];
    s16 unk78;
};

struct func_80376A80_Struct {
    u8 pad0[0x38];
    struct func_80376A80_Inner *unk38;
    u8 pad3C[0x20];
    struct func_80376A80_Sub *unk5C;
};


void func_80376A80(struct func_80376A80_Struct *arg0, s32 arg1) {
    struct func_80376A80_Sub *sp1C;

    sp1C = arg0->unk5C;
    if (func_803757E0(arg0, arg1, 0, ((u32) arg0->unk38->unk10 >> 8) & 0xFF) == 0) {
        sp1C->unk78 = 1;
        func_800058DC(arg0, &func_803762E0);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file056/803757E0/func_80376ADC.s")


extern s32 func_80149330(u8);
extern u8 D_80389EE0;

void func_80376B44(s32 arg0, s32 arg1) {
    if (func_80149330(D_80389EE0) != 0) {
        func_80005700(arg0);
    }
}

struct func_80376C24_Struct {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad30[0x2C];
    s32 unk5C;
};
extern u16 D_801BBBF8;
void func_80376C24(struct func_80376C24_Struct *arg0, s32 arg1);
typedef struct func_8037769C_Glob {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_8037769C_Glob;
extern void func_80011140(s32, void *, func_8037769C_Glob, s32);
extern struct func_8037769C_Glob D_80216B90;
extern void func_8014C138(u16);

struct func_80376B80_Obj {
    u8 pad0[0x1C];
    s32 unk1C;
};
struct func_80376B80_Struct {
    u8 pad0[0x5C];
    struct func_80376B80_Obj *unk5C;
};
extern s32 func_80126A0C(void *, s32, s32);

void func_80376B80(struct func_80376B80_Struct *arg0, s32 arg1) {
    struct func_80376B80_Obj *temp_a1;

    temp_a1 = arg0->unk5C;
    func_80011140(arg1, temp_a1, D_80216B90, 0xA);
    if ((temp_a1->unk1C == 0x01680041) && (func_80126A0C(arg0, 0x1AB, 0) != 0)) {
        func_8014C138(D_801BBBF8);
        func_800058DC(arg0, (void *)func_80376C24);
    }
}



extern void func_80011198(s32, s32);
extern void func_80011258(s32, s32);
extern s32 func_8014C0A8(u16);
extern void func_80376CA8();

void func_80376C24(struct func_80376C24_Struct *arg0, s32 arg1) {
    s32 temp_a1;

    temp_a1 = arg0->unk5C;
    func_80010550(arg1, temp_a1);
    if (func_8014C0A8(D_801BBBF8) == 0) {
        arg0->unk2C &= ~0x80;
        func_80011258(arg1, temp_a1 + 0x22);
        func_80011198(arg1, temp_a1);
        func_800058DC(arg0, func_80376CA8);
    }
}

extern void func_8014B4A0(u16, f32 *);
extern func_8037769C_Glob D_80388778;

extern void func_801C4908(void *, s32, s32, s32);
extern s32 func_8012AE54(void *, s32, s32, f32);
extern void func_80376DC0();

struct func_80376CA8_Obj {
    u8 pad0[0x1C];
    s32 unk1C;
};
struct func_80376CA8_Struct {
    u8 pad0[0x5C];
    struct func_80376CA8_Obj *unk5C;
};

void func_80376CA8(struct func_80376CA8_Struct *arg0, s32 arg1) {
    u8 pad[0x10];
    f32 sp2C[3];
    struct func_80376CA8_Obj *temp_s0;

    temp_s0 = arg0->unk5C;
    func_8014B4A0(D_801BBBF8, sp2C);
    func_801C4908(arg0, *(s32 *)&sp2C[0], *(s32 *)&sp2C[2], 0x80);
    if (func_8012AE54(arg0, *(s32 *)&sp2C[0], *(s32 *)&sp2C[2], 3.0f) == 0) {
        func_80011198(arg1, (s32)temp_s0);
        func_80011140(arg1, temp_s0, D_80216B90, 5);
        func_800058DC(arg0, &func_80376DC0);
    }
    if (temp_s0->unk1C == 0x0168003E) {
        func_80010550(arg1, temp_s0);
        return;
    }
    func_80011140(arg1, temp_s0, D_80388778, 0xA);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file056/803757E0/func_80376DC0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/803757E0/func_80376F84.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/803757E0/func_803770A8.s")



extern u16 D_803787A4[];
extern u8 D_803887E4[];
extern void func_803771A4();
extern void func_8013EA94();

void func_80377140(s32 arg0, s32 arg1) {
    if (D_803887E4[0] == 0) {
        func_8013EA94();
        D_801BBBF0.unk6 = D_803787A4[D_801BBBF0.unk8];
        func_800058DC((void *) arg0, (void *) func_803771A4);
    }
}


extern s32 func_8013EB2C(void);
extern void func_80142570(void);
extern void func_80377478();

void func_803771A4(s32 arg0, s32 arg1) {
    if (func_8013EB2C() != 0) {
        func_80142570();
        func_800058DC(arg0, func_80377478);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file056/803757E0/func_803771E8.s")



extern u8 D_80389EF2;
extern void func_80377644();

void func_8037741C(s32 arg0, s32 arg1) {
    s32 cond;

    cond = (s32) D_80389EF2 >= 0xB;
    D_80389EF2 += 1;
    if (cond) {
        func_8014C138(D_801BBBF8);
        func_800058DC((void *) arg0, (void *) func_80377644);
    }
}

extern u8 D_803891E8[];
extern f64 D_80389388;
extern f64 D_80389390;
extern void func_803775C0();
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern void func_8011AAF4(void *, s32, s32, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);

void func_80377478(s32 arg0, s32 arg1) {
    struct { u8 pad2[8]; f32 sp60; f32 sp64; f32 v[3]; s16 h; s16 pad; } L;
    func_8014B4A0(D_801BBBF8, L.v);
    L.sp64 = L.v[0] + func_8001EAD0(L.h) * D_80389388;
    L.sp60 = L.v[1] + 25.0;
    func_8011AAF4(D_803891E8, 0x212, arg0, 0, 1, 10.0f, L.sp64, L.sp60,
        L.v[2] + func_8001EB64(L.h) * D_80389390, 10.0f, L.v[0], L.v[1] + 15.0, L.v[2], 0.0f, 35.0f, -1, -1);
    func_800058DC((void *)arg0, (void *)func_803775C0);
}


typedef struct func_803775C0_Struct {
    u8 pad0[0x18];
    f32 unk10;
    f32 unk14;
    f32 unk18;
    s16 unk1C;
} func_803775C0_Struct;


void func_803775C0(s32 arg0, s32 arg1) {
    func_803775C0_Struct sp30;

    func_8014B4A0(D_801BBBF0.unk8, (f32 *)&sp30.unk10);
    *(f32 *)(*(u8 **)(*(u8 **)((u8 *)&D_801BBBF0 + 0xE0) + 0x2C) + 0x4) = sp30.unk10;
    *(f32 *)(*(u8 **)(*(u8 **)((u8 *)&D_801BBBF0 + 0xE0) + 0x2C) + 0xC) = sp30.unk18;
    *(s16 *)(*(u8 **)(*(u8 **)((u8 *)&D_801BBBF0 + 0xE0) + 0x2C) + 0x12) = sp30.unk1C;
    func_8014C138(D_801BBBF0.unk8);
    func_800058DC(arg0, (void *)func_80377644);
}


struct func_80377644_Struct {
    u8 pad[0x2C];
    s32 unk2C;
};

extern void func_8037769C();

void func_80377644(struct func_80377644_Struct *arg0, s32 arg1) {
    volatile void *home;

    home = &arg1;
    if (func_8014C0A8(D_801BBBF8) == 0) {
        arg0->unk2C = arg0->unk2C & ~0x80;
        func_800058DC(arg0, func_8037769C);
    }
}



typedef struct func_8037769C_Obj {
    s32 unk0;
    u16 unk4;
    u16 unk6;
    f32 unk8;
} func_8037769C_Obj;

struct func_8037769C_Struct {
    u8 pad0[0x5C];
    u8 *unk5C;
};

extern void func_8013A28C(s32, func_8037769C_Obj);
extern void func_8037775C();

void func_8037769C(struct func_8037769C_Struct *arg0, s32 arg1)
{
  u8 *temp_a1;
  void (*new_var)(void);
  u8 *new_var2;
  func_8037769C_Obj *temp_v0;
  temp_a1 = arg0->unk5C;
  new_var2 = temp_a1 + 0x1C;
  func_80011140(arg1, temp_a1, D_80388778, 0xA);
  temp_v0 = (func_8037769C_Obj *) new_var2;
  if (temp_v0->unk0 == 0x0168003E)
  {
    temp_v0->unk0 = 0x0168003E;
    temp_v0->unk4 = 0;
    new_var = func_8037775C;
    temp_v0->unk6 = 0;
    temp_v0->unk8 = 1.0f;
    func_8013A28C(arg1, *temp_v0);
    func_800058DC(arg0, (void *) new_var);
  }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file056/803757E0/func_8037775C.s")

struct func_8037797C_Struct { u8 pad[0x79]; u8 unk79; u8 unk7A; u8 unk7B; };
struct func_8037797C_Sub { u8 pad0[4]; f32 unk4; f32 unk8; f32 unkC; u8 pad10[2]; s16 unk12; };
struct func_8037797C_Mid { u8 pad[0x2C]; struct func_8037797C_Sub *unk2C; };
struct func_8037797C_Ret { u8 pad[0x98]; u8 unk98; };
extern struct func_8037797C_Mid *D_801BBCD0;
extern f64 D_803893A8;
extern struct func_8037797C_Ret *D_80377BA0(s32 arg0, u8 arg1, f32 arg2, f32 arg3, f32 arg4, u8 arg5, u8 arg6, u8 arg7, u8 arg8, u8 arg9, u8 arg10, u8 arg11, u8 arg12, u8 arg13, u8 arg14, u8 arg15, u8 arg16, u8 arg17, u8 arg18, u8 arg19, u8 arg20, u8 arg21, u16 arg22);
extern void func_80020718(s32);
void func_80377AF0(s32 arg0, s32 arg1);
void func_8037797C(struct func_8037797C_Struct *arg0, s32 arg1) {
    struct func_8037797C_Sub *t;
    f32 sp74;
    u8 pad[0x14];
    f32 sp70;
    func_8001F74C(arg0);
    arg0->unk79 = 0;
    arg0->unk7A = 0;
    arg0->unk7B = 0;
    sp70 = func_8001EAD0(D_801BBCD0->unk2C->unk12);
    sp74 = func_8001EB64(D_801BBCD0->unk2C->unk12);
    D_80377BA0((s32)arg0, 1, (f32)((f64)sp70 * D_803893A8 + (f64)D_801BBCD0->unk2C->unk4), (f32)((f64)D_801BBCD0->unk2C->unk8 + 1.0), (f32)((f64)sp74 * D_803893A8 + (f64)D_801BBCD0->unk2C->unkC),0xFF, 0xFF, 0xFF, 0, 0xFF, 0xFF, 0xFF, 0xFF, 0, 0xFF, 0, 0xFF, 0, 0xFF, 0, 0xFF, 1, 0x28)->unk98 = 0;
    func_80020718(0x10D);
    func_800058DC(arg0, (void *)func_80377AF0);
}


extern void func_80377B18();

void func_80377AF0(s32 arg0, s32 arg1) {
    func_800058DC(arg0, func_80377B18);
}


void func_80377B18(void *arg0, s32 arg1) {
    if (((u16 *) arg0)[0x2C / 2] > 0) {
        func_80005700((s32) arg0);
    }
}

struct func_80377B48_Struct { u8 pad0[8]; u8 unk8; u8 padC[3]; };
extern struct func_80377B48_Struct D_803887E8[];

s32 *func_80377B48(u8 arg0) {
    struct func_80377B48_Struct *p;
    s32 b = arg0;
    for (p = D_803887E8; p->unk8 != 0xFF; p++) {
        if (b == p->unk8) return (s32 *)p;
    }
    return NULL;
}


struct func_80377BA0_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    u8 pad10[0x1C];
    s32 unk2C;
    s32 unk30;
    u8 pad34[0x38];
    f32 unk6C;
    f32 unk70;
    f32 unk74;
    u8 unk78;
    u8 unk79;
    u8 unk7A;
    u8 unk7B;
    u8 unk7C;
    u8 unk7D;
    u8 unk7E;
    u8 unk7F;
    u8 unk80;
    u8 unk81;
    u8 unk82;
    u8 unk83;
    u8 unk84;
    u8 unk85;
    u8 unk86;
    u8 unk87;
    s32 unk88;
    s32 unk8C;
    u16 unk90;
    u16 unk92;
    u8 unk94;
    u8 unk95;
};

extern struct func_80377BA0_Struct D_80388800;

void func_80377BA0(s32 arg0, u8 arg1, f32 arg2, f32 arg3, f32 arg4, u8 arg5, u8 arg6, u8 arg7, u8 arg8, u8 arg9, u8 arg10, u8 arg11, u8 arg12, u8 arg13, u8 arg14, u8 arg15, u8 arg16, u8 arg17, u8 arg18, u8 arg19, u8 arg20, u8 arg21, u16 arg22)
{
  struct func_80377BA0_Struct *temp_v0_2;
  s32 *temp_v0;
  temp_v0 = func_80377B48(arg1);
  D_80388800.unkC = *temp_v0;
  temp_v0_2 = func_80005670(arg0, &D_80388800);
  temp_v0_2->unk30 = 0;
  temp_v0_2->unk2C = 0;
  if (((!temp_v0_2) && (!temp_v0_2)) != 0)
  {
  }
  temp_v0_2->unk6C = arg2;
  temp_v0_2->unk70 = arg3;
  temp_v0_2->unk74 = arg4;
  temp_v0_2->unk78 = arg5;
  temp_v0_2->unk79 = arg6;
  temp_v0_2->unk7A = arg7;
  temp_v0_2->unk7B = arg8;
  temp_v0_2->unk7C = arg9;
  temp_v0_2->unk7D = arg10;
  temp_v0_2->unk7E = arg11;
  temp_v0_2->unk7F = arg12;
  temp_v0_2->unk80 = arg13;
 temp_v0_2->unk81 = arg14; temp_v0_2->unk82 = arg15;
  temp_v0_2->unk83 = arg16;
  temp_v0_2->unk84 = arg17;
  temp_v0_2->unk85 = arg18;
  temp_v0_2->unk86 = arg19;
  temp_v0_2->unk87 = arg20;
  temp_v0_2->unk88 = temp_v0[1];
  temp_v0_2->unk8C = temp_v0[0];
  temp_v0_2->unk90 = arg22;
  temp_v0_2->unk92 = 0;
  temp_v0_2->unk94 = arg21;
  temp_v0_2->unk95 = arg1;
}



void func_80377CBC(s32 arg0, s32 arg1, f32 arg2, f32 arg3, f32 arg4, u8 arg5, u8 arg6, u8 arg7, u8 arg8, u8 arg9, u8 arg10, u8 arg11, u8 arg12, u8 arg13, u16 arg14) {
    func_80377BA0(arg0, arg1 & 0xFF, arg2, arg3, arg4, (s32) arg5, (s32) arg6, (s32) arg7, (s32) arg8, (s32) arg9, (s32) arg10, (s32) arg11, (s32) arg12, 0, 0, 0, 0, 0, 0, 0, 0, (s32) arg13, (s32) arg14);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file056/803757E0/func_80377D68.s")


struct func_80377FC4_Struct {
    u8 pad[4];
    s32 *unk4;
};

extern struct func_80377FC4_Struct *D_80171CEC[];
extern void func_80377D68(s32, u16, s32);

void func_80377FC4(s32 arg0, u16 arg1, volatile u16 arg2) {
    s32 *temp;

    temp = D_80171CEC[arg1]->unk4;
    func_80377D68(arg0, arg1, temp[arg2]);
}



typedef struct func_80378010_Struct {
    u8 pad[0x8C];
    s32 unk8C;
} func_80378010_Struct;

void func_80378010(func_80378010_Struct *arg0, s32 arg1) {
    func_800058DC(arg0, arg0->unk8C);
}


struct func_80378034_Sub {
    u8 pad[0x2C];
    u16 unk2C;
};
struct func_80378034_Struct {
    u8 pad[0xC];
    struct func_80378034_Sub *unkC;
};

void func_80378034(struct func_80378034_Struct *arg0, s32 arg1) {
    struct func_80378034_Sub *temp_v0;

    temp_v0 = arg0->unkC;
    temp_v0->unk2C = temp_v0->unk2C + 1;
    func_80005700((s32) arg0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file056/803757E0/func_80378064.s")


extern void func_8012D7A8(void);
extern void func_801CD878(void *, void **);
extern void func_801CD994(u8, u8, u8, u8);
extern u16 D_8038A8F8;

struct func_80378190_Glob {
    u8 pad0[0xDC];
    struct func_80378190_A *unkDC;
};
struct func_80378190_A {
    u8 pad0[0x24];
    struct func_80378190_B *unk24;
};
struct func_80378190_B {
    u8 pad0[0x2C];
    u8 *unk2C;
};
struct func_80378190_Hdr {
    u8 pad0[0x48];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
    u8 unk4F;
};
struct func_80378190_Msg {
    u8 pad0[0x30];
    struct func_80378190_Hdr *unk30;
};
struct func_80378190_Inner {
    u8 pad0[0x2C];
    u16 unk2C;
};
struct func_80378190_Ctx {
    u8 pad0[0xC];
    struct func_80378190_Inner *unkC;
    u8 pad10[0x68];
    u8 unk78[4];
    u8 unk7C[4];
    u8 unk80[4];
    u8 unk84[4];
    u8 pad88[8];
    u16 unk90;
    u16 unk92;
};

void func_80378190(struct func_80378190_Ctx *arg0, void **arg1) {
    struct func_80378190_Hdr *temp_v1;
    u8 i;
    u8 tmp[4];

    temp_v1 = ((struct func_80378190_Msg *) *arg1)->unk30;
    func_8012D7A8();
    func_801CD878(arg0, arg1);
    ((struct func_80378190_Glob *) &D_801BBBF0)->unkDC->unk24->unk2C[0x4C] = ((struct func_80378190_Msg *) *arg1)->unk30->unk4C;
    ((struct func_80378190_Glob *) &D_801BBBF0)->unkDC->unk24->unk2C[0x4D] = ((struct func_80378190_Msg *) *arg1)->unk30->unk4D;
    ((struct func_80378190_Glob *) &D_801BBBF0)->unkDC->unk24->unk2C[0x4E] = ((struct func_80378190_Msg *) *arg1)->unk30->unk4E;
    ((struct func_80378190_Glob *) &D_801BBBF0)->unkDC->unk24->unk2C[0x4F] = ((struct func_80378190_Msg *) *arg1)->unk30->unk4F;
    func_801CD994(temp_v1->unk48, temp_v1->unk49, temp_v1->unk4A, temp_v1->unk4B);
    if ((arg0->unk92++ > arg0->unk90 - 1) || (arg0->unkC->unk2C & 0x8000)) {
        for (i = 0; i < 4; i++) {
            tmp[i] = arg0->unk78[i];
            arg0->unk78[i] = arg0->unk7C[i];
            arg0->unk7C[i] = tmp[i];
            tmp[i] = arg0->unk80[i];
            arg0->unk80[i] = arg0->unk84[i];
            arg0->unk84[i] = tmp[i];
            arg0->unk92 = 0;
        }
    }
    if (D_8038A8F8++ >= 0x50) {
        D_803887E4[0] = 0;
    }
    if (D_803887E4[0] == 0) {
        func_800058DC(arg0, (void *) func_80378034);
    }
}


void func_80378330(void) {
}

