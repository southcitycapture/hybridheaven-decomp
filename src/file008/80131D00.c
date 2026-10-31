#include "common.h"


struct func_80131D00_Struct {
    u8 pad[0x3C];
    u16 unk3C;
};

extern void func_800057DC(void *a0, void *a1);
extern void func_8001B204(s32 a0, s32 a1, s32 a2, void *a3);
extern void func_8012FE50(s32 a0, s32 a1, s32 a2, s32 a3, s32 stack);
extern u16 D_80089474[];
extern u8 D_80162FC0[];
extern u8 D_8018D6E0[];
extern u8 D_8018D6E8[];
extern s16 D_801BBBF4;
extern u16 D_801BBC20;

void func_80131D00(struct func_80131D00_Struct *arg0, s32 arg1) {
    u16 var_v0;

    if ((D_801BBC20 >> 4) & 1) {
        func_8001B204(0, 0x8C, 0x50, D_8018D6E0);
    } else {
        func_8001B204(0, 0x8C, 0x50, D_8018D6E8);
    }
    if (D_80089474[2] & 0xF000) {
        D_801BBBF4 = 0x73;
        func_8012FE50(2, 0x73, 2, 2, 0);
    }
    if ((s32) arg0->unk3C >= 0x1771) {
        func_800057DC(arg0, D_80162FC0);
    }
    arg0->unk3C = (u16) (arg0->unk3C + 1);
}

#define D_80164F40 D_80164F40__func_80131DD0
#define D_80178C94 D_80178C94__func_80131DD0
#define D_8017AE58 D_8017AE58__func_80131DD0
#define D_8017B2A0 D_8017B2A0__func_80131DD0
#define D_8018D754 D_8018D754__func_80131DD0
#define D_8018D758 D_8018D758__func_80131DD0
#define D_8018D75C D_8018D75C__func_80131DD0
#define D_801BBBF0 D_801BBBF0__func_80131DD0
#define D_801BBD54 D_801BBD54__func_80131DD0
#define func_800058DC func_800058DC__func_80131DD0
#define func_80005E44 func_80005E44__func_80131DD0
#define func_80006214 func_80006214__func_80131DD0
#define func_8012C89C func_8012C89C__func_80131DD0
#define func_8013222C func_8013222C__func_80131DD0
#define func_8013234C func_8013234C__func_80131DD0
extern s8 D_801BBD54;
extern void func_800058DC(s32, void (*)(void));
void func_8013222C(void *arg0, s32 arg1);
void func_8013234C(s32 arg0, s32 arg1);


typedef struct func_80131DD0_Struct30 {
    u8 pad0[4];
    f32 unk4, unk8, unkC;
    u8 pad10[2];
    s16 unk12;
    u8 pad14[4];
    f32 unk18, unk1C, unk20;
    u32 unk24;
    u8 pad28[8];
    u32 unk30;
} func_80131DD0_Struct30;
typedef struct func_80131DD0_Struct24 {
    u8 pad0[0x24];
    u32 unk24;
    s16 unk28;
    u8 pad2A[6];
    func_80131DD0_Struct30 *unk30;
} func_80131DD0_Struct24;
typedef struct func_80131DD0_Struct {
    u8 pad0[0x24];
    func_80131DD0_Struct24 *unk24;
    u8 pad28[4];
    u32 unk2C;
    u8 pad30[0x62];
    s16 unk92, unk94, unk96, unk98;
} func_80131DD0_Struct;
typedef struct func_80131DD0_StructGlobal {
    u8 pad0[0x54];
    void *unk54;
    u8 pad58[0x110];
    s16 unk168;
} func_80131DD0_StructGlobal;
extern s32 func_80005E44(void *, void *);
extern s32 func_80006214(void *);
extern void func_8012C89C(void *, s32, s32, s32);
extern u8 D_80164F40[];
extern u8 D_80178C94[];
extern u8 D_8017AE58[];
extern u8 D_8017B2A0[];
extern f32 D_8018D754;
extern f32 D_8018D758;
extern f32 D_8018D75C;
extern func_80131DD0_StructGlobal D_801BBBF0;

