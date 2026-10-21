#include "common.h"

extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];

typedef struct func_803709D0_StructGlobal {
    u8 pad[0xDC];
    s32 unkDC;
    u8 padE0[0x1038 - 0xE0];
    f32 unk1038;
    f32 unk103C;
    f32 unk1040;
} func_803709D0_StructGlobal;

typedef struct func_803709D0_StructObj {
    u8 pad[0x68];
    void *unk68;
    f32 unk6C;
    f32 unk70;
    f32 unk74;
    u8 unk78;
    u8 unk79;
    u8 unk7A;
    u8 unk7B;
    f32 unk7C;
    f32 unk80;
    f32 unk84;
    f32 unk88;
} func_803709D0_StructObj;

extern func_803709D0_StructGlobal D_801BBBF0;
extern u8 D_80387BB0[];
extern void *func_80005670(void *a0, void *a1, void *a2);

void func_803709D0(s32 arg0, f32 arg1, f32 arg2, f32 arg3, u8 arg4) {
    u8 *var_v1;
    u8 *var_a2;
    func_803709D0_StructObj *temp_v0;

    if (arg0 == D_801BBBF0.unkDC) {
        var_v1 = D_801BC03C;
    } else {
        var_v1 = D_801BC3D8;
    }
    if (arg0 != D_801BBBF0.unkDC) {
        var_a2 = D_801BC03C;
    } else {
        var_a2 = D_801BC3D8;
    }
    if (arg4 < 6) {
        temp_v0 = func_80005670((void *)arg0, D_80387BB0, var_a2);
        if (temp_v0 != NULL) {
            temp_v0->unk68 = var_v1;
            temp_v0->unk6C = arg1;
            temp_v0->unk70 = arg2;
            temp_v0->unk74 = arg3;
            temp_v0->unk78 = arg4;
            temp_v0->unk79 = 0;
            temp_v0->unk7A = 0;
            temp_v0->unk7B = 0;
            temp_v0->unk7C = D_801BBBF0.unk1038;
            temp_v0->unk80 = D_801BBBF0.unk103C;
            temp_v0->unk84 = D_801BBBF0.unk1040;
            temp_v0->unk88 = *(f32 *)(var_a2 + 0x2F4);
        }
    }
}


typedef struct func_80370AB4_Struct {
    u8 pad0[0x2];
    s16 unk2;
    u8 pad4[0x2C];
    u32 unk30;
    u8 pad34[0x2F8 - 0x34];
    u8 unk2F8;
} func_80370AB4_Struct;
typedef struct func_80370AB4_Obj {
    u8 pad0[0x4C];
    u16 unk4C;
    u16 unk4E;
    u8 pad50[0x68 - 0x50];
    func_80370AB4_Struct *unk68;
    f32 unk6C;
    f32 unk70;
    f32 unk74;
    u8 unk78;
    u8 unk79;
    u8 pad7A[0x88 - 0x7A];
    f32 unk88;
} func_80370AB4_Obj;
extern s32 D_801CE330(void *a0, s32 a1, f32 a2, f32 a3, f32 a4, s32 a5, s32 a6, s32 a7, s32 a8, s32 a9, s32 a10, s32 a11, s32 a12, s32 a13, s32 a14, f32 a15, s32 a16);
extern void func_800058DC(void *a0, void *a1);
extern f32 D_8038B394;
extern f32 D_8038B398;
extern f32 D_8038B39C;
extern f32 D_8038B3A0;
extern f32 D_8038B3A4;
extern u8 func_80370E90[];

