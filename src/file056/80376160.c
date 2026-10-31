#include "common.h"

extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern f64 D_80389370;
extern f64 D_80389378;
extern f64 D_80389380;
extern f64 D_80389388;
extern f64 D_80389390;
extern f64 D_803893A8;
extern s16 D_80089354;
extern s16 D_801BBD84;
extern s32 *func_80377B48(u8);
extern s32 D_8014B4A0(u16, f32 *);
extern s32 func_8000522C(u16, s32);
extern s32 func_80005700(s32);
extern s32 func_80010550();
extern s32 func_800178E8();
extern s32 func_80126A0C(void *, s32, s32);
extern s32 func_8012A630(void *, f32);
extern s32 func_8012A774(void *, s16, s32);
extern s32 func_8012A94C(void *, s32);
extern s32 func_8012AE54(void *, s32, s32, f32);
extern s32 func_8013EB2C(void);
extern s32 func_80149330(u8);
extern s32 func_8014C0A8(u16);
extern s32 func_801C3B3C();
extern s32 func_803757E0(void *, s32, s32, s32);
extern s32 func_80375A04(void *);
extern u16 D_801BBBF8;
extern u16 D_803787A4[];
extern u16 D_8038A8F8;
extern u8 D_803887E4[];
extern u8 D_80388940[];
extern u8 D_8038910C[];
extern u8 D_8038916C[];
extern u8 D_803891E8[];
extern u8 D_80389EE0;
extern u8 D_80389EE1;
extern u8 D_80389EF2;
#define func_80376ADC func_80376ADC__decl
extern u8 func_80376ADC[];
extern void *func_80005670(s32, void *);
extern void func_800058DC(void *, void *);
extern void func_80011198(s32, s32);
extern void func_80011258(s32, s32);
extern void func_8001E978(s32, s32, s32, s32, s32, s32, s32, s32);
extern void func_80020718(s32);
extern void func_8011AAF4(void *, s32, s32, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern void func_8012636C(void *, s32);
extern void func_80126968(void);
extern void func_801269C0();
extern void func_8012D7A8(void);
extern void func_8012E5B0(void);
extern void func_8012E6BC(void);
extern void func_8013B570(void *, u16, s32, s32, void *);
extern void func_8013EA94();
extern void func_80142570(void);
extern void func_8014B4A0(u16, f32 *);
extern void func_8014C138(u16);
extern void func_8014C194(u16, void *);
extern void func_801C4908(void *, s32, s32, s32);
extern void func_801C4A5C(s32, s32);
extern void func_801CD878(void *, void **);
extern void func_801CD994(u8, u8, u8, u8);
extern void func_801FA2E0();
extern void func_80375F98(void *, s32);
extern void func_80376218();
extern void func_803762E0();
extern void func_803764BC();
extern void func_803769FC();
extern void func_80376A80();
extern void func_80376CA8();
extern void func_80376DC0();
extern void func_80376F84();
extern void func_80377140(s32 arg0, s32 arg1);
extern void func_803771A4();
extern void func_8037741C(s32 arg0, s32 arg1);
extern void func_80377478();
extern void func_803775C0();
extern void func_80377644();
extern void func_8037769C();
extern void func_8037775C();
extern void func_80377AF0(s32 arg0, s32 arg1);
extern void func_80377B18();
#define func_80377D68 func_80377D68__decl
extern void func_80377D68(s32, u16, s32);
extern void func_80378034();
extern void func_80379498(s32, s32, f32, s32, f32, f32);

#define func_80376218 func_80376218__func_80376160

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
#undef func_80376218

#define func_803762E0 func_803762E0__func_80376218
extern void func_803762E0();

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
#undef func_803762E0

#define func_8037644C func_8037644C__func_803762E0
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
#undef func_8037644C






void func_8037644C(struct func_8037644C_Struct *arg0, s32 arg1) {
    struct func_8037644C_Obj *sp1C;

    sp1C = arg0->unk5C;
    if (func_803757E0(arg0, arg1, 1, (arg0->unk38->unk10 >> 8) & 0xFF) == 0 && func_8012A94C(arg0, 0x80) == 0) {
        sp1C->unk78 = 1;
        func_800058DC(arg0, (void *) func_803764BC);
    }
}

/* hh-block asm/nonmatchings/file056/80376160/_mrg_keep_text_func_803764BC.s {"functions":["func_803764BC"],"rodata":[]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file056/80376160/_mrg_keep_text_func_803764BC.s")

#define func_803769FC func_803769FC__func_803768AC

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
extern void func_803769FC();

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
#undef func_803769FC

#define func_80376A80 func_80376A80__func_803769FC

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
#undef func_80376A80

#define func_803762E0 func_803762E0__func_80376A80

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

extern void func_803762E0();

void func_80376A80(struct func_80376A80_Struct *arg0, s32 arg1) {
    struct func_80376A80_Sub *sp1C;

    sp1C = arg0->unk5C;
    if (func_803757E0(arg0, arg1, 0, ((u32) arg0->unk38->unk10 >> 8) & 0xFF) == 0) {
        sp1C->unk78 = 1;
        func_800058DC(arg0, &func_803762E0);
    }
}
#undef func_803762E0

#undef func_80376ADC

struct func_80376ADC_Sub {
    u8 pad[0x18];
    s32 unk18;
};
struct func_80376ADC_Struct {
    u8 pad[0x38];
    struct func_80376ADC_Sub *unk38;
};

extern s32 func_801270C0();
extern void func_801268CC(s32, void *);
extern void func_80020744(s32);

void func_80376ADC(struct func_80376ADC_Struct *arg0, s32 arg1)
{
  if (func_801270C0() != 0)
  {
    *((s16 *) (((u8 *) (&D_801BBBF0)) + 0x194)) = 2;
    *((s16 *) (((u8 *) (&D_801BBBF0)) + 0x3A4)) = ((((((((((arg0->unk38->unk18 & 0xFFFF) & 0xFFFF) & 0xFFFF) & 0xFFFF) & 0xFFFF) & 0xFFFF) & 0xFFFF) & 0xFFFF) & 0xFFFF) & 0xFFFF) & 0xFFFF;
    func_801268CC((((u32) arg0->unk38->unk18) >> 0x10) & 0xFFFF, arg0);
    func_80020744(7);
  }
}
#define func_80376ADC func_80376ADC__decl



void func_80376B44(s32 arg0, s32 arg1) {
    if (func_80149330(D_80389EE0) != 0) {
        func_80005700(arg0);
    }
}

#define func_80376C24 func_80376C24__func_80376B80
struct func_80376C24_Struct {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad30[0x2C];
    s32 unk5C;
};
void func_80376C24(struct func_80376C24_Struct *arg0, s32 arg1);
typedef struct func_8037769C_Glob {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_8037769C_Glob;
extern void func_80011140(s32, void *, func_8037769C_Glob, s32);
extern struct func_8037769C_Glob D_80216B90;

struct func_80376B80_Obj {
    u8 pad0[0x1C];
    s32 unk1C;
};
struct func_80376B80_Struct {
    u8 pad0[0x5C];
    struct func_80376B80_Obj *unk5C;
};

void func_80376B80(struct func_80376B80_Struct *arg0, s32 arg1) {
    struct func_80376B80_Obj *temp_a1;

    temp_a1 = arg0->unk5C;
    func_80011140(arg1, temp_a1, D_80216B90, 0xA);
    if ((temp_a1->unk1C == 0x01680041) && (func_80126A0C(arg0, 0x1AB, 0) != 0)) {
        func_8014C138(D_801BBBF8);
        func_800058DC(arg0, (void *)func_80376C24);
    }
}
#undef func_80376C24

#define func_80376CA8 func_80376CA8__func_80376C24


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
#undef func_80376CA8

#define func_80376DC0 func_80376DC0__func_80376CA8
extern func_8037769C_Glob D_80388778;

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
#undef func_80376DC0



struct func_80376DC0_Struct {
    u8 pad0[0x5C];
    struct func_80376B80_Obj *unk5C;
};

void func_80376DC0(struct func_80376DC0_Struct *arg0, s32 arg1) {
    struct func_80376B80_Obj *obj;
    struct { f32 f[3]; s16 h; u8 pad[0xA]; } sp6C;
    f32 sp68;
    f32 sp64;
    u8 pad[0x10];

    obj = arg0->unk5C;
    func_80011140(arg1, obj, D_80216B90, 5);
    if (obj->unk1C == 0x01680041) {
        func_8014C194(D_801BBBF8, obj);
        func_8014B4A0(D_801BBBF8, (f32 *)&sp6C);
        sp68 = sp6C.f[0] + func_8001EAD0(sp6C.h + 0xC00) * 9.5;
        sp64 = sp6C.f[1] + 17.0;
        func_8011AAF4(D_8038910C, 0x17A, (s32)arg0, 0, 1, 10.0f, sp68, sp64,
                      sp6C.f[2] + func_8001EB64(sp6C.h + 0xC00) * 9.5, 10.0f, sp6C.f[0],
                      sp6C.f[1] + D_80389370, sp6C.f[2], 0.0f, 35.0f, -1, -1);
        func_800058DC(arg0, func_80376F84);
    }
}

#undef func_80376ADC
#define D_8017DC40 D_8017DC40__func_80376F84
#define D_80388784 D_80388784__func_80376F84
#define D_80388790 D_80388790__func_80376F84
#define func_80005670 func_80005670__func_80376F84
#define func_800058DC func_800058DC__func_80376F84
#define func_80011140 func_80011140__func_80376F84
#define func_8014C0A8 func_8014C0A8__func_80376F84
#define func_803770A8 func_803770A8__func_80376F84
#define func_803770A8_Struct func_803770A8_Struct__func_80376F84
#define func_803770A8_StructInner func_803770A8_StructInner__func_80376F84
#define func_8037769C_Glob func_8037769C_Glob__func_80376F84
#define LP2(a, b) a##b
#define LP(a, b) LP2(a, b)
#define func_80376ADC LP(fA, __LINE__)
#define LP2(a, b) a##b
#define LP(a, b) LP2(a, b)
struct func_803770A8_StructInner {
    u8 pad[0x1C];
    s32 unk1C;
};
struct func_803770A8_Struct {
    u8 pad[0x5C];
    struct func_803770A8_StructInner *unk5C;
};
typedef struct func_8037769C_Glob {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_8037769C_Glob;

typedef struct func_80376F84_Vec {
    f32 unk0;
    f32 unk4;
    f32 unk8;
    s16 unkC;
} func_80376F84_Vec;

typedef struct func_80376F84_Obj {
    u8 pad0[0x1C];
    s32 unk1C;
} func_80376F84_Obj;

typedef struct func_80376F84_Arg0 {
    u8 pad0[0x5C];
    func_80376F84_Obj *unk5C;
} func_80376F84_Arg0;

typedef struct func_80376F84_D {
    u16 unk0;
    u16 unk2;
} func_80376F84_D;

typedef struct func_80376F84_Sub2 {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
} func_80376F84_Sub2;

typedef struct func_80376F84_Sub {
    u8 pad0[0x2C];
    func_80376F84_Sub2 *unk2C;
} func_80376F84_Sub;

typedef struct func_80376F84_Glob {
    u8 pad0[0xE0];
    func_80376F84_Sub *unkE0;
} func_80376F84_Glob;

#define GL ((func_80376F84_Glob *)&D_801BBBF0)

struct func_803770A8_Struct;
void func_803770A8(struct func_803770A8_Struct *arg0, s32 arg1);
extern u8 D_80388790[];
extern func_8037769C_Glob D_80388784;
extern func_80376F84_D D_8017DC40;

void func_80376F84(func_80376F84_Arg0 *arg0, s32 arg1) {
    func_80376F84_Obj *sp34;
    s32 pad;
    func_80376F84_Vec vec;

    sp34 = arg0->unk5C;
    D_8014B4A0(D_801BBBF0.unk8, (f32 *)&vec);
    GL->unkE0->unk2C->unk4 = vec.unk0;
    GL->unkE0->unk2C->unk8 = vec.unk4;
    GL->unkE0->unk2C->unkC = vec.unk8;
    GL->unkE0->unk2C->unk12 = vec.unkC + 0x1000;
    if (sp34->unk1C != 0x01680059) {
        func_80011140(arg1, sp34, D_80388784, 0xA);
    }
    if (func_8014C0A8(D_801BBBF0.unk8) == 0) {
        D_803887E4[0] = 1;
        D_8017DC40.unk2 = D_8017DC40.unk0;
        func_80005670((s32)arg0, D_80388790);
        func_800058DC(arg0, (void *)func_803770A8);
    }
}
#undef LP2
#undef LP
#undef func_80376ADC
#undef GL
#undef D_8017DC40
#undef D_80388784
#undef D_80388790
#undef func_80005670
#undef func_800058DC
#undef func_80011140
#undef func_8014C0A8
#undef func_803770A8
#undef func_803770A8_Struct
#undef func_803770A8_StructInner
#undef func_8037769C_Glob
#define func_80376ADC func_80376ADC__decl

#define func_80377140 func_80377140__func_803770A8

struct func_803770A8_StructInner {
    u8 pad[0x1C];
    s32 unk1C;
};
struct func_803770A8_Struct {
    u8 pad[0x5C];
    struct func_803770A8_StructInner *unk5C;
};

void func_80377140(s32 arg0, s32 arg1);
extern s32 D_80011140(s32, void *, func_8037769C_Glob, s32);

void func_803770A8(struct func_803770A8_Struct *arg0, s32 arg1) {
    struct func_803770A8_StructInner *temp;

    temp = arg0->unk5C;
    if (temp->unk1C != 0x01680041) {
        if (func_80010550(arg1, temp) != 0 &&
            D_80011140(arg1, temp, D_80216B90, 15) != 0) {
            func_800058DC(arg0, func_80377140);
        }
    }
}
#undef func_80377140

#define func_803771A4 func_803771A4__func_80377140


extern void func_803771A4();

void func_80377140(s32 arg0, s32 arg1) {
    if (D_803887E4[0] == 0) {
        func_8013EA94();
        D_801BBBF0.unk6 = D_803787A4[D_801BBBF0.unk8];
        func_800058DC((void *) arg0, (void *) func_803771A4);
    }
}
#undef func_803771A4

#define func_800058DC func_800058DC__func_803771A4
#define func_80377478 func_80377478__func_803771A4

extern void func_800058DC(void *obj, void *fn);
extern void func_80377478();

void func_803771A4(s32 arg0, s32 arg1) {
    if (func_8013EB2C() != 0) {
        func_80142570();
        func_800058DC(arg0, func_80377478);
    }
}
#undef func_800058DC
#undef func_80377478

#define func_8037741C func_8037741C__func_803771E8

void func_8037741C(s32 arg0, s32 arg1);

struct func_803771E8_Sp {
    f32 x;
    f32 y;
    f32 z;
    s16 a;
};
struct func_803771E8_Struct2C {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
};
struct func_803771E8_StructE0 {
    u8 pad[0x2C];
    struct func_803771E8_Struct2C *unk2C;
};
struct func_803771E8_Glob {
    u8 pad0[8];
    u16 unk8;
    u8 pad0A[0xD6];
    struct func_803771E8_StructE0 *unkE0;
    u8 pad0E4[0xE0C];
    u16 unkEF0;
};
#define G ((struct func_803771E8_Glob *)&D_801BBBF0)

void func_803771E8(s32 arg0, s32 arg1) {
    struct func_803771E8_Sp sp;
    f32 sp74;
    f32 sp70;
    s32 pad[4];
    s32 v;

    G->unkEF0 |= 0xD0;
    if (D_8014B4A0(G->unk8, &sp.x) != 0) {
        func_801269C0();
        sp74 = (f32)((f64)func_8001EAD0(sp.a) * D_80389378 + (f64)sp.x);
        sp70 = (f32)((f64)sp.y + 25.0);
        func_8011AAF4(D_8038916C, 0x1E0, arg0, 0, 1, 10.0f, sp74, sp70, (f32)((f64)func_8001EB64(sp.a) * D_80389380 + (f64)sp.z), 10.0f, sp.x, (f32)((f64)sp.y + 15.0), sp.z, 0.0f, 35.0f, -1, -1);
        G->unkE0->unk2C->unk4 = sp.x;
        G->unkE0->unk2C->unk8 = sp.y;
        G->unkE0->unk2C->unkC = sp.z;
        G->unkE0->unk2C->unk12 = sp.a;
        func_801C4A5C(arg0, 0);
        G->unkEF0 = 0x80;
        D_80089354 = 0;
        func_8001E978(arg0, 0, 0, 0, 0xF, 0, 2, 0);
        D_80389EF2 = 0;
        v = G->unk8;
        if (v == 0x8002) {
            func_80020718(0x103);
            v = D_801BBBF8;
        }
        if (v == 0x8014) {
            func_80020718(0x232);
        }
        func_800058DC((void *)arg0, (void *)func_8037741C);
    }
}
#undef func_8037741C

#define func_80377644 func_80377644__func_8037741C


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
#undef func_80377644

#define func_803775C0 func_803775C0__func_80377478
extern void func_803775C0();

void func_80377478(s32 arg0, s32 arg1) {
    struct { u8 pad2[8]; f32 sp60; f32 sp64; f32 v[3]; s16 h; s16 pad; } L;
    func_8014B4A0(D_801BBBF8, L.v);
    L.sp64 = L.v[0] + func_8001EAD0(L.h) * D_80389388;
    L.sp60 = L.v[1] + 25.0;
    func_8011AAF4(D_803891E8, 0x212, arg0, 0, 1, 10.0f, L.sp64, L.sp60,
        L.v[2] + func_8001EB64(L.h) * D_80389390, 10.0f, L.v[0], L.v[1] + 15.0, L.v[2], 0.0f, 35.0f, -1, -1);
    func_800058DC((void *)arg0, (void *)func_803775C0);
}
#undef func_803775C0

#define func_80377644 func_80377644__func_803775C0

typedef struct func_803775C0_Struct {
    u8 pad0[0x18];
    f32 unk10;
    f32 unk14;
    f32 unk18;
    s16 unk1C;
} func_803775C0_Struct;

extern void func_80377644();

void func_803775C0(s32 arg0, s32 arg1) {
    func_803775C0_Struct sp30;

    func_8014B4A0(D_801BBBF0.unk8, (f32 *)&sp30.unk10);
    *(f32 *)(*(u8 **)(*(u8 **)((u8 *)&D_801BBBF0 + 0xE0) + 0x2C) + 0x4) = sp30.unk10;
    *(f32 *)(*(u8 **)(*(u8 **)((u8 *)&D_801BBBF0 + 0xE0) + 0x2C) + 0xC) = sp30.unk18;
    *(s16 *)(*(u8 **)(*(u8 **)((u8 *)&D_801BBBF0 + 0xE0) + 0x2C) + 0x12) = sp30.unk1C;
    func_8014C138(D_801BBBF0.unk8);
    func_800058DC(arg0, (void *)func_80377644);
}
#undef func_80377644

#define func_8037769C func_8037769C__func_80377644

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
#undef func_8037769C



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

#define D_8014C194 D_8014C194__func_8037775C
#define D_801BBBF0 D_801BBBF0__func_8037775C
#define D_80216B90 D_80216B90__func_8037775C
#define D_80389230 D_80389230__func_8037775C
#define D_80389398 D_80389398__func_8037775C
#define D_803893A0 D_803893A0__func_8037775C
#define func_80011140 func_80011140__func_8037775C
#define func_8001F6FC func_8001F6FC__func_8037775C
#define func_8001F74C func_8001F74C__func_8037775C
#define func_8010843C func_8010843C__func_8037775C
#define func_80126E88 func_80126E88__func_8037775C
#define func_801E5010 func_801E5010__func_8037775C
#define func_80377140_Struct func_80377140_Struct__func_8037775C
#define func_8037769C_Glob func_8037769C_Glob__func_8037775C
typedef struct func_80377140_Struct {
    u8 pad[6];
    u16 unk6;
    u16 unk8;
} func_80377140_Struct;
extern func_80377140_Struct D_801BBBF0;
typedef struct func_8037769C_Glob {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_8037769C_Glob;
extern struct func_8037769C_Glob D_80216B90;
extern void func_80011140(s32, void *, func_8037769C_Glob, s32);


struct func_8037775C_StructV {
    f32 x;
    f32 y;
    f32 z;
    s16 r;
};
struct func_8037775C_Struct {
    u8 pad[0x5C];
    s32 unk5C;
};
extern void func_80126E88(s32);
extern void D_8014C194(u16);
extern s32 func_8010843C(f32, f32, f32, f32, f32, f32);
extern void func_8001F6FC(void);
extern void func_8001F74C(void *);
extern u8 D_80389230[];
extern const f64 D_80389398;
extern const f64 D_803893A0;
extern u8 func_801E5010[];

void func_8037775C(struct func_8037775C_Struct *arg0, s32 arg1)
{
  s32 sp8C;
  f32 z_temp;
  u8 pad[4];
  struct func_8037775C_StructV v;
  f32 sp70;
  f32 sp6C;
  f32 sp68;
  f32 sp64;
  f32 sp60;
  f32 sp5C;
  sp8C = arg0->unk5C;
  if (func_80010550(arg1, sp8C) != 0)
  {
    func_80126E88(0x1AB);
    D_8014C194(D_801BBBF0.unk8);
    func_8014B4A0(D_801BBBF0.unk8, &v.x);
    sp70 = (f32) ((((f64) func_8001EAD0(v.r)) * D_80389398) + ((f64) v.x));
    sp6C = (f32) (((f64) v.y) + 25.0);
    z_temp = (f32) ((((f64) func_8001EB64(v.r)) * D_803893A0) + ((f64) v.z));
    sp68 = z_temp;
    sp5C = v.z;
    sp64 = v.x;
    sp60 = (f32) (((f64) v.y) + 15.0);
    if (func_8010843C(v.x, sp60, v.z, sp70, sp6C, sp68) != 0)
    {
      sp70 = *((f32 *) (((u8 *) (&D_801BBBF0)) + 0x380));
      sp6C = *((f32 *) (((u8 *) (&D_801BBBF0)) + 0x384));
      sp68 = *((f32 *) (((u8 *) (&D_801BBBF0)) + 0x388));
    }
    func_8011AAF4(D_80389230, 0x265, (s32) arg0, 2, 1, 10.0f, sp70, sp6C, sp68, 10.0f, sp64, sp60, sp5C, 0.0f, 35.0f, -1, -1);
    *((u16 *) (((u8 *) (&D_801BBBF0)) + 0xEF0)) = (*((u16 *) (((u8 *) (&D_801BBBF0)) + 0xEF0))) & 0xFFAF;
    func_80011140(arg1, (void *) sp8C, D_80216B90, 5);
    func_8001F6FC();
    func_8001F74C(*((void **) (((u8 *) (&D_801BBBF0)) + 0xDC)));
    func_800058DC(arg0, func_801E5010);
  }
}
#undef D_8014C194
#undef D_801BBBF0
#undef D_80216B90
#undef D_80389230
#undef D_80389398
#undef D_803893A0
#undef func_80011140
#undef func_8001F6FC
#undef func_8001F74C
#undef func_8010843C
#undef func_80126E88
#undef func_801E5010
#undef func_80377140_Struct
#undef func_8037769C_Glob

#define func_80377AF0 func_80377AF0__func_8037797C
struct func_8037797C_Struct { u8 pad[0x79]; u8 unk79; u8 unk7A; u8 unk7B; };
struct func_8037797C_Sub { u8 pad0[4]; f32 unk4; f32 unk8; f32 unkC; u8 pad10[2]; s16 unk12; };
struct func_8037797C_Mid { u8 pad[0x2C]; struct func_8037797C_Sub *unk2C; };
struct func_8037797C_Ret { u8 pad[0x98]; u8 unk98; };
extern struct func_8037797C_Mid *D_801BBCD0;
extern struct func_8037797C_Ret *D_80377BA0(s32 arg0, u8 arg1, f32 arg2, f32 arg3, f32 arg4, u8 arg5, u8 arg6, u8 arg7, u8 arg8, u8 arg9, u8 arg10, u8 arg11, u8 arg12, u8 arg13, u8 arg14, u8 arg15, u8 arg16, u8 arg17, u8 arg18, u8 arg19, u8 arg20, u8 arg21, u16 arg22);
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
#undef func_80377AF0

#define func_800058DC func_800058DC__func_80377AF0
#define func_80377B18 func_80377B18__func_80377AF0

extern void func_800058DC(s32 arg0, void (*arg1)(void));
extern void func_80377B18();

void func_80377AF0(s32 arg0, s32 arg1) {
    func_800058DC(arg0, func_80377B18);
}
#undef func_800058DC
#undef func_80377B18


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

#define func_80377B48 func_80377B48__func_80377BA0

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

extern s32 *func_80377B48(u8);
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
#undef func_80377B48

#define func_80377BA0 func_80377BA0__func_80377CBC

extern void func_80377BA0(s32 arg0, u8 arg1, f32 arg2, f32 arg3, f32 arg4, u8 arg5, u8 arg6, u8 arg7, u8 arg8, u8 arg9, u8 arg10, u8 arg11, u8 arg12, u8 arg13, u8 arg14, u8 arg15, u8 arg16, u8 arg17, u8 arg18, u8 arg19, u8 arg20, u8 arg21, u16 arg22);

void func_80377CBC(s32 arg0, s32 arg1, f32 arg2, f32 arg3, f32 arg4, u8 arg5, u8 arg6, u8 arg7, u8 arg8, u8 arg9, u8 arg10, u8 arg11, u8 arg12, u8 arg13, u16 arg14) {
    func_80377BA0(arg0, arg1 & 0xFF, arg2, arg3, arg4, (s32) arg5, (s32) arg6, (s32) arg7, (s32) arg8, (s32) arg9, (s32) arg10, (s32) arg11, (s32) arg12, 0, 0, 0, 0, 0, 0, 0, 0, (s32) arg13, (s32) arg14);
}
#undef func_80377BA0

#undef func_80377D68
#undef func_80376ADC
#define D_8008DA88 D_8008DA88__func_80377D68
#define D_80171CEC D_80171CEC__func_80377D68
#define D_80388770 D_80388770__func_80377D68
#define D_80388814 D_80388814__func_80377D68
#define D_80388878 D_80388878__func_80377D68
#define D_803888D8 D_803888D8__func_80377D68
#define D_803893B0 D_803893B0__func_80377D68
#define D_80389EF8 D_80389EF8__func_80377D68
#define D_8038A6F8 D_8038A6F8__func_80377D68
#define func_80006214 func_80006214__func_80377D68
#define func_80146088 func_80146088__func_80377D68
#define func_80377FC4_Struct func_80377FC4_Struct__func_80377D68
#define LP2(a, b) a##b
#define LP(a, b) LP2(a, b)
#define func_80376ADC LP(fA, __LINE__)
struct func_80377FC4_Struct {
    u8 pad[4];
    s32 *unk4;
};
extern struct func_80377FC4_Struct *D_80171CEC[];
#define LP2(a, b) a##b
#define LP(a, b) LP2(a, b)
#undef func_80376ADC

typedef struct {
    f32 unk0;
    f32 unk4;
    f32 unk8;
    s16 unkC;
    s16 unkE;
    s16 unk10;
    u8 pad12[2];
    s32 unk14;
    u16 unk18;
    u8 pad1A[2];
    s32 unk1C;
    u16 unk20;
    u8 pad22[0xE];
    f32 unk30;
    f32 unk34;
    f32 unk38;
    u8 pad3C[4];
} func_80377D68_Struct40;

typedef struct {
    s32 unk0;
    s32 unk4;
    s16 unk8;
    s16 unkA;
    void *unkC;
} func_80377D68_Struct10;

typedef struct {
    u8 pad0[0x6C];
    f32 unk6C;
    f32 unk70;
    f32 unk74;
    u8 unk78;
    u8 unk79;
    u8 unk7A;
    u8 unk7B;
    u8 pad7C[4];
    u8 unk80;
    u8 unk81;
    u8 unk82;
    u8 unk83;
    u8 pad84[4];
    void *unk88;
    u8 pad8C[8];
    u8 unk94;
} func_80377D68_Obj;

typedef struct {
    u8 pad0[0x30];
    s32 unk30;
    u8 pad34[0x14];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
    u8 unk4F;
} func_80377D68_Gfx;

typedef struct {
    u8 pad0[0x30];
    func_80377D68_Gfx *unk30;
} func_80377D68_Node;
extern void func_80006214(void *);
extern s32 func_80146088();
extern func_80377D68_Node *D_8008DA88[];
extern u8 D_80388770[];
extern func_80377D68_Struct10 D_80388814;
extern u8 D_80388878[];
extern u8 D_803888D8[];
extern f32 D_803893B0;
extern func_80377D68_Struct40 D_80389EF8[];
extern func_80377D68_Struct10 D_8038A6F8[];

s32 func_80377D68(func_80377D68_Obj *arg0, u16 arg1, s32 arg2, s32 arg3) {
    func_80377D68_Struct40 *s0;
    func_80377D68_Struct10 *s3;
    f32 f;
    u16 fp;
    u16 v1;
    s32 i;
    s32 flags;
    s32 a3;
    u8 ret;

    fp = (*(u16 **)D_80171CEC[arg1])[0];
    v1 = (*(u16 **)D_80171CEC[arg1])[1];
    s3 = D_8038A6F8;
    s0 = D_80389EF8;
    ret = 0;
    flags = 0x30F;
    if (arg0->unk88 != D_80388770) {
        flags = 0x6030F;
    }
    if (arg0->unk88 == D_80388770) {
        a3 = (s32)D_803888D8 | 0x40000000;
    } else {
        a3 = (s32)D_80388878 | 0x40000000;
    }
    if (arg0->unk94 > 0x20) {
        arg0->unk94 = 0x20;
    }
    i = 0;
    if (i < arg0->unk94) {
        f = D_803893B0;
        do {
        s0->unk0 = arg0->unk6C;
        s0->unk4 = arg0->unk70;
        s0->unk8 = arg0->unk74;
        s0->unkC = s0->unkE = s0->unk10 = 0;
        s0->unk18 = fp;
        s0->unk20 = v1;
        s0->unk1C = arg2;
        s0->unk14 = flags;
        s0->unk30 = f;
        s0->unk34 = f;
        s0->unk38 = f;
        *s3 = D_80388814;
        s3->unk8 = 0x1000;
        s3->unkC = s0;
        ret += func_80146088(arg0, s3, arg3);
        i++;
        s0++;
        s3++;
        } while (i < arg0->unk94);
    }
    func_80006214(arg0);
    for (i = 0; i < arg0->unk94; i++) {
        func_80377D68_Gfx *g = D_8008DA88[i]->unk30;

        g->unk30 = a3;
        g->unk48 = arg0->unk78;
        g->unk49 = arg0->unk79;
        g->unk4A = arg0->unk7A;
        g->unk4B = arg0->unk7B;
        g->unk4C = arg0->unk80;
        g->unk4D = arg0->unk81;
        g->unk4E = arg0->unk82;
        g->unk4F = arg0->unk83;
    }
    return ret;
}
#undef LP2
#undef LP
#undef D_8008DA88
#undef D_80171CEC
#undef D_80388770
#undef D_80388814
#undef D_80388878
#undef D_803888D8
#undef D_803893B0
#undef D_80389EF8
#undef D_8038A6F8
#undef func_80006214
#undef func_80146088
#undef func_80377FC4_Struct
#define func_80376ADC func_80376ADC__decl
#define func_80377D68 func_80377D68__decl


struct func_80377FC4_Struct {
    u8 pad[4];
    s32 *unk4;
};

extern struct func_80377FC4_Struct *D_80171CEC[];

void func_80377FC4(s32 arg0, u16 arg1, volatile u16 arg2) {
    s32 *temp;

    temp = D_80171CEC[arg1]->unk4;
    func_80377D68(arg0, arg1, temp[arg2]);
}

#define func_800058DC func_800058DC__func_80378010

extern void func_800058DC(void *arg0, s32 arg1);

typedef struct func_80378010_Struct {
    u8 pad[0x8C];
    s32 unk8C;
} func_80378010_Struct;

void func_80378010(func_80378010_Struct *arg0, s32 arg1) {
    func_800058DC(arg0, arg0->unk8C);
}
#undef func_800058DC


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

/* hh-block asm/nonmatchings/file056/80376160/_mrg_keep_text_func_80378064.s {"functions":["func_80378064"],"rodata":[]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file056/80376160/_mrg_keep_text_func_80378064.s")

#define func_80378034 func_80378034__func_80378190

extern void func_80378034();

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
#undef func_80378034


void func_80378330(void) {
}


/* Original readonly objects; named loads retain their original addresses. */
static const unsigned char rodata_80376160[] = {
    0x73, 0x61, 0x76, 0x65, 0x5F, 0x70, 0x6F, 0x69, 0x6E, 0x74, 0x33, 0x00, 0x2F, 0x68, 0x64, 0x69,
    0x73, 0x6B, 0x31, 0x2F, 0x75, 0x2F, 0x6E, 0x75, 0x36, 0x34, 0x2F, 0x72, 0x7A, 0x30, 0x31, 0x31,
    0x5F, 0x75, 0x73, 0x61, 0x2F, 0x6D, 0x61, 0x69, 0x6E, 0x2F, 0x67, 0x61, 0x6D, 0x65, 0x2F, 0x73,
    0x6F, 0x75, 0x72, 0x63, 0x65, 0x2F, 0x70, 0x6C, 0x61, 0x79, 0x65, 0x72, 0x2F, 0x70, 0x6C, 0x61,
    0x79, 0x65, 0x72, 0x5F, 0x73, 0x61, 0x76, 0x65, 0x5F, 0x70, 0x6F, 0x69, 0x6E, 0x74, 0x2E, 0x63,
    0x00, 0x00, 0x00, 0x00, 0x6C, 0x69, 0x66, 0x65, 0x73, 0x74, 0x61, 0x74, 0x69, 0x6F, 0x6E, 0x5F,
    0x69, 0x64, 0x20, 0x3D, 0x20, 0x25, 0x78, 0x0A, 0x00, 0x00, 0x00, 0x00, 0x2F, 0x68, 0x64, 0x69,
    0x73, 0x6B, 0x31, 0x2F, 0x75, 0x2F, 0x6E, 0x75, 0x36, 0x34, 0x2F, 0x72, 0x7A, 0x30, 0x31, 0x31,
    0x5F, 0x75, 0x73, 0x61, 0x2F, 0x6D, 0x61, 0x69, 0x6E, 0x2F, 0x67, 0x61, 0x6D, 0x65, 0x2F, 0x73,
    0x6F, 0x75, 0x72, 0x63, 0x65, 0x2F, 0x70, 0x6C, 0x61, 0x79, 0x65, 0x72, 0x2F, 0x70, 0x6C, 0x61,
    0x79, 0x65, 0x72, 0x5F, 0x73, 0x61, 0x76, 0x65, 0x5F, 0x70, 0x6F, 0x69, 0x6E, 0x74, 0x2E, 0x63,
    0x00, 0x00, 0x00, 0x00, 0x63, 0x61, 0x6D, 0x65, 0x72, 0x61, 0x20, 0x73, 0x65, 0x74, 0x0A, 0x00,
    0x66, 0x61, 0x64, 0x65, 0x20, 0x70, 0x72, 0x69, 0x6E, 0x74, 0x20, 0x0A, 0x00, 0x00, 0x00, 0x00,
    0x70, 0x6C, 0x61, 0x79, 0x65, 0x72, 0x5F, 0x6C, 0x6F, 0x61, 0x64, 0x5F, 0x73, 0x74, 0x61, 0x72,
    0x74, 0x20, 0x6F, 0x6B, 0x2E, 0x0A, 0x00, 0x00, 0x2F, 0x68, 0x64, 0x69, 0x73, 0x6B, 0x31, 0x2F,
    0x75, 0x2F, 0x6E, 0x75, 0x36, 0x34, 0x2F, 0x72, 0x7A, 0x30, 0x31, 0x31, 0x5F, 0x75, 0x73, 0x61,
    0x2F, 0x6D, 0x61, 0x69, 0x6E, 0x2F, 0x67, 0x61, 0x6D, 0x65, 0x2F, 0x73, 0x6F, 0x75, 0x72, 0x63,
    0x65, 0x2F, 0x70, 0x6C, 0x61, 0x79, 0x65, 0x72, 0x2F, 0x70, 0x6C, 0x61, 0x79, 0x65, 0x72, 0x5F,
    0x73, 0x61, 0x76, 0x65, 0x5F, 0x70, 0x6F, 0x69, 0x6E, 0x74, 0x2E, 0x63, 0x00, 0x00, 0x00, 0x00,
    0x2F, 0x68, 0x64, 0x69, 0x73, 0x6B, 0x31, 0x2F, 0x75, 0x2F, 0x6E, 0x75, 0x36, 0x34, 0x2F, 0x72,
    0x7A, 0x30, 0x31, 0x31, 0x5F, 0x75, 0x73, 0x61, 0x2F, 0x6D, 0x61, 0x69, 0x6E, 0x2F, 0x67, 0x61,
    0x6D, 0x65, 0x2F, 0x73, 0x6F, 0x75, 0x72, 0x63, 0x65, 0x2F, 0x70, 0x6C, 0x61, 0x79, 0x65, 0x72,
    0x2F, 0x70, 0x6C, 0x61, 0x79, 0x65, 0x72, 0x5F, 0x73, 0x61, 0x76, 0x65, 0x5F, 0x70, 0x6F, 0x69,
    0x6E, 0x74, 0x2E, 0x63, 0x00, 0x00, 0x00, 0x00, 0x65, 0x66, 0x66, 0x65, 0x63, 0x74, 0x5F, 0x73,
    0x74, 0x65, 0x70, 0x20, 0x25, 0x64, 0x0A, 0x00, 0xC0, 0xDF, 0xC4, 0xEA, 0xA4, 0xB5, 0xA4, 0xEC,
    0xA4, 0xC6, 0xA4, 0xA4, 0xA4, 0xCA, 0xA4, 0xA4, 0xA5, 0xA8, 0xA5, 0xD5, 0xA5, 0xA7, 0xA5, 0xAF,
    0xA5, 0xC8, 0xA4, 0xC7, 0xA4, 0xB9, 0x28, 0x6B, 0x69, 0x6E, 0x64, 0x20, 0x3D, 0x20, 0x25, 0x64,
    0x29, 0x0A, 0x00, 0x00, 0x65, 0x66, 0x5F, 0x73, 0x75, 0x75, 0x20, 0x3D, 0x20, 0x25, 0x64, 0x20,
    0xA5, 0xEF, 0xA1, 0xBC, 0xA5, 0xAF, 0xA5, 0xAA, 0xA1, 0xBC, 0xA5, 0xD0, 0xA1, 0xBC, 0xA1, 0xA3,
    0x20, 0xA3, 0xB1, 0xA4, 0xC4, 0xA5, 0xA8, 0xA5, 0xD5, 0xA5, 0xA7, 0xA5, 0xAF, 0xA5, 0xC8, 0xA4,
    0xCB, 0xBB, 0xC8, 0xA4, 0xA6, 0x44, 0x4F, 0x42, 0x4A, 0xA4, 0xCF, 0xC6, 0xB1, 0xBB, 0xFE, 0xA4,
    0xCB, 0x25, 0x64, 0xB8, 0xC4, 0xA4, 0xDE, 0xA4, 0xC7, 0xA4, 0xCB, 0xA4, 0xB7, 0xA4, 0xC6, 0xA4,
    0xAF, 0xA4, 0xC0, 0xA4, 0xB5, 0xA4, 0xA4, 0x0A, 0x00, 0x00, 0x00, 0x00, 0x31, 0x2F, 0x65, 0x72,
    0x72, 0x20, 0x3D, 0x20, 0x25, 0x64, 0x0A, 0x00, 0xA5, 0xAA, 0xA1, 0xBC, 0xA5, 0xE9, 0xA4, 0xCE,
    0x44, 0x4F, 0x42, 0x4A, 0xA4, 0xAC, 0xBA, 0xEE, 0xC0, 0xAE, 0xBD, 0xD0, 0xCD, 0xE8, 0xA4, 0xDE,
    0xA4, 0xBB, 0xA4, 0xF3, 0x0A, 0x00, 0x00, 0x00, 0x61, 0x75, 0x72, 0x61, 0x20, 0x65, 0x66, 0x66,
    0x65, 0x63, 0x74, 0x20, 0x73, 0x65, 0x74, 0x21, 0x0A, 0x00, 0x00, 0x00, 0x61, 0x75, 0x72, 0x61,
    0x20, 0x65, 0x66, 0x66, 0x65, 0x63, 0x74, 0x0A, 0x00, 0x00, 0x00, 0x00, 0x61, 0x75, 0x72, 0x61,
    0x20, 0x65, 0x66, 0x66, 0x65, 0x63, 0x74, 0x0A, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x40, 0x2F, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x40, 0x51, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x40, 0x51, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x51, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x40, 0x51, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x51, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x40, 0x51, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xD6, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66,
    0x3C, 0x23, 0xD7, 0x0A, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xDC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCD,
};