void func_80131DD0(func_80131DD0_Struct *arg0, func_80131DD0_Struct24 **arg1) {
    s16 temp_v0;
    func_80131DD0_Struct30 *temp;
    f32 scale;

    D_801BBBF0.unk168 = 1;
    if (arg0->unk98 == 4) {
        func_80005E44(D_801BBBF0.unk54, D_80178C94);
        func_800058DC((s32)arg0, (void (*)(void))func_8013234C);
        return;
    }
    if (func_80005E44(arg0, D_80164F40) != 0) {
        func_80006214(arg0);
        (*arg1)->unk28 = 1;
        D_801BBD54 = 1;
        if (arg0->unk92 != 0) {
            arg0->unk94 = 0;
            arg0->unk96 = 4;
        } else {
            arg0->unk94 = 0x90;
            arg0->unk96 = -4;
        }
        scale = D_8018D754;
        arg0->unk2C |= 0x20;
        (*arg1)->unk30->unk18 = scale;
        (*arg1)->unk30->unk1C = scale;
        (*arg1)->unk30->unk20 = scale;
        temp_v0 = arg0->unk98;
        if (temp_v0 == 0) goto case0;
        if (temp_v0 == 1U) goto case1;
        if (temp_v0 == 2) goto case2;
        if (temp_v0 != 3) goto end;
        goto case3;
        case0: {
            scale = D_8018D758;
            (*arg1)->unk30->unk18 = scale;
            (*arg1)->unk30->unk1C = scale;
            (*arg1)->unk30->unk20 = scale;
            func_8012C89C(arg0, 0, 5, 0);
            (*arg1)->unk30->unk30 = (u32)D_8017B2A0 | 0x40000000;
            (*arg1)->unk24 = 0x80000000;
            temp = (*arg1)->unk30;
            temp->unk24 |= 0x1000;
            arg0->unk24->unk30->unk4 = (f32)arg0->unk94;
            arg0->unk24->unk30->unk8 = 7.0f;
            arg0->unk24->unk30->unkC = 60.0f;
            arg0->unk24->unk30->unk12 = 0x1000;
            func_800058DC((s32)arg0, (void (*)(void))func_8013222C);
            return;
        }
        case1: {
            (*arg1)->unk24 = 0x80000100;
            (*arg1)->unk30->unk30 = (u32)D_8017AE58 | 0x40000000;
            (*arg1)->unk30->unk24 = 0;
            func_8012C89C(arg0, 0, 5, 2);
            func_800058DC((s32)arg0, (void (*)(void))func_8013222C);
            arg0->unk24->unk30->unk4 = (f32)arg0->unk94;
            arg0->unk24->unk30->unk8 = 7.0f;
            arg0->unk24->unk30->unkC = 110.0f;
            arg0->unk24->unk30->unk12 = 0x1000;
            return;
        }
        case2: {
            scale = D_8018D75C;
            (*arg1)->unk30->unk18 = scale;
            (*arg1)->unk30->unk1C = scale;
            (*arg1)->unk30->unk20 = scale;
            func_8012C89C(arg0, 0, 5, 1);
            (*arg1)->unk24 = 0x80000000;
            (*arg1)->unk30->unk30 = (u32)D_8017B2A0 | 0x40000000;
            temp = (*arg1)->unk30;
            temp->unk24 |= 0x1000;
            arg0->unk24->unk30->unk4 = (f32)-arg0->unk94;
            arg0->unk24->unk30->unk8 = 7.0f;
            arg0->unk24->unk30->unkC = 60.0f;
            arg0->unk24->unk30->unk12 = 0x1000;
            func_800058DC((s32)arg0, (void (*)(void))func_8013222C);
            return;
        }
        case3: {
            (*arg1)->unk24 = 0x80000100;
            (*arg1)->unk30->unk30 = (u32)D_8017AE58 | 0x40000000;
            (*arg1)->unk30->unk24 = 0;
            func_8012C89C(arg0, 0, 5, 3);
            func_800058DC((s32)arg0, (void (*)(void))func_8013222C);
            arg0->unk24->unk30->unk4 = (f32)-arg0->unk94;
            arg0->unk24->unk30->unk8 = 7.0f;
            arg0->unk24->unk30->unkC = 110.0f;
            arg0->unk24->unk30->unk12 = 0x1000;
        }
    }
end:;
}
#undef D_80164F40
#undef D_80178C94
#undef D_8017AE58
#undef D_8017B2A0
#undef D_8018D754
#undef D_8018D758
#undef D_8018D75C
#undef D_801BBBF0
#undef D_801BBD54
#undef func_800058DC
#undef func_80005E44
#undef func_80006214
#undef func_8012C89C
#undef func_8013222C
#undef func_8013234C