void func_80370AB4(func_80370AB4_Obj *arg0, s32 arg1) {
    func_80370AB4_Struct *s;
    u8 *p;
    f32 x;
    f32 y;
    f32 z;
    s32 unused1;
    u8 temp_a1;
    u8 a, b, b2, c, d, e;
    u8 sp60;
    s32 v;

    s = arg0->unk68;
    x = arg0->unk6C;
    y = arg0->unk70;
    z = arg0->unk74;
    p = &arg0->unk79;
    temp_a1 = arg0->unk78;
    sp60 = 0;
    arg0->unk4C = 0;
    arg0->unk4E = 0;
    if ((s->unk2F8 != 0) || (++*p >= 5)) {
        v = temp_a1;
        if (temp_a1 == 0) {
            a = 0; b = 0xCF; c = 0; d = 0xCF; e = 0xFF;
        } else {
            a = 0xFF; b = 0xFF; c = 0xFF;
            if (v == 1) {
                d = 0; e = 0;
            } else {
                d = 0xFF; e = 0xFF;
                sp60 = v * 4;
            }
        }
        if (s->unk2 <= 0 || ((s->unk30 << 1) >> 30) != 0) {
            D_801CE330(arg0, 0, x, y, z, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0, 0xFF, 0xA, 0xA, D_8038B394, 0);
        }
        if (v >= 4 || (v != 0 && arg0->unk88 == 1.0)) {
            D_801CE330(arg0, 0xF, x, y, z, 0xFF, 0xFF, 0, 0xFF, 0xFF, 0, 0, 0xFF, 0x14, 0x14, D_8038B398, 1);
        }
        D_801CE330(arg0, 0xD, x, y, z, a, b, 0xFF, 0xFF, c, d, e, 0xFF, 1, 0x18, D_8038B39C, 1);
        if (v >= 2) {
            D_801CE330(arg0, 0x11, x, y, z, 0xFF, 0xE0, 0, 0xFF, 0xFF, 0xE0, 0, 0, sp60, 0x1E, D_8038B3A0, 1);
        }
        if (v >= 3) {
            D_801CE330(arg0, 0x10, x, y, z, 0xFF, 0x50, 0x50, 0x80, 0xFF, 0x50, 0x50, 0, 1, 0x1E, D_8038B3A4, 1);
        }
        func_800058DC(arg0, func_80370E90);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/803709D0/func_80370E90.s")


struct func_8037118C_Struct {
    u8 pad[0x4C];
    u16 unk4C;
    u16 unk4E;
};

extern void func_803711C8(s32 arg0, s32 arg1);

void func_8037118C(struct func_8037118C_Struct *arg0, s32 arg1) {
    if ((s32) arg0->unk4C >= (s32) arg0->unk4E) {
        func_800058DC(arg0, func_803711C8);
    }
}


extern void func_80005700(s32 arg0, s32 arg1);

void func_803711C8(s32 arg0, s32 arg1) {
    s32 *p;
    p = &arg1;
    func_80005700(arg0, *p);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/803709D0/func_803711E8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/803709D0/func_803714B4.s")


typedef struct func_80371930_Struct {
    u8 pad0[0x5C];
    s32 unk5C;
} func_80371930_Struct;

typedef struct func_80371930_Obj {
    u8 pad0[0x6C];
    f32 unk6C;
    f32 unk70;
    f32 unk74;
    u8 unk78;
} func_80371930_Obj;

extern void func_8013A334(f32 *a0, s32 a1, s32 a2, s32 a3);
extern u8 D_80387BD8[];

void func_80371930(func_80371930_Struct *arg0, s32 arg1, u8 arg2) {
    void *func_80005670();
    f32 sp2C[5];
    f32 sp1C[2];
    func_80371930_Obj *temp_v0;
    s32 temp;

    temp = arg0->unk5C;
    func_8013A334(sp2C, arg1, temp, 0x20);
    temp_v0 = func_80005670(arg0, D_80387BD8);
    if (temp_v0 != NULL) {
        temp_v0->unk6C = sp2C[0];
        temp_v0->unk70 = sp2C[1];
        temp_v0->unk74 = sp2C[2];
        temp_v0->unk78 = arg2;
    }
}


typedef struct func_80371994_Struct {
    u8 pad0[0x6C];
    f32 unk6C;
    f32 unk70;
    f32 unk74;
} func_80371994_Struct;

extern s32 func_801CE330(f32 a0, s32 a1, f32 a2, f32 a3, f32 a4, s32 a5, s32 a6, s32 a7, s32 a8, s32 a9, s32 a10, s32 a11, s32 a12, s32 a13, s32 a14, f32 a15, s32 a16);
extern f32 D_8038B410;

void func_80371994(func_80371994_Struct *arg0, s32 arg1) {
    f32 temp_fv0;
    f32 temp_fv1;
    f32 temp_fa0;

    temp_fv0 = arg0->unk6C;
    temp_fv1 = arg0->unk70;
    temp_fa0 = arg0->unk74;
    func_801CE330(temp_fa0, 0x33, temp_fv0, temp_fv1, temp_fa0, 0xFF, 0xFF, 0, 0xFF, 0x1E, 0x90, 0, 0x80, 1, 0x14, D_8038B410, 2);
    func_800058DC(arg0, func_8037118C);
}


typedef struct func_80371A40_Sub {
    u8 pad0[0x68];
    void *unk68;
    f32 unk6C;
    f32 unk70;
    f32 unk74;
    u8 unk78;
    u8 unk79;
    u8 unk7A;
    u8 pad7B[1];
    f32 unk7C;
    f32 unk80;
    f32 unk84;
    f32 unk88;
    u8 pad8C[0x10];
    u8 unk9C;
} func_80371A40_Sub;

typedef struct func_80371A40_Struct {
    u8 pad0[0x5C];
    func_80371A40_Sub *unk5C;
} func_80371A40_Struct;

extern s32 D_801BBCCC;
extern u8 D_80387BEC[];

void func_80371A40(func_80371A40_Struct *arg0, s32 arg1, s32 arg2, s32 arg3) {
    void *var_a2;
    func_80371A40_Sub *temp_v0;
    func_80371A40_Sub *temp_v0_2;

    if ((s32) arg0 == D_801BBCCC) {
        var_a2 = D_801BC03C;
    } else {
        var_a2 = D_801BC3D8;
    }
    temp_v0 = arg0->unk5C;
    if ((temp_v0->unk9C == 1) || (temp_v0->unk9C == 2)) {
        temp_v0->unk9C = 3;
    }
    temp_v0_2 = func_80005670(arg0, D_80387BEC, var_a2);
    if (temp_v0_2 != NULL) {
        temp_v0_2->unk68 = var_a2;
        temp_v0_2->unk6C = *(f32 *) &arg1;
        temp_v0_2->unk70 = *(f32 *) &arg2;
        temp_v0_2->unk74 = *(f32 *) &arg3;
        temp_v0_2->unk79 = 0;
        temp_v0_2->unk7A = 0;
        temp_v0_2->unk7C = 0.0f;
        temp_v0_2->unk80 = 0.0f;
        temp_v0_2->unk84 = 0.0f;
        temp_v0_2->unk88 = 0.0f;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/803709D0/func_80371AF8.s")


typedef struct func_80371D04_Struct {
    u8 pad0[0x6C];
    f32 unk6C;
    f32 unk70;
    f32 unk74;
    u8 pad78[0x7A - 0x78];
    u8 unk7A;
} func_80371D04_Struct;

extern f32 D_8038B420;

void func_801CE1C8(void *a0, s32 a1, f32 a2, f32 a3, f32 a4, s32 a5, s32 a6, s32 a7, s32 a8, s32 a9, s32 a10, s32 a11, s32 a12, s32 a13, s32 a14, s32 a15, s32 a16, s32 a17, s32 a18, s32 a19, s32 a20, s32 a21, s32 a22, f32 a23, f32 a24, f32 a25, f32 a26, s32 a27);

void func_80371D04(func_80371D04_Struct *arg0, s32 arg1)
{
  f32 temp_fv1;
  f32 temp_fa0;
  f32 temp_fa1;
  u8 temp_t7;
  temp_fv1 = arg0->unk6C;
  temp_fa0 = arg0->unk70;
  temp_fa1 = arg0->unk74;
  ;
  if ((++arg0->unk7A) >= 5)
  {
    func_801CE1C8(arg0, 0xE, temp_fv1, temp_fa0, temp_fa1, 0xFF, 0x6F, 0, 0x60, 0xFF, 0, 0, 0, 0, 0, 0, 0, 0, 0, (short) 0, 0, 3, 0x12, D_8038B420, D_8038B420, D_8038B420, 1.0f, 1);
    func_800058DC(arg0, &func_8037118C);
  }
}


extern u8 D_80387C00[];

typedef struct func_80371DF4_StructVec {
    u8 pad[4];
    f32 x;
    f32 y;
    f32 z;
} func_80371DF4_StructVec;

typedef struct func_80371DF4_StructSource {
    u8 pad[0x2C];
    func_80371DF4_StructVec *pos;
} func_80371DF4_StructSource;

void func_80371DF4(s32 arg0, func_80371DF4_StructSource **arg1) {
    u8 *data;
    func_803709D0_StructObj *obj;
    func_80371DF4_StructVec *pos;

    if (arg0 == D_801BBCCC) {
        data = D_801BC03C;
    } else {
        data = D_801BC3D8;
    }
    pos = (*arg1)->pos;
    obj = func_80005670((void *)arg0, D_80387C00, data);
    if (obj != NULL) {
        obj->unk68 = data;
        obj->unk6C = pos->x;
        obj->unk70 = pos->y;
        obj->unk74 = pos->z;
        obj->unk78 = 0;
        obj->unk79 = 0;
        obj->unk7A = 0;
        obj->unk7B = 0;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/803709D0/func_80371E84.s")


typedef struct func_80372094_Struct {
    u8 pad[0x68];
    u8 *unk68;
    f32 unk6C;
    f32 unk70;
    f32 unk74;
    u8 unk78;
    u8 unk79;
    u8 unk7A;
    u8 unk7B;
    u8 unk7C;
} func_80372094_Struct;

struct func_80372198_Struct;
void func_80372198(struct func_80372198_Struct *arg0, s32 arg1);

void func_80372094(func_80372094_Struct *arg0, s32 arg1) {
    s32 var_v0;
    s32 var_v1;
    u8 *sub;
    f32 x;
    f32 y;
    f32 z;
    u8 flag;

    sub = arg0->unk68;
    x = arg0->unk6C;
    y = arg0->unk70;
    z = arg0->unk74;
    flag = arg0->unk78;
    if (arg0->unk7A++ < 3) {
    } else {
        if (sub[0x2F8] >= 3) {
            arg0->unk7C = 0;
            if (flag != 0) {
                var_v0 = 0;
                var_v1 = 0xE0;
            } else {
                var_v0 = 0xFF;
                var_v1 = 0x90;
            }
            func_801CE330(z, 0x12, x, (f32) ((f64) y + 1.0), z, var_v0, var_v1, 0, 0xFF, var_v0, var_v1, 0, 0, 1, 0x14, 0.15625f, 4);
        } else {
            arg0->unk7C = 1;
        }
        arg0->unk7A = 0;
        func_800058DC(arg0, func_80372198);
    }
}


struct func_80372198_Struct {
    u8 pad[0x7A];
    u8 unk7A;
    u8 unk7B;
};
extern void func_803721E0();

void func_80372198(struct func_80372198_Struct *arg0, s32 arg1) {
    s32 temp_v0;
    s32 lt;

    temp_v0 = arg0->unk7A;
    lt = temp_v0 < 3;
    if (lt) {}
    arg0->unk7A = (u8) (temp_v0 + 1);
    if (!lt) {
        arg0->unk7A = 1;
        arg0->unk7B = 0;
        func_800058DC(arg0, func_803721E0);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/803709D0/func_803721E0.s")


struct func_80372388_StructA { u8 pad[0x5C]; s32 unk5C; };
struct func_80372388_StructB { s16 unk0; u8 pad[0x2E]; u32 unk30; u8 pad2[0x66]; u16 unk9A; };
struct func_80372388_StructC { u8 pad[0x2C]; f32 *unk2C; };
struct func_80372388_StructD { u8 pad[0x6C]; f32 unk6C; f32 unk70; f32 unk74; u8 unk78; u8 unk79; u8 unk7A; u8 unk7B; u8 unk7C; u8 pad2[3]; f32 unk80; };
extern void func_80020718(s32);
extern u8 D_80387C14[];

void func_80372388(struct func_80372388_StructA *arg0, void **arg1) {
    struct func_80372388_StructB *v1;
    s32 sp38;
    u8 pad[4];
    f32 *sp30;
    f32 sp24[3];
    s32 v0;
    struct func_80372388_StructD *r;
    extern void *func_80005670();

    if ((s32)arg0 == D_801BBCCC) {
        v1 = (void *)D_801BC03C;
    } else {
        v1 = (void *)D_801BC3D8;
    }
    sp38 = arg0->unk5C;
    sp30 = ((struct func_80372388_StructC *)*arg1)->unk2C;
    func_80020718(0x13A);
    func_8013A334(sp24, (s32)arg1, sp38, (u16)(((v1->unk30 << 9) >> 30) == 3 ? 0x1D : 0x1C));
    r = func_80005670(arg0, D_80387C14);
    if (r != NULL) {
        r->unk6C = sp24[0];
        r->unk70 = sp24[1] - 10.0;
        r->unk74 = sp24[2];
        r->unk78 = 0;
        r->unk79 = 0;
        r->unk7A = 0;
        r->unk7B = 0;
        if (v1->unk9A < v1->unk0 / 8) {
            r->unk7C = 0;
        } else {
            r->unk7C = 1;
        }
        r->unk80 = sp30[2];
    }
}

struct func_803724C4_Struct {
    u8 pad[0x6C];
    f32 unk6C;
    f32 unk70;
    f32 unk74;
    u8 pad78[8];
    f32 unk80;
};
extern void func_801CE3F8(void *a0, s32 a1, f32 a2, s32 a3, f32 a4, s32 a5, s32 a6, s32 a7, s32 a8, s32 a9, s32 a10, s32 a11, s32 a12, s32 a13, s32 a14, f32 a15, s32 a16);
extern f32 D_8038B430;
extern f32 D_8038B434;
extern f32 D_8038B438;
extern f32 D_8038B43C;

void func_803724C4(struct func_803724C4_Struct *arg0, s32 arg1) {
    f32 sp84 = arg0->unk6C;
    f32 sp70 = arg0->unk70;
    f32 sp7C = arg0->unk74;
    f32 sp78 = arg0->unk80;
    func_801CE1C8(arg0, 0x2C, sp84, sp70, sp7C, 0xFF, 0xFF, 0xFF, 0x80, 0xFF, 0xFF, 0xFF, 0x80, 0, 0xFF, 0x80, 0, 0, 0xFF, 0x80, 0, 1, 0xA, D_8038B430, D_8038B434, D_8038B438, 0.0f, 5);
    func_801CE3F8(arg0, 0x2E, sp84, *(s32 *)&sp78, sp7C, 0xFF, 0xFF, 0xFF, 0xFF, 0, 0xFF, 0x80, 0x20, 1, 0xC, D_8038B43C, 1);
    func_800058DC(arg0, func_8037118C);
}


typedef struct func_80372654_StructVec {
    f32 x;
    f32 y;
    f32 z;
} func_80372654_StructVec;


void func_80372654(f32 *arg0, void *arg1, void *arg2)
{
  s32 temp;
  func_80372654_StructVec sp30;
  func_80372654_StructVec sp24;
  func_80372654_StructVec sp18;
  temp = *((s32 *) (0x5C + ((u8 *) arg1)));
  func_8013A334(&sp24, (s32) arg2, temp, 9);
  func_8013A334(&sp18, (s32) arg2, temp, 0xC);
  sp30.x = (sp24.x + sp18.x) / ((f32) 2);
  if (arg0)
  {
  }
  sp30.y = (sp24.y + sp18.y) / ((f32) 2);
  sp30.z = (sp24.z + sp18.z) / ((f32) 2);
  *((func_80372654_StructVec *) arg0) = sp30;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/803709D0/func_80372708.s")

extern u8 D_8008DA88[];
struct func_8037296C_Struct;
typedef struct func_80372784_Struct {
    u8 pad0[0xC];
    void *unkC;
    u8 pad10[0x6C - 0x10];
    f32 unk6C;
    f32 unk70;
    f32 unk74;
} func_80372784_Struct;
extern f32 D_8038B440;
extern f32 D_8038B444;
extern void func_80006214(void *);
void func_8037296C(struct func_8037296C_Struct *arg0, s32 arg1);

void func_80372784(func_80372784_Struct *arg0, s32 arg1) {
    f32 v[3];
    u8 pad[8];
    f32 k;

    func_80006214(arg0->unkC);
    func_80372654(v, arg0->unkC, D_8008DA88);
    func_80006214(arg0);
    k = D_8038B440;
    arg0->unk6C = v[0];
    arg0->unk70 = v[1];
    arg0->unk74 = v[2];
    func_801CE1C8(arg0, 0x32, v[0], v[1], v[2], 0xFF, 0, 0xFF, 0, 0xFF, 0xFF, 0, 0x80, 0, 0xFF, 0xFF, 0, 0xFF, 0, 0xFF, 0x80, 2, 0x18, k, k, k, 0.0f, 4);
    func_801CE1C8(arg0, 0x31, v[0], v[1], v[2], 0xFF, 0, 0xFF, 0x40, 0xFF, 0xFF, 0, 0x80, 0, 0xFF, 0xFF, 0xC0, 0xFF, 0, 0xFF, 0x40, 1, 0x18, D_8038B444, D_8038B444, D_8038B444, 0.0f, 5);
    func_800058DC(arg0, func_8037296C);
}


struct func_8037296C_Struct {
    u8 pad0[0xC];
    void *unkC;
    u8 pad10[0x4C - 0x10];
    u16 unk4C;
    u16 unk4E;
    u8 pad50[0x6C - 0x50];
    f32 unk6C;
    f32 unk70;
    f32 unk74;
};

struct func_8037296C_StructB {
    u8 pad0[0x30];
    s32 unk30;
};

struct func_8037296C_StructC {
    u8 pad0[0x8];
    f32 unk8[3];
};


void func_8037296C(struct func_8037296C_Struct *arg0, s32 arg1)
{
  struct func_8037296C_StructB *sp3C;
  struct func_8037296C_StructC sp20;
  void *temp_a1;
  if (D_801BBCCC == ((s32) arg0->unkC))
  {
    sp3C = (struct func_8037296C_StructB *) D_801BC03C;
  }
  else
  {
    sp3C = (struct func_8037296C_StructB *) D_801BC3D8;
  }
  ;
  func_80006214(arg0->unkC);
  func_80372654(sp20.unk8, arg0->unkC, D_8008DA88);
  func_80006214(arg0);
  arg0->unk6C = sp20.unk8[0];
  arg0->unk70 = sp20.unk8[1];
  arg0->unk74 = sp20.unk8[2];
  if ((((u32) (sp3C->unk30 << 0x1B)) >> 0x1E) == 0)
  {
    arg0->unk4C = (u16) (arg0->unk4C | 0x8000);
  }
  if (((s32) arg0->unk4C) >= (arg0->unk4E | 0x8000))
  {
    func_800058DC(arg0, func_803711C8);
  }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/803709D0/func_80372A48.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/803709D0/func_80372CB0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/803709D0/func_80372D9C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/803709D0/func_80372F8C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/803709D0/func_80373634.s")