extern void func_800058DC(s32, void (*)(void));
extern void func_8013225C();

void func_8013222C(void *arg0, s32 arg1) {
    *(u16 *)((u8 *)arg0 + 0x90) = 0x23;
    func_800058DC((s32)arg0, func_8013225C);
}

#define func_80132308 func_80132308__func_8013225C
#define func_80132308_Struct func_80132308_Struct__func_8013225C
typedef struct func_80132308_Struct {
    u8 pad0[0x92];
    s16 unk92;
} func_80132308_Struct;
void func_80132308(func_80132308_Struct *arg0, s32 arg1);

typedef struct func_8013225C_S30 {
    u8 pad[4];
    f32 unk4;
} func_8013225C_S30;
typedef struct func_8013225C_S24 {
    u8 pad[0x30];
    func_8013225C_S30 *unk30;
} func_8013225C_S24;
typedef struct func_8013225C_Struct {
    u8 pad0[0x24];
    func_8013225C_S24 *unk24;
    u8 pad1[0x68];
    s16 unk90;
    u8 pad2[4];
    s16 unk96;
    s16 unk98;
} func_8013225C_Struct;

void func_8013225C(func_8013225C_Struct *arg0, s32 arg1)
{
  unsigned int t;
  s16 new_var;
  s32 k = arg0->unk98;
  if (k == 0)
  {
    goto add;
  }
  if (k == 1)
  {
    goto add;
  }
  if (k == 2)
  {
    goto sub;
  }
  if (k != 3)
  {
    goto done;
  }
  goto sub;
  add:
  arg0->unk24->unk30->unk4 = arg0->unk24->unk30->unk4 + ((f32) arg0->unk96);

  goto done;
  sub:
  arg0->unk24->unk30->unk4 = arg0->unk24->unk30->unk4 - ((f32) arg0->unk96);

  done:
  t = (new_var = arg0->unk90);

  arg0->unk90 = t - 1;
  if (t == 0)
  {
    func_800058DC((s32) arg0, (void (*)(void)) func_80132308);
  }
}
#undef func_80132308
#undef func_80132308_Struct


extern void func_80005700();
extern s16 D_80089354;
extern s8 D_801BBD54;

typedef struct func_80132308_Struct {
    u8 pad0[0x92];
    s16 unk92;
} func_80132308_Struct;

void func_80132308(func_80132308_Struct *arg0, s32 arg1) {
    D_801BBD54 = 0;
    if (arg0->unk92 == 0) {
        D_80089354 = 2;
    }
    func_80005700(arg0);
}


void func_8013234C(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}

/* hh-block asm/nonmatchings/file008/80131D00/_mrg_keep_text_func_80132358.s {"functions":["func_80132358"],"rodata":[]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file008/80131D00/_mrg_keep_text_func_80132358.s")


typedef struct func_80132D28_Struct {
    u8 pad0[0xA4];
    s16 unkA4;
    s16 unkA6;
} func_80132D28_Struct;

typedef struct func_80132D28_StructC {
    u8 pad0[0x898];
    s32 unk898;
} func_80132D28_StructC;

extern func_80132D28_StructC D_8005C4B0;
extern func_80132D28_Struct D_800892B0;

void func_80132D28(void *arg0, s32 arg1) {
    if (D_8005C4B0.unk898 == 0) {
        D_800892B0.unkA6 = 1;
        D_800892B0.unkA4 = 2;
        D_801BBD54 = 0;
        func_80005700(arg0);
    }
}


extern s16 D_80089356;
extern void func_80132DB0();

void func_80132D74(s32 arg0, s32 arg1) {
    D_801BBD54 = 0;
    D_80089356 = 1;
    func_800058DC(arg0, func_80132DB0);
}


typedef struct func_80132DB0_Struct30 {
    u8 pad[0x4B];
    u8 unk4B;
} func_80132DB0_Struct30;
typedef struct func_80132DB0_Struct24 {
    u8 pad[0x22];
    u8 unk22;
    u8 pad2[0xD];
    func_80132DB0_Struct30 *unk30;
} func_80132DB0_Struct24;
typedef struct func_80132DB0_Struct {
    u8 pad[0x24];
    func_80132DB0_Struct24 *unk24;
    u8 pad2[0x68];
    u16 unk90;
    u8 pad3[2];
    f32 unk94;
} func_80132DB0_Struct;

extern f64 D_8018D760;
struct func_80132ED0_Struct;
void func_80132ED0(struct func_80132ED0_Struct *arg0, s32 arg1);

void func_80132DB0(func_80132DB0_Struct *arg0, s32 arg1) {
    f32 k = (f32)2.0;
    arg0->unk24->unk30->unk4B = (u32)(arg0->unk94 * k);
    arg0->unk94 = arg0->unk94 - D_8018D760;
    if (arg0->unk94 <= 1.5) {
        arg0->unk24->unk22 = 0;
        D_80089356 = 0;
        arg0->unk90 = 5;
        func_800058DC((s32)arg0, (void (*)(void))func_80132ED0);
    }
}


extern void func_8001F540(s32, void *);

typedef struct func_80132ED0_Struct {
    u8 pad0[0x90];
    u16 unk90;
    u8 pad1[0x6];
    s32 unk98;
} func_80132ED0_Struct;

void func_80132ED0(func_80132ED0_Struct *arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = arg0->unk90;
    arg0->unk90 = temp_v0 - 1;
    if (temp_v0 == 0) {
        func_8001F540(arg0->unk98, arg0);
        func_80005700(arg0);
    }
}

/* hh-block asm/nonmatchings/file008/80131D00/_mrg_keep_text_func_80132F18.s {"functions":["func_80132F18"],"rodata":[]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file008/80131D00/_mrg_keep_text_func_80132F18.s")


extern void func_801334A4();

void func_8013341C(s32 arg0, s32 arg1) {
    D_801BBD54 = 0;
    D_80089356 = 1;
    func_800058DC(arg0, func_801334A4);
}


typedef struct func_80133458_Struct {
    u8 pad0[0xA4];
    s16 unkA4;
    s16 unkA6;
} func_80133458_Struct;

typedef struct func_80133458_StructC {
    u8 pad0[0x898];
    s32 unk898;
} func_80133458_StructC;


void func_80133458(void *arg0, s32 arg1) {
    if (D_8005C4B0.unk898 == 0) {
        D_800892B0.unkA6 = 1;
        D_800892B0.unkA4 = 2;
        D_801BBD54 = 0;
        func_80005700(arg0);
    }
}


typedef struct func_801334A4_StructB {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    s16 unk10;
    s16 unk12;
    s16 unk14;
    u8 pad16[0x35];
    u8 unk4B;
} func_801334A4_StructB;

typedef struct func_801334A4_StructC {
    u8 pad[0x30];
    func_801334A4_StructB *unk30;
} func_801334A4_StructC;

typedef struct func_801334A4_Struct {
    u8 pad[0x91];
    u8 unk91;
    u8 pad92[2];
    s16 unk94;
    s16 unk96;
} func_801334A4_Struct;

extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);

void func_801334A4(func_801334A4_Struct *arg0, func_801334A4_StructC **arg1) {
    f64 d;
    f32 r;
    s32 i;
    s32 a;
    s16 k;
    s16 t;
    s32 div;
    func_801334A4_StructC **p;

    arg0->unk96 = arg0->unk96 + 1;
    div = 38;
    i = 1;
    if (arg0->unk91 > 0) {
        p = arg1 + 1;
        a = 0x2000;
        do {
            (*p)->unk30->unk4B = arg0->unk94 * 2;
            d = (f64)(a / div);
            t = (s32)(d + d);
            r = func_8001EAD0(t);
            (*p)->unk30->unk4 = (f64)(*p)->unk30->unk4 + (f64)r;
            r = func_8001EB64(t);
            (*p)->unk30->unk8 = (f64)(*p)->unk30->unk8 + (f64)r;
            k = (s32)(d * 1.5);
            (*p)->unk30->unkC = (*p)->unk30->unkC + 1.0f;
            r = func_8001EAD0(k) * 56.0f;
            (*p)->unk30->unk10 = (f64)(*p)->unk30->unk10 + (f64)r;
            r = func_8001EB64(k) * 56.0f;
            (*p)->unk30->unk12 = (f64)(*p)->unk30->unk12 + (f64)r;
            r = func_8001EB64(k) * 56.0f;
            (*p)->unk30->unk14 = (f64)(*p)->unk30->unk14 + (f64)r;
            i++;
            p++;
            a += 0x2000;
        } while (arg0->unk91 >= i);
    }
    arg0->unk94 = arg0->unk94 - 2;
    if (arg0->unk94 == 0) {
        D_80089356 = 0;
        func_80005700(arg0);
    }
}


void func_80133730(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}


/* Original readonly objects; named loads retain their original addresses. */
static const unsigned char rodata_80131D00[] = {
    0x44, 0x45, 0x4D, 0x4F, 0x00, 0x00, 0x00, 0x00, 0x20, 0x20, 0x20, 0x20, 0x00, 0x00, 0x00, 0x00,
    0x6D, 0x61, 0x73, 0x6B, 0x5F, 0x73, 0x64, 0x6F, 0x62, 0x6A, 0x5F, 0x73, 0x65, 0x74, 0x20, 0x65,
    0x72, 0x72, 0x6F, 0x72, 0x21, 0x21, 0x28, 0x6E, 0x6F, 0x74, 0x20, 0x73, 0x64, 0x6F, 0x62, 0x6A,
    0x29, 0x0A, 0x00, 0x00, 0x6D, 0x61, 0x73, 0x6B, 0x5F, 0x73, 0x64, 0x6F, 0x62, 0x6A, 0x5F, 0x73,
    0x65, 0x74, 0x20, 0x65, 0x72, 0x72, 0x6F, 0x72, 0x21, 0x21, 0x28, 0x6E, 0x6F, 0x74, 0x20, 0x73,
    0x64, 0x6F, 0x62, 0x6A, 0x29, 0x0A, 0x00, 0x00, 0xA5, 0xD5, 0xA5, 0xEC, 0xA1, 0xBC, 0xA5, 0xE0,
    0xA5, 0xD0, 0xA5, 0xC3, 0xA5, 0xD5, 0xA5, 0xA1, 0xA4, 0xBD, 0xA4, 0xCE, 0xA4, 0xDE, 0xA4, 0xDE,
    0x0A, 0x00, 0x00, 0x00, 0x3D, 0xCC, 0xCC, 0xCD, 0x3D, 0x8F, 0x5C, 0x29, 0x3D, 0x8F, 0x5C, 0x29,
    0x3F, 0xFB, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x3C, 0x23, 0xD7, 0x0A, 0x3C, 0x23, 0xD7, 0x0A,
    0x3C, 0x37, 0x80, 0x34, 0x3C, 0x3F, 0xB1, 0x5B, 0x3E, 0x4C, 0xCC, 0xCD, 0x00, 0x00, 0x00, 0x00,
};
