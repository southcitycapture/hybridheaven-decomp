#define func_801F5630 func_801F5630__merge_frozen
#define func_801F474C func_801F474C__merge_frozen
#define func_801F46DC func_801F46DC__merge_frozen
#include "common.h"


void func_801F3B30(void) {
}


extern u8 D_80216F24;

s32 func_801F3B38(void) {
    if (D_80216F24 != 0) {
        return 1;
    }
    return 0;
}

extern void (*D_80216D10[])(void *, s32);


void func_801F3B5C(s32 arg0) {
    s32 *p = &arg0;
    D_80216F24 = arg0;
}


struct func_801F3B6C_E { u16 a; u16 b; u8 pad[6]; };
struct func_801F3B6C_N { u8 pad0[4]; f32 unk4; f32 unk8; f32 unkC; u8 pad1[0x20]; f32 unk30; f32 unk34; f32 unk38; };
struct func_801F3B6C_M { u8 pad0[0x2C]; struct func_801F3B6C_N *unk2C; };
struct func_801F3B6C_A { u8 pad0[0x24]; struct func_801F3B6C_M *unk24; u8 pad1[0x34]; struct func_801F3B6C_S *unk5C; };
struct func_801F3B6C_S { u8 pad[0x1A]; u16 unk1A; };
struct func_801F7928_A;
extern struct func_801F7928_A *D_801BBCD8;
extern struct func_801F3B6C_E D_8017D250[];
extern s32 func_8010843C(f32, f32, f32, f32, f32, f32);
extern void func_80127430(f32, f32, f32, u16, f32, f32);

#define D_8017D250 D_8017D250__func_801F3B6C
#define D_801BBCD8 D_801BBCD8__func_801F3B6C
#define func_801F3B6C_A func_801F3B6C_A__func_801F3B6C
#define func_801F3B6C_E func_801F3B6C_E__func_801F3B6C
#define func_801F3B6C_M func_801F3B6C_M__func_801F3B6C
#define func_801F3B6C_N func_801F3B6C_N__func_801F3B6C
#define func_801F3B6C_S func_801F3B6C_S__func_801F3B6C
#define func_801F7928_A func_801F7928_A__func_801F3B6C
#define func_801F7928_B func_801F7928_B__func_801F3B6C
struct func_801F7928_B { u8 pad0[0x30]; f32 f30; f32 f34; f32 f38; f32 f3c; f32 f40; f32 f44; };
struct func_801F7928_A { u8 pad0[0x2C]; struct func_801F7928_B *unk2C; };


struct func_801F3B6C_E { u16 a; u16 b; u8 pad[6]; };
struct func_801F3B6C_N { u8 pad0[4]; f32 unk4; f32 unk8; f32 unkC; u8 pad1[0x20]; f32 unk30; f32 unk34; f32 unk38; };
struct func_801F3B6C_M { u8 pad0[0x2C]; struct func_801F3B6C_N *unk2C; };
struct func_801F3B6C_A { u8 pad0[0x24]; struct func_801F3B6C_M *unk24; u8 pad1[0x34]; struct func_801F3B6C_S *unk5C; };
struct func_801F3B6C_S { u8 pad[0x1A]; u16 unk1A; };
struct func_801F7928_A;
extern struct func_801F7928_A *D_801BBCD8;
extern struct func_801F3B6C_E D_8017D250[];

void func_801F3B6C(struct func_801F3B6C_A *arg0) {
    s32 r;
    u16 key;
    u16 id;
    u16 i;
    struct func_801F3B6C_N *n;
    struct func_801F3B6C_N *p;
    struct func_801F3B6C_S *s;

    s = arg0->unk5C;
    key = s->unk1A;
    n = ((struct func_801F3B6C_M *)D_801BBCD8)->unk2C;
    p = arg0->unk24->unk2C;
    i = 0;
    r = func_8010843C(n->unk30, n->unk34, n->unk38, p->unk4, p->unk8 + 2.0f, p->unkC);
    if (r == 0) {
        for (; D_8017D250[i].a != 0; i++) {
            if (key == D_8017D250[i].a) break;
        }
        id = D_8017D250[i].b;
        if (id != 0) {
            p = arg0->unk24->unk2C;
            func_80127430(p->unk4, p->unk8, p->unkC, id, 1.0f, 1.0f);
        }
    }
}
#undef D_8017D250
#undef D_801BBCD8
#undef func_801F3B6C_A
#undef func_801F3B6C_E
#undef func_801F3B6C_M
#undef func_801F3B6C_N
#undef func_801F3B6C_S
#undef func_801F7928_A
#undef func_801F7928_B

#define D_801BBCD8 D_801BBCD8__func_801F3C90
#define func_8011AAF4 func_8011AAF4__func_801F3C90
#define func_801F7928_A func_801F7928_A__func_801F3C90
#define func_801F7928_B func_801F7928_B__func_801F3C90
struct func_801F7928_B { u8 pad0[0x30]; f32 f30; f32 f34; f32 f38; f32 f3c; f32 f40; f32 f44; };
struct func_801F7928_A { u8 pad0[0x2C]; struct func_801F7928_B *unk2C; };
extern struct func_801F7928_A *D_801BBCD8;
extern void func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);


typedef struct func_801F3C90_Struct {
    u8 pad0[0x1C];
    f32 unk1C;
    u8 pad20[0x10];
    f32 unk30;
    f32 unk34;
    f32 unk38;
    f32 unk3C;
    f32 unk40;
    f32 unk44;
} func_801F3C90_Struct;

#define FABS(x) ((x) < 0.0f ? -(x) : (x))

s32 func_801F3C90(s32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7, f32 arg8, f32 arg9, f32 arg10, f32 arg11) {
    f32 d0;
    f32 d1;
    f32 d2;
    f32 d3;
    f32 d4;
    f32 d5;
    f32 d6;
#define p ((func_801F3C90_Struct *)D_801BBCD8->unk2C)
    d0 = (arg3 - p->unk30) * arg2;
    d1 = (arg4 - p->unk34) * arg2;
    d2 = (arg5 - p->unk38) * arg2;
    d3 = (arg7 - p->unk3C) * arg6;
    d4 = (arg8 - p->unk40) * arg6;
    d5 = (arg9 - p->unk44) * arg6;
    d6 = (arg11 - p->unk1C) * arg10;
    func_8011AAF4("/hdisk1/u/nu64/rz011_usa/main/game/source/enemy/wanderer.c", 0x1D5, (void *)arg0, 0, 1,
                  1.0f, p->unk30 + d0, p->unk34 + d1, p->unk38 + d2,
                  1.0f, p->unk3C + d3, p->unk40 + d4, p->unk44 + d5,
                  1.0f, p->unk1C + d6, -1, -1);
    if (FABS(d0) < arg1 && FABS(d1) < arg1 && FABS(d2) < arg1 && FABS(d3) < arg1 &&
        FABS(d4) < arg1 && FABS(d5) < arg1 && FABS(d6) < arg1) {
        return 1;
    }
    return 0;
}
#undef p
#undef FABS
#undef D_801BBCD8
#undef func_8011AAF4
#undef func_801F7928_A
#undef func_801F7928_B

/* hh-block asm/nonmatchings/file010/801F3B30/_mrg_keep_text_func_801F3F60.s {"functions":["func_801F3F60"],"rodata":[]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file010/801F3B30/_mrg_keep_text_func_801F3F60.s")



typedef struct func_801F3F70_StructPos {
    u8 pad[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
} func_801F3F70_StructPos;

typedef struct func_801F3F70_StructMid {
    u8 pad[0x2C];
    func_801F3F70_StructPos *unk2C;
} func_801F3F70_StructMid;

typedef struct func_801F3F70_StructArg {
    u8 pad[0x24];
    func_801F3F70_StructMid *unk24;
} func_801F3F70_StructArg;

s16 func_801F3F70(arg0)
func_801F3F70_StructArg *arg0;
{
    f32 temp_fa0;
    f32 temp_fa1;
    f32 temp_fv0;
    s16 var_s0;
    func_801F3F70_StructPos *temp_v0;

    var_s0 = 0;
loop_1:
    temp_v0 = arg0->unk24->unk2C;
    temp_fa1 = temp_v0->unk8;
    temp_fa0 = temp_v0->unk4;
    temp_fv0 = temp_v0->unkC;
    if (func_8010843C(temp_fa0, temp_fa1, temp_fv0, temp_fa0, temp_fa1 - (f32) var_s0, temp_fv0) == 0) {
        var_s0 += 2;
        if (var_s0 < 0x1F4) {
            goto loop_1;
        }
    }
    return (s16) (var_s0 - 1);
}

#define func_801F3B5C func_801F3B5C__func_801F3FFC

struct func_801F3FFC_Node {
    u8 pad0[8];
    f32 unk8;
    u8 pad1[0x20];
    struct func_801F3FFC_Node *unk2C;
};

struct func_801F3FFC_Arg {
    u8 pad0[0x24];
    struct func_801F3FFC_Node *unk24;
};

extern struct func_801F3FFC_Node *D_801BBCD0;
extern u16 D_801BCAE0;
s32 func_8012A564(void *a0, f32 a1);
void func_801F3B5C(s32 a0);

s32 func_801F3FFC(struct func_801F3FFC_Arg *arg0, f32 arg1) {
    f32 var_fa1;
    f32 temp_fv0;
    f32 temp_fv1;
    f32 var_fa0;

    var_fa1 = 15.0f;
    if (D_801BCAE0 & 0x200) {
        var_fa1 = 25.0f;
    }
    if (func_8012A564(arg0, arg1) != 0) {
        temp_fv0 = D_801BBCD0->unk2C->unk8;
        temp_fv1 = arg0->unk24->unk2C->unk8;
        if (temp_fv0 < temp_fv1) {
            var_fa0 = -(temp_fv0 - temp_fv1);
        } else {
            var_fa0 = temp_fv0 - temp_fv1;
        }
        if (var_fa0 < var_fa1) {
            func_801F3B5C(1);
            return 1;
        }
    }
    return 0;
}
#undef func_801F3B5C

#define D_801BBCD0 D_801BBCD0__func_801F40BC
#define func_8012A564 func_8012A564__func_801F40BC
#define func_801F3B5C func_801F3B5C__func_801F40BC

typedef struct func_801F40BC_StructC {
    u8 pad0[0x8];
    f32 unk8;
} func_801F40BC_StructC;

typedef struct func_801F40BC_StructB {
    u8 pad0[0x2C];
    func_801F40BC_StructC *unk2C;
} func_801F40BC_StructB;

typedef struct func_801F40BC_Struct {
    u8 pad0[0x24];
    func_801F40BC_StructB *unk24;
    u8 pad1[0x92 - 0x28];
    s16 unk92;
} func_801F40BC_Struct;

s32 func_8012A564(void *, f32);
void func_801F3B5C(s32);
extern func_801F40BC_StructB *D_801BBCD0;

s32 func_801F40BC(func_801F40BC_Struct *arg0, f32 arg1) {
    f32 temp_fv0;
    f32 sp1C;

    temp_fv0 = arg0->unk24->unk2C->unk8 - D_801BBCD0->unk2C->unk8;
    sp1C = temp_fv0;
    if ((func_8012A564(arg0, arg1) != 0) && (temp_fv0 > 0.0f) && ((f64) temp_fv0 < ((f64) arg0->unk92 + 10.0))) {
        func_801F3B5C(1);
        return 1;
    }
    return 0;
}
#undef D_801BBCD0
#undef func_8012A564
#undef func_801F3B5C

#define D_801BBCD0 D_801BBCD0__func_801F4170
#define func_8012A564 func_8012A564__func_801F4170

typedef struct func_801F4170_Inner {
    u8 pad0[8];
    f32 unk8;
} func_801F4170_Inner;

typedef struct func_801F4170_Mid {
    u8 pad0[0x2C];
    func_801F4170_Inner *unk2C;
} func_801F4170_Mid;

typedef struct func_801F4170_Obj {
    u8 pad0[0x24];
    func_801F4170_Mid *unk24;
} func_801F4170_Obj;

extern s32 func_8012A564(void *, f32);
extern void *D_801BBCD0;

s32 func_801F4170(void *arg0, f32 arg1) {
    f32 temp_fv0;
    f32 sp1C;
    func_801F4170_Obj *obj;

    obj = arg0;
    temp_fv0 = obj->unk24->unk2C->unk8 - ((func_801F4170_Mid *) D_801BBCD0)->unk2C->unk8;
    sp1C = temp_fv0;
    if ((func_8012A564(arg0, arg1) == 0) && (temp_fv0 > 0.0f) && ((f64) temp_fv0 < 60.0)) {
        func_801F3B5C(1);
        return 1;
    }
    return 0;
}
#undef D_801BBCD0
#undef func_8012A564


typedef struct func_801F4208_SubStruct {
    u8 pad0[6];
    s16 unk6;
    s16 unk8;
    s16 unkA;
} func_801F4208_SubStruct;

typedef struct func_801F4208_Struct {
    u8 pad0[0x38];
    func_801F4208_SubStruct *unk38;
} func_801F4208_Struct;

typedef struct func_801F4208_Out {
    f32 unk0;
    f32 unk4;
    f32 unk8;
} func_801F4208_Out;

void func_801F4208(func_801F4208_Struct *arg0, func_801F4208_Out *arg1) {
    arg1->unk0 = (f32) ((f64) (f32) arg0->unk38->unk6 / 10.0);
    arg1->unk4 = (f32) ((f64) (f32) arg0->unk38->unk8 / 10.0);
    arg1->unk8 = (f32) ((f64) (f32) arg0->unk38->unkA / 10.0);
}


typedef struct func_801F4284_SubStruct {
    u8 pad0[6];
    s16 unk6;
    u8 pad1[2];
    s16 unkA;
} func_801F4284_SubStruct;

typedef struct func_801F4284_Struct {
    u8 pad0[0x38];
    func_801F4284_SubStruct *unk38;
    u8 pad1[0x94 - 0x3C];
    s16 unk94;
    s16 unk96;
} func_801F4284_Struct;

void func_801F4284(func_801F4284_Struct *arg0) {
    func_801F4284_SubStruct *temp_v0;

    temp_v0 = arg0->unk38;
    arg0->unk94 = (s16) (s32) ((f64) (f32) temp_v0->unk6 / 10.0);
    arg0->unk96 = (s16) (s32) ((f64) (f32) temp_v0->unkA / 10.0);
}


typedef struct func_801F42E4_Inner {
    u8 pad0[6];
    s16 unk6;
    u8 pad1[2];
    s16 unkA;
} func_801F42E4_Inner;
typedef struct func_801F42E4_Struct {
    u8 pad0[0x38];
    func_801F42E4_Inner *unk38;
    u8 pad1[0x94 - 0x3C];
    s16 unk94;
    s16 unk96;
    s16 unk98;
} func_801F42E4_Struct;

void func_801F42E4(func_801F42E4_Struct *arg0, u16 arg1) {
    s16 sp26;
    s16 y;

    arg0->unk98 = arg0->unk98 + 1;
    if ((arg0->unk98 % 100) == 0) {
        sp26 = (f64)func_8012C6B4(arg1) - arg1 * 0.5;
        y = (f64)func_8012C6B4(arg1) - arg1 * 0.5;
        arg0->unk94 = (f64)arg0->unk38->unk6 / 10.0 + (f64)sp26;
        arg0->unk96 = (f64)arg0->unk38->unkA / 10.0 + (f64)y;
    }
}

#define D_801BBCD0 D_801BBCD0__func_801F442C
#define func_801F3FFC_Node func_801F3FFC_Node__func_801F442C
struct func_801F3FFC_Node {
    u8 pad0[8];
    f32 unk8;
    u8 pad1[0x20];
    struct func_801F3FFC_Node *unk2C;
};
extern struct func_801F3FFC_Node *D_801BBCD0;


typedef struct func_801F442C_Pos {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
} func_801F442C_Pos;

typedef struct func_801F442C_Sub {
    u8 pad0[6];
    s16 unk6;
    u8 pad1[2];
    s16 unkA;
} func_801F442C_Sub;

typedef struct func_801F442C_Obj {
    u8 pad0[0x24];
    struct func_801F3FFC_Node *unk24;
    u8 pad1[0x10];
    func_801F442C_Sub *unk38;
} func_801F442C_Obj;

#define P1 ((func_801F442C_Pos *)D_801BBCD0->unk2C)

s32 func_801F442C(void *arg0v, f32 arg1) {
    func_801F442C_Obj *arg0 = arg0v;
    f32 sum;
    f32 q1;
    f32 q2;

    q1 = (f32)arg0->unk38->unk6 / 10.0;
    q2 = (f32)arg0->unk38->unkA / 10.0;
    sum = (P1->unk4 - q1) * (P1->unk4 - q1) + (P1->unkC - q2) * (P1->unkC - q2);
    if (sum < arg1 * arg1) {
        if (D_801BBCD0->unk2C->unk8 < arg0->unk24->unk2C->unk8) {
            sum = -(D_801BBCD0->unk2C->unk8 - arg0->unk24->unk2C->unk8);
        } else {
            sum = D_801BBCD0->unk2C->unk8 - arg0->unk24->unk2C->unk8;
        }
        if (sum < 25.0) {
            return 1;
        }
    }
    return 0;
}
#undef P1
#undef D_801BBCD0
#undef func_801F3FFC_Node


typedef struct func_801F4514_StructSub {
    u8 pad[6];
    s16 unk6;
    u8 pad8[2];
    s16 unkA;
} func_801F4514_StructSub;
typedef struct func_801F4514_Struct {
    u8 pad[0x38];
    func_801F4514_StructSub *unk38;
} func_801F4514_Struct;
typedef struct func_801F4514_StructPos {
    u8 pad[4];
    f32 unk4;
    u8 pad8[4];
    f32 unkC;
} func_801F4514_StructPos;

s32 func_801F4514(func_801F4514_Struct *arg0, f32 arg1) {
    f32 temp_fa0;
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 temp_fv1;
    f32 var_fa0;
    f32 var_fa1;
    func_801F4514_StructSub *temp_v0;
    func_801F4514_StructPos *temp_v1;

    temp_v0 = arg0->unk38;
    temp_fv0 = (f32) ((f64) (f32) temp_v0->unk6 / 10.0);
    temp_fv1 = (f32) ((f64) (f32) temp_v0->unkA / 10.0);
    temp_v1 = (func_801F4514_StructPos *)D_801BBCD0->unk2C;
    temp_fa0 = temp_v1->unk4;
    if (temp_fa0 < temp_fv0) {
        var_fa1 = -(temp_fa0 - temp_fv0);
    } else {
        var_fa1 = temp_fa0 - temp_fv0;
    }
    if (var_fa1 < arg1) {
        temp_fv0_2 = temp_v1->unkC;
        if (temp_fv0_2 < temp_fv1) {
            var_fa0 = -(temp_fv0_2 - temp_fv1);
        } else {
            var_fa0 = temp_fv0_2 - temp_fv1;
        }
        if (var_fa0 < arg1) {
            return 1;
        }
    }
    return 0;
}


typedef struct func_801F45E4_Struct2C {
    u8 pad0[4];
    f32 unk4;
    u8 pad8[4];
    f32 unkC;
} func_801F45E4_Struct2C;

typedef struct func_801F45E4_Struct24 {
    u8 pad0[0x2C];
    func_801F45E4_Struct2C *unk2C;
} func_801F45E4_Struct24;

typedef struct func_801F45E4_StructA0 {
    u8 pad0[0x24];
    func_801F45E4_Struct24 *unk24;
} func_801F45E4_StructA0;

typedef struct func_801F45E4_StructA1 {
    f32 unk0;
    f32 unk4;
    f32 unk8;
} func_801F45E4_StructA1;

#define func_801F45E4_Struct24 func_801F45E4_Struct24__func_801F45E4
#define func_801F45E4_Struct2C func_801F45E4_Struct2C__func_801F45E4
#define func_801F45E4_StructA0 func_801F45E4_StructA0__func_801F45E4
#define func_801F45E4_StructA1 func_801F45E4_StructA1__func_801F45E4

typedef struct func_801F45E4_Struct2C {
    u8 pad0[4];
    f32 unk4;
    u8 pad8[4];
    f32 unkC;
} func_801F45E4_Struct2C;

typedef struct func_801F45E4_Struct24 {
    u8 pad0[0x2C];
    func_801F45E4_Struct2C *unk2C;
} func_801F45E4_Struct24;

typedef struct func_801F45E4_StructA0 {
    u8 pad0[0x24];
    func_801F45E4_Struct24 *unk24;
} func_801F45E4_StructA0;

typedef struct func_801F45E4_StructA1 {
    f32 unk0;
    f32 unk4;
    f32 unk8;
} func_801F45E4_StructA1;

#undef func_801F45E4_Struct24
#undef func_801F45E4_Struct2C
#undef func_801F45E4_StructA0
#undef func_801F45E4_StructA1
#define func_801F45E4_Struct24 func_801F45E4_Struct24__func_801F45E4_bec97a38
#define func_801F45E4_Struct2C func_801F45E4_Struct2C__func_801F45E4_bec97a38
#define func_801F45E4_StructA0 func_801F45E4_StructA0__func_801F45E4_bec97a38
#define func_801F45E4_StructA1 func_801F45E4_StructA1__func_801F45E4_bec97a38

typedef struct func_801F45E4_Struct2C {
    u8 pad0[4];
    f32 unk4;
    u8 pad8[4];
    f32 unkC;
} func_801F45E4_Struct2C;

typedef struct func_801F45E4_Struct24 {
    u8 pad0[0x2C];
    func_801F45E4_Struct2C *unk2C;
} func_801F45E4_Struct24;

typedef struct func_801F45E4_StructA0 {
    u8 pad0[0x24];
    func_801F45E4_Struct24 *unk24;
} func_801F45E4_StructA0;

typedef struct func_801F45E4_StructA1 {
    f32 unk0;
    f32 unk4;
    f32 unk8;
} func_801F45E4_StructA1;

void func_801F45E4(func_801F45E4_StructA0 *arg0, func_801F45E4_StructA1 *arg1, f32 arg2, f32 arg3)
{
  arg1->unk0 = arg2 - arg0->unk24->unk2C->unk4;
  arg1->unk8 = arg3 - arg0->unk24->unk2C->unkC;
  ;
  arg1->unk4 = 0.0f;
}
#undef func_801F45E4_Struct24
#undef func_801F45E4_Struct2C
#undef func_801F45E4_StructA0
#undef func_801F45E4_StructA1
#define func_801F45E4_Struct24 func_801F45E4_Struct24__func_801F45E4
#define func_801F45E4_Struct2C func_801F45E4_Struct2C__func_801F45E4
#define func_801F45E4_StructA0 func_801F45E4_StructA0__func_801F45E4
#define func_801F45E4_StructA1 func_801F45E4_StructA1__func_801F45E4
#undef func_801F45E4_Struct24
#undef func_801F45E4_Struct2C
#undef func_801F45E4_StructA0
#undef func_801F45E4_StructA1


typedef struct func_801F4620_Struct {
    f32 unk0;
    f32 unk4;
    f32 unk8;
} func_801F4620_Struct;

void func_801F4620(func_801F4620_Struct *arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6) {
    arg0->unk0 = arg4 - arg1;
    arg0->unk4 = arg5 - arg2;
    arg0->unk8 = arg6 - arg3;
}


typedef struct func_801F4658_Struct {
    f32 unk0;
    u8 pad4[4];
    f32 unk8;
} func_801F4658_Struct;

extern void func_8001EF38(f32, f32);

void func_801F4658(func_801F4658_Struct *arg0) {
    func_8001EF38(arg0->unk0, arg0->unk8);
}


typedef struct func_801F467C_Struct {
    f32 unk0;
    f32 unk4;
    f32 unk8;
} func_801F467C_Struct;

f32 func_8001EAD0(s16);
f32 func_8001EB64(s16);

void func_801F467C(s16 arg0, func_801F467C_Struct *arg1) {
    arg1->unk0 = 20.0f * func_8001EAD0(arg0);
    arg1->unk8 = 20.0f * func_8001EB64(arg0);
    arg1->unk4 = 0.0f;
}

#undef func_801F46DC
#define D_801F4658 D_801F4658__func_801F46DC
#define func_801F45E4 func_801F45E4__func_801F46DC
#define func_801F45E4_Struct24 func_801F45E4_Struct24__func_801F46DC
#define func_801F45E4_Struct2C func_801F45E4_Struct2C__func_801F46DC
#define func_801F45E4_StructA0 func_801F45E4_StructA0__func_801F46DC
#define func_801F45E4_StructA1 func_801F45E4_StructA1__func_801F46DC
#define func_801F4658_Struct func_801F4658_Struct__func_801F46DC
typedef struct func_801F45E4_Struct2C {
    u8 pad0[4];
    f32 unk4;
    u8 pad8[4];
    f32 unkC;
} func_801F45E4_Struct2C;
typedef struct func_801F45E4_Struct24 {
    u8 pad0[0x2C];
    func_801F45E4_Struct2C *unk2C;
} func_801F45E4_Struct24;
typedef struct func_801F45E4_StructA0 {
    u8 pad0[0x24];
    func_801F45E4_Struct24 *unk24;
} func_801F45E4_StructA0;
typedef struct func_801F45E4_StructA1 {
    f32 unk0;
    f32 unk4;
    f32 unk8;
} func_801F45E4_StructA1;
void func_801F45E4(func_801F45E4_StructA0 *arg0, func_801F45E4_StructA1 *arg1, f32 arg2, f32 arg3);
typedef struct func_801F4658_Struct {
    f32 unk0;
    u8 pad4[4];
    f32 unk8;
} func_801F4658_Struct;


typedef struct func_801F46DC_Struct2C {
    u8 pad0[0x12];
    s16 unk12;
} func_801F46DC_Struct2C;
typedef struct func_801F46DC_Struct24 {
    u8 pad0[0x2C];
    func_801F46DC_Struct2C *unk2C;
} func_801F46DC_Struct24;
typedef struct func_801F46DC_Struct0 {
    u8 pad0[0x24];
    func_801F46DC_Struct24 *unk24;
} func_801F46DC_Struct0;
extern s32 D_801F4658(void *);

s32 func_801F46DC(s32 a0, s16 *a1, s16 *a2, f32 a3, f32 a4) {
    func_801F4658_Struct sp1C;
    s16 v;
    func_801F45E4((func_801F45E4_StructA0 *)a0, (func_801F45E4_StructA1 *)&sp1C, a3, a4);
    v = D_801F4658(&sp1C) & 0xFFFF;
    *a1 = ((func_801F46DC_Struct0 *)a0)->unk24->unk2C->unk12 & 0x1FFF;
    *a2 = (s16)(v - *a1) & 0x1FFF;
}
#undef D_801F4658
#undef func_801F45E4
#undef func_801F45E4_Struct24
#undef func_801F45E4_Struct2C
#undef func_801F45E4_StructA0
#undef func_801F45E4_StructA1
#undef func_801F4658_Struct
#define func_801F46DC func_801F46DC__merge_frozen

#undef func_801F474C
#define D_801F46DC D_801F46DC__func_801F474C
#define func_8012C6B4 func_8012C6B4__func_801F474C
extern s32 func_8012C6B4(s32);


typedef struct func_801F474C_StructInner {
    u8 pad[0x12];
    s16 unk12;
} func_801F474C_StructInner;

typedef struct func_801F474C_StructMid {
    u8 pad[0x2C];
    func_801F474C_StructInner *unk2C;
} func_801F474C_StructMid;

typedef struct func_801F474C_Struct {
    u8 pad[0x24];
    func_801F474C_StructMid *unk24;
} func_801F474C_Struct;

extern void D_801F46DC(func_801F474C_Struct *, s16 *, s16 *, f32, f32);

#undef D_801F46DC
#undef func_8012C6B4
#define D_801F46DC D_801F46DC__func_801F474C_ca7c2fdb
#define func_8012C6B4 func_8012C6B4__func_801F474C_ca7c2fdb
#define func_801F474C_Struct func_801F474C_Struct__func_801F474C_ca7c2fdb
#define func_801F474C_StructInner func_801F474C_StructInner__func_801F474C_ca7c2fdb
#define func_801F474C_StructMid func_801F474C_StructMid__func_801F474C_ca7c2fdb
extern s32 func_8012C6B4(s32);


typedef struct func_801F474C_StructInner {
    u8 pad[0x12];
    s16 unk12;
} func_801F474C_StructInner;

typedef struct func_801F474C_StructMid {
    u8 pad[0x2C];
    func_801F474C_StructInner *unk2C;
} func_801F474C_StructMid;

typedef struct func_801F474C_Struct {
    u8 pad[0x24];
    func_801F474C_StructMid *unk24;
} func_801F474C_Struct;

extern void D_801F46DC(func_801F474C_Struct *, s16 *, s16 *, f32, f32);

void func_801F474C(func_801F474C_Struct *arg0, s16 arg1, f32 arg2, f32 arg3) {
    s32 sum;
    s32 mul;
    s32 angle;
    s8 dir;
    s16 sp28;
    s16 sp26;

    D_801F46DC(arg0, &sp28, &sp26, arg2, arg3);
    if (sp26 < 0x64) {
        dir = 0;
    } else if (sp26 > 0x1000) {
        dir = -1;
    } else {
        dir = 1;
    }
    mul = func_8012C6B4(arg1);
    sum = sp28 + dir * mul;
    sp28 = sum;
    angle = sp28 & 0x1FFF;
    arg0->unk24->unk2C->unk12 = angle;
}
#undef D_801F46DC
#undef func_8012C6B4
#undef func_801F474C_Struct
#undef func_801F474C_StructInner
#undef func_801F474C_StructMid
#define D_801F46DC D_801F46DC__func_801F474C
#define func_8012C6B4 func_8012C6B4__func_801F474C
#undef D_801F46DC
#undef func_8012C6B4
#define func_801F474C func_801F474C__merge_frozen

#define D_801BBCD0 D_801BBCD0__func_801F47EC
#define func_801477C4 func_801477C4__func_801F47EC
#define func_801F3FFC_Node func_801F3FFC_Node__func_801F47EC
#define func_801F45E4 func_801F45E4__func_801F47EC
#define func_801F45E4_Struct24 func_801F45E4_Struct24__func_801F47EC
#define func_801F45E4_Struct2C func_801F45E4_Struct2C__func_801F47EC
#define func_801F45E4_StructA0 func_801F45E4_StructA0__func_801F47EC
#define func_801F45E4_StructA1 func_801F45E4_StructA1__func_801F47EC
#define func_801F4658 func_801F4658__func_801F47EC
#define ABSV(x) (((x) < 0) ? -(x) : (x))
#define S13(x) (((x) & 0x1000) ? ((x) & 0x1FFF) - 0x2000 : ((x) & 0x1FFF))
#define ABSV(x) (((x) < 0) ? -(x) : (x))
struct func_801F3FFC_Node {
    u8 pad0[8];
    f32 unk8;
    u8 pad1[0x20];
    struct func_801F3FFC_Node *unk2C;
};
extern struct func_801F3FFC_Node *D_801BBCD0;
#define S13(x) (((x) & 0x1000) ? ((x) & 0x1FFF) - 0x2000 : ((x) & 0x1FFF))
typedef struct func_801F45E4_Struct2C {
    u8 pad0[4];
    f32 unk4;
    u8 pad8[4];
    f32 unkC;
} func_801F45E4_Struct2C;
typedef struct func_801F45E4_Struct24 {
    u8 pad0[0x2C];
    func_801F45E4_Struct2C *unk2C;
} func_801F45E4_Struct24;
typedef struct func_801F45E4_StructA0 {
    u8 pad0[0x24];
    func_801F45E4_Struct24 *unk24;
} func_801F45E4_StructA0;
typedef struct func_801F45E4_StructA1 {
    f32 unk0;
    f32 unk4;
    f32 unk8;
} func_801F45E4_StructA1;
void func_801F45E4(func_801F45E4_StructA0 *arg0, func_801F45E4_StructA1 *arg1, f32 arg2, f32 arg3);
extern s32 func_801F4658();
extern void func_801477C4(void *, s32);
struct func_801F47EC_Struct { u8 pad[0x12]; s16 unk12; };
#undef ABSV
#undef D_801BBCD0
#undef S13
#undef func_801477C4
#undef func_801F3FFC_Node
#undef func_801F45E4
#undef func_801F45E4_Struct24
#undef func_801F45E4_Struct2C
#undef func_801F45E4_StructA0
#undef func_801F45E4_StructA1
#define D_801BBCD0 D_801BBCD0__func_801F47EC_3e798f3b
#define D_801F4658 D_801F4658__func_801F47EC_3e798f3b
#define func_801477C4 func_801477C4__func_801F47EC_3e798f3b
#define func_801F3FFC_Node func_801F3FFC_Node__func_801F47EC_3e798f3b
#define func_801F45E4 func_801F45E4__func_801F47EC_3e798f3b
#define func_801F45E4_Struct24 func_801F45E4_Struct24__func_801F47EC_3e798f3b
#define func_801F45E4_Struct2C func_801F45E4_Struct2C__func_801F47EC_3e798f3b
#define func_801F45E4_StructA0 func_801F45E4_StructA0__func_801F47EC_3e798f3b
#define func_801F45E4_StructA1 func_801F45E4_StructA1__func_801F47EC_3e798f3b
#define func_801F47EC_Struct func_801F47EC_Struct__func_801F47EC_3e798f3b
#define ABSV(x) (((x) < 0) ? -(x) : (x))
#define S13(x) (((x) & 0x1000) ? ((x) & 0x1FFF) - 0x2000 : ((x) & 0x1FFF))
#define ABSV(x) (((x) < 0) ? -(x) : (x))
struct func_801F3FFC_Node {
    u8 pad0[8];
    f32 unk8;
    u8 pad1[0x20];
    struct func_801F3FFC_Node *unk2C;
};
extern struct func_801F3FFC_Node *D_801BBCD0;
extern s32 D_801F4658(void *);
#define S13(x) (((x) & 0x1000) ? ((x) & 0x1FFF) - 0x2000 : ((x) & 0x1FFF))
typedef struct func_801F45E4_Struct2C {
    u8 pad0[4];
    f32 unk4;
    u8 pad8[4];
    f32 unkC;
} func_801F45E4_Struct2C;
typedef struct func_801F45E4_Struct24 {
    u8 pad0[0x2C];
    func_801F45E4_Struct2C *unk2C;
} func_801F45E4_Struct24;
typedef struct func_801F45E4_StructA0 {
    u8 pad0[0x24];
    func_801F45E4_Struct24 *unk24;
} func_801F45E4_StructA0;
typedef struct func_801F45E4_StructA1 {
    f32 unk0;
    f32 unk4;
    f32 unk8;
} func_801F45E4_StructA1;
void func_801F45E4(func_801F45E4_StructA0 *arg0, func_801F45E4_StructA1 *arg1, f32 arg2, f32 arg3);
extern void func_801477C4(void *, s32);

struct func_801F47EC_Struct {
    u8 pad[0x12];
    s16 angle;
};

s32 func_801F47EC(s32 arg0) {
    s16 a;
    s16 b;
    s32 t;
    func_801F45E4_StructA1 sp34;

    func_801F45E4((func_801F45E4_StructA0 *)arg0, &sp34, ((func_801F45E4_Struct2C *)D_801BBCD0->unk2C)->unk4, ((func_801F45E4_Struct2C *)D_801BBCD0->unk2C)->unkC);
    func_801477C4(&sp34, 0xBF800000);
    t = D_801F4658(&sp34);
    b = ((struct func_801F47EC_Struct *)D_801BBCD0->unk2C)->angle & 0x1FFF;
    a = t - b;
    a = a & 0x1FFF;
    t = ABSV(S13(a));
    if (t < 0x9C7) {
        return 1;
    }
    return 0;
}
#undef ABSV
#undef S13
#undef D_801BBCD0
#undef D_801F4658
#undef func_801477C4
#undef func_801F3FFC_Node
#undef func_801F45E4
#undef func_801F45E4_Struct24
#undef func_801F45E4_Struct2C
#undef func_801F45E4_StructA0
#undef func_801F45E4_StructA1
#undef func_801F47EC_Struct
#define ABSV(x) (((x) < 0) ? -(x) : (x))
#define D_801BBCD0 D_801BBCD0__func_801F47EC
#define S13(x) (((x) & 0x1000) ? ((x) & 0x1FFF) - 0x2000 : ((x) & 0x1FFF))
#define func_801477C4 func_801477C4__func_801F47EC
#define func_801F3FFC_Node func_801F3FFC_Node__func_801F47EC
#define func_801F45E4 func_801F45E4__func_801F47EC
#define func_801F45E4_Struct24 func_801F45E4_Struct24__func_801F47EC
#define func_801F45E4_Struct2C func_801F45E4_Struct2C__func_801F47EC
#define func_801F45E4_StructA0 func_801F45E4_StructA0__func_801F47EC
#define func_801F45E4_StructA1 func_801F45E4_StructA1__func_801F47EC
#undef ABSV
#undef S13
#undef D_801BBCD0
#undef func_801477C4
#undef func_801F3FFC_Node
#undef func_801F45E4
#undef func_801F45E4_Struct24
#undef func_801F45E4_Struct2C
#undef func_801F45E4_StructA0
#undef func_801F45E4_StructA1
#undef func_801F4658

s32 func_801F46DC(s32 a0, s16 *a1, s16 *a2, s32 a3, f32 a4);

struct func_801F48C8_Struct {
    u8 pad0[4];
    s32 unk4;
    f32 unk8;
    f32 unkC;
};

#define S13(x) (((x) & 0x1000) ? ((x) & 0x1FFF) - 0x2000 : ((x) & 0x1FFF))
#define ABSV(x) (((x) < 0) ? -(x) : (x))

s32 func_801F48C8(arg0, arg1)
    struct func_801F3FFC_Arg *arg0;
    u8 arg1;
{
    s16 sp46;
    s16 sp44;
    struct func_801F48C8_Struct *p;

    p = (struct func_801F48C8_Struct *)D_801BBCD0->unk2C;
    func_801F46DC((s32)arg0, &sp46, &sp44, p->unk4, p->unkC);
    if (ABSV(S13(sp44)) < 0x9C7) {
        if (((D_801BBCD0->unk2C->unk8 < arg0->unk24->unk2C->unk8) ? -(D_801BBCD0->unk2C->unk8 - arg0->unk24->unk2C->unk8) : (D_801BBCD0->unk2C->unk8 - arg0->unk24->unk2C->unk8)) < (f32)arg1) {
            return 1;
        }
    }
    return 0;
}


struct func_801F49E0_Inner {
    u8 pad0[0x4];
    s32 unk4;
    u8 pad1[0x4];
    f32 unkC;
};


s32 func_801F49E0(s32 a0) {
    s16 sp26;
    s16 sp24;
    s32 var_v0;

    func_801F46DC(a0, &sp26, &sp24, ((struct func_801F49E0_Inner *)D_801BBCD0->unk2C)->unk4, ((struct func_801F49E0_Inner *)D_801BBCD0->unk2C)->unkC);
    if (sp24 & 0x1000) {
        var_v0 = (sp24 & 0x1FFF) - 0x2000;
    } else {
        var_v0 = sp24 & 0x1FFF;
    }
    if (var_v0 < 0) {
        return 1;
    }
    return 0;
}

#define func_801F48C8 func_801F48C8__func_801F4A48

typedef struct func_801F4A48_Struct {
    u8 pad[0x92];
    u8 unk92;
    u8 unk93;
} func_801F4A48_Struct;

s32 func_801F48C8();

void func_801F4A48(func_801F4A48_Struct *arg0) {
    u8 temp_v0;

    arg0->unk93 = 1;
    if (func_801F48C8(arg0, 0xA) != 0) {
        arg0->unk92 = 0x3C;
        return;
    }
    temp_v0 = arg0->unk92;
    if ((s32) temp_v0 > 0) {
        arg0->unk92 = temp_v0 - 1;
        return;
    }
    arg0->unk93 = 0;
}
#undef func_801F48C8


typedef struct func_801F4AA0_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801F4AA0_Struct;

typedef struct func_801F4AA0_Inner {
    u8 pad0[0x18];
    s32 unk18;
} func_801F4AA0_Inner;

typedef struct func_801F4AA0_Obj {
    u8 pad0[0x38];
    func_801F4AA0_Inner *unk38;
    u8 pad1[0xAE - 0x3C];
    u8 unkAE;
} func_801F4AA0_Obj;

s32 func_801DBE94(void *arg0, s32 arg1);
extern func_801F4AA0_Struct D_80216EE8;
extern func_801F4AA0_Struct D_8021B018;

/* K&R-style definition: keeps the function unprototyped so the zero-argument
   call to func_801F4AA0() elsewhere in this file still type-checks. */
void func_801F4AA0(arg0)
void *arg0;
{
  s32 temp_v0;
  temp_v0 = func_801DBE94(arg0, 0);
  D_80216EE8.unk0 = temp_v0;
  D_8021B018 = D_80216EE8;
  ((func_801F4AA0_Obj *) arg0)->unkAE = ((func_801F4AA0_Obj *) arg0)->unk38->unk18 & 0xFFFFu;
}

#define func_801F7554 func_801F7554__func_801F4AFC
#define func_801F75B0 func_801F75B0__func_801F4AFC
#define func_801F832C func_801F832C__func_801F4AFC

typedef struct func_801F4AFC_StructInner {
    u8 pad[0x18];
    u32 unk18;
} func_801F4AFC_StructInner;
typedef struct func_801F4AFC_Struct {
    u8 pad[0x38];
    func_801F4AFC_StructInner *unk38;
    u8 pad3C[0x72];
    u8 unkAE;
    u8 padAF;
    void *unkB0;
} func_801F4AFC_Struct;

extern void func_801478D4(void *, s32);
extern void func_80147AA8(s32, s32, s32, s32);
extern void func_80147AF0(s32, s32, s32, s32);
extern void func_80147C28(s32, s32, s32, s32);
struct func_801F7554_Struct;
struct func_801F75B0_Struct;
extern void func_801F7554(struct func_801F7554_Struct *, s32);
extern void func_801F75B0(struct func_801F75B0_Struct *, s32);
extern void func_801F832C(void *, s32);

void func_801F4AFC(func_801F4AFC_Struct *arg0, s32 arg1) {
    func_801F4620_Struct sp34;
    s32 temp_v0;

    if (arg0->unkAE == 0) {
        arg0->unkAE = 0x23;
    }
    temp_v0 = (arg0->unk38->unk18 >> 16) & 0xFF;
    if (temp_v0 == 0) goto case0;
    if (temp_v0 == 1) goto case1;
    if (temp_v0 != 2) goto end;
    goto case2;
    end:
    return;
    case0:
    {
        arg0->unkB0 = func_801F7554;
        return;
    }
    case1:
    {
        func_801478D4(arg0, 0);
        func_80147AA8(0, 0x20, 0, 0);
        func_80147AF0(0, 0, 0, 0);
        func_80147C28(0, 0x43, -0x64, -0x43);
        arg0->unkB0 = func_801F75B0;
        return;
    }
    case2:
    {
        func_801478D4(arg0, 0);
        func_80147AA8(0, 0x3C, 0x3C, 0x3C);
        func_80147AF0(0, 0, 0, 0xC8);
        func_801F4620(&sp34, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 100.0f);
        func_80147C28(0, 0, -0x64, 0);
        arg0->unkB0 = func_801F832C;
    }
}
#undef func_801F7554
#undef func_801F75B0
#undef func_801F832C

#define func_801F3B5C func_801F3B5C__func_801F4C4C
#define func_801F3F70 func_801F3F70__func_801F4C4C
#define func_801F9974 func_801F9974__func_801F4C4C

typedef struct func_801F4C4C_SubB {
    u8 pad0[0x8];
    f32 unk8;
} func_801F4C4C_SubB;

typedef struct func_801F4C4C_SubA {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad1[0x9];
    func_801F4C4C_SubB *unk2C;
} func_801F4C4C_SubA;

typedef struct func_801F4C4C_Struct {
    u8 pad0[0x24];
    func_801F4C4C_SubA *unk24;
    u8 pad1[0x16];
    u8 unk3E;
    u8 pad2[0x53];
    s16 unk92;
    f32 unk94;
    u8 pad3[0x16];
    u8 unkAE;
    u8 pad4[0x1];
    void *unkB0;
} func_801F4C4C_Struct;

typedef struct func_801F4C4C_Global {
    s32 unk0;
    s16 unk4;
    s16 unk6;
    s32 unk8;
} func_801F4C4C_Global;

extern s32 func_8013A1B4();
extern void func_801F3B5C(s32);
extern s16 func_801F3F70();
extern func_801F4C4C_Global D_80216ED0;
extern void func_801F9974();

void func_801F4C4C(func_801F4C4C_Struct *arg0, s32 arg1) {
    arg0->unk92 = func_801F3F70();
    if (arg0->unk92 >= 0xC9) {
        arg0->unk24->unk22 = 0;
    }
    if (arg0->unkAE == 0) {
        arg0->unkAE = 0x23;
    }
    arg0->unk3E = 3;
    arg0->unk94 = (f32) ((arg0->unk24->unk2C->unk8 - (f32) arg0->unk92) + 3.0f);
    D_80216ED0.unk6 = 1;
    func_8013A1B4(arg1, D_80216ED0, 0x1FFFFF);
    arg0->unkB0 = func_801F9974;
    func_801F3B5C(0);
}
#undef func_801F3B5C
#undef func_801F3F70
#undef func_801F9974

#define D_80216E7C D_80216E7C__func_801F4D30
#define D_80216E88 D_80216E88__func_801F4D30
#define D_80216EF4 D_80216EF4__func_801F4D30
#define D_80216F00 D_80216F00__func_801F4D30
#define D_80218C94 D_80218C94__func_801F4D30
#define D_80218C98 D_80218C98__func_801F4D30
#define D_80218C9C D_80218C9C__func_801F4D30
#define D_8021AFE8 D_8021AFE8__func_801F4D30
#define D_8021AFF8 D_8021AFF8__func_801F4D30
#define D_8021B018 D_8021B018__func_801F4D30
#define func_80010550 func_80010550__func_801F4D30
#define func_801F4284 func_801F4284__func_801F4D30
#define func_801F4284_Struct func_801F4284_Struct__func_801F4D30
#define func_801F4284_SubStruct func_801F4284_SubStruct__func_801F4D30
#define func_801F4AA0_Struct func_801F4AA0_Struct__func_801F4D30
#define func_801F5230_StructB func_801F5230_StructB__func_801F4D30
#define func_801F6008 func_801F6008__func_801F4D30
#define func_801F6008_Struct func_801F6008_Struct__func_801F4D30
#define func_801F60D8 func_801F60D8__func_801F4D30
#define func_801F60D8_Obj func_801F60D8_Obj__func_801F4D30
#define func_801F63E0 func_801F63E0__func_801F4D30
#define func_801F63E0_Struct3 func_801F63E0_Struct3__func_801F4D30
#define func_801F6534 func_801F6534__func_801F4D30
#define func_801F6534_Struct func_801F6534_Struct__func_801F4D30
#define func_801F6820 func_801F6820__func_801F4D30
#define func_801F6820_Struct func_801F6820_Struct__func_801F4D30
#define func_801F6A3C func_801F6A3C__func_801F4D30
#define func_801F6A3C_Struct func_801F6A3C_Struct__func_801F4D30
#define func_801F6C58 func_801F6C58__func_801F4D30
typedef struct func_801F63E0_Struct3 { s32 w0; s32 w1; s32 w2; } func_801F63E0_Struct3;
extern func_801F63E0_Struct3 D_8021AFF8;
typedef struct func_801F4AA0_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801F4AA0_Struct;
extern func_801F4AA0_Struct D_8021B018;
extern s32 func_80010550();
typedef struct func_801F4284_SubStruct {
    u8 pad0[6];
    s16 unk6;
    u8 pad1[2];
    s16 unkA;
} func_801F4284_SubStruct;
typedef struct func_801F4284_Struct {
    u8 pad0[0x38];
    func_801F4284_SubStruct *unk38;
    u8 pad1[0x94 - 0x3C];
    s16 unk94;
    s16 unk96;
} func_801F4284_Struct;
void func_801F4284(func_801F4284_Struct *arg0);
struct func_801F5230_StructB {
    u8 pad0[0x78];
    s16 unk78;
};
struct func_801F6008_Struct {
    u8 pad0[0x5C];
    struct func_801F5230_StructB *unk5C;
    u8 pad1[0xAE - 0x60];
    u8 unkAE;
    u8 unkAF;
};
void func_801F6008(struct func_801F6008_Struct *arg0, s32 arg1);
extern void func_801F60D8();
void func_801F63E0(struct func_801F6008_Struct *arg0, s32 arg1);
typedef struct func_801F6534_Struct {
    u8 pad0[0x3C];
    u16 unk3C;
    u8 pad3E[0x5C - 0x3E];
    struct func_801F5230_StructB *unk5C;
    u8 pad60[0x90 - 0x60];
    s16 unk90;
    u8 pad92[2];
    s16 unk94;
    s16 unk96;
    u8 pad98[2];
    u16 unk9A;
    u8 unk9C;
    u8 pad9D[0xAE - 0x9D];
    u8 unkAE;
    u8 unkAF;
} func_801F6534_Struct;
void func_801F6534(func_801F6534_Struct *arg0, s32 arg1);
struct func_801F6820_Struct {
    u8 pad0[0x5C];
    struct func_801F5230_StructB *unk5C;
    u8 pad60[0x90 - 0x60];
    s16 unk90;
    u8 pad92[2];
    s16 unk94;
    s16 unk96;
    u16 unk98;
    u16 unk9A;
    u8 unk9C;
    u8 unk9D;
    u8 pad9E[0xAE - 0x9E];
    u8 unkAE;
    u8 unkAF;
};
void func_801F6820(struct func_801F6820_Struct *arg0, s32 arg1);
typedef struct func_801F6A3C_Struct {
    u8 pad0[0x5C];
    struct func_801F5230_StructB *unk5C;
    u8 pad60[0x30];
    s16 unk90;
    s16 unk92;
    s16 unk94;
    s16 unk96;
    s16 unk98;
    u16 unk9A;
    u8 unk9C;
    u8 unk9D;
    u8 pad9E[0x10];
    u8 unkAE;
    u8 unkAF;
} func_801F6A3C_Struct;
void func_801F6A3C(func_801F6A3C_Struct *arg0, s32 arg1);
typedef struct func_801F60D8_Obj {
    u8 pad0[0x3C];
    u16 unk3C;
    u8 pad3E[0x5C - 0x3E];
    struct func_801F5230_StructB *unk5C;
    u8 pad60[0x90 - 0x60];
    s16 unk90;
    u8 pad92[1];
    u8 unk93;
    s16 unk94;
    s16 unk96;
    u8 pad98[2];
    u16 unk9A;
    u8 pad9C[0xAE - 0x9C];
    u8 unkAE;
    s8 unkAF;
} func_801F60D8_Obj;
void func_801F6C58(func_801F60D8_Obj *arg0, s32 arg1);


typedef struct func_801F4D30_StructInner {
    u16 pad0;
    u16 id;
    u8 pad4[0x14];
    u32 flags;
} func_801F4D30_StructInner;
typedef struct func_801F4D30_Struct {
    u8 pad0[0x2C];
    u32 flags;
    u8 pad30[8];
    func_801F4D30_StructInner *inner;
    s16 timer;
    u8 pad3E[0xE];
    s8 a, b, c, d, e;
    u8 pad51[3];
    s32 field54;
    u8 pad58[4];
    void *sub;
    u8 pad60[0x30];
    s16 field90;
    u8 field92, field93;
    u8 pad94[6];
    s16 field9A;
    u8 field9C;
    u8 pad9D[0x11];
    u8 fieldAE;
    u8 padAF;
    void *callback;
} func_801F4D30_Struct;
extern func_801F63E0_Struct3 D_80216EF4;
extern func_801F4AA0_Struct D_80216F00;
extern func_801F4AA0_Struct D_80216E7C;
extern func_801F63E0_Struct3 D_80216E88;
extern func_801F63E0_Struct3 D_8021AFE8;
extern f32 D_80218C94;
extern f32 D_80218C98;
extern f32 D_80218C9C;

#undef D_80216E7C
#undef D_80216E88
#undef D_80216EF4
#undef D_80216F00
#undef D_80218C94
#undef D_80218C98
#undef D_80218C9C
#undef D_8021AFE8
#undef D_8021AFF8
#undef D_8021B018
#undef func_80010550
#undef func_801F4284
#undef func_801F4284_Struct
#undef func_801F4284_SubStruct
#undef func_801F4AA0_Struct
#undef func_801F5230_StructB
#undef func_801F6008
#undef func_801F6008_Struct
#undef func_801F60D8
#undef func_801F60D8_Obj
#undef func_801F63E0
#undef func_801F63E0_Struct3
#undef func_801F6534
#undef func_801F6534_Struct
#undef func_801F6820
#undef func_801F6820_Struct
#undef func_801F6A3C
#undef func_801F6A3C_Struct
#undef func_801F6C58
#define D_80216E7C D_80216E7C__func_801F4D30_c4887dfc
#define D_80216E88 D_80216E88__func_801F4D30_c4887dfc
#define D_80216EF4 D_80216EF4__func_801F4D30_c4887dfc
#define D_80216F00 D_80216F00__func_801F4D30_c4887dfc
#define D_8021AFE8 D_8021AFE8__func_801F4D30_c4887dfc
#define D_8021AFF8 D_8021AFF8__func_801F4D30_c4887dfc
#define D_8021B018 D_8021B018__func_801F4D30_c4887dfc
#define func_80010550 func_80010550__func_801F4D30_c4887dfc
#define func_801F4284 func_801F4284__func_801F4D30_c4887dfc
#define func_801F4284_Struct func_801F4284_Struct__func_801F4D30_c4887dfc
#define func_801F4284_SubStruct func_801F4284_SubStruct__func_801F4D30_c4887dfc
#define func_801F4AA0_Struct func_801F4AA0_Struct__func_801F4D30_c4887dfc
#define func_801F4D30_Struct func_801F4D30_Struct__func_801F4D30_c4887dfc
#define func_801F4D30_StructInner func_801F4D30_StructInner__func_801F4D30_c4887dfc
#define func_801F5230_StructB func_801F5230_StructB__func_801F4D30_c4887dfc
#define func_801F6008 func_801F6008__func_801F4D30_c4887dfc
#define func_801F6008_Struct func_801F6008_Struct__func_801F4D30_c4887dfc
#define func_801F60D8 func_801F60D8__func_801F4D30_c4887dfc
#define func_801F60D8_Obj func_801F60D8_Obj__func_801F4D30_c4887dfc
#define func_801F63E0 func_801F63E0__func_801F4D30_c4887dfc
#define func_801F63E0_Struct3 func_801F63E0_Struct3__func_801F4D30_c4887dfc
#define func_801F6534 func_801F6534__func_801F4D30_c4887dfc
#define func_801F6534_Struct func_801F6534_Struct__func_801F4D30_c4887dfc
#define func_801F6820 func_801F6820__func_801F4D30_c4887dfc
#define func_801F6820_Struct func_801F6820_Struct__func_801F4D30_c4887dfc
#define func_801F6A3C func_801F6A3C__func_801F4D30_c4887dfc
#define func_801F6A3C_Struct func_801F6A3C_Struct__func_801F4D30_c4887dfc
#define func_801F6C58 func_801F6C58__func_801F4D30_c4887dfc
typedef struct func_801F63E0_Struct3 { s32 w0; s32 w1; s32 w2; } func_801F63E0_Struct3;
extern func_801F63E0_Struct3 D_8021AFF8;
typedef struct func_801F4AA0_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801F4AA0_Struct;
extern func_801F4AA0_Struct D_8021B018;
extern s32 func_80010550();
typedef struct func_801F4284_SubStruct {
    u8 pad0[6];
    s16 unk6;
    u8 pad1[2];
    s16 unkA;
} func_801F4284_SubStruct;
typedef struct func_801F4284_Struct {
    u8 pad0[0x38];
    func_801F4284_SubStruct *unk38;
    u8 pad1[0x94 - 0x3C];
    s16 unk94;
    s16 unk96;
} func_801F4284_Struct;
void func_801F4284(func_801F4284_Struct *arg0);
struct func_801F5230_StructB {
    u8 pad0[0x78];
    s16 unk78;
};
struct func_801F6008_Struct {
    u8 pad0[0x5C];
    struct func_801F5230_StructB *unk5C;
    u8 pad1[0xAE - 0x60];
    u8 unkAE;
    u8 unkAF;
};
void func_801F6008(struct func_801F6008_Struct *arg0, s32 arg1);
extern void func_801F60D8();
void func_801F63E0(struct func_801F6008_Struct *arg0, s32 arg1);
typedef struct func_801F6534_Struct {
    u8 pad0[0x3C];
    u16 unk3C;
    u8 pad3E[0x5C - 0x3E];
    struct func_801F5230_StructB *unk5C;
    u8 pad60[0x90 - 0x60];
    s16 unk90;
    u8 pad92[2];
    s16 unk94;
    s16 unk96;
    u8 pad98[2];
    u16 unk9A;
    u8 unk9C;
    u8 pad9D[0xAE - 0x9D];
    u8 unkAE;
    u8 unkAF;
} func_801F6534_Struct;
void func_801F6534(func_801F6534_Struct *arg0, s32 arg1);
struct func_801F6820_Struct {
    u8 pad0[0x5C];
    struct func_801F5230_StructB *unk5C;
    u8 pad60[0x90 - 0x60];
    s16 unk90;
    u8 pad92[2];
    s16 unk94;
    s16 unk96;
    u16 unk98;
    u16 unk9A;
    u8 unk9C;
    u8 unk9D;
    u8 pad9E[0xAE - 0x9E];
    u8 unkAE;
    u8 unkAF;
};
void func_801F6820(struct func_801F6820_Struct *arg0, s32 arg1);
typedef struct func_801F6A3C_Struct {
    u8 pad0[0x5C];
    struct func_801F5230_StructB *unk5C;
    u8 pad60[0x30];
    s16 unk90;
    s16 unk92;
    s16 unk94;
    s16 unk96;
    s16 unk98;
    u16 unk9A;
    u8 unk9C;
    u8 unk9D;
    u8 pad9E[0x10];
    u8 unkAE;
    u8 unkAF;
} func_801F6A3C_Struct;
void func_801F6A3C(func_801F6A3C_Struct *arg0, s32 arg1);
typedef struct func_801F60D8_Obj {
    u8 pad0[0x3C];
    u16 unk3C;
    u8 pad3E[0x5C - 0x3E];
    struct func_801F5230_StructB *unk5C;
    u8 pad60[0x90 - 0x60];
    s16 unk90;
    u8 pad92[1];
    u8 unk93;
    s16 unk94;
    s16 unk96;
    u8 pad98[2];
    u16 unk9A;
    u8 pad9C[0xAE - 0x9C];
    u8 unkAE;
    s8 unkAF;
} func_801F60D8_Obj;
void func_801F6C58(func_801F60D8_Obj *arg0, s32 arg1);

typedef struct func_801F4D30_StructInner {
    u16 pad0;
    u16 id;
    u8 pad4[0x14];
    u32 flags;
} func_801F4D30_StructInner;
typedef struct func_801F4D30_Struct {
    u8 pad0[0x2C];
    u32 flags;
    u8 pad30[8];
    func_801F4D30_StructInner *inner;
    s16 timer;
    u8 pad3E[0xE];
    s8 a, b, c, d, e;
    u8 pad51[3];
    s32 field54;
    u8 pad58[4];
    void *sub;
    u8 pad60[0x30];
    s16 field90;
    u8 field92, field93;
    u8 pad94[6];
    s16 field9A;
    u8 field9C;
    u8 pad9D[0x11];
    u8 fieldAE;
    u8 padAF;
    void *callback;
} func_801F4D30_Struct;
extern func_801F63E0_Struct3 D_80216EF4;
extern func_801F4AA0_Struct D_80216F00;
extern func_801F4AA0_Struct D_80216E7C;
extern func_801F63E0_Struct3 D_80216E88;
extern func_801F63E0_Struct3 D_8021AFE8;

void func_801F4D30(func_801F4D30_Struct *arg0, s32 arg1)
{
    struct func_801F5230_StructB *sub;
    u16 id;
    u32 value;
    func_801F4D30_StructInner *inner;

    sub = arg0->sub;
    id = arg0->inner->id;
    ((struct func_801F5230_StructB *)sub)->unk78 = 1;
    arg0->flags |= 0xB00;
    arg0->a = 5;
    arg0->b = 0x12;
    arg0->c = 5;
    arg0->d = 0;
    arg0->e = 0;
    arg0->field54 = 0xE0;
    arg0->field90 = 100;
    arg0->field92 = 0;
    arg0->timer = 0;
    if (arg0->fieldAE == 0) arg0->fieldAE = 20;
    inner = arg0->inner;
    value = (inner->flags >> 8) & 0xFF;
    if (value == 0) {
        arg0->field9A = 40;
        inner = (func_801F4D30_StructInner *)*(s32 *)&arg0->inner;
    } else arg0->field9A = value;
    value = (inner->flags >> 8) & 0xFF;
    if (value == 0) arg0->field9C = 40;
    else arg0->field9C = value;
    D_8021AFE8 = D_80216E88;
    D_8021AFF8 = D_80216EF4;
    D_8021AFE8.w0 = func_801DBE94(arg0, 2);
    D_8021AFF8.w0 = func_801DBE94(arg0, 1);
    if (id == 0x57 || id == 0x58 || id == 0x59) D_8021B018 = D_80216F00;
    switch ((arg0->inner->flags >> 16) & 0xFF) {
    case 0:
    case 1:
        arg0->callback = func_801F60D8;
        break;
    case 2:
        *(f32 *)&D_8021AFE8.w2 = 0.600000024f;
        arg0->field90 = 300;
        arg0->callback = func_801F60D8;
        break;
    case 3:
        *(f32 *)&D_8021AFF8.w2 = 0.800000012f;
        arg0->field90 = 300;
        arg0->callback = func_801F63E0;
        break;
    case 5:
        arg0->field93 = 0;
        arg0->timer = 40;
        arg0->callback = func_801F6C58;
        break;
    case 6:
        arg0->timer = 5;
        arg0->field93 = 0;
        arg0->callback = func_801F6C58;
        break;
    case 7:
        arg0->field93 = 0;
        func_8013A1B4(arg1, D_80216E7C, 0x1FFFFF);
        func_80010550(arg1, sub);
        arg0->callback = func_801F6008;
        break;
    case 8:
        func_801F4284((func_801F4284_Struct *)arg0);
        arg0->field90 = 200;
        arg0->callback = func_801F6534;
        break;
    case 9:
        *(f32 *)&D_8021AFE8.w2 = 0.600000024f;
        arg0->field90 = 300;
        func_801F4284((func_801F4284_Struct *)arg0);
        arg0->callback = func_801F6534;
        break;
    case 10:
        func_801F4284((func_801F4284_Struct *)arg0);
        arg0->callback = func_801F6820;
        break;
    case 11:
        func_801F4284((func_801F4284_Struct *)arg0);
        arg0->callback = func_801F6A3C;
        break;
    default:
        arg0->callback = func_801F60D8;
        break;
    }
}
#undef D_80216E7C
#undef D_80216E88
#undef D_80216EF4
#undef D_80216F00
#undef D_8021AFE8
#undef D_8021AFF8
#undef D_8021B018
#undef func_80010550
#undef func_801F4284
#undef func_801F4284_Struct
#undef func_801F4284_SubStruct
#undef func_801F4AA0_Struct
#undef func_801F4D30_Struct
#undef func_801F4D30_StructInner
#undef func_801F5230_StructB
#undef func_801F6008
#undef func_801F6008_Struct
#undef func_801F60D8
#undef func_801F60D8_Obj
#undef func_801F63E0
#undef func_801F63E0_Struct3
#undef func_801F6534
#undef func_801F6534_Struct
#undef func_801F6820
#undef func_801F6820_Struct
#undef func_801F6A3C
#undef func_801F6A3C_Struct
#undef func_801F6C58
#define D_80216E7C D_80216E7C__func_801F4D30
#define D_80216E88 D_80216E88__func_801F4D30
#define D_80216EF4 D_80216EF4__func_801F4D30
#define D_80216F00 D_80216F00__func_801F4D30
#define D_80218C94 D_80218C94__func_801F4D30
#define D_80218C98 D_80218C98__func_801F4D30
#define D_80218C9C D_80218C9C__func_801F4D30
#define D_8021AFE8 D_8021AFE8__func_801F4D30
#define D_8021AFF8 D_8021AFF8__func_801F4D30
#define D_8021B018 D_8021B018__func_801F4D30
#define func_80010550 func_80010550__func_801F4D30
#define func_801F4284 func_801F4284__func_801F4D30
#define func_801F4284_Struct func_801F4284_Struct__func_801F4D30
#define func_801F4284_SubStruct func_801F4284_SubStruct__func_801F4D30
#define func_801F4AA0_Struct func_801F4AA0_Struct__func_801F4D30
#define func_801F5230_StructB func_801F5230_StructB__func_801F4D30
#define func_801F6008 func_801F6008__func_801F4D30
#define func_801F6008_Struct func_801F6008_Struct__func_801F4D30
#define func_801F60D8 func_801F60D8__func_801F4D30
#define func_801F60D8_Obj func_801F60D8_Obj__func_801F4D30
#define func_801F63E0 func_801F63E0__func_801F4D30
#define func_801F63E0_Struct3 func_801F63E0_Struct3__func_801F4D30
#define func_801F6534 func_801F6534__func_801F4D30
#define func_801F6534_Struct func_801F6534_Struct__func_801F4D30
#define func_801F6820 func_801F6820__func_801F4D30
#define func_801F6820_Struct func_801F6820_Struct__func_801F4D30
#define func_801F6A3C func_801F6A3C__func_801F4D30
#define func_801F6A3C_Struct func_801F6A3C_Struct__func_801F4D30
#define func_801F6C58 func_801F6C58__func_801F4D30
#undef D_80216E7C
#undef D_80216E88
#undef D_80216EF4
#undef D_80216F00
#undef D_80218C94
#undef D_80218C98
#undef D_80218C9C
#undef D_8021AFE8
#undef D_8021AFF8
#undef D_8021B018
#undef func_80010550
#undef func_801F4284
#undef func_801F4284_Struct
#undef func_801F4284_SubStruct
#undef func_801F4AA0_Struct
#undef func_801F5230_StructB
#undef func_801F6008
#undef func_801F6008_Struct
#undef func_801F60D8
#undef func_801F60D8_Obj
#undef func_801F63E0
#undef func_801F63E0_Struct3
#undef func_801F6534
#undef func_801F6534_Struct
#undef func_801F6820
#undef func_801F6820_Struct
#undef func_801F6A3C
#undef func_801F6A3C_Struct
#undef func_801F6C58

#define func_801F8A44 func_801F8A44__func_801F5078

typedef struct func_801F5078_Struct {
    s32 w[5];
} func_801F5078_Struct;

extern func_801F5078_Struct D_80217000;
extern void func_801F8A44();

void *func_8012C4D0(void *a0, func_801F5078_Struct a1, s32 a2);

void func_801F5078(void *arg0, s32 arg1) {
    void *v;
    u8 *p;

    p = *(u8 **) ((u8 *) arg0 + 0x5C);
    *(s16 *) (p + 0x78) = 1;
    v = func_8012C4D0(arg0, D_80217000, 1);
    *(u16 *) ((u8 *) v + 0x72) = *(u16 *) ((u8 *) arg0 + 0x72);
    *(void **) ((u8 *) arg0 + 0xB0) = func_801F8A44;
}
#undef func_801F8A44

#define D_80216EC4 D_80216EC4__func_801F5104
#define func_80010550 func_80010550__func_801F5104
#define func_801F3B5C func_801F3B5C__func_801F5104
#define func_801F8E4C func_801F8E4C__func_801F5104
#define func_801F8E4C_Struct func_801F8E4C_Struct__func_801F5104
#define func_801F908C func_801F908C__func_801F5104
#define func_801F908C_Struct func_801F908C_Struct__func_801F5104
#define func_801F94AC func_801F94AC__func_801F5104
#define func_801F94AC_Struct func_801F94AC_Struct__func_801F5104
extern s32 func_80010550();
void func_801F3B5C(s32 arg0);
typedef struct func_801F8E4C_Struct {
    u8 pad0[0x90];
    u8 unk90;
    u8 unk91;
    u8 unk92;
    u8 pad93[0x98 - 0x93];
    s16 unk98;
    u8 pad9A[0xAE - 0x9A];
    u8 unkAE;
} func_801F8E4C_Struct;
void func_801F8E4C(func_801F8E4C_Struct *arg0, s32 arg1);
typedef struct func_801F908C_Struct {
    u8 pad0[0xAE];
    u8 unkAE;
} func_801F908C_Struct;
void func_801F908C(func_801F908C_Struct *arg0, s32 arg1);
typedef struct func_801F94AC_Struct {
    u8 pad0[0xAE];
    u8 unkAE;
} func_801F94AC_Struct;
void func_801F94AC(func_801F94AC_Struct *arg0, s32 arg1);


struct func_801F5104_StructInner {
    u8 pad[0x18];
    u32 unk18;
};

struct func_801F5104_StructSub {
    u8 pad[0x78];
    s16 unk78;
};

struct func_801F5104_StructArg {
    u8 pad0[0x38];
    struct func_801F5104_StructInner *unk38;
    s16 unk3C;
    u8 pad3E[0x5C - 0x3E];
    struct func_801F5104_StructSub *unk5C;
    u8 pad60[0x92 - 0x60];
    u8 unk92;
    u8 pad93[0xAE - 0x93];
    u8 unkAE;
    u8 padAF;
    void *unkB0;
};

struct func_801F5104_StructVec {
    s32 unk0;
    s32 unk4;
    f32 unk8;
};

extern struct func_801F5104_StructVec D_80216EC4;

void func_801F5104(struct func_801F5104_StructArg *arg0, s32 arg1) {
    struct func_801F5104_StructSub *sub;

    sub = arg0->unk5C;
    sub->unk78 = 1;
    arg0->unk3C = 100;
    arg0->unk92 = 0;
    if (arg0->unkAE == 0) {
        arg0->unkAE = 40;
    }
    D_80216EC4.unk8 = 0.7f;
    switch ((s32)((arg0->unk38->unk18 >> 16) & 0xFF)) {
    default:
        arg0->unkB0 = (void *)func_801F8E4C;
        break;
    case 0:
        arg0->unkB0 = (void *)func_801F908C;
        break;
    case 1:
        arg0->unkB0 = (void *)func_801F8E4C;
        break;
    case 2:
        D_80216EC4.unk8 = 1.5f;
        arg0->unkB0 = (void *)func_801F94AC;
        break;
    }
    func_8013A1B4(arg1, D_80216EC4, 0x1FFFFF);
    func_80010550(arg1, sub);
    func_801F3B5C(0);
}
#undef D_80216EC4
#undef func_80010550
#undef func_801F3B5C
#undef func_801F8E4C
#undef func_801F8E4C_Struct
#undef func_801F908C
#undef func_801F908C_Struct
#undef func_801F94AC
#undef func_801F94AC_Struct


typedef struct func_801F5210_Struct {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad30[0x24];
    s32 unk54;
} func_801F5210_Struct;

void func_801F5210(void *arg0) {
    func_801F5210_Struct *obj = arg0;

    obj->unk2C |= 0x60;
    obj->unk2C |= 0xB00;
    obj->unk54 = 1;
}


struct func_801F5230_StructB {
    u8 pad0[0x78];
    s16 unk78;
};

struct func_801F5230_StructArg {
    u8 pad0[0x5C];
    struct func_801F5230_StructB *unk5C;
    u8 pad1[0xAF - 0x60];
    u8 unkAF;
};

struct func_801F5230_StructD {
    u8 pad0[0x18E];
    s16 unk18E;
    s16 unk190;
    s16 unk192;
};

extern void func_80126968();
extern void func_8013B5B4(void *, s32);
extern struct func_801F5230_StructD D_801BBBF0;

void func_801F5230(struct func_801F5230_StructArg *arg0) {
    struct func_801F5230_StructB *sp1C;

    sp1C = arg0->unk5C;
    func_80126968();
    if (arg0->unkAF != 2) {
        func_8013B5B4(arg0, 0);
    }
    D_801BBBF0.unk190 = 1;
    D_801BBBF0.unk192 = 1;
    D_801BBBF0.unk18E = 1;
    sp1C->unk78 = 1;
}


typedef struct func_801F5294_Struct {
    u8 pad0[0x30];
    s32 unk30;
    u8 pad1[0xA];
    u8 unk3E;
    u8 pad2[0x5];
    f32 unk44;
} func_801F5294_Struct;

void func_801F5294(func_801F5294_Struct *arg0) {
    arg0->unk44 = (f32) ((f64) arg0->unk44 - (f64) (f32) (u32) arg0->unk3E / 25.0);
    if ((f64) arg0->unk44 < -10.0) {
        arg0->unk44 = -10.0f;
        return;
    }
    if ((arg0->unk30 & 4) && ((f64) arg0->unk44 < 0.0) && ((f64) arg0->unk44 > -0.5)) {
        arg0->unk44 = -0.5f;
    }
}


extern s32 D_8008DA88;

void func_801F536C(void) {
    D_80216ED0.unk6 = 0;
    func_8013A1B4((s32) &D_8008DA88, D_80216ED0, 0x1FFFFF);
}


typedef struct func_801F53C4_Struct {
    u8 pad0[0x92];
    s16 unk92;
} func_801F53C4_Struct;

s32 func_801F53C4(func_801F53C4_Struct *arg0) {
    if (arg0->unk92 >= 0x97) {
        return 1;
    }
    return 0;
}


s32 func_801F47EC(s32);

s32 func_801F53E8(s32 arg0) {
    u8 sp1E[3];
    s32 temp_v0;
    s32 var_v1;

    sp1E[2] = func_801F48C8(arg0, 0x1E);
    temp_v0 = func_801F47EC(arg0);
    if ((sp1E[2] == 1) && ((temp_v0 & 0xFF) == 1)) {
        var_v1 = 0;
    } else if ((sp1E[2] == 1) && ((temp_v0 & 0xFF) == 0)) {
        var_v1 = 1;
    } else if ((sp1E[2] == 0) && ((temp_v0 & 0xFF) == 1)) {
        var_v1 = 2;
    } else {
        var_v1 = 0;
    }
    return var_v1;
}


extern s32 D_8021B0C4;

s32 func_801F546C(void) {
    if (D_8021B0C4 != 0) {
        return 1;
    }
    return 0;
}


typedef struct func_801F5490_Sub {
    u8 pad0[0x14];
    u32 unk14;
} func_801F5490_Sub;

typedef struct func_801F5490_Struct {
    u8 pad0[0x38];
    func_801F5490_Sub *unk38;
} func_801F5490_Struct;

s32 func_801F5490(void *arg0) {
    if (!(((func_801F5490_Struct *)arg0)->unk38->unk14 & 0xFFFF)) {
        return 1;
    }
    return 0;
}


extern s32 func_80133A24(u32);

typedef struct func_801F54B8_SubStruct {
    u8 pad0[0x10];
    u32 unk10;
} func_801F54B8_SubStruct;

typedef struct func_801F54B8_Struct {
    u8 pad0[0x38];
    func_801F54B8_SubStruct *unk38;
} func_801F54B8_Struct;

s32 func_801F54B8(func_801F54B8_Struct *arg0) {
    if (func_80133A24(arg0->unk38->unk10 >> 0x10) != 0) {
        return 1;
    }
    return 0;
}


s32 func_801FA13C(s32);

typedef struct func_801F54EC_SubStruct {
    u8 pad0[0x10];
    u32 unk10;
} func_801F54EC_SubStruct;

typedef struct func_801F54EC_Struct {
    u8 pad0[0x38];
    func_801F54EC_SubStruct *unk38;
} func_801F54EC_Struct;

s32 func_801F54EC(func_801F54EC_Struct *arg0) {
    if (func_801FA13C((arg0->unk38->unk10 >> 0x10) & 0xFFFF) == 0) {
        return 1;
    }
    return 0;
}


typedef struct func_801F5524_StructSub {
    u8 pad[0x14];
    u32 unk14;
} func_801F5524_StructSub;

typedef struct func_801F5524_Struct {
    u8 pad[0x38];
    func_801F5524_StructSub *unk38;
} func_801F5524_Struct;

s32 func_801F5524(void *arg0)
{
  u32 temp_v0;
  temp_v0 = ((func_801F5524_Struct *) arg0)->unk38->unk14 >> 16;
  if ((((func_801F5524_Struct *) arg0)->unk38->unk14 >> 16) != 0)
  {
    if (func_80133A24(temp_v0) != 0)
    {
      return 1;
    }
    else
    {
      return 0;
    }
  }
  return 0;
}

#define func_80133980 func_80133980__func_801F5574
#define func_801339D0 func_801339D0__func_801F5574
#define func_801F5490_Struct func_801F5490_Struct__func_801F5574
#define func_801F5490_Sub func_801F5490_Sub__func_801F5574
#define func_801F5574 func_801F5574_decl
typedef struct func_801F5490_Sub {
    u8 pad0[0x14];
    u32 unk14;
} func_801F5490_Sub;
typedef struct func_801F5490_Struct {
    u8 pad0[0x38];
    func_801F5490_Sub *unk38;
} func_801F5490_Struct;
#undef func_801F5574
extern void func_80133980(u32);
extern void func_801339D0(u32);

s32 func_801F5574(arg0, arg1)
void *arg0;
u8 arg1;
{
    u32 v;

    v = ((func_801F5490_Struct *)arg0)->unk38->unk14 >> 16;
    if (v != 0) {
        if (arg1 == 1) {
            func_80133980(v * 1);
            return 1;
        }
        if (arg1 == 0) {
            func_801339D0(v * 1);
        }
        return 1;
    }
    return 0;
}
#undef func_80133980
#undef func_801339D0
#undef func_801F5490_Struct
#undef func_801F5490_Sub



void func_801F55E0(s32 arg0) {
    D_8021B0C4 = arg0;
}


typedef struct func_801F55EC_Struct {
    u8 pad[0xAD];
    u8 unkAD;
} func_801F55EC_Struct;

s32 func_801F55EC(func_801F55EC_Struct *arg0) {
    s32 var_v0;

    if (func_801F5490(arg0) == 0) {
        return 1;
    }
    var_v0 = 0;
    if (arg0->unkAD == 0) {
        return 1;
    }
    return var_v0;
}

#undef func_801F5630
#define func_80150584 func_80150584__func_801F5630
#define func_801505E4 func_801505E4__func_801F5630
#define func_80150614 func_80150614__func_801F5630
#define func_8015067C func_8015067C__func_801F5630
extern s32 func_80150584();
extern s32 func_801505E4();
extern s32 func_80150614();
extern s32 func_8015067C(s32, u16);

struct func_801F5630_StructSub {
    u8 pad[0x1E];
    u16 unk1E;
};

struct func_801F5630_Struct {
    u8 pad[0x38];
    struct func_801F5630_StructSub *unk38;
};

s32 func_801F5630(struct func_801F5630_Struct *arg0) {
    struct func_801F5630_StructSub *sub;
    s32 unused;
    s32 value;
    s32 mask;
    u16 flags;

    sub = arg0->unk38;
    if (func_80150584() != 0) {
        value = func_80150614();
        mask = func_8015067C(func_801505E4() & 0xFFFF, value);
        flags = sub->unk1E;
        if (!(flags & mask)) {
            return 1;
        }
    }
    return 0;
}
#undef func_80150584
#undef func_801505E4
#undef func_80150614
#undef func_8015067C
#define func_801F5630 func_801F5630__merge_frozen

void func_801F5698(void) {
}

void func_801F56A0(void) {
}

#define func_801F57EC func_801F57EC__func_801F56A8
#define func_801FA074 func_801FA074__func_801F56A8

typedef struct func_801F56A8_Sub {
    u8 pad0[2];
    u16 unk2;
    u8 pad4[0xC];
    u32 unk10;
    u32 unk14;
} func_801F56A8_Sub;
typedef struct func_801F56A8_Struct {
    u8 pad0[4];
    struct { u8 pad[0x10]; s32 unk10; } *unk4;
    u8 pad8[0x30];
    func_801F56A8_Sub *unk38;
    u8 pad3C[0x6C];
    void *unkA8;
} func_801F56A8_Struct;
extern s32 func_80126CC0(void *, void *);
extern void func_80133980(u32);
extern void func_8013B570(void *, u16, s32, s32, void *);
extern void func_801FA0B0(u16, u8);
extern void func_801FA220(void *);
extern s32 D_8021AFE0;
void func_80005700(void *);
struct func_801F57EC_Struct;
void func_801F57EC(struct func_801F57EC_Struct *arg0, s32 arg1);
void func_801FA074(s32 arg0, s32 arg1);

#undef func_801F57EC
#undef func_801FA074
#define func_8001F74C func_8001F74C__func_801F56A8_8f2a3384
#define func_801F3B5C func_801F3B5C__func_801F56A8_8f2a3384
#define func_801F5490 func_801F5490__func_801F56A8_8f2a3384
#define func_801F54B8 func_801F54B8__func_801F56A8_8f2a3384
#define func_801F54B8_Struct func_801F54B8_Struct__func_801F56A8_8f2a3384
#define func_801F54B8_SubStruct func_801F54B8_SubStruct__func_801F56A8_8f2a3384
#define func_801F54EC func_801F54EC__func_801F56A8_8f2a3384
#define func_801F54EC_Struct func_801F54EC_Struct__func_801F56A8_8f2a3384
#define func_801F54EC_SubStruct func_801F54EC_SubStruct__func_801F56A8_8f2a3384
#define func_801F56A8_Struct func_801F56A8_Struct__func_801F56A8_8f2a3384
#define func_801F56A8_Sub func_801F56A8_Sub__func_801F56A8_8f2a3384
#define func_801F57EC func_801F57EC__func_801F56A8_8f2a3384
#define func_801F57EC_Struct func_801F57EC_Struct__func_801F56A8_8f2a3384
#define func_801F57EC_Struct24 func_801F57EC_Struct24__func_801F56A8_8f2a3384
#define func_801F57EC_Struct38 func_801F57EC_Struct38__func_801F56A8_8f2a3384
#define func_801FA074 func_801FA074__func_801F56A8_8f2a3384
extern void func_8001F74C(void);
void func_801F3B5C(s32 arg0);
s32 func_801F5490(void *arg0);
typedef struct func_801F54B8_SubStruct {
    u8 pad0[0x10];
    u32 unk10;
} func_801F54B8_SubStruct;
typedef struct func_801F54B8_Struct {
    u8 pad0[0x38];
    func_801F54B8_SubStruct *unk38;
} func_801F54B8_Struct;
s32 func_801F54B8(func_801F54B8_Struct *arg0);
typedef struct func_801F54EC_SubStruct {
    u8 pad0[0x10];
    u32 unk10;
} func_801F54EC_SubStruct;
typedef struct func_801F54EC_Struct {
    u8 pad0[0x38];
    func_801F54EC_SubStruct *unk38;
} func_801F54EC_Struct;
s32 func_801F54EC(func_801F54EC_Struct *arg0);
struct func_801F57EC_Struct24 {
    u8 pad[0x22];
    u8 unk22;
};
struct func_801F57EC_Struct38 {
    u8 pad[0x18];
    u32 unk18;
};
struct func_801F57EC_Struct {
    u8 pad0[0x24];
    struct func_801F57EC_Struct24 *unk24;
    u8 pad1[0x10];
    struct func_801F57EC_Struct38 *unk38;
    u8 pad2[0x74];
    s32 unkB0;
};


typedef struct func_801F56A8_Sub {
    u8 pad0[2];
    u16 unk2;
    u8 pad4[0xC];
    u32 unk10;
    s32 unk14;
} func_801F56A8_Sub;
typedef struct func_801F56A8_Struct {
    u8 pad0[4];
    struct { u8 pad[0x10]; s32 unk10; } *unk4;
    u8 pad8[0x30];
    func_801F56A8_Sub *unk38;
    u8 pad3C[0x6C];
    void *unkA8;
} func_801F56A8_Struct;
struct func_801F57EC_Struct;
void func_801F57EC(struct func_801F57EC_Struct *arg0, s32 arg1);
void func_801FA074(s32 arg0, s32 arg1);

void func_801F56A8(func_801F56A8_Struct *arg0, s32 arg1) {
    D_8021AFE0 = (s32)arg0;
    if ((arg0->unk38->unk14 & 0xFFFF) != 0 && func_80133A24(arg0->unk38->unk14 & 0xFFFF) != 0) {
        func_80005700(arg0);
        return;
    }
    func_801FA220(arg0);
    if (func_801F5490(arg0) != 0) {
        if (arg0->unk4 != NULL && arg0->unk4->unk10 == 2) {
            arg0->unkA8 = arg0->unk4;
        }
        if (func_801F54B8((void *)arg0) != 0) {
            if (func_801F54EC((void *)arg0) != 0) {
                func_80005700(arg0);
                return;
            }
        } else {
            func_801FA0B0((arg0->unk38->unk10 >> 16) & 0xFFFF, arg0->unk38->unk10 & 0xFF);
            func_80133980(arg0->unk38->unk10 >> 16);
        }
    }
    func_801F3B5C(1);
    if (func_80126CC0(arg0, func_801FA074) != 0) {
        {
extern void func_8001F74C();
            func_8001F74C(arg0);
        }
        func_8013B570(arg0, arg0->unk38->unk2, 2, 3, func_801F57EC);
    }
}
#undef func_8001F74C
#undef func_801F3B5C
#undef func_801F5490
#undef func_801F54B8
#undef func_801F54B8_Struct
#undef func_801F54B8_SubStruct
#undef func_801F54EC
#undef func_801F54EC_Struct
#undef func_801F54EC_SubStruct
#undef func_801F56A8_Struct
#undef func_801F56A8_Sub
#undef func_801F57EC
#undef func_801F57EC_Struct
#undef func_801F57EC_Struct24
#undef func_801F57EC_Struct38
#undef func_801FA074
#define func_801F57EC func_801F57EC__func_801F56A8
#define func_801FA074 func_801FA074__func_801F56A8
#undef func_801F57EC
#undef func_801FA074

#define func_801F4AA0 func_801F4AA0__func_801F57EC
#define func_801F5490 func_801F5490__func_801F57EC
#define func_801F5524 func_801F5524__func_801F57EC

struct func_801F57EC_Struct24 {
    u8 pad[0x22];
    u8 unk22;
};

struct func_801F57EC_Struct38 {
    u8 pad[0x18];
    u32 unk18;
};

struct func_801F57EC_Struct {
    u8 pad0[0x24];
    struct func_801F57EC_Struct24 *unk24;
    u8 pad1[0x10];
    struct func_801F57EC_Struct38 *unk38;
    u8 pad2[0x74];
    s32 unkB0;
};

void func_801F4AA0();                               /* extern */
extern s32 func_80005670();
void func_800058DC(void *, s32);                    /* extern */
s32 func_801F5490(void *);                          /* extern */
s32 func_801F5524(void *);                          /* extern */
#define func_801F5574 func_801F5574__decl1062
void func_801F5574(void *, s32);                    /* extern */

extern u8 D_80216E54[];

void func_801F57EC(struct func_801F57EC_Struct *arg0, s32 arg1) {
    u8 sp27;

    sp27 = (u8) (arg0->unk38->unk18 >> 0x18);
    func_801F4AA0();
    arg0->unkB0 = 0;
    if (D_80216D10[sp27] != NULL) {
        D_80216D10[sp27](arg0, arg1);
    }
    if ((func_801F5490(arg0) != 0) && (func_801F5524(arg0) == 0) && (sp27 != 2)) {
        func_801F5574(arg0, 1);
        arg0->unk24->unk22 = 0;
        func_80005670(arg0, D_80216E54);
    }
    func_800058DC(arg0, arg0->unkB0);
}
#undef func_801F5574
#undef func_801F4AA0
#undef func_801F5490
#undef func_801F5524

#define func_801F5960 func_801F5960__func_801F58AC
void func_800062F8(s32, s32);

extern void func_8001F74C(void);
extern void func_801473F4(void *p);
extern void func_8014753C(void *p, s32 v);
extern void func_801FA410(s32 v);
extern s32 func_801FA600(s32 v);
extern u8 D_80216DE0[];
extern s16 D_8021B0C0;
extern void func_801F5960();

struct func_801F58AC_Sub {
    u8 pad0[0x24];
    s32 unk24;
    u8 pad28[0xA8 - 0x28];
    s32 unkA8;
    u8 padAC;
    u8 unkAD;
};

struct func_801F58AC_Obj {
    u8 pad0[0xC];
    struct func_801F58AC_Sub *unkC;
    u8 pad10[0x3C - 0x10];
    s16 unk3C;
};

void func_801F58AC(struct func_801F58AC_Obj *arg0, s32 arg1) {
    s32 sp24;

    sp24 = arg0->unkC->unkA8;
    func_8001F74C();
    arg0->unkC->unkAD = 1;
    func_801473F4(arg0->unkC);
    func_800062F8(arg0->unkC->unk24, 0x800002FE);
    func_8014753C(arg0->unkC, (s32) D_80216DE0 | 0x40000000);
    arg0->unk3C = func_801FA600(sp24) * 0x1E;
    D_8021B0C0 = -0x800;
    func_801FA410(sp24);
    func_800058DC(arg0, (s32) func_801F5960);
}
#undef func_801F5960

void func_80020744(s32);

struct func_801F5960_Struct {
    u8 pad[0x3C];
    u16 unk3C;
};

#define func_801F59B8 func_801F59B8__decl1356
extern void func_801F59B8(void);

void func_801F5960(struct func_801F5960_Struct *arg0, s32 arg1) {
    if (arg0->unk3C-- == 0) {
        arg0->unk3C = 0x3C;
        func_80020744(0x1D8);
        func_800058DC(arg0, (s32)func_801F59B8);
    }
}
#undef func_801F59B8

#define D_8012A94C D_8012A94C__func_801F59B8
#define D_80218CA8 D_80218CA8__func_801F59B8
#define func_8012C6B4 func_8012C6B4__func_801F59B8
#define func_80147370 func_80147370__func_801F59B8
#define func_801F5BAC func_801F5BAC__func_801F59B8
#define func_801F5BAC_In func_801F5BAC_In__func_801F59B8
#define func_801F5BAC_Mid func_801F5BAC_Mid__func_801F59B8
#define func_801F5BAC_Node func_801F5BAC_Node__func_801F59B8
#define func_801F5BAC_Struct func_801F5BAC_Struct__func_801F59B8
#define func_801FCA4C func_801FCA4C__func_801F59B8
#define func_801FCAE0 func_801FCAE0__func_801F59B8
extern s32 D_8012A94C(void *, s32);
extern s32 func_8012C6B4(s32);
extern void func_80147370(void *, s32, s32, s32, s32);
struct func_801F5BAC_Node { u8 pad0[4]; f32 unk4; f32 unk8; f32 unkC; };
struct func_801F5BAC_Mid { u8 pad0[0x2C]; struct func_801F5BAC_Node *unk2C; };
struct func_801F5BAC_In { u8 pad0[0x24]; struct func_801F5BAC_Mid *unk24; };
struct func_801F5BAC_Struct { u8 pad0[0xC]; struct func_801F5BAC_In *unkC; u8 pad1[0x3C - 0x10]; u16 unk3C; };
void func_801F5BAC(struct func_801F5BAC_Struct *arg0, s32 arg1);
extern void func_801FCA4C(f32, f32, f32, f32, s32);
extern void func_801FCAE0(f32, f32, f32, s32);


extern f64 D_80218CA8;
extern s16 B_8021B0C0;

#undef D_8012A94C
#undef func_8012C6B4
#undef func_80147370
#undef func_801F5BAC
#undef func_801F5BAC_In
#undef func_801F5BAC_Mid
#undef func_801F5BAC_Node
#undef func_801F5BAC_Struct
#undef func_801FCA4C
#undef func_801FCAE0
#define D_8012A94C D_8012A94C__func_801F59B8_450c7147
#define func_8012C6B4 func_8012C6B4__func_801F59B8_450c7147
#define func_80147370 func_80147370__func_801F59B8_450c7147
#define func_801F5BAC func_801F5BAC__func_801F59B8_450c7147
#define func_801F5BAC_In func_801F5BAC_In__func_801F59B8_450c7147
#define func_801F5BAC_Mid func_801F5BAC_Mid__func_801F59B8_450c7147
#define func_801F5BAC_Node func_801F5BAC_Node__func_801F59B8_450c7147
#define func_801F5BAC_Struct func_801F5BAC_Struct__func_801F59B8_450c7147
#define func_801FCA4C func_801FCA4C__func_801F59B8_450c7147
#define func_801FCAE0 func_801FCAE0__func_801F59B8_450c7147
extern s32 D_8012A94C(void *, s32);
extern s32 func_8012C6B4(s32);
extern void func_80147370(void *, s32, s32, s32, s32);
struct func_801F5BAC_Node { u8 pad0[4]; f32 unk4; f32 unk8; f32 unkC; };
struct func_801F5BAC_Mid { u8 pad0[0x2C]; struct func_801F5BAC_Node *unk2C; };
struct func_801F5BAC_In { u8 pad0[0x24]; struct func_801F5BAC_Mid *unk24; };
struct func_801F5BAC_Struct { u8 pad0[0xC]; struct func_801F5BAC_In *unkC; u8 pad1[0x3C - 0x10]; u16 unk3C; };
void func_801F5BAC(struct func_801F5BAC_Struct *arg0, s32 arg1);
extern void func_801FCA4C(f32, f32, f32, f32, s32);
extern void func_801FCAE0(f32, f32, f32, s32);

#undef D_8012A94C
#undef func_8012C6B4
#undef func_80147370
#undef func_801F5BAC
#undef func_801F5BAC_In
#undef func_801F5BAC_Mid
#undef func_801F5BAC_Node
#undef func_801F5BAC_Struct
#undef func_801FCA4C
#undef func_801FCAE0
#define D_8012A94C D_8012A94C__func_801F59B8_04a36964
#define func_8012C6B4 func_8012C6B4__func_801F59B8_04a36964
#define func_80147370 func_80147370__func_801F59B8_04a36964
#define func_801F5BAC func_801F5BAC__func_801F59B8_04a36964
#define func_801F5BAC_In func_801F5BAC_In__func_801F59B8_04a36964
#define func_801F5BAC_Mid func_801F5BAC_Mid__func_801F59B8_04a36964
#define func_801F5BAC_Node func_801F5BAC_Node__func_801F59B8_04a36964
#define func_801F5BAC_Struct func_801F5BAC_Struct__func_801F59B8_04a36964
#define func_801FCA4C func_801FCA4C__func_801F59B8_04a36964
#define func_801FCAE0 func_801FCAE0__func_801F59B8_04a36964
extern s32 D_8012A94C(void *, s32);
extern s32 func_8012C6B4(s32);
extern void func_80147370(void *, s32, s32, s32, s32);
struct func_801F5BAC_Node { u8 pad0[4]; f32 unk4; f32 unk8; f32 unkC; };
struct func_801F5BAC_Mid { u8 pad0[0x2C]; struct func_801F5BAC_Node *unk2C; };
struct func_801F5BAC_In { u8 pad0[0x24]; struct func_801F5BAC_Mid *unk24; };
struct func_801F5BAC_Struct { u8 pad0[0xC]; struct func_801F5BAC_In *unkC; u8 pad1[0x3C - 0x10]; u16 unk3C; };
void func_801F5BAC(struct func_801F5BAC_Struct *arg0, s32 arg1);
extern void func_801FCA4C(f32, f32, f32, f32, s32);
extern void func_801FCAE0(f32, f32, f32, s32);

void func_801F59B8(struct func_801F5BAC_Struct *arg0, s32 arg1) {
    s32 sp3C;
    s16 pad;
    u8 sp39;
    u8 sp38;
    u8 sp37;
    f32 fa0, fa1, fv0;
    f64 temp_ft4;
    s32 t;

    sp3C = *(s32 *)((u8 *)arg0->unkC + 0xA8);
    sp39 = func_8012C6B4(0xA0);
    sp38 = func_8012C6B4(0xA0);
    sp37 = func_8012C6B4(0xA0);
    temp_ft4 = (f64)(func_8001EAD0(D_8021B0C0) + 1.0f) * 0.5;
    *((u8 *)arg0->unkC->unk24 + 0x22) = 1;
    func_80147370(arg0->unkC, sp39, sp38, sp37, (u32)(temp_ft4 * (255.0)));
    B_8021B0C0 = D_8021B0C0 + 0x44;
    D_8012A94C(arg0->unkC, 0x100);
    fv0 = arg0->unkC->unk24->unk2C->unkC;
    fa0 = arg0->unkC->unk24->unk2C->unk4;
    fa1 = arg0->unkC->unk24->unk2C->unk8;
    func_801FCA4C(fa0, fa1, fv0, 300.0f, 0x1D8);
    func_801FCAE0(fa0, fa1, fv0, 0x1D8);
    if ((t = (u16)--arg0->unk3C) == 0x2A) {
        func_801FA51C(sp3C);
        return;
    }
    if (t == 0) {
        arg0->unk3C = 0x14;
        func_800058DC(arg0, (s32)func_801F5BAC);
    }
}
#undef D_8012A94C
#undef func_8012C6B4
#undef func_80147370
#undef func_801F5BAC
#undef func_801F5BAC_In
#undef func_801F5BAC_Mid
#undef func_801F5BAC_Node
#undef func_801F5BAC_Struct
#undef func_801FCA4C
#undef func_801FCAE0
#define D_8012A94C D_8012A94C__func_801F59B8_450c7147
#define func_8012C6B4 func_8012C6B4__func_801F59B8_450c7147
#define func_80147370 func_80147370__func_801F59B8_450c7147
#define func_801F5BAC func_801F5BAC__func_801F59B8_450c7147
#define func_801F5BAC_In func_801F5BAC_In__func_801F59B8_450c7147
#define func_801F5BAC_Mid func_801F5BAC_Mid__func_801F59B8_450c7147
#define func_801F5BAC_Node func_801F5BAC_Node__func_801F59B8_450c7147
#define func_801F5BAC_Struct func_801F5BAC_Struct__func_801F59B8_450c7147
#define func_801FCA4C func_801FCA4C__func_801F59B8_450c7147
#define func_801FCAE0 func_801FCAE0__func_801F59B8_450c7147
#undef D_8012A94C
#undef func_8012C6B4
#undef func_80147370
#undef func_801F5BAC
#undef func_801F5BAC_In
#undef func_801F5BAC_Mid
#undef func_801F5BAC_Node
#undef func_801F5BAC_Struct
#undef func_801FCA4C
#undef func_801FCAE0
#define D_8012A94C D_8012A94C__func_801F59B8
#define func_8012C6B4 func_8012C6B4__func_801F59B8
#define func_80147370 func_80147370__func_801F59B8
#define func_801F5BAC func_801F5BAC__func_801F59B8
#define func_801F5BAC_In func_801F5BAC_In__func_801F59B8
#define func_801F5BAC_Mid func_801F5BAC_Mid__func_801F59B8
#define func_801F5BAC_Node func_801F5BAC_Node__func_801F59B8
#define func_801F5BAC_Struct func_801F5BAC_Struct__func_801F59B8
#define func_801FCA4C func_801FCA4C__func_801F59B8
#define func_801FCAE0 func_801FCAE0__func_801F59B8
#undef D_8012A94C
#undef D_80218CA8
#undef func_8012C6B4
#undef func_80147370
#undef func_801F5BAC
#undef func_801F5BAC_In
#undef func_801F5BAC_Mid
#undef func_801F5BAC_Node
#undef func_801F5BAC_Struct
#undef func_801FCA4C
#undef func_801FCAE0

#define func_801F5EFC func_801F5EFC__func_801F5BAC

struct func_801F5BAC_Node { u8 pad0[4]; f32 unk4; f32 unk8; f32 unkC; };
struct func_801F5BAC_Mid { u8 pad0[0x2C]; struct func_801F5BAC_Node *unk2C; };
struct func_801F5BAC_In { u8 pad0[0x24]; struct func_801F5BAC_Mid *unk24; };
struct func_801F5BAC_Struct { u8 pad0[0xC]; struct func_801F5BAC_In *unkC; u8 pad1[0x3C - 0x10]; u16 unk3C; };

extern void func_80147370(void *, s32, s32, s32, s32);
extern void func_801FCA4C(f32, f32, f32, f32, s32);
extern void func_801FCAE0(f32, f32, f32, s32);
extern f64 D_80218CB0;
extern f64 D_80218CB8;
void func_801F5EFC();
extern void func_8012A94C(void *, s32);

void func_801F5BAC(struct func_801F5BAC_Struct *arg0, s32 arg1) {
    u32 t;
    f32 x, y, z;
    struct func_801F5BAC_Node *n;
    u16 k = 20;

    t = (u16)(u32)((f32)(arg0->unk3C * 0xA0) / (f32)k);
    func_80147370(arg0->unkC, (u8)(u32)(t * (0.8)), (u8)(u32)(t * 0.5), (u8)(u32)(t * (0.2)), 0xFF);
    func_8012A94C(arg0->unkC, 0x100);
    n = arg0->unkC->unk24->unk2C;
    x = n->unk4; y = n->unk8; z = n->unkC;
    func_801FCA4C(x, y, z, 300.0f, 0x1D8);
    func_801FCAE0(x, y, z, 0x1D8);
    arg0->unk3C = arg0->unk3C - 1;
    if (arg0->unk3C == 0) {
        func_800058DC(arg0, (s32)func_801F5EFC);
    }
}
#undef func_801F5EFC


struct func_801F5EFC_StructInner {
    u8 pad0[0x24];
    s32 unk24;
    u8 pad1[0xA8 - 0x28];
    s32 unkA8;
    u8 unkAC;
    u8 unkAD;
};

struct func_801F5EFC_StructOuter {
    u8 pad0[0xC];
    struct func_801F5EFC_StructInner *unkC;
};

void func_80147450(void *);
void func_801FA570(s32);

void func_801F5EFC(struct func_801F5EFC_StructOuter *arg0, s32 arg1) {
    func_801FA570(arg0->unkC->unkA8);
    func_800062F8(arg0->unkC->unk24, 0x80000900);
    func_80147450(arg0->unkC);
    arg0->unkC->unkAD = 0;
    func_80005700(arg0);
}

#define func_801F55E0 func_801F55E0__func_801F5F5C

typedef struct func_801F5F5C_Inner {
    u8 pad0[0x14];
    s32 unk14;
} func_801F5F5C_Inner;

typedef struct func_801F5F5C_Struct {
    u8 pad0[0x38];
    func_801F5F5C_Inner *unk38;
    u8 pad1[0xAF - 0x3C];
    u8 unkAF;
} func_801F5F5C_Struct;

extern s32 func_801270C0();
void func_801F55E0(s32);
void func_801268CC(s32);

extern u8 D_801BCC21[];
extern s16 D_801BBD84;
extern s16 D_801BBF90[];

void func_801F5F5C(func_801F5F5C_Struct *arg0, s32 arg1)
{
  D_801BCC21[3] = arg0->unkAF;
  if (func_801270C0() != 0)
  {
    D_801BBD84 = 2;
    func_801F5574(arg0, 0);
    if (!(arg0->unk38->unk14 & 0xFFFF))
    {
      func_801F55E0(1);
    }
    else
    {
      func_801F55E0(0);
    }
    D_801BBF90[2] = arg0->unk38->unk14 & 0xFFFFu;
    func_80020744(7);
    func_801268CC((((u32) arg0->unk38->unk14) >> 16) & 0xFFFF);
  }
}
#undef func_801F55E0

#define func_801F53E8 func_801F53E8__func_801F6008
#define func_801F60D8 func_801F60D8__func_801F6008

struct func_801F6008_Struct {
    u8 pad0[0x5C];
    struct func_801F5230_StructB *unk5C;
    u8 pad1[0xAE - 0x60];
    u8 unkAE;
    u8 unkAF;
};

extern s32 func_80010550();
extern s32 func_801C3B3C();
extern s8 func_801F53E8(void *);
extern void func_801F60D8();
extern void func_801F70E0();

#undef func_801F53E8
#undef func_801F60D8
#define func_801F3FFC_Arg func_801F3FFC_Arg__func_801F6008_c2af8225
#define func_801F3FFC_Node func_801F3FFC_Node__func_801F6008_c2af8225
#define func_801F5230_StructArg func_801F5230_StructArg__func_801F6008_c2af8225
#define func_801F5230_StructB func_801F5230_StructB__func_801F6008_c2af8225
#define func_801F53E8 func_801F53E8__func_801F6008_c2af8225
#define func_801F6008_Struct func_801F6008_Struct__func_801F6008_c2af8225
#define func_801F60D8 func_801F60D8__func_801F6008_c2af8225
#define func_801F70E0 func_801F70E0__func_801F6008_c2af8225
struct func_801F3FFC_Node {
    u8 pad0[8];
    f32 unk8;
    u8 pad1[0x20];
    struct func_801F3FFC_Node *unk2C;
};
struct func_801F3FFC_Arg {
    u8 pad0[0x24];
    struct func_801F3FFC_Node *unk24;
};
struct func_801F5230_StructB {
    u8 pad0[0x78];
    s16 unk78;
};
struct func_801F5230_StructArg {
    u8 pad0[0x5C];
    struct func_801F5230_StructB *unk5C;
    u8 pad1[0xAF - 0x60];
    u8 unkAF;
};

struct func_801F6008_Struct {
    u8 pad0[0x5C];
    struct func_801F5230_StructB *unk5C;
    u8 pad1[0xAE - 0x60];
    u8 unkAE;
    u8 unkAF;
};
extern s8 func_801F53E8(void *);
extern void func_801F60D8();
extern void func_801F70E0();

void func_801F6008(struct func_801F6008_Struct *arg0, s32 arg1)
{
  struct func_801F5230_StructB *sp24;
  u32 temp_t8;
  f32 var_ft0;
  sp24 = arg0->unk5C;
  func_80010550(arg1, sp24, arg1);

  if (func_801F48C8(arg0, 0xA) != 0)
  {
    sp24->unk78 = 1;
    func_800058DC(arg0, (s32) func_801F60D8);
  }
  if (func_801C3B3C() == 0)
  {
    temp_t8 = arg0->unkAE;
    var_ft0 = (f32) ((unsigned short) temp_t8);
    if (func_801F3FFC((struct func_801F3FFC_Arg *) arg0, var_ft0) != 0)
    {
      arg0->unkAF = func_801F53E8(arg0);
      func_801F5230((struct func_801F5230_StructArg *) arg0);
      func_800058DC(arg0, (s32) func_801F70E0);
    }
  }
}
#undef func_801F3FFC_Arg
#undef func_801F3FFC_Node
#undef func_801F5230_StructArg
#undef func_801F5230_StructB
#undef func_801F53E8
#undef func_801F6008_Struct
#undef func_801F60D8
#undef func_801F70E0
#define func_801F53E8 func_801F53E8__func_801F6008
#define func_801F60D8 func_801F60D8__func_801F6008
#undef func_801F53E8
#undef func_801F60D8

#define func_801F3B6C func_801F3B6C__func_801F60D8
#define func_801F3FFC func_801F3FFC__func_801F60D8
#define func_801F42E4 func_801F42E4__func_801F60D8
#define func_801F4A48 func_801F4A48__func_801F60D8
#define func_801F5230 func_801F5230__func_801F60D8
#define func_801F55EC func_801F55EC__func_801F60D8
#define func_801F62DC func_801F62DC__func_801F60D8
s32 func_801F3FFC(struct func_801F3FFC_Arg *arg0, f32 arg1);
void func_801F42E4(func_801F42E4_Struct *arg0, u16 arg1);
void func_801F4A48(func_801F4A48_Struct *arg0);
void func_801F5230(struct func_801F5230_StructArg *arg0);
s32 func_801F55EC(func_801F55EC_Struct *arg0);
extern s32 func_801F5630();
typedef struct func_801F63E0_Struct3 { s32 w0; s32 w1; s32 w2; } func_801F63E0_Struct3;
extern void func_801F74FC();
extern s32 D_8012CE9C(s32, s32, func_801F63E0_Struct3, s32);
typedef struct func_801F74FC_Obj {
    u8 pad0[0x5C];
    s32 unk5C;
} func_801F74FC_Obj;
void func_801F74FC(func_801F74FC_Obj *arg0, s32 arg1);
extern s32 func_8012C6B4(s32);

typedef struct func_801F60D8_Obj {
    u8 pad0[0x3C];
    u16 unk3C;
    u8 pad3E[0x5C - 0x3E];
    struct func_801F5230_StructB *unk5C;
    u8 pad60[0x90 - 0x60];
    s16 unk90;
    u8 pad92[1];
    u8 unk93;
    s16 unk94;
    s16 unk96;
    u8 pad98[2];
    u16 unk9A;
    u8 pad9C[0xAE - 0x9C];
    u8 unkAE;
    s8 unkAF;
} func_801F60D8_Obj;

extern void func_801F3B6C();
extern void D_801F474C(void *, s32, f32, f32);
extern void func_801F62DC();
extern func_801F63E0_Struct3 D_8021AFE8;

void func_801F60D8(func_801F60D8_Obj *arg0, s32 arg1) {
    struct func_801F5230_StructB *sp2C = arg0->unk5C;
    struct func_801F3FFC_Node *q;

    if (func_801F5630() && func_801F55EC((func_801F55EC_Struct *)arg0)) {
        sp2C->unk78 = 1;
        func_800058DC(arg0, (s32)func_801F74FC);
        return;
    }
    if (func_801C3B3C() == 0) {
        if (func_801F3FFC((struct func_801F3FFC_Arg *)arg0, (f32)arg0->unkAE) != 0) {
            arg0->unkAF = func_801F53E8((s32)arg0);
            func_801F5230((struct func_801F5230_StructArg *)arg0);
            func_800058DC(arg0, (s32)func_801F70E0);
            return;
        }
    }
    if (func_801F55EC((func_801F55EC_Struct *)arg0) != 0) {
        if (D_8012CE9C(arg1, (s32)sp2C, D_8021AFE8, 10) == 0) {
            func_801F4A48((func_801F4A48_Struct *)arg0);
            if (arg0->unk93 != 0) {
                q = D_801BBCD0->unk2C;
                D_801F474C(arg0, arg0->unk90, *(f32 *)((u8 *)q + 4), *(f32 *)((u8 *)q + 0xC));
                if ((arg0->unk3C++ % 60) == 0 && func_8012C6B4(3) < 2) {
                    sp2C->unk78 = 1;
                    func_801F3B6C(arg0);
                    func_800058DC(arg0, (s32)func_801F62DC);
                }
            } else {
                func_801F42E4((func_801F42E4_Struct *)arg0, arg0->unk9A);
                D_801F474C(arg0, arg0->unk90, (f32)arg0->unk94, (f32)arg0->unk96);
            }
            func_80010550(arg1, sp2C);
        }
    }
}
#undef func_801F3B6C
#undef func_801F3FFC
#undef func_801F42E4
#undef func_801F4A48
#undef func_801F5230
#undef func_801F55EC
#undef func_801F62DC

#define func_801F60D8 func_801F60D8__func_801F62DC

extern void func_801F60D8();

void func_801F62DC(struct func_801F6008_Struct *arg0, s32 arg1)
{
    struct func_801F5230_StructB *sp2C;

    sp2C = arg0->unk5C;
    if (func_801C3B3C() == 0) {
        if (func_801F3FFC((struct func_801F3FFC_Arg *)arg0, (f32)(u32)arg0->unkAE) != 0) {
            arg0->unkAF = func_801F53E8((s32)arg0);
            func_801F5230((struct func_801F5230_StructArg *)arg0);
            func_800058DC(arg0, (s32)func_801F70E0);
            return;
        }
    }
    func_8012A94C(arg0, 0x100);
    if (D_8012CE9C(arg1, (s32)sp2C, *(func_801F63E0_Struct3 *)&D_8021B018, 10) == 0) {
        sp2C->unk78 = 1;
        func_800058DC(arg0, (s32)func_801F60D8);
    }
}
#undef func_801F60D8

typedef struct func_801F63E0_Struct2 { u8 pad0[4]; s32 unk4; u8 pad1[4]; s32 unkC; } func_801F63E0_Struct2;
extern func_801F63E0_Struct3 D_8021AFF8;
extern void func_801F474C();

void func_801F63E0(struct func_801F6008_Struct *arg0, s32 arg1) {
    struct func_801F5230_StructB *sp2C;
    func_801F63E0_Struct2 *v;

    sp2C = arg0->unk5C;
    if (func_801F5630() && func_801F55EC((void *)arg0)) {
        sp2C->unk78 = 1;
        func_800058DC(arg0, (s32)func_801F74FC);
        return;
    }
    if (func_801C3B3C() == 0) {
        if (func_801F3FFC((void *)arg0, (f32)arg0->unkAE)) {
            arg0->unkAF = func_801F53E8((s32)arg0);
            func_801F5230((void *)arg0);
            func_800058DC(arg0, (s32)func_801F70E0);
            return;
        }
    }
    if (func_801F55EC((void *)arg0)) {
        if (D_8012CE9C(arg1, (s32)sp2C, D_8021AFF8, 10) == 0) {
            v = (func_801F63E0_Struct2 *)D_801BBCD0->unk2C;
            func_801F474C(arg0, *(s16 *)((u8 *)arg0 + 0x90), v->unk4, v->unkC);
            func_80010550(arg1, sp2C);
        }
    }
}

#define func_801F3B6C_A func_801F3B6C_A__func_801F6534
#define func_801F3B6C_M func_801F3B6C_M__func_801F6534
#define func_801F3B6C_N func_801F3B6C_N__func_801F6534
#define func_801F3B6C_S func_801F3B6C_S__func_801F6534
#define func_801F3FFC_Arg func_801F3FFC_Arg__func_801F6534
#define func_801F3FFC_Node func_801F3FFC_Node__func_801F6534
#define func_801F42E4_Inner func_801F42E4_Inner__func_801F6534
#define func_801F42E4_Struct func_801F42E4_Struct__func_801F6534
#define func_801F442C func_801F442C__func_801F6534
#define func_801F5230_StructArg func_801F5230_StructArg__func_801F6534
#define func_801F5230_StructB func_801F5230_StructB__func_801F6534
#define func_801F55EC_Struct func_801F55EC_Struct__func_801F6534
#define func_801F6008_Struct func_801F6008_Struct__func_801F6534
#define func_801F671C func_801F671C__func_801F6534
struct func_801F3B6C_N { u8 pad0[4]; f32 unk4; f32 unk8; f32 unkC; u8 pad1[0x20]; f32 unk30; f32 unk34; f32 unk38; };
struct func_801F3B6C_M { u8 pad0[0x2C]; struct func_801F3B6C_N *unk2C; };
struct func_801F3B6C_S { u8 pad[0x1A]; u16 unk1A; };
struct func_801F3B6C_A { u8 pad0[0x24]; struct func_801F3B6C_M *unk24; u8 pad1[0x34]; struct func_801F3B6C_S *unk5C; };
struct func_801F3FFC_Node {
    u8 pad0[8];
    f32 unk8;
    u8 pad1[0x20];
    struct func_801F3FFC_Node *unk2C;
};
struct func_801F3FFC_Arg {
    u8 pad0[0x24];
    struct func_801F3FFC_Node *unk24;
};
typedef struct func_801F42E4_Inner {
    u8 pad0[6];
    s16 unk6;
    u8 pad1[2];
    s16 unkA;
} func_801F42E4_Inner;
typedef struct func_801F42E4_Struct {
    u8 pad0[0x38];
    func_801F42E4_Inner *unk38;
    u8 pad1[0x94 - 0x3C];
    s16 unk94;
    s16 unk96;
    s16 unk98;
} func_801F42E4_Struct;
struct func_801F5230_StructB {
    u8 pad0[0x78];
    s16 unk78;
};
struct func_801F5230_StructArg {
    u8 pad0[0x5C];
    struct func_801F5230_StructB *unk5C;
    u8 pad1[0xAF - 0x60];
    u8 unkAF;
};
typedef struct func_801F55EC_Struct {
    u8 pad[0xAD];
    u8 unkAD;
} func_801F55EC_Struct;
struct func_801F6008_Struct {
    u8 pad0[0x5C];
    struct func_801F5230_StructB *unk5C;
    u8 pad1[0xAE - 0x60];
    u8 unkAE;
    u8 unkAF;
};

typedef struct func_801F6534_Struct {
    u8 pad0[0x3C];
    u16 unk3C;
    u8 pad3E[0x5C - 0x3E];
    struct func_801F5230_StructB *unk5C;
    u8 pad60[0x90 - 0x60];
    s16 unk90;
    u8 pad92[2];
    s16 unk94;
    s16 unk96;
    u8 pad98[2];
    u16 unk9A;
    u8 unk9C;
    u8 pad9D[0xAE - 0x9D];
    u8 unkAE;
    u8 unkAF;
} func_801F6534_Struct;

typedef struct func_801F6534_Pos {
    u8 pad0[4];
    f32 unk4;
    u8 pad8[4];
    f32 unkC;
} func_801F6534_Pos;

void func_801F671C(struct func_801F6008_Struct *arg0, s32 arg1);
extern s32 func_801F442C(void *, f32);

void func_801F6534(func_801F6534_Struct *arg0, s32 arg1) {
    struct func_801F5230_StructB *sp2C;
    func_801F6534_Pos *n;

    sp2C = arg0->unk5C;
    if (func_801C3B3C() == 0) {
        if (func_801F3FFC((struct func_801F3FFC_Arg *)arg0, (f32) arg0->unkAE) != 0) {
            arg0->unkAF = func_801F53E8((s32)arg0);
            func_801F5230((struct func_801F5230_StructArg *)arg0);
            func_800058DC(arg0, (s32) func_801F70E0);
            return;
        }
    }
    if (func_801F55EC((func_801F55EC_Struct *)arg0) != 0) {
        if (D_8012CE9C(arg1, (s32) sp2C, D_8021AFE8, 0xA) == 0) {
            if (func_801F442C(arg0, (f32) arg0->unk9C) != 0) {
                n = (func_801F6534_Pos *) D_801BBCD0->unk2C;
                D_801F474C(arg0, arg0->unk90, n->unk4, n->unkC);
                if (((arg0->unk3C++) % 60) == 0 && func_8012C6B4(3) < 2) {
                    sp2C->unk78 = 1;
                    func_801F3B6C((struct func_801F3B6C_A *)arg0);
                    func_800058DC(arg0, (s32) func_801F671C);
                }
            } else {
                arg0->unk3C = 0;
                func_801F42E4((func_801F42E4_Struct *)arg0, arg0->unk9A);
                D_801F474C(arg0, arg0->unk90, (f32) arg0->unk94, (f32) arg0->unk96);
            }
            func_80010550(arg1, sp2C);
        }
    }
}
#undef func_801F3B6C_A
#undef func_801F3B6C_M
#undef func_801F3B6C_N
#undef func_801F3B6C_S
#undef func_801F3FFC_Arg
#undef func_801F3FFC_Node
#undef func_801F42E4_Inner
#undef func_801F42E4_Struct
#undef func_801F442C
#undef func_801F5230_StructArg
#undef func_801F5230_StructB
#undef func_801F55EC_Struct
#undef func_801F6008_Struct
#undef func_801F671C


extern void func_801F6534();

void func_801F671C(struct func_801F6008_Struct *arg0, s32 arg1)
{
    struct func_801F5230_StructB *sp2C;

    sp2C = arg0->unk5C;
    if (func_801C3B3C() == 0) {
        if (func_801F3FFC((struct func_801F3FFC_Arg *)arg0, (f32)(u32)arg0->unkAE) != 0) {
            arg0->unkAF = func_801F53E8((s32)arg0);
            func_801F5230((struct func_801F5230_StructArg *)arg0);
            func_800058DC(arg0, (s32)func_801F70E0);
            return;
        }
    }
    func_8012A94C(arg0, 0x100);
    if (D_8012CE9C(arg1, (s32)sp2C, *(func_801F63E0_Struct3 *)&D_8021B018, 10) == 0) {
        sp2C->unk78 = 1;
        func_800058DC(arg0, (s32)func_801F6534);
    }
}


struct func_801F6820_Struct {
    u8 pad0[0x5C];
    struct func_801F5230_StructB *unk5C;
    u8 pad60[0x90 - 0x60];
    s16 unk90;
    u8 pad92[2];
    s16 unk94;
    s16 unk96;
    u16 unk98;
    u16 unk9A;
    u8 unk9C;
    u8 unk9D;
    u8 pad9E[0xAE - 0x9E];
    u8 unkAE;
    u8 unkAF;
};
extern s32 func_801F442C(void *, f32);

void func_801F6820(struct func_801F6820_Struct *arg0, s32 arg1) {
    struct func_801F5230_StructB *sp2C;
    func_801F3F70_StructPos *pos;

    sp2C = arg0->unk5C;
    if (func_801C3B3C() == 0) {
        if (func_801F3FFC((void *)arg0, arg0->unkAE) != 0) {
            arg0->unkAF = func_801F53E8((s32)arg0);
            func_801F5230((void *)arg0);
            func_800058DC(arg0, (s32)func_801F70E0);
            return;
        }
    }
    if (func_801F55EC((void *)arg0) != 0) {
        if (func_801F442C(arg0, arg0->unk9C) != 0) {
            if (arg0->unk9D == 0) {
                sp2C->unk78 = 1;
                func_801F3B6C((void *)arg0);
            }
            if (D_8012CE9C(arg1, (s32)sp2C, D_8021AFF8, 0xA) != 0) {
                return;
            }
            D_801F474C(arg0, (s16)(arg0->unk90 * 3), ((func_801F3F70_StructPos *)D_801BBCD0->unk2C)->unk4, ((func_801F3F70_StructPos *)D_801BBCD0->unk2C)->unkC);
            arg0->unk9D = 1;
        } else {
            if (arg0->unk9D == 1U) {
                sp2C->unk78 = 1;
            }
            if (D_8012CE9C(arg1, (s32)sp2C, D_8021AFE8, 0xA) != 0) {
                return;
            }
            func_801F42E4((void *)arg0, arg0->unk9A);
            D_801F474C(arg0, arg0->unk90, arg0->unk94, arg0->unk96);
            arg0->unk9D = 0;
        }
        func_80010550(arg1, sp2C);
    }
}


typedef struct func_801F6A3C_Struct {
    u8 pad0[0x5C];
    struct func_801F5230_StructB *unk5C;
    u8 pad60[0x30];
    s16 unk90;
    s16 unk92;
    s16 unk94;
    s16 unk96;
    s16 unk98;
    u16 unk9A;
    u8 unk9C;
    u8 unk9D;
    u8 pad9E[0x10];
    u8 unkAE;
    u8 unkAF;
} func_801F6A3C_Struct;
typedef struct func_801F6A3C_StructPos {
    u8 pad0[4];
    f32 unk4;
    u8 pad8[4];
    f32 unkC;
} func_801F6A3C_StructPos;

void func_801F6A3C(func_801F6A3C_Struct *arg0, s32 arg1) {
    struct func_801F5230_StructB *sp2C;
    func_801F6A3C_StructPos *temp_v0;

    sp2C = arg0->unk5C;
    if (func_801C3B3C() == 0) {
        if (func_801F3FFC((void *)arg0, (f32)(u32)arg0->unkAE) != 0) {
            arg0->unkAF = func_801F53E8((s32)arg0);
            func_801F5230((void *)arg0);
            func_800058DC(arg0, (s32)func_801F70E0);
            return;
        }
    }
    if (func_801F55EC((void *)arg0) != 0) {
        if (func_801F4514((void *)arg0, (f32)(u32)arg0->unk9C) != 0) {
            if (arg0->unk9D == 0) {
                sp2C->unk78 = 1;
                func_801F3B6C((struct func_801F3B6C_A *)arg0);
            }
            if (D_8012CE9C(arg1, (s32)sp2C, D_8021AFF8, 10) == 0) {
                D_801F474C(arg0, (s16)(arg0->unk90 * 3), ((func_801F6A3C_StructPos *)D_801BBCD0->unk2C)->unk4, ((func_801F6A3C_StructPos *)D_801BBCD0->unk2C)->unkC);
                arg0->unk9D = 1;
                goto end;
            }
        } else {
            if (arg0->unk9D == 1U) {
                sp2C->unk78 = 1;
            }
            if (D_8012CE9C(arg1, (s32)sp2C, D_8021AFE8, 10) == 0) {
                func_801F42E4((func_801F42E4_Struct *)arg0, arg0->unk9A);
                D_801F474C(arg0, arg0->unk90, (f32)arg0->unk94, (f32)arg0->unk96);
                arg0->unk9D = 0;
end:
                func_80010550(arg1, sp2C);
            }
        }
    }
}


extern void func_801F6E4C();
extern void func_801F6F50();

void func_801F6C58(func_801F60D8_Obj *arg0, s32 arg1) {
    struct func_801F5230_StructB *sp2C;
    u16 temp_v0;

    sp2C = arg0->unk5C;
    func_801F4A48((void *)arg0);
    if ((func_801F55EC((void *)arg0) == 0) && (arg0->unk93 != 0)) {
        sp2C->unk78 = 1;
        func_800058DC(arg0, (s32)func_801F6F50);
        return;
    }
    if ((func_801F5630(arg0) != 0) && (func_801F55EC((void *)arg0) != 0)) {
        sp2C->unk78 = 1;
        func_800058DC(arg0, (s32)func_801F74FC);
        return;
    }
    if (func_801C3B3C() == 0) {
        if (func_801F3FFC((void *)arg0, (f32)(u32)arg0->unkAE) != 0) {
            arg0->unkAF = func_801F53E8((s32)arg0);
            func_801F5230((void *)arg0);
            func_800058DC(arg0, (s32)func_801F70E0);
            return;
        }
    }
    if ((func_801F55EC((void *)arg0) != 0) &&
        (D_8012CE9C(arg1, (s32)sp2C, D_8021AFE8, 5) == 0)) {
        func_801F42E4((void *)arg0, arg0->unk9A);
        temp_v0 = arg0->unk3C;
        if ((s32)temp_v0 > 0) {
            arg0->unk3C = temp_v0 - 1;
        } else {
            if (arg0->unk93 != 0) {
                sp2C->unk78 = 1;
                func_801F3B6C(arg0);
                func_800058DC(arg0, (s32)func_801F6E4C);
            }
            D_801F474C(arg0, arg0->unk90, (f32)arg0->unk94, (f32)arg0->unk96);
        }
        func_80010550(arg1, sp2C);
    }
}

#define func_801F5230_StructB func_801F5230_StructB__func_801F6E4C
#define func_801F6008_Struct func_801F6008_Struct__func_801F6E4C
struct func_801F5230_StructB {
    u8 pad0[0x78];
    s16 unk78;
};
struct func_801F6008_Struct {
    u8 pad0[0x5C];
    struct func_801F5230_StructB *unk5C;
    u8 pad1[0xAE - 0x60];
    u8 unkAE;
    u8 unkAF;
};

void func_801F6E4C(struct func_801F6008_Struct *arg0, s32 arg1)
{
    struct func_801F5230_StructB *sp2C;

    sp2C = arg0->unk5C;
    if (func_801C3B3C() == 0) {
        if (func_801F3FFC((void *)arg0, (f32)(u32)arg0->unkAE) != 0) {
            arg0->unkAF = func_801F53E8((s32)arg0);
            func_801F5230((void *)arg0);
            func_800058DC(arg0, (s32)func_801F70E0);
            return;
        }
    }
    func_8012A94C(arg0, 0x100);
    if (D_8012CE9C(arg1, (s32)sp2C, *(func_801F63E0_Struct3 *)&D_8021B018, 10) == 0) {
        sp2C->unk78 = 1;
        func_800058DC(arg0, (s32)func_801F6F50);
    }
}
#undef func_801F5230_StructB
#undef func_801F6008_Struct

#define func_801F3FFC_Arg func_801F3FFC_Arg__func_801F6F50
#define func_801F3FFC_Node func_801F3FFC_Node__func_801F6F50
#define func_801F4A48_Struct func_801F4A48_Struct__func_801F6F50
#define func_801F5230_StructB func_801F5230_StructB__func_801F6F50
#define func_801F55EC_Struct func_801F55EC_Struct__func_801F6F50
struct func_801F3FFC_Node {
    u8 pad0[8];
    f32 unk8;
    u8 pad1[0x20];
    struct func_801F3FFC_Node *unk2C;
};
struct func_801F3FFC_Arg {
    u8 pad0[0x24];
    struct func_801F3FFC_Node *unk24;
};
typedef struct func_801F4A48_Struct {
    u8 pad[0x92];
    u8 unk92;
    u8 unk93;
} func_801F4A48_Struct;
struct func_801F5230_StructB {
    u8 pad0[0x78];
    s16 unk78;
};
typedef struct func_801F55EC_Struct {
    u8 pad[0xAD];
    u8 unkAD;
} func_801F55EC_Struct;

typedef struct func_801F6F50_Struct {
    u8 pad0[0x5C];
    struct func_801F5230_StructB *unk5C;
    u8 pad1[0x90 - 0x60];
    s16 unk90;
    u8 pad92;
    u8 unk93;
    u8 pad94[0xAE - 0x94];
    u8 unkAE;
    u8 unkAF;
} func_801F6F50_Struct;

void func_801F6F50(func_801F6F50_Struct *arg0, s32 arg1) {
    struct func_801F5230_StructB *sp2C;
    func_801F63E0_Struct2 *v;

    sp2C = arg0->unk5C;
    if (func_801F5630() != 0 && func_801F55EC((func_801F55EC_Struct *)arg0) != 0) {
        sp2C->unk78 = 1;
        func_800058DC(arg0, (s32)func_801F74FC);
        return;
    }
    if (func_801C3B3C() == 0) {
        if (func_801F3FFC((struct func_801F3FFC_Arg *)arg0, (f32)(u32)arg0->unkAE) != 0) {
            arg0->unkAF = func_801F53E8((s32)arg0);
            func_801F5230(arg0);
            func_800058DC(arg0, (s32)func_801F70E0);
            return;
        }
    }
    if (func_801F55EC((func_801F55EC_Struct *)arg0) != 0) {
        if (D_8012CE9C(arg1, (s32)sp2C, D_8021AFF8, 10) == 0) {
            func_801F4A48((func_801F4A48_Struct *)arg0);
            if (arg0->unk93 == 0) {
                sp2C->unk78 = 1;
                func_800058DC(arg0, (s32)func_801F6C58);
            }
            v = (func_801F63E0_Struct2 *)D_801BBCD0->unk2C;
            func_801F474C(arg0, (s16)(arg0->unk90 * 2), v->unk4, v->unkC);
            func_80010550(arg1, sp2C);
        }
    }
}
#undef func_801F3FFC_Arg
#undef func_801F3FFC_Node
#undef func_801F4A48_Struct
#undef func_801F5230_StructB
#undef func_801F55EC_Struct

#define D_8013A334 D_8013A334__func_801F70E0
#define D_801F3C90 D_801F3C90__func_801F70E0
#define D_80218CC0 D_80218CC0__func_801F70E0
#define D_8021B028 D_8021B028__func_801F70E0
#define D_8021B02C D_8021B02C__func_801F70E0
#define D_8021B030 D_8021B030__func_801F70E0
#define func_80130AA0 func_80130AA0__func_801F70E0
#define func_80147768 func_80147768__func_801F70E0
#define func_801F4620_Struct func_801F4620_Struct__func_801F70E0
#define func_801F73F0 func_801F73F0__func_801F70E0
#define func_801FA2E0 func_801FA2E0__func_801F70E0
#define func_801FA374 func_801FA374__func_801F70E0
typedef struct func_801F4620_Struct {
    f32 unk0;
    f32 unk4;
    f32 unk8;
} func_801F4620_Struct;

typedef struct func_801F70E0_StructPos {
    u8 pad[4];
    f32 x, y, z;
    u8 pad10[0x20];
    f32 a, b, c;
} func_801F70E0_StructPos;
typedef struct func_801F70E0_StructMid {
    u8 pad[0x2C];
    func_801F70E0_StructPos *pos;
} func_801F70E0_StructMid;
typedef struct func_801F70E0_StructArg {
    u8 pad[0x24];
    func_801F70E0_StructMid *mid;
    u8 pad28[0x34];
    void *data;
    u8 pad60[0x4F];
    u8 flag;
} func_801F70E0_StructArg;
typedef struct func_801F70E0_StructGlobal {
    u8 pad[0xE0];
    func_801F70E0_StructMid *obj;
    u8 padE4[4];
    func_801F70E0_StructMid *other;
} func_801F70E0_StructGlobal;
extern f32 D_80218CC0;
extern void func_80147768(f32 *, f32);
extern s32 func_801FA374();
extern f32 D_8021B028;
extern f32 D_8021B02C;
extern f32 D_8021B030;
extern s32 D_8013A334(f32 *, s32, void *, s32);
extern s32 D_801F3C90(void *, f32, f32, s32, f32, f32, f32, f32, f32, f32, f32, f32);
extern void func_80130AA0(s32, u16, s32, f32 *, f32 *, f32 *);
extern s32 func_801FA2E0();
extern void func_801F73F0();

#define VEC ((func_801F4620_Struct *)&D_8021B028)
#define GLOBAL ((func_801F70E0_StructGlobal *)&D_801BBBF0)
#define PLAYER ((func_801F70E0_StructMid *)D_801BBCD0)

#undef D_8013A334
#undef D_801F3C90
#undef D_8021B028
#undef D_8021B02C
#undef D_8021B030
#undef GLOBAL
#undef PLAYER
#undef VEC
#undef func_80130AA0
#undef func_80147768
#undef func_801F73F0
#undef func_801FA2E0
#undef func_801FA374
#define D_8013A334 D_8013A334__func_801F70E0_f97a5acc
#define D_801F3C90 D_801F3C90__func_801F70E0_f97a5acc
#define D_8021B028 D_8021B028__func_801F70E0_f97a5acc
#define D_8021B02C D_8021B02C__func_801F70E0_f97a5acc
#define D_8021B030 D_8021B030__func_801F70E0_f97a5acc
#define func_80130AA0 func_80130AA0__func_801F70E0_f97a5acc
#define func_80147768 func_80147768__func_801F70E0_f97a5acc
#define func_801F70E0_StructArg func_801F70E0_StructArg__func_801F70E0_f97a5acc
#define func_801F70E0_StructGlobal func_801F70E0_StructGlobal__func_801F70E0_f97a5acc
#define func_801F70E0_StructMid func_801F70E0_StructMid__func_801F70E0_f97a5acc
#define func_801F70E0_StructPos func_801F70E0_StructPos__func_801F70E0_f97a5acc
#define func_801F73F0 func_801F73F0__func_801F70E0_f97a5acc
#define func_801FA2E0 func_801FA2E0__func_801F70E0_f97a5acc
#define func_801FA374 func_801FA374__func_801F70E0_f97a5acc
#define VEC ((func_801F4620_Struct *)&D_8021B028)

typedef struct func_801F70E0_StructPos {
    u8 pad[4];
    f32 x, y, z;
    u8 pad10[0x20];
    f32 a, b, c;
} func_801F70E0_StructPos;
typedef struct func_801F70E0_StructMid {
    u8 pad[0x2C];
    func_801F70E0_StructPos *pos;
} func_801F70E0_StructMid;
typedef struct func_801F70E0_StructArg {
    u8 pad[0x24];
    func_801F70E0_StructMid *mid;
    u8 pad28[0x34];
    void *data;
    u8 pad60[0x4F];
    u8 flag;
} func_801F70E0_StructArg;
typedef struct func_801F70E0_StructGlobal {
    u8 pad[0xE0];
    func_801F70E0_StructMid *obj;
    u8 padE4[4];
    func_801F70E0_StructMid *other;
} func_801F70E0_StructGlobal;
extern void func_80147768(f32 *, f32);
extern s32 func_801FA374();
extern f32 D_8021B028;
extern f32 D_8021B02C;
extern f32 D_8021B030;
extern s32 D_8013A334(f32 *, s32, void *, s32);
extern s32 D_801F3C90(void *, f32, f32, s32, f32, f32, f32, f32, f32, f32, f32, f32);
extern void func_80130AA0(s32, u16, s32, f32 *, f32 *, f32 *);
extern s32 func_801FA2E0();
extern void func_801F73F0();

#define VEC ((func_801F4620_Struct *)&D_8021B028)
#define GLOBAL ((func_801F70E0_StructGlobal *)&D_801BBBF0)
#define PLAYER ((func_801F70E0_StructMid *)D_801BBCD0)

void func_801F70E0(func_801F70E0_StructArg *arg0, s32 arg1) {
    void *data;
    func_801F4620_Struct sp58;
    f32 sp4C[3];
    u8 flag;
    s8 dir;

    data = arg0->data;
    D_8013A334(sp4C, arg1, data, 6);
    if (D_801F3C90(arg0, 0.8f, (0.15f), *(s32 *)&PLAYER->pos->x, PLAYER->pos->y + 25.0f, PLAYER->pos->z, (0.15f), sp4C[0], sp4C[1], sp4C[2], (0.15f), 30.0f)) {
        flag = arg0->flag;
        if (flag != 0) {
            func_801FA374(flag);
        } else {
            func_801FA2E0(flag);
        }
        func_801F4620(VEC, PLAYER->pos->x, PLAYER->pos->y, PLAYER->pos->z, arg0->mid->pos->x, arg0->mid->pos->y, arg0->mid->pos->z);
        func_80147768(&D_8021B028, 8.0f);
        sp58 = *VEC;
        dir = func_8012C6B4(2) * 2 - 1;
        func_80130AA0(0, dir * 0x71C, 0, &D_8021B028, &D_8021B02C, &D_8021B030);
        VEC->unk0 += GLOBAL->obj->pos->x;
        VEC->unk4 += GLOBAL->obj->pos->y + 5.0;
        VEC->unk8 += GLOBAL->obj->pos->z;
        if (func_8010843C(GLOBAL->other->pos->a, GLOBAL->other->pos->b, GLOBAL->other->pos->c, VEC->unk0, VEC->unk4, VEC->unk8)) {
            dir = -dir;
            func_80130AA0(0, dir * 0x71C, 0, &sp58.unk0, &sp58.unk4, &sp58.unk8);
            VEC->unk0 = sp58.unk0 += PLAYER->pos->x;
            VEC->unk4 = sp58.unk4 += PLAYER->pos->y + 5.0;
            VEC->unk8 = sp58.unk8 += PLAYER->pos->z;
        }
        func_800058DC(arg0, (s32)func_801F73F0);
    }
}
#undef VEC
#undef GLOBAL
#undef PLAYER
#undef D_8013A334
#undef D_801F3C90
#undef D_8021B028
#undef D_8021B02C
#undef D_8021B030
#undef func_80130AA0
#undef func_80147768
#undef func_801F70E0_StructArg
#undef func_801F70E0_StructGlobal
#undef func_801F70E0_StructMid
#undef func_801F70E0_StructPos
#undef func_801F73F0
#undef func_801FA2E0
#undef func_801FA374
#define D_8013A334 D_8013A334__func_801F70E0
#define D_801F3C90 D_801F3C90__func_801F70E0
#define D_8021B028 D_8021B028__func_801F70E0
#define D_8021B02C D_8021B02C__func_801F70E0
#define D_8021B030 D_8021B030__func_801F70E0
#define GLOBAL ((func_801F70E0_StructGlobal *)&D_801BBBF0)
#define PLAYER ((func_801F70E0_StructMid *)D_801BBCD0)
#define VEC ((func_801F4620_Struct *)&D_8021B028)
#define func_80130AA0 func_80130AA0__func_801F70E0
#define func_80147768 func_80147768__func_801F70E0
#define func_801F73F0 func_801F73F0__func_801F70E0
#define func_801FA2E0 func_801FA2E0__func_801F70E0
#define func_801FA374 func_801FA374__func_801F70E0
#undef VEC
#undef GLOBAL
#undef PLAYER
#undef D_8013A334
#undef D_801F3C90
#undef D_80218CC0
#undef D_8021B028
#undef D_8021B02C
#undef D_8021B030
#undef func_80130AA0
#undef func_80147768
#undef func_801F4620_Struct
#undef func_801F73F0
#undef func_801FA2E0
#undef func_801FA374


extern f32 D_80218CC4;
extern f32 D_8021B028;
extern s32 D_8013A334(f32 *, s32, void *, s32);
extern s32 D_801F3C90(void *, f32, f32, s32, f32, f32, f32, f32, f32, f32, f32, f32);


void func_801F73F0(func_801F74FC_Obj *arg0, s32 arg1) {
    s32 sp4C;
    f32 sp40[3];

    sp4C = arg0->unk5C;
    if (((u8 *)arg0)[0xAF] != 2) {
        func_8012A94C(arg0, 0x100);
        D_8012CE9C(arg1, sp4C, *(func_801F63E0_Struct3 *)&D_80216EE8, 0x14);
    }
    D_8013A334(sp40, arg1, (void *)sp4C, 6);
    if (D_801F3C90(arg0, 0.01f, (0.15f), *(s32 *)&D_8021B028, (&D_8021B028)[1], (&D_8021B028)[2], (0.15f), sp40[0], sp40[1], sp40[2], (0.15f), 50.0f) != 0) {
        func_800058DC(arg0, (s32)func_801F5F5C);
    }
}


typedef struct func_801F74FC_Struct {
    s32 w0;
    s32 w1;
    s32 w2;
} func_801F74FC_Struct;


extern void func_8012CE9C(s32, s32, func_801F74FC_Struct, s32);
extern func_801F74FC_Struct D_80216EB8;

void func_801F74FC(func_801F74FC_Obj *arg0, s32 arg1) {
    s32 a;

    a = arg0->unk5C;
    func_8012CE9C(arg1, a, D_80216EB8, 0x3C);
}


s32 func_80150584();
s32 func_801505E4();
s32 func_80150614();
s32 func_8015067C(s32, u16);

struct func_801F7554_Struct24 {
    u8 pad[0x22];
    u8 unk22;
};

struct func_801F7554_Struct {
    u8 pad0[0x24];
    struct func_801F7554_Struct24 *unk24;
};

void func_801F7554(struct func_801F7554_Struct *arg0, s32 arg1) {
    s32 sp1C;

    if (func_80150584() != 0) {
        sp1C = func_80150614();
        if (func_8015067C(func_801505E4() & 0xFFFF, (u16) sp1C) & 4) {
            arg0->unk24->unk22 = 0;
        }
    }
}

#define func_801C3B3C func_801C3B3C__func_801F75B0

struct func_801F75B0_Struct {
    u8 pad0[0x90];
    u16 unk90;
    u8 padA[0x1C];
    u8 unkAE;
};

extern s32 func_801C3B3C(void);
extern void func_801F7638();

void func_801F75B0(struct func_801F75B0_Struct *arg0, s32 arg1)
{
    if (func_801C3B3C() == 0) {
        if (func_801F3FFC((struct func_801F3FFC_Arg *) arg0, (f32) arg0->unkAE) != 0) {
            func_801F5230((struct func_801F5230_StructArg *) arg0);
            arg0->unk90 = 0;
            func_800058DC(arg0, (s32) func_801F7638);
        }
    }
}
#undef func_801C3B3C

/* hh-block asm/nonmatchings/file010/801F3B30/_ro_regular_157da9685d98c559.s {"functions":[],"rodata":[],"rodata_bytes":[2149682380,6069452,4],"rodata_section":".rodata"} */
#pragma GLOBAL_ASM("asm/nonmatchings/file010/801F3B30/_ro_regular_157da9685d98c559.s")
#define D_801BBCD0 D_801BBCD0__func_801F7638
#define D_80216E68 D_80216E68__func_801F7638
#define D_8021AFE4 D_8021AFE4__func_801F7638
#define func_8011AAF4 func_8011AAF4__func_801F7638
#define func_80130AA0 func_80130AA0__func_801F7638
#define func_80147734 func_80147734__func_801F7638
#define func_801F3FFC_Node func_801F3FFC_Node__func_801F7638
#define func_801F4620 func_801F4620__func_801F7638
#define func_801F4620_Struct func_801F4620_Struct__func_801F7638
#define func_801F7928 func_801F7928__func_801F7638
#define func_801F7928_C func_801F7928_C__func_801F7638
#define func_801F7928_D func_801F7928_D__func_801F7638
struct func_801F3FFC_Node {
    u8 pad0[8];
    f32 unk8;
    u8 pad1[0x20];
    struct func_801F3FFC_Node *unk2C;
};
extern struct func_801F3FFC_Node *D_801BBCD0;
extern void *D_8021AFE4;
extern void func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern void func_80130AA0(s32, u16, s32, f32 *, f32 *, f32 *);
extern void func_80147734(f32 *, f32 *, f32 *);
typedef struct func_801F4620_Struct {
    f32 unk0;
    f32 unk4;
    f32 unk8;
} func_801F4620_Struct;
void func_801F4620(func_801F4620_Struct *arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6);
struct func_801F7928_C { u8 pad0[0x50]; f32 unk50; };
struct func_801F7928_D { u8 pad0[0x24]; struct func_801F3FFC_Node *unk24; u8 pad1[0x14]; s16 unk3C; u8 pad2[0x1E]; struct func_801F7928_C *unk5C; };
void func_801F7928(struct func_801F7928_D *arg0, s32 arg1);


typedef struct func_801F7638_StructPos {
    u8 pad0[4];
    union { f32 f; s32 i; } x;
    f32 y;
    f32 z;
    u8 pad10[2];
    u16 angle;
} func_801F7638_StructPos;

typedef struct func_801F7638_StructMid {
    u8 pad0[0x2C];
    func_801F7638_StructPos *pos;
} func_801F7638_StructMid;

typedef struct func_801F7638_StructObj {
    u8 pad0[0x24];
    func_801F7638_StructMid *mid;
    u8 pad28[0x34];
    void *data;
    u8 pad60[0x30];
    s16 timer;
} func_801F7638_StructObj;

extern u8 D_80216E68[];
void func_801F7638(func_801F7638_StructObj *arg0, s32 arg1) {
    void *data;
    func_801F4620_Struct vec;
    func_801F4620_Struct vec2;
    func_801F4620_Struct vec3;
    f32 y;

    data = arg0->data;
    arg0->timer += 10;
    if (arg0->timer >= 80) {
        arg0->timer = 80;
    }
    func_80147AF0(0, arg0->timer & 0xFF, 0, 0);
    func_80147AA8(0, 20, 20, 50);
    D_8013A334(&vec.unk0, arg1, data, 6);
    y = (0.15f);
    if (D_801F3C90(arg0, 0.3f, y,
                   ((func_801F7638_StructPos *)D_801BBCD0->unk2C)->x.i,
                   ((func_801F7638_StructPos *)D_801BBCD0->unk2C)->y + 25.0f,
                   ((func_801F7638_StructPos *)D_801BBCD0->unk2C)->z, y,
                   vec.unk0, vec.unk4, vec.unk8, y, 30.0f) != 0) {
        func_801F4620(&vec2, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 10.0f);
        func_80130AA0(0, arg0->mid->pos->angle, 0, &vec2.unk0, &vec2.unk4, &vec2.unk8);
        func_80130AA0(0, 0x31C, 0, &vec2.unk0, &vec2.unk4, &vec2.unk8);
        y = arg0->mid->pos->y + 8.0f;
        vec2.unk0 += arg0->mid->pos->x.f;
        vec2.unk4 += y;
        vec2.unk8 += arg0->mid->pos->z;
        func_801F4620(&vec3, vec2.unk0, vec2.unk4, vec2.unk8,
                      arg0->mid->pos->x.f, y, arg0->mid->pos->z);
        func_80130AA0(0, 0x5B, 0, &vec3.unk0, &vec3.unk4, &vec3.unk8);
        func_80147734(&vec2.unk0, &vec3.unk0, &vec3.unk0);
        func_8011AAF4("/hdisk1/u/nu64/rz011_usa/main/game/source/enemy/wanderer.c", 0x6CF,
                      arg0, 0, 1, 3.0f, vec2.unk0, vec2.unk4, vec2.unk8, 3.0f,
                      vec3.unk0, vec3.unk4 - 2.0f, vec3.unk8, 0.0f, 35.0f, -1, -1);
        D_8021AFE4 = (void *)func_80005670(arg0, D_80216E68);
        func_800058DC(arg0, (s32)func_801F7928);
    }
}
#undef D_801BBCD0
#undef D_80216E68
#undef D_8021AFE4
#undef func_8011AAF4
#undef func_80130AA0
#undef func_80147734
#undef func_801F3FFC_Node
#undef func_801F4620
#undef func_801F4620_Struct
#undef func_801F7928
#undef func_801F7928_C
#undef func_801F7928_D

#define func_801F7A5C func_801F7A5C__func_801F7928

struct func_801F7A5C_Struct;
void func_801F7A5C(struct func_801F7A5C_Struct *arg0, s32 arg1);
struct func_801F7928_B { u8 pad0[0x30]; f32 f30; f32 f34; f32 f38; f32 f3c; f32 f40; f32 f44; };
struct func_801F7928_A { u8 pad0[0x2C]; struct func_801F7928_B *unk2C; };
struct func_801F7928_C { u8 pad0[0x50]; f32 unk50; };
struct func_801F7928_D { u8 pad0[0x24]; struct func_801F3FFC_Node *unk24; u8 pad1[0x14]; s16 unk3C; u8 pad2[0x1E]; struct func_801F7928_C *unk5C; };
extern u8 D_80218994[];
extern f64 D_80218CD0;
extern f64 D_80218CD8;
extern void func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);

#undef func_801F7A5C
#define D_801BBCD8 D_801BBCD8__func_801F7928_3faed79d
#define func_801F3FFC_Node func_801F3FFC_Node__func_801F7928_3faed79d
#define func_801F7928_A func_801F7928_A__func_801F7928_3faed79d
#define func_801F7928_B func_801F7928_B__func_801F7928_3faed79d
#define func_801F7928_C func_801F7928_C__func_801F7928_3faed79d
#define func_801F7928_D func_801F7928_D__func_801F7928_3faed79d
#define func_801F7A5C func_801F7A5C__func_801F7928_3faed79d
#define func_801F7A5C_Struct func_801F7A5C_Struct__func_801F7928_3faed79d
struct func_801F3FFC_Node {
    u8 pad0[8];
    f32 unk8;
    u8 pad1[0x20];
    struct func_801F3FFC_Node *unk2C;
};
struct func_801F7A5C_Struct {
    u8 pad[0x3C];
    u16 unk3C;
};

struct func_801F7A5C_Struct;
void func_801F7A5C(struct func_801F7A5C_Struct *arg0, s32 arg1);
struct func_801F7928_B { u8 pad0[0x30]; f32 f30; f32 f34; f32 f38; f32 f3c; f32 f40; f32 f44; };
struct func_801F7928_A { u8 pad0[0x2C]; struct func_801F7928_B *unk2C; };
struct func_801F7928_C { u8 pad0[0x50]; f32 unk50; };
struct func_801F7928_D { u8 pad0[0x24]; struct func_801F3FFC_Node *unk24; u8 pad1[0x14]; s16 unk3C; u8 pad2[0x1E]; struct func_801F7928_C *unk5C; };
extern struct func_801F7928_A *D_801BBCD8;

#undef D_801BBCD8
#undef func_801F3FFC_Node
#undef func_801F7928_A
#undef func_801F7928_B
#undef func_801F7928_C
#undef func_801F7928_D
#undef func_801F7A5C
#undef func_801F7A5C_Struct
#define D_801BBCD8 D_801BBCD8__func_801F7928_8a05b152
#define func_801F3FFC_Node func_801F3FFC_Node__func_801F7928_8a05b152
#define func_801F7928_A func_801F7928_A__func_801F7928_8a05b152
#define func_801F7928_B func_801F7928_B__func_801F7928_8a05b152
#define func_801F7928_C func_801F7928_C__func_801F7928_8a05b152
#define func_801F7928_D func_801F7928_D__func_801F7928_8a05b152
#define func_801F7A5C func_801F7A5C__func_801F7928_8a05b152
#define func_801F7A5C_Struct func_801F7A5C_Struct__func_801F7928_8a05b152
struct func_801F3FFC_Node {
    u8 pad0[8];
    f32 unk8;
    u8 pad1[0x20];
    struct func_801F3FFC_Node *unk2C;
};
struct func_801F7A5C_Struct {
    u8 pad[0x3C];
    u16 unk3C;
};

struct func_801F7A5C_Struct;
void func_801F7A5C(struct func_801F7A5C_Struct *arg0, s32 arg1);
struct func_801F7928_B { u8 pad0[0x30]; f32 f30; f32 f34; f32 f38; f32 f3c; f32 f40; f32 f44; };
struct func_801F7928_A { u8 pad0[0x2C]; struct func_801F7928_B *unk2C; };
struct func_801F7928_C { u8 pad0[0x50]; f32 unk50; };
struct func_801F7928_D { u8 pad0[0x24]; struct func_801F3FFC_Node *unk24; u8 pad1[0x14]; s16 unk3C; u8 pad2[0x1E]; struct func_801F7928_C *unk5C; };
extern struct func_801F7928_A *D_801BBCD8;

void func_801F7928(struct func_801F7928_D *arg0, s32 arg1) {
    struct func_801F7928_C *c;
    struct func_801F7928_B *b;
    f32 t;

    c = arg0->unk5C;
    t = (f32)(((f64)c->unk50 * (0.1)) / (18.8));
    func_8011AAF4("/hdisk1/u/nu64/rz011_usa/main/game/source/enemy/wanderer.c", 0x6DD, arg0, 0, 1, 3.0f, D_801BBCD8->unk2C->f30, D_801BBCD8->unk2C->f34 + t, D_801BBCD8->unk2C->f38, 3.0f, D_801BBCD8->unk2C->f3c, D_801BBCD8->unk2C->f40 + t, D_801BBCD8->unk2C->f44, 0.0f, 35.0f, -1, -1);
    if ((c->unk50 + arg0->unk24->unk2C->unk8) < D_801BBCD8->unk2C->f34) {
        arg0->unk3C = 0;
        func_800058DC(arg0, (s32)func_801F7A5C);
    }
}
#undef D_801BBCD8
#undef func_801F3FFC_Node
#undef func_801F7928_A
#undef func_801F7928_B
#undef func_801F7928_C
#undef func_801F7928_D
#undef func_801F7A5C
#undef func_801F7A5C_Struct
#define D_801BBCD8 D_801BBCD8__func_801F7928_3faed79d
#define func_801F3FFC_Node func_801F3FFC_Node__func_801F7928_3faed79d
#define func_801F7928_A func_801F7928_A__func_801F7928_3faed79d
#define func_801F7928_B func_801F7928_B__func_801F7928_3faed79d
#define func_801F7928_C func_801F7928_C__func_801F7928_3faed79d
#define func_801F7928_D func_801F7928_D__func_801F7928_3faed79d
#define func_801F7A5C func_801F7A5C__func_801F7928_3faed79d
#define func_801F7A5C_Struct func_801F7A5C_Struct__func_801F7928_3faed79d
#undef D_801BBCD8
#undef func_801F3FFC_Node
#undef func_801F7928_A
#undef func_801F7928_B
#undef func_801F7928_C
#undef func_801F7928_D
#undef func_801F7A5C
#undef func_801F7A5C_Struct
#define func_801F7A5C func_801F7A5C__func_801F7928
#undef func_801F7A5C

#define func_801F5F5C func_801F5F5C__func_801F7A5C
#define func_801F82D4 func_801F82D4__func_801F7A5C

struct func_801F7A5C_Struct {
    u8 pad[0x3C];
    u16 unk3C;
};

extern void *D_8021AFE4;
extern void func_801F5F5C();
extern void func_801F82D4();

void func_801F7A5C(struct func_801F7A5C_Struct *arg0, s32 arg1)
{
  s32 temp_v1;
  s32 temp_v0;
  temp_v0 = arg0->unk3C;
  temp_v1 = (temp_v0 >= 0x51) != ((temp_v0 >= 0x51) * 0);
  arg0->unk3C = temp_v0 + 1;
  if (temp_v1)
  {
 if (D_8021AFE4 != 0) { func_800058DC(D_8021AFE4, (s32) func_801F82D4);
    }
    func_800058DC(arg0, (s32) func_801F5F5C);
  }
}
#undef func_801F5F5C
#undef func_801F82D4

#define func_801F7B2C func_801F7B2C__func_801F7AC8

extern void func_801F7B2C();

typedef struct func_801F7AC8_Struct {
    u8 pad0[0x3C];
    s16 unk3C;
    u8 pad1[0x94 - 0x3E];
    s16 unk94;
} func_801F7AC8_Struct;

void func_801F7AC8(void *arg0, s32 arg1) {
    func_80147AA8(0, 0x14, 0x14, 0x32);
    func_80147AF0(0, 0x50, 0, 0);
    ((func_801F7AC8_Struct *)arg0)->unk94 = -0x1000;
    ((func_801F7AC8_Struct *)arg0)->unk3C = 0;
    func_800058DC(arg0, (s32)func_801F7B2C);
}
#undef func_801F7B2C


#define func_801F7DB4 func_801F7DB4__decl2466
extern u8 func_801F7DB4[];

typedef struct func_801F7B2C_Struct {
    u8 pad0[0x3C];
    u16 unk3C;
    u8 pad1[0x90 - 0x3E];
    s16 unk90;
    s16 unk92;
    s16 unk94;
    s16 unk96;
    s16 unk98;
    s16 unk9A;
} func_801F7B2C_Struct;

#undef func_801F7DB4
#define func_801F7B2C_Struct func_801F7B2C_Struct__func_801F7B2C
#define func_801F7DB4 func_801F7DB4__func_801F7B2C

extern u8 func_801F7DB4[];

typedef struct func_801F7B2C_Struct {
    u8 pad0[0x3C];
    u16 unk3C;
    u8 pad1[0x90 - 0x3E];
    s16 unk90;
    s16 unk92;
    s16 unk94;
    s16 unk96;
    s16 unk98;
    s16 unk9A;
} func_801F7B2C_Struct;

#undef func_801F7B2C_Struct
#undef func_801F7DB4
#define func_801F7B2C_Struct func_801F7B2C_Struct__func_801F7B2C_21edbadb
#define func_801F7DB4 func_801F7DB4__func_801F7B2C_21edbadb

extern u8 func_801F7DB4[];

typedef struct func_801F7B2C_Struct {
    u8 pad0[0x3C];
    u16 unk3C;
    u8 pad1[0x90 - 0x3E];
    s16 unk90;
    s16 unk92;
    s16 unk94;
    s16 unk96;
    s16 unk98;
    s16 unk9A;
} func_801F7B2C_Struct;

void func_801F7B2C(func_801F7B2C_Struct *arg0, s32 arg1) {
    u8 sp27;
    u8 sp26;
    s16 temp_v0;
    s16 temp_v0_2;

    sp26 = (u8) (u32) (((f64) (func_8001EB64(arg0->unk94) + 1.0f) * 0.5 * 60.0) + 50.0);
    sp27 = (u8) (u32) (((f64) (func_8001EB64((s16) (arg0->unk94 + 0x1000)) + 1.0f) * 0.5 * 50.0) + 30.0);
    func_80147AA8(0, 0x14, 0x14, sp26);
    func_80147AF0(0, sp27, 0, 0);
    temp_v0 = arg0->unk94;
    if (temp_v0 < 0) {
        arg0->unk94 = (s16) (temp_v0 + 0x200);
    } else {
        arg0->unk94 = (s16) (temp_v0 + 0x60);
    }
    temp_v0_2 = arg0->unk94;
    if (temp_v0_2 & 0x1000) {
        arg0->unk94 = (s16) ((temp_v0_2 & 0x1FFF) - 0x2000);
    } else {
        arg0->unk94 = (s16) (temp_v0_2 & 0x1FFF);
    }
    if (arg0->unk3C++ >= 0x67) {
        arg0->unk90 = -0x1000;
        arg0->unk92 = -0x1000;
        arg0->unk96 = 0;
        arg0->unk98 = -0x1000;
        arg0->unk9A = 0x43;
        func_800058DC(arg0, (s32) func_801F7DB4);
    }
}
#undef func_801F7B2C_Struct
#undef func_801F7DB4
#define func_801F7B2C_Struct func_801F7B2C_Struct__func_801F7B2C
#define func_801F7DB4 func_801F7DB4__func_801F7B2C
#undef func_801F7B2C_Struct
#undef func_801F7DB4
#define func_801F7DB4 func_801F7DB4__decl2466
#undef func_801F7DB4

#define func_801FA2E0 func_801FA2E0__func_801F7DB4
extern s32 func_801FA2E0();


typedef struct {
    u8 pad0[0x3C];
    s16 unk3C;
    u8 pad3E[0x90 - 0x3E];
    s16 unk90;
    s16 unk92;
    s16 unk94;
    s16 unk96;
    s16 unk98;
    s16 unk9A;
} func_801F7DB4_Struct;

#undef func_801FA2E0
#define func_801F7DB4_Struct func_801F7DB4_Struct__func_801F7DB4_08f7f92e
#define func_801FA2E0 func_801FA2E0__func_801F7DB4_08f7f92e

extern s32 func_801FA2E0();

typedef struct {
    u8 pad0[0x3C];
    s16 unk3C;
    u8 pad3E[0x90 - 0x3E];
    s16 unk90;
    s16 unk92;
    s16 unk94;
    s16 unk96;
    s16 unk98;
    s16 unk9A;
} func_801F7DB4_Struct;

void func_801F7DB4(func_801F7DB4_Struct *arg0, s32 arg1) {
    u8 sp2F;
    u8 sp2E;
    u8 sp2D;
    u8 sp2C;
    s8 sp2B;
    s32 deg;
    f32 f;

    deg = 150;
    f = func_8001EB64(arg0->unk90);
    sp2F = (u32) (((f + 1.0f) * 0.5 * 230.0) + 20.0);
    if (arg0->unk90 < (s16) (deg / 0.0439453125)) {
        if (arg0->unk90 < 0) {
            arg0->unk90 += 0x240;
        } else {
            arg0->unk90 += 0x60;
        }
    }
    sp2E = (u32) (((func_8001EB64(arg0->unk92) + 1.0f) * 0.5 * 230.0) + 20.0);
    sp2D = (u32) (((func_8001EB64(arg0->unk94) + 1.0f) * 0.5 * 200.0) + 50.0);
    sp2C = (u32) ((func_8001EB64(arg0->unk96) + 1.0f) * 0.5 * 80.0);
    deg = 70;
    sp2B = (u32) ((func_8001EB64(arg0->unk98) + 1.0f) * 0.5 * 150.0);
    if ((s16) (deg / 0.0439453125) < arg0->unk90) {
        if (arg0->unk98 < 0) {
            arg0->unk98 += 0x60;
        }
    }
    arg0->unk9A -= 5;
    if (*(s16 *) ((u8 *) arg0 + 0x9A) < -0x6E) {
        arg0->unk9A = -0x6E;
    }
    func_80147AA8(0, sp2F, sp2E, sp2D);
    func_80147AF0(0, sp2C, *(u8 *) &sp2B, 0);
    func_80147C28(0, ((s8 *) &arg0->unk9A)[1], -0x64, -0x43);
    if (arg0->unk98 >= -0x7FF) {
        func_801FA2E0();
        arg0->unk3C = 2;
    }
}
#undef func_801F7DB4_Struct
#undef func_801FA2E0
#define func_801FA2E0 func_801FA2E0__func_801F7DB4
#undef func_801FA2E0

#define D_8021AFE4 D_8021AFE4__func_801F82D4

typedef struct func_801F82D4_Struct {
    u8 pad[0x3C];
    u16 unk3C;
} func_801F82D4_Struct;

extern void func_801479A8(s32, void *);
extern s32 D_8021AFE4;

void func_801F82D4(func_801F82D4_Struct *arg0, func_801F82D4_Struct *arg1) {
    s32 temp_v0;
    s32 temp_v1;

    arg1 = arg0;
    temp_v1 = arg0->unk3C == 0;
    temp_v0 = arg0->unk3C;
    arg0->unk3C = temp_v0 - 1;
    if (temp_v1 != 0) {
        D_8021AFE4 = 0;
        func_801479A8(D_8021AFE0, arg1);
        func_80005700(arg0);
    }
}
#undef D_8021AFE4

#define func_801C3B3C func_801C3B3C__func_801F832C
#define func_801F5210 func_801F5210__func_801F832C

extern s32 func_801C3B3C(void);
extern void func_801F5210(void *);
extern void func_801F83B8();

struct func_801F832C_Struct {
    u8 pad0[0xAE];
    u8 unkAE;
};

void func_801F832C(void *arg0, s32 arg1) {
    if (func_801C3B3C() == 0) {
        if (func_801F4170(arg0, (f32) (u32) ((struct func_801F832C_Struct *) arg0)->unkAE) != 0) {
            func_801F5230(arg0);
            func_801F5210(arg0);
            func_800058DC(arg0, (s32) func_801F83B8);
        }
    }
}
#undef func_801C3B3C
#undef func_801F5210

#define D_801BBCD0 D_801BBCD0__func_801F83B8
#define D_802189D0 D_802189D0__func_801F83B8
#define D_80218D08 D_80218D08__func_801F83B8
#define func_80130AA0 func_80130AA0__func_801F83B8
#define func_801F3FFC_Node func_801F3FFC_Node__func_801F83B8
#define func_801F4620 func_801F4620__func_801F83B8
#define func_801F4620_Struct func_801F4620_Struct__func_801F83B8
#define func_801F8668 func_801F8668__func_801F83B8
#define func_801F8668_Mid func_801F8668_Mid__func_801F83B8
#define func_801F8668_Obj func_801F8668_Obj__func_801F83B8
#define func_801F8668_Pos func_801F8668_Pos__func_801F83B8
#define func_801F9104_StructPos func_801F9104_StructPos__func_801F83B8
#define POS ((func_801F9104_StructPos *)D_801BBCD0->unk2C)
struct func_801F3FFC_Node {
    u8 pad0[8];
    f32 unk8;
    u8 pad1[0x20];
    struct func_801F3FFC_Node *unk2C;
};
extern struct func_801F3FFC_Node *D_801BBCD0;
typedef struct func_801F9104_StructPos {
    u8 pad[4];
    s32 unk4;
    f32 unk8;
    f32 unkC;
} func_801F9104_StructPos;
#define POS ((func_801F9104_StructPos *)D_801BBCD0->unk2C)
typedef struct func_801F4620_Struct {
    f32 unk0;
    f32 unk4;
    f32 unk8;
} func_801F4620_Struct;
void func_801F4620(func_801F4620_Struct *arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6);
typedef struct func_801F8668_Pos { u8 pad[0x12]; u16 unk12; } func_801F8668_Pos;
typedef struct func_801F8668_Mid { u8 pad[0x2C]; func_801F8668_Pos *unk2C; } func_801F8668_Mid;
typedef struct func_801F8668_Obj {
    u8 pad0[0x24];
    func_801F8668_Mid *unk24;
    u8 pad1[0x10];
    s32 unk38;
    s16 unk3C;
    u8 unk3E;
    u8 pad3F;
    f32 unk40;
    f32 unk44;
    f32 unk48;
    u8 pad4C[0x10];
    s32 unk5C;
} func_801F8668_Obj;
void func_801F8668(func_801F8668_Obj *arg0, volatile s32 arg1);


union func_801F83B8_Union { s32 i; f32 f; };
struct func_801F83B8_StructPos {
    u8 pad0[4];
    union func_801F83B8_Union u4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    u16 unk12;
};
struct func_801F83B8_StructMid {
    u8 pad0[0x2C];
    struct func_801F83B8_StructPos *unk2C;
};
struct func_801F83B8_StructQ {
    u8 pad0[0x78];
    s16 unk78;
};
struct func_801F83B8_StructObj {
    u8 pad0[0x24];
    struct func_801F83B8_StructMid *unk24;
    u8 pad28[0x34];
    struct func_801F83B8_StructQ *unk5C;
};
extern void func_80130AA0(s32, u16, s32, f32 *, f32 *, f32 *);
extern u8 D_802189D0[];
extern f32 D_80218D08;

#undef D_801BBCD0
#undef D_802189D0
#undef POS
#undef func_80130AA0
#undef func_801F3FFC_Node
#undef func_801F4620
#undef func_801F4620_Struct
#undef func_801F8668
#undef func_801F8668_Mid
#undef func_801F8668_Obj
#undef func_801F8668_Pos
#undef func_801F9104_StructPos
#define D_801BBCD0 D_801BBCD0__func_801F83B8_0981653d
#define D_802189D0 D_802189D0__func_801F83B8_0981653d
#define func_80130AA0 func_80130AA0__func_801F83B8_0981653d
#define func_801F3FFC_Node func_801F3FFC_Node__func_801F83B8_0981653d
#define func_801F4620 func_801F4620__func_801F83B8_0981653d
#define func_801F4620_Struct func_801F4620_Struct__func_801F83B8_0981653d
#define func_801F83B8_StructMid func_801F83B8_StructMid__func_801F83B8_0981653d
#define func_801F83B8_StructObj func_801F83B8_StructObj__func_801F83B8_0981653d
#define func_801F83B8_StructPos func_801F83B8_StructPos__func_801F83B8_0981653d
#define func_801F83B8_StructQ func_801F83B8_StructQ__func_801F83B8_0981653d
#define func_801F83B8_Union func_801F83B8_Union__func_801F83B8_0981653d
#define func_801F8668 func_801F8668__func_801F83B8_0981653d
#define func_801F8668_Mid func_801F8668_Mid__func_801F83B8_0981653d
#define func_801F8668_Obj func_801F8668_Obj__func_801F83B8_0981653d
#define func_801F8668_Pos func_801F8668_Pos__func_801F83B8_0981653d
#define func_801F9104_StructPos func_801F9104_StructPos__func_801F83B8_0981653d
#define POS ((func_801F9104_StructPos *)D_801BBCD0->unk2C)
struct func_801F3FFC_Node {
    u8 pad0[8];
    f32 unk8;
    u8 pad1[0x20];
    struct func_801F3FFC_Node *unk2C;
};
extern struct func_801F3FFC_Node *D_801BBCD0;
typedef struct func_801F9104_StructPos {
    u8 pad[4];
    s32 unk4;
    f32 unk8;
    f32 unkC;
} func_801F9104_StructPos;
#define POS ((func_801F9104_StructPos *)D_801BBCD0->unk2C)
typedef struct func_801F4620_Struct {
    f32 unk0;
    f32 unk4;
    f32 unk8;
} func_801F4620_Struct;
void func_801F4620(func_801F4620_Struct *arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6);
typedef struct func_801F8668_Pos { u8 pad[0x12]; u16 unk12; } func_801F8668_Pos;
typedef struct func_801F8668_Mid { u8 pad[0x2C]; func_801F8668_Pos *unk2C; } func_801F8668_Mid;
typedef struct func_801F8668_Obj {
    u8 pad0[0x24];
    func_801F8668_Mid *unk24;
    u8 pad1[0x10];
    s32 unk38;
    s16 unk3C;
    u8 unk3E;
    u8 pad3F;
    f32 unk40;
    f32 unk44;
    f32 unk48;
    u8 pad4C[0x10];
    s32 unk5C;
} func_801F8668_Obj;
void func_801F8668(func_801F8668_Obj *arg0, volatile s32 arg1);


union func_801F83B8_Union { s32 i; f32 f; };
struct func_801F83B8_StructPos {
    u8 pad0[4];
    union func_801F83B8_Union u4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    u16 unk12;
};
struct func_801F83B8_StructMid {
    u8 pad0[0x2C];
    struct func_801F83B8_StructPos *unk2C;
};
struct func_801F83B8_StructQ {
    u8 pad0[0x78];
    s16 unk78;
};
struct func_801F83B8_StructObj {
    u8 pad0[0x24];
    struct func_801F83B8_StructMid *unk24;
    u8 pad28[0x34];
    struct func_801F83B8_StructQ *unk5C;
};
extern void func_80130AA0(s32, u16, s32, f32 *, f32 *, f32 *);
extern u8 D_802189D0[];
#undef D_801BBCD0
#undef POS
#undef func_80130AA0
#undef func_801F3FFC_Node
#undef func_801F4620
#undef func_801F4620_Struct
#undef func_801F83B8_StructMid
#undef func_801F83B8_StructObj
#undef func_801F83B8_StructPos
#undef func_801F83B8_StructQ
#undef func_801F83B8_Union
#undef func_801F8668
#undef func_801F8668_Mid
#undef func_801F8668_Obj
#undef func_801F8668_Pos
#undef func_801F9104_StructPos
#define D_801BBCD0 D_801BBCD0__func_801F83B8_52e6f073
#define func_80130AA0 func_80130AA0__func_801F83B8_52e6f073
#define func_801F3FFC_Node func_801F3FFC_Node__func_801F83B8_52e6f073
#define func_801F4620 func_801F4620__func_801F83B8_52e6f073
#define func_801F4620_Struct func_801F4620_Struct__func_801F83B8_52e6f073
#define func_801F83B8_StructMid func_801F83B8_StructMid__func_801F83B8_52e6f073
#define func_801F83B8_StructObj func_801F83B8_StructObj__func_801F83B8_52e6f073
#define func_801F83B8_StructPos func_801F83B8_StructPos__func_801F83B8_52e6f073
#define func_801F83B8_StructQ func_801F83B8_StructQ__func_801F83B8_52e6f073
#define func_801F83B8_Union func_801F83B8_Union__func_801F83B8_52e6f073
#define func_801F8668 func_801F8668__func_801F83B8_52e6f073
#define func_801F8668_Mid func_801F8668_Mid__func_801F83B8_52e6f073
#define func_801F8668_Obj func_801F8668_Obj__func_801F83B8_52e6f073
#define func_801F8668_Pos func_801F8668_Pos__func_801F83B8_52e6f073
#define func_801F9104_StructPos func_801F9104_StructPos__func_801F83B8_52e6f073
#define POS ((func_801F9104_StructPos *)D_801BBCD0->unk2C)
struct func_801F3FFC_Node {
    u8 pad0[8];
    f32 unk8;
    u8 pad1[0x20];
    struct func_801F3FFC_Node *unk2C;
};
extern struct func_801F3FFC_Node *D_801BBCD0;
typedef struct func_801F9104_StructPos {
    u8 pad[4];
    s32 unk4;
    f32 unk8;
    f32 unkC;
} func_801F9104_StructPos;
#define POS ((func_801F9104_StructPos *)D_801BBCD0->unk2C)
typedef struct func_801F4620_Struct {
    f32 unk0;
    f32 unk4;
    f32 unk8;
} func_801F4620_Struct;
void func_801F4620(func_801F4620_Struct *arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6);
typedef struct func_801F8668_Pos { u8 pad[0x12]; u16 unk12; } func_801F8668_Pos;
typedef struct func_801F8668_Mid { u8 pad[0x2C]; func_801F8668_Pos *unk2C; } func_801F8668_Mid;
typedef struct func_801F8668_Obj {
    u8 pad0[0x24];
    func_801F8668_Mid *unk24;
    u8 pad1[0x10];
    s32 unk38;
    s16 unk3C;
    u8 unk3E;
    u8 pad3F;
    f32 unk40;
    f32 unk44;
    f32 unk48;
    u8 pad4C[0x10];
    s32 unk5C;
} func_801F8668_Obj;
void func_801F8668(func_801F8668_Obj *arg0, volatile s32 arg1);


union func_801F83B8_Union { s32 i; f32 f; };
struct func_801F83B8_StructPos {
    u8 pad0[4];
    union func_801F83B8_Union u4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    u16 unk12;
};
struct func_801F83B8_StructMid {
    u8 pad0[0x2C];
    struct func_801F83B8_StructPos *unk2C;
};
struct func_801F83B8_StructQ {
    u8 pad0[0x78];
    s16 unk78;
};
struct func_801F83B8_StructObj {
    u8 pad0[0x24];
    struct func_801F83B8_StructMid *unk24;
    u8 pad28[0x34];
    struct func_801F83B8_StructQ *unk5C;
};
extern void func_80130AA0(s32, u16, s32, f32 *, f32 *, f32 *);
void func_801F83B8(struct func_801F83B8_StructObj *arg0, s32 arg1) {
    struct func_801F83B8_StructQ *sp8C;
    f32 a[3];
    f32 b[3];
    f32 c[3];
    f32 t;
    func_801F9104_StructPos *pos;

    sp8C = arg0->unk5C;
    D_8013A334(a, arg1, sp8C, 6);
    t = (0.15f);
    pos = POS;
    if (D_801F3C90(arg0, 0.1f, t, pos->unk4, pos->unk8 + 25.0f, pos->unkC, t, a[0], a[1], a[2], t, 50.0f) != 0) {
        sp8C->unk78 = 1;
        func_801F4620((func_801F4620_Struct *)b, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 17.0f);
        func_80130AA0(0, arg0->unk24->unk2C->unk12, 0, &b[0], &b[1], &b[2]);
        func_80130AA0(0, 0xD55, 0, &b[0], &b[1], &b[2]);
        arg1 = (s32)arg0->unk24->unk2C;
        t = ((struct func_801F83B8_StructPos *)arg1)->unk8 + 14.0f;
        b[0] += ((struct func_801F83B8_StructPos *)arg1)->u4.f;
        b[1] += t;
        b[2] += arg0->unk24->unk2C->unkC;
        func_801F4620((func_801F4620_Struct *)c, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 15.0f);
        func_80130AA0(0, arg0->unk24->unk2C->unk12, 0, &c[0], &c[1], &c[2]);
        c[0] += arg0->unk24->unk2C->u4.f;
        c[1] += arg0->unk24->unk2C->unk8;
        c[2] += arg0->unk24->unk2C->unkC;
        func_8011AAF4("/hdisk1/u/nu64/rz011_usa/main/game/source/enemy/wanderer.c", 0x780, arg0, 0, 1, 3.0f, b[0], b[1], b[2], 3.0f, c[0], c[1], c[2], 0.0f, 35.0f, -1, -1);
        func_800058DC(arg0, (s32)func_801F8668);
    }
}
#undef POS
#undef D_801BBCD0
#undef func_80130AA0
#undef func_801F3FFC_Node
#undef func_801F4620
#undef func_801F4620_Struct
#undef func_801F83B8_StructMid
#undef func_801F83B8_StructObj
#undef func_801F83B8_StructPos
#undef func_801F83B8_StructQ
#undef func_801F83B8_Union
#undef func_801F8668
#undef func_801F8668_Mid
#undef func_801F8668_Obj
#undef func_801F8668_Pos
#undef func_801F9104_StructPos
#define D_801BBCD0 D_801BBCD0__func_801F83B8_0981653d
#define POS ((func_801F9104_StructPos *)D_801BBCD0->unk2C)
#define func_80130AA0 func_80130AA0__func_801F83B8_0981653d
#define func_801F3FFC_Node func_801F3FFC_Node__func_801F83B8_0981653d
#define func_801F4620 func_801F4620__func_801F83B8_0981653d
#define func_801F4620_Struct func_801F4620_Struct__func_801F83B8_0981653d
#define func_801F83B8_StructMid func_801F83B8_StructMid__func_801F83B8_0981653d
#define func_801F83B8_StructObj func_801F83B8_StructObj__func_801F83B8_0981653d
#define func_801F83B8_StructPos func_801F83B8_StructPos__func_801F83B8_0981653d
#define func_801F83B8_StructQ func_801F83B8_StructQ__func_801F83B8_0981653d
#define func_801F83B8_Union func_801F83B8_Union__func_801F83B8_0981653d
#define func_801F8668 func_801F8668__func_801F83B8_0981653d
#define func_801F8668_Mid func_801F8668_Mid__func_801F83B8_0981653d
#define func_801F8668_Obj func_801F8668_Obj__func_801F83B8_0981653d
#define func_801F8668_Pos func_801F8668_Pos__func_801F83B8_0981653d
#define func_801F9104_StructPos func_801F9104_StructPos__func_801F83B8_0981653d
#undef POS
#undef D_801BBCD0
#undef D_802189D0
#undef func_80130AA0
#undef func_801F3FFC_Node
#undef func_801F4620
#undef func_801F4620_Struct
#undef func_801F83B8_StructMid
#undef func_801F83B8_StructObj
#undef func_801F83B8_StructPos
#undef func_801F83B8_StructQ
#undef func_801F83B8_Union
#undef func_801F8668
#undef func_801F8668_Mid
#undef func_801F8668_Obj
#undef func_801F8668_Pos
#undef func_801F9104_StructPos
#define D_801BBCD0 D_801BBCD0__func_801F83B8
#define D_802189D0 D_802189D0__func_801F83B8
#define POS ((func_801F9104_StructPos *)D_801BBCD0->unk2C)
#define func_80130AA0 func_80130AA0__func_801F83B8
#define func_801F3FFC_Node func_801F3FFC_Node__func_801F83B8
#define func_801F4620 func_801F4620__func_801F83B8
#define func_801F4620_Struct func_801F4620_Struct__func_801F83B8
#define func_801F8668 func_801F8668__func_801F83B8
#define func_801F8668_Mid func_801F8668_Mid__func_801F83B8
#define func_801F8668_Obj func_801F8668_Obj__func_801F83B8
#define func_801F8668_Pos func_801F8668_Pos__func_801F83B8
#define func_801F9104_StructPos func_801F9104_StructPos__func_801F83B8
#undef POS
#undef D_801BBCD0
#undef D_802189D0
#undef D_80218D08
#undef func_80130AA0
#undef func_801F3FFC_Node
#undef func_801F4620
#undef func_801F4620_Struct
#undef func_801F8668
#undef func_801F8668_Mid
#undef func_801F8668_Obj
#undef func_801F8668_Pos
#undef func_801F9104_StructPos


void func_801F8660(void) {
}

#define func_801F8760 func_801F8760__func_801F8668

typedef struct func_801F8668_Pos { u8 pad[0x12]; u16 unk12; } func_801F8668_Pos;
typedef struct func_801F8668_Mid { u8 pad[0x2C]; func_801F8668_Pos *unk2C; } func_801F8668_Mid;
typedef struct func_801F8668_Obj {
    u8 pad0[0x24];
    func_801F8668_Mid *unk24;
    u8 pad1[0x10];
    s32 unk38;
    s16 unk3C;
    u8 unk3E;
    u8 pad3F;
    f32 unk40;
    f32 unk44;
    f32 unk48;
    u8 pad4C[0x10];
    s32 unk5C;
} func_801F8668_Obj;
extern func_801F63E0_Struct3 D_80216F0C;
void func_801F8760();
extern void func_80130AA0(s32, u16, s32, f32 *, f32 *, f32 *);

void func_801F8668(func_801F8668_Obj *arg0, volatile s32 arg1) {
    s32 t5C;
    f32 sp38;
    f32 sp34;
    f32 sp30;

    t5C = arg0->unk5C;
    if (D_8012CE9C(arg1, t5C, D_80216F0C, 0xA) == 0) {
        func_801F4620((func_801F4620_Struct *)&sp30, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.5f);
        func_80130AA0(0, arg0->unk24->unk2C->unk12, 0, &sp30, &sp34, &sp38);
        arg0->unk3E = 3;
        arg0->unk40 = sp30;
        arg0->unk48 = sp38;
        arg0->unk3C = 0xA;
        arg0->unk44 = 2.0f;
        func_800058DC(arg0, (s32)func_801F8760);
    }
}
#undef func_801F8760


extern void func_80147734(f32 *, f32 *, f32 *);
extern u8 D_80218A0C[];
#define func_801F8900 func_801F8900__decl2610
extern u8 func_801F8900[];

typedef struct func_801F8760_Struct {
    u8 pad0[0x24];
    struct func_801F3FFC_Node *unk24;
    u8 pad1[0x14];
    u16 unk3C;
} func_801F8760_Struct;

void func_801F8760(func_801F8760_Struct *arg0, s32 arg1) {
    f32 sp7C;
    f32 sp78;
    f32 sp74;
    f32 sp70;
    f32 sp6C;
    f32 sp68;

    if (arg0->unk3C-- == 0) {
        func_801F4620((func_801F4620_Struct *)&sp74, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 90.0f);
        func_80130AA0(0, ((u16 *)arg0->unk24->unk2C)[9], 0, &sp74, &sp78, &sp7C);
        func_80130AA0(0, 0xFFBC, 0, &sp74, &sp78, &sp7C);
        func_801F4208((void *)arg0, (func_801F4208_Out *)&sp68);
        sp6C = D_801BBCD0->unk2C->unk8;
        func_80147734(&sp74, &sp68, &sp74);
        sp78 = sp78 + 6.0f;
        func_8011AAF4(D_80218A0C, 0x7B2, arg0, 0, 1, 3.0f, sp74, sp78, sp7C, 3.0f, sp68, sp6C - 2.0f, sp70, 0.0f, 50.0f, -1, -1);
        { extern void func_801479A8(); func_801479A8(arg0); }
        func_800058DC(arg0, (s32)func_801F8900);
    }
}
#undef func_801F8900

#define func_801F8974 func_801F8974__func_801F8900


extern u8 func_801F8974[];

void func_801F8900(u8 *arg0, s32 arg1) {
    u8 *temp_a3;

    temp_a3 = *(u8 **)(arg0 + 0x5C);
    func_80010550(arg1, temp_a3, arg0);
    if (*(s32 *)(arg0 + 0x30) & 4) {
        *(s16 *)(temp_a3 + 0x78) = 1;
        *(s16 *)(arg0 + 0x3C) = 0;
        *(f32 *)(arg0 + 0x40) = 0.0f;
        *(f32 *)(arg0 + 0x48) = 0.0f;
        func_800058DC(arg0, (s32)func_801F8974);
    }
}
#undef func_801F8974

/* hh-block asm/nonmatchings/file010/801F3B30/_ro_regular_48aa4ddd4444b07a.s {"functions":[],"rodata":[],"rodata_bytes":[2149682444,6069516,12],"rodata_section":".rodata"} */
#pragma GLOBAL_ASM("asm/nonmatchings/file010/801F3B30/_ro_regular_48aa4ddd4444b07a.s")

#define D_8012CE9C D_8012CE9C__func_801F8974
#define D_80216F18 D_80216F18__func_801F8974
#define func_801F5F5C func_801F5F5C__func_801F8974
#define func_801F5F5C_Inner func_801F5F5C_Inner__func_801F8974
#define func_801F5F5C_Struct func_801F5F5C_Struct__func_801F8974
#define func_801F63E0_Struct3 func_801F63E0_Struct3__func_801F8974
#define func_801F74FC_Struct func_801F74FC_Struct__func_801F8974
#define func_801FA2E0 func_801FA2E0__func_801F8974
typedef struct func_801F63E0_Struct3 { s32 w0; s32 w1; s32 w2; } func_801F63E0_Struct3;
extern s32 D_8012CE9C(s32, s32, func_801F63E0_Struct3, s32);
typedef struct func_801F5F5C_Inner {
    u8 pad0[0x14];
    s32 unk14;
} func_801F5F5C_Inner;
typedef struct func_801F5F5C_Struct {
    u8 pad0[0x38];
    func_801F5F5C_Inner *unk38;
    u8 pad1[0xAF - 0x3C];
    u8 unkAF;
} func_801F5F5C_Struct;
void func_801F5F5C(func_801F5F5C_Struct *arg0, s32 arg1);
typedef struct func_801F74FC_Struct {
    s32 w0;
    s32 w1;
    s32 w2;
} func_801F74FC_Struct;
extern s32 func_801FA2E0();


typedef struct func_801F8974_Struct {
    u8 pad0[0x3C];
    u16 unk3C;
    u8 pad3E[0x5C - 0x3E];
    s32 unk5C;
    u8 pad60[0x70 - 0x60];
    u16 unk70;
} func_801F8974_Struct;

extern func_801F74FC_Struct D_80216F18;

void func_801F8974(func_801F8974_Struct *arg0, s32 arg1)
{
    s32 temp_a1;
    s32 sp2C;
    s32 var_v1;

    temp_a1 = arg0->unk5C;
    sp2C = temp_a1;
    if (D_8012CE9C(arg1, temp_a1, *(func_801F63E0_Struct3 *)&D_80216F18, 0) == 0) {
        if (arg0->unk70 == 3) {
            func_80020744(0x13C);
        }
        func_80010550(arg1, sp2C);
        var_v1 = ++arg0->unk3C;
        if (var_v1 == 0xA) {
            func_801FA2E0();
            var_v1 = arg0->unk3C;
        }
        if (var_v1 == 0x1C) {
            func_800058DC(arg0, (s32)func_801F5F5C);
        }
    }
}
#undef D_8012CE9C
#undef D_80216F18
#undef func_801F5F5C
#undef func_801F5F5C_Inner
#undef func_801F5F5C_Struct
#undef func_801F63E0_Struct3
#undef func_801F74FC_Struct
#undef func_801FA2E0

void func_801F8A3C(void) {
}


extern void func_801F8AE8();

extern f32 D_8021B02C;
extern f32 D_8021B030;

void func_801F8A44(s32 arg0, s32 arg1) {
    if (func_801C3B3C() == 0) {
        if (func_801F3FFC((struct func_801F3FFC_Arg *) arg0, 60.0f) != 0) {
            func_801F5230((struct func_801F5230_StructArg *) arg0);
            D_8021B028 = (f32) (func_8012C6B4(0xA) - 5);
            D_8021B02C = (f32) func_8012C6B4(0x14);
            D_8021B030 = (f32) (func_8012C6B4(0xA) - 5);
            func_800058DC((void *) arg0, (s32) func_801F8AE8);
        }
    }
}

#define D_8011AAF4 D_8011AAF4__func_801F8AE8
#define D_80218A48 D_80218A48__func_801F8AE8
#define func_8013A334 func_8013A334__func_801F8AE8
#define func_80147768 func_80147768__func_801F8AE8
#define func_801F4620_Struct func_801F4620_Struct__func_801F8AE8
#define func_801F467C_Struct func_801F467C_Struct__func_801F8AE8
#define func_801F8C50 func_801F8C50__func_801F8AE8
#define func_801FA5C4 func_801FA5C4__func_801F8AE8
typedef struct func_801F4620_Struct {
    f32 unk0;
    f32 unk4;
    f32 unk8;
} func_801F4620_Struct;
#define VEC ((func_801F4620_Struct *)&D_8021B028)
extern void func_80147768(f32 *, f32);
typedef struct func_801F467C_Struct {
    f32 unk0;
    f32 unk4;
    f32 unk8;
} func_801F467C_Struct;

struct func_801F8AE8_Struct2 {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[0x12 - 0x10];
    s16 unk12;
};
struct func_801F8AE8_Struct1 {
    u8 pad0[0x2C];
    struct func_801F8AE8_Struct2 *unk2C;
};
struct func_801F8AE8_Struct3 {
    u8 pad0[0x78];
    s16 unk78;
};
struct func_801F8AE8_Struct0 {
    u8 pad0[0x24];
    struct func_801F8AE8_Struct1 *unk24;
    u8 pad1[0x3C - 0x28];
    s16 unk3C;
    u8 pad2[0x5C - 0x3E];
    struct func_801F8AE8_Struct3 *unk5C;
};
extern void func_801FA5C4(void);
extern u8 D_80218A48[];
extern void func_801F8C50();
extern void func_8013A334(f32 *, s32, void *, s32);
extern s32 D_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);

#undef D_8011AAF4
#undef D_80218A48
#undef VEC
#undef func_8013A334
#undef func_80147768
#undef func_801F8C50
#undef func_801FA5C4
#define D_8011AAF4 D_8011AAF4__func_801F8AE8_01c94a8a
#define D_80218A48 D_80218A48__func_801F8AE8_01c94a8a
#define func_8013A334 func_8013A334__func_801F8AE8_01c94a8a
#define func_80147768 func_80147768__func_801F8AE8_01c94a8a
#define func_801F8AE8_Struct0 func_801F8AE8_Struct0__func_801F8AE8_01c94a8a
#define func_801F8AE8_Struct1 func_801F8AE8_Struct1__func_801F8AE8_01c94a8a
#define func_801F8AE8_Struct2 func_801F8AE8_Struct2__func_801F8AE8_01c94a8a
#define func_801F8AE8_Struct3 func_801F8AE8_Struct3__func_801F8AE8_01c94a8a
#define func_801F8C50 func_801F8C50__func_801F8AE8_01c94a8a
#define func_801FA5C4 func_801FA5C4__func_801F8AE8_01c94a8a
#define VEC ((func_801F4620_Struct *)&D_8021B028)
extern void func_80147768(f32 *, f32);

struct func_801F8AE8_Struct2 {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[0x12 - 0x10];
    s16 unk12;
};
struct func_801F8AE8_Struct1 {
    u8 pad0[0x2C];
    struct func_801F8AE8_Struct2 *unk2C;
};
struct func_801F8AE8_Struct3 {
    u8 pad0[0x78];
    s16 unk78;
};
struct func_801F8AE8_Struct0 {
    u8 pad0[0x24];
    struct func_801F8AE8_Struct1 *unk24;
    u8 pad1[0x3C - 0x28];
    s16 unk3C;
    u8 pad2[0x5C - 0x3E];
    struct func_801F8AE8_Struct3 *unk5C;
};
extern void func_801FA5C4(void);
extern u8 D_80218A48[];
extern void func_801F8C50();
extern void func_8013A334(f32 *, s32, void *, s32);
extern s32 D_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);

#undef D_8011AAF4
#undef VEC
#undef func_8013A334
#undef func_80147768
#undef func_801F8AE8_Struct0
#undef func_801F8AE8_Struct1
#undef func_801F8AE8_Struct2
#undef func_801F8AE8_Struct3
#undef func_801F8C50
#undef func_801FA5C4
#define D_8011AAF4 D_8011AAF4__func_801F8AE8_f2a415b0
#define func_8013A334 func_8013A334__func_801F8AE8_f2a415b0
#define func_80147768 func_80147768__func_801F8AE8_f2a415b0
#define func_801F8AE8_Struct0 func_801F8AE8_Struct0__func_801F8AE8_f2a415b0
#define func_801F8AE8_Struct1 func_801F8AE8_Struct1__func_801F8AE8_f2a415b0
#define func_801F8AE8_Struct2 func_801F8AE8_Struct2__func_801F8AE8_f2a415b0
#define func_801F8AE8_Struct3 func_801F8AE8_Struct3__func_801F8AE8_f2a415b0
#define func_801F8C50 func_801F8C50__func_801F8AE8_f2a415b0
#define func_801FA5C4 func_801FA5C4__func_801F8AE8_f2a415b0
#define VEC ((func_801F4620_Struct *)&D_8021B028)
extern void func_80147768(f32 *, f32);

struct func_801F8AE8_Struct2 {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[0x12 - 0x10];
    s16 unk12;
};
struct func_801F8AE8_Struct1 {
    u8 pad0[0x2C];
    struct func_801F8AE8_Struct2 *unk2C;
};
struct func_801F8AE8_Struct3 {
    u8 pad0[0x78];
    s16 unk78;
};
struct func_801F8AE8_Struct0 {
    u8 pad0[0x24];
    struct func_801F8AE8_Struct1 *unk24;
    u8 pad1[0x3C - 0x28];
    s16 unk3C;
    u8 pad2[0x5C - 0x3E];
    struct func_801F8AE8_Struct3 *unk5C;
};
extern void func_801FA5C4(void);
extern void func_801F8C50();
extern void func_8013A334(f32 *, s32, void *, s32);
extern s32 D_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);

void func_801F8AE8(struct func_801F8AE8_Struct0 *arg0, s32 arg1) {
    struct func_801F8AE8_Struct3 *sp74;
    f32 sp68[3];
    func_801F467C_Struct sp5C;

    sp74 = arg0->unk5C;
    func_8012A94C(arg0, 0x100);
    func_8013A334(sp68, arg1, sp74, 6);
    func_801F467C(arg0->unk24->unk2C->unk12, &sp5C);
    func_80147768(&sp5C.unk0, 25.0f);
    if (D_8011AAF4("/hdisk1/u/nu64/rz011_usa/main/game/source/enemy/wanderer.c", 0x807, arg0, 0, 2, 3.0f, arg0->unk24->unk2C->unk4 + sp5C.unk0 + VEC->unk0, arg0->unk24->unk2C->unk8 + 8.0f + sp5C.unk4, arg0->unk24->unk2C->unkC + sp5C.unk8 + VEC->unk8, 3.0f, sp68[0], sp68[1], sp68[2], 0.0f, 35.0f, -1, -1) == 0) {
        func_801FA5C4();
        arg0->unk3C = 0x32;
        sp74->unk78 = 1;
        func_800058DC(arg0, (s32)func_801F8C50);
    }
}
#undef VEC
#undef D_8011AAF4
#undef func_8013A334
#undef func_80147768
#undef func_801F8AE8_Struct0
#undef func_801F8AE8_Struct1
#undef func_801F8AE8_Struct2
#undef func_801F8AE8_Struct3
#undef func_801F8C50
#undef func_801FA5C4
#define D_8011AAF4 D_8011AAF4__func_801F8AE8_01c94a8a
#define VEC ((func_801F4620_Struct *)&D_8021B028)
#define func_8013A334 func_8013A334__func_801F8AE8_01c94a8a
#define func_80147768 func_80147768__func_801F8AE8_01c94a8a
#define func_801F8AE8_Struct0 func_801F8AE8_Struct0__func_801F8AE8_01c94a8a
#define func_801F8AE8_Struct1 func_801F8AE8_Struct1__func_801F8AE8_01c94a8a
#define func_801F8AE8_Struct2 func_801F8AE8_Struct2__func_801F8AE8_01c94a8a
#define func_801F8AE8_Struct3 func_801F8AE8_Struct3__func_801F8AE8_01c94a8a
#define func_801F8C50 func_801F8C50__func_801F8AE8_01c94a8a
#define func_801FA5C4 func_801FA5C4__func_801F8AE8_01c94a8a
#undef VEC
#undef D_8011AAF4
#undef D_80218A48
#undef func_8013A334
#undef func_80147768
#undef func_801F8AE8_Struct0
#undef func_801F8AE8_Struct1
#undef func_801F8AE8_Struct2
#undef func_801F8AE8_Struct3
#undef func_801F8C50
#undef func_801FA5C4
#define D_8011AAF4 D_8011AAF4__func_801F8AE8
#define D_80218A48 D_80218A48__func_801F8AE8
#define VEC ((func_801F4620_Struct *)&D_8021B028)
#define func_8013A334 func_8013A334__func_801F8AE8
#define func_80147768 func_80147768__func_801F8AE8
#define func_801F8C50 func_801F8C50__func_801F8AE8
#define func_801FA5C4 func_801FA5C4__func_801F8AE8
#undef VEC
#undef D_8011AAF4
#undef D_80218A48
#undef func_8013A334
#undef func_80147768
#undef func_801F4620_Struct
#undef func_801F467C_Struct
#undef func_801F8C50
#undef func_801FA5C4


struct func_801F8C50_Arg { u8 pad0[0x3C]; u16 unk3C; u8 pad1[0x1E]; s32 unk5C; };
extern u8 D_80218A84[];
extern f64 D_80218D10;
extern void func_801477C4();
extern s32 func_801FA2E0();

void func_801F8C50(struct func_801F8C50_Arg *arg0, s32 arg1) {
    s32 sp7C;
    f32 sp70[3];
    u8 pad[0x10];

    sp7C = arg0->unk5C;
    D_8013A334(sp70, arg1, (void *)sp7C, 6);
    (&D_8021B028)[0] = D_801BBCD8->unk2C->f30 - sp70[0];
    (&D_8021B028)[1] = D_801BBCD8->unk2C->f34 - sp70[1];
    (&D_8021B028)[2] = D_801BBCD8->unk2C->f38 - sp70[2];
    func_801477C4(&D_8021B028, 0x3F8147AE);
    func_80130AA0(0, 0x50, 0, &D_8021B028, &D_8021B02C, &D_8021B030);
    (&D_8021B028)[0] = sp70[0] + (&D_8021B028)[0];
    (&D_8021B028)[1] = ((f64)sp70[1] + D_80218D10) + (f64)(&D_8021B028)[1];
    (&D_8021B028)[2] = sp70[2] + (&D_8021B028)[2];
    func_8011AAF4(D_80218A84, 0x820, arg0, 0, 1, 3.0f, (&D_8021B028)[0], (&D_8021B028)[1], (&D_8021B028)[2], 3.0f, sp70[0], sp70[1], sp70[2], 0.0f, 35.0f, -1, -1);
    if (D_8012CE9C(arg1, sp7C, *(func_801F63E0_Struct3 *)&D_80216EE8, 10) == 0) {
        func_80010550(arg1, sp7C);
        func_801FA2E0();
        if (arg0->unk3C-- == 0) {
            func_800058DC(arg0, (s32)func_801F5F5C);
        }
    }
}


typedef struct func_801F8E4C_Struct {
    u8 pad0[0x90];
    u8 unk90;
    u8 unk91;
    u8 unk92;
    u8 pad93[0x98 - 0x93];
    s16 unk98;
    u8 pad9A[0xAE - 0x9A];
    u8 unkAE;
} func_801F8E4C_Struct;

extern void func_801F8F3C();
extern s32 D_801F48C8(struct func_801F3FFC_Arg *, u8);

void func_801F8E4C(func_801F8E4C_Struct *arg0, s32 arg1) {
    u8 v;
    u8 x;

    if (func_801C3B3C() != 0) {
        return;
    }
    if (func_801F3FFC((struct func_801F3FFC_Arg *)arg0, (f32)arg0->unkAE) != 0) {
        func_801F5230((struct func_801F5230_StructArg *)arg0);
        arg0->unk90 = func_801F49E0((s32)arg0);
        v = D_801F48C8((struct func_801F3FFC_Arg *)arg0, 10);
        arg0->unk91 = v;
        if (v != 0) {
            arg0->unk92 = 0;
        } else {
            arg0->unk92 = 0x10;
            arg0->unk98 = 0x1000 / arg0->unk92;
        }
        func_800058DC(arg0, (s32)func_801F8F3C);
    }
}

#define D_8011AAF4 D_8011AAF4__func_801F8F3C
#define D_80218AC0 D_80218AC0__func_801F8F3C
#define func_8013A334 func_8013A334__func_801F8F3C
#define func_801F91C0 func_801F91C0__func_801F8F3C
extern void func_8013A334(f32 *, s32, void *, s32);
void func_801F91C0(u8 *arg0, s32 arg1);
extern s32 D_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);

typedef struct func_801F8F3C_Pos {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
} func_801F8F3C_Pos;
typedef struct func_801F8F3C_Mid {
    u8 pad0[0x12];
    s16 unk12;
} func_801F8F3C_Mid;
typedef struct func_801F8F3C_Obj {
    u8 pad0[0x24];
    struct { u8 pad[0x2C]; func_801F8F3C_Mid *unk2C; } *unk24;
    u8 pad1[0x5C - 0x28];
    void *unk5C;
    u8 pad2[0x90 - 0x60];
    u8 unk90;
    u8 unk91;
    u8 unk92;
    u8 pad3[5];
    s16 unk98;
} func_801F8F3C_Obj;

extern u8 D_80218AC0[];

#undef D_8011AAF4
#undef func_8013A334
#undef func_801F91C0
#define D_8011AAF4 D_8011AAF4__func_801F8F3C_13dab537
#define func_8013A334 func_8013A334__func_801F8F3C_13dab537
#define func_801F8F3C_Mid func_801F8F3C_Mid__func_801F8F3C_13dab537
#define func_801F8F3C_Obj func_801F8F3C_Obj__func_801F8F3C_13dab537
#define func_801F8F3C_Pos func_801F8F3C_Pos__func_801F8F3C_13dab537
#define func_801F91C0 func_801F91C0__func_801F8F3C_13dab537
extern void func_8013A334(f32 *, s32, void *, s32);
void func_801F91C0(u8 *arg0, s32 arg1);
extern s32 D_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);

typedef struct func_801F8F3C_Pos {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
} func_801F8F3C_Pos;
typedef struct func_801F8F3C_Mid {
    u8 pad0[0x12];
    s16 unk12;
} func_801F8F3C_Mid;
typedef struct func_801F8F3C_Obj {
    u8 pad0[0x24];
    struct { u8 pad[0x2C]; func_801F8F3C_Mid *unk2C; } *unk24;
    u8 pad1[0x5C - 0x28];
    void *unk5C;
    u8 pad2[0x90 - 0x60];
    u8 unk90;
    u8 unk91;
    u8 unk92;
    u8 pad3[5];
    s16 unk98;
} func_801F8F3C_Obj;
void func_801F8F3C(func_801F8F3C_Obj *arg0, s32 arg1) {
    void *t;
    f32 sp60[3];
    func_801F8F3C_Pos *p;

    t = arg0->unk5C;
    func_8013A334(sp60, arg1, t, 6);
    if (arg0->unk91 == 0) {
        if (arg0->unk92 > 0) {
            arg0->unk92 = arg0->unk92 - 1;
            if (arg0->unk90 != 0) {
                arg0->unk24->unk2C->unk12 = arg0->unk24->unk2C->unk12 - arg0->unk98;
            } else {
                arg0->unk24->unk2C->unk12 = arg0->unk24->unk2C->unk12 + arg0->unk98;
            }
        }
    }
#define P ((func_801F8F3C_Pos *)D_801BBCD0->unk2C)
    if (D_8011AAF4("/hdisk1/u/nu64/rz011_usa/main/game/source/enemy/wanderer.c", 0x856, arg0, 0, 2, 3.0f, P->unk4, P->unk8 + 20.0f, P->unkC, 3.0f, sp60[0], sp60[1], sp60[2], 0.0f, 35.0f, -1, -1) == 0 && arg0->unk92 == 0) {
        func_800058DC(arg0, (s32)func_801F91C0);
    }
}
#undef P
#undef D_8011AAF4
#undef func_8013A334
#undef func_801F8F3C_Mid
#undef func_801F8F3C_Obj
#undef func_801F8F3C_Pos
#undef func_801F91C0
#define D_8011AAF4 D_8011AAF4__func_801F8F3C
#define func_8013A334 func_8013A334__func_801F8F3C
#define func_801F91C0 func_801F91C0__func_801F8F3C
#undef P
#undef D_8011AAF4
#undef D_80218AC0
#undef func_8013A334
#undef func_801F91C0

#define func_801C3B3C func_801C3B3C__func_801F908C
#define func_801F9104 func_801F9104__func_801F908C

typedef struct func_801F908C_Struct {
    u8 pad0[0xAE];
    u8 unkAE;
} func_801F908C_Struct;

extern s32 func_801C3B3C(void);
extern void func_801F9104();

void func_801F908C(func_801F908C_Struct *arg0, s32 arg1) {
    if (func_801C3B3C() == 0) {
        if (func_801F3FFC((struct func_801F3FFC_Arg *) arg0, (f32) (u32) arg0->unkAE) != 0) {
            func_801F5230((struct func_801F5230_StructArg *) arg0);
            func_800058DC(arg0, (s32) func_801F9104);
        }
    }
}
#undef func_801C3B3C
#undef func_801F9104

#define func_801F91C0 func_801F91C0__func_801F9104

typedef struct func_801F9104_StructObj {
    u8 pad[0x5C];
    void *unk5C;
} func_801F9104_StructObj;

typedef struct func_801F9104_StructPos {
    u8 pad[4];
    s32 unk4;
    f32 unk8;
    f32 unkC;
} func_801F9104_StructPos;

extern f32 D_80218D18;
extern s32 D_8012A94C(void *, s32);
extern void func_8013A334(f32 *, s32, void *, s32);
void func_801F91C0(u8 *arg0, s32 arg1);

#define POS ((func_801F9104_StructPos *)D_801BBCD0->unk2C)

#undef POS
#undef func_801F91C0
#define func_801F9104_StructObj func_801F9104_StructObj__func_801F9104_76bfe6cf
#define func_801F9104_StructPos func_801F9104_StructPos__func_801F9104_76bfe6cf
#define func_801F91C0 func_801F91C0__func_801F9104_76bfe6cf
#define POS ((func_801F9104_StructPos *)D_801BBCD0->unk2C)

typedef struct func_801F9104_StructObj {
    u8 pad[0x5C];
    void *unk5C;
} func_801F9104_StructObj;

typedef struct func_801F9104_StructPos {
    u8 pad[4];
    s32 unk4;
    f32 unk8;
    f32 unkC;
} func_801F9104_StructPos;
void func_801F91C0(u8 *arg0, s32 arg1);

#define POS ((func_801F9104_StructPos *)D_801BBCD0->unk2C)

void func_801F9104(func_801F9104_StructObj *arg0, s32 arg1) {
    void *t;
    f32 vec[3];

    t = arg0->unk5C;
    func_8013A334(vec, arg1, t, 6);
    arg1 = D_8012A94C(arg0, 0x100);
    if (D_801F3C90(arg0, 1.0f, (0.15f), POS->unk4, POS->unk8 + 25.0f, POS->unkC, (0.15f), vec[0], vec[1], vec[2], (0.15f), 35.0f) != 0) {
        func_800058DC(arg0, (s32)func_801F91C0);
    }
}
#undef POS
#undef func_801F9104_StructObj
#undef func_801F9104_StructPos
#undef func_801F91C0
#define POS ((func_801F9104_StructPos *)D_801BBCD0->unk2C)
#define func_801F91C0 func_801F91C0__func_801F9104
#undef func_801F91C0


#define func_801F3C90 func_801F3C90__decl5155
extern void func_801F3C90(void *, s32, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32);
extern f32 D_80218D1C;
extern f32 D_80218D20;
#define func_801F9318 func_801F9318__decl3247
extern u8 func_801F9318[];

void func_801F91C0(u8 *arg0, s32 arg1) {
    u8 *sp4C;
    f32 sp40[3];

    sp4C = *(u8 **)(arg0 + 0x5C);
    func_8013A334(sp40, arg1, sp4C, 6);
    func_801F5210(arg0);
    func_801F3C90(arg0, 0x3C23D70A, 0x3DCCCCCD, *(s32 *)((u8 *)D_801BBCD0->unk2C + 4), *(f32 *)((u8 *)D_801BBCD0->unk2C + 8) + 23.0f, *(f32 *)((u8 *)D_801BBCD0->unk2C + 0xC), (0.07f), sp40[0], sp40[1], sp40[2], (0.2f), 35.0f);
    if (*(u16 *)(arg0 + 0x70) == 0x22) {
        func_80020744(0x13C);
    }
    if (func_80010550(arg1, sp4C) != 0) {
        *(s16 *)(sp4C + 0x78) = 1;
        func_800058DC(arg0, (s32)func_801F9318);
        (&D_8021B028)[0] = (f32)(func_8012C6B4(0xA) - 5);
        (&D_8021B028)[1] = (f32)func_8012C6B4(0x14);
        (&D_8021B028)[2] = (f32)(func_8012C6B4(0xA) - 5);
    }
}
#undef func_801F3C90
#undef func_801F9318

#define B_8012CE9C B_8012CE9C__func_801F9318
#define B_801F3C90 B_801F3C90__func_801F9318
#define D_80216EE8 D_80216EE8__func_801F9318
#define D_80218D24 D_80218D24__func_801F9318
#define D_80218D28 D_80218D28__func_801F9318
#define func_80147768 func_80147768__func_801F9318
#define func_801F4620_Struct func_801F4620_Struct__func_801F9318
#define func_801F467C func_801F467C__func_801F9318
#define func_801F467C_Struct func_801F467C_Struct__func_801F9318
#define func_801F4AA0_Struct func_801F4AA0_Struct__func_801F9318
#define func_801F5F5C func_801F5F5C__func_801F9318
#define func_801F5F5C_Inner func_801F5F5C_Inner__func_801F9318
#define func_801F5F5C_Struct func_801F5F5C_Struct__func_801F9318
#define VEC ((func_801F4620_Struct *)&D_8021B028)
typedef struct func_801F4AA0_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801F4AA0_Struct;
extern func_801F4AA0_Struct D_80216EE8;
typedef struct func_801F4620_Struct {
    f32 unk0;
    f32 unk4;
    f32 unk8;
} func_801F4620_Struct;
#define VEC ((func_801F4620_Struct *)&D_8021B028)
extern void func_80147768(f32 *, f32);
typedef struct func_801F467C_Struct {
    f32 unk0;
    f32 unk4;
    f32 unk8;
} func_801F467C_Struct;
void func_801F467C(s16 arg0, func_801F467C_Struct *arg1);
typedef struct func_801F5F5C_Inner {
    u8 pad0[0x14];
    s32 unk14;
} func_801F5F5C_Inner;
typedef struct func_801F5F5C_Struct {
    u8 pad0[0x38];
    func_801F5F5C_Inner *unk38;
    u8 pad1[0xAF - 0x3C];
    u8 unkAF;
} func_801F5F5C_Struct;
void func_801F5F5C(func_801F5F5C_Struct *arg0, s32 arg1);


typedef struct func_801F9318_Pos {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
} func_801F9318_Pos;

typedef struct func_801F9318_Mid {
    u8 pad0[0x2C];
    func_801F9318_Pos *unk2C;
} func_801F9318_Mid;

typedef struct func_801F9318_Obj {
    u8 pad0[0x24];
    func_801F9318_Mid *unk24;
    u8 pad28[0x5C - 0x28];
    void *unk5C;
} func_801F9318_Obj;

typedef struct func_801F9318_Sub {
    u8 pad0[0x78];
    u16 unk78;
} func_801F9318_Sub;

extern s32 B_8012CE9C(s32, s32, func_801F4AA0_Struct, s32);
extern s32 B_801F3C90(void *, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);

extern f32 D_80218D24;
extern f32 D_80218D28;

#undef B_8012CE9C
#undef B_801F3C90
#undef D_80216EE8
#undef VEC
#undef func_80147768
#undef func_801F4620_Struct
#undef func_801F467C
#undef func_801F467C_Struct
#undef func_801F4AA0_Struct
#undef func_801F5F5C
#undef func_801F5F5C_Inner
#undef func_801F5F5C_Struct
#define B_8012CE9C B_8012CE9C__func_801F9318_2802af44
#define B_801F3C90 B_801F3C90__func_801F9318_2802af44
#define D_80216EE8 D_80216EE8__func_801F9318_2802af44
#define func_80147768 func_80147768__func_801F9318_2802af44
#define func_801F4620_Struct func_801F4620_Struct__func_801F9318_2802af44
#define func_801F467C func_801F467C__func_801F9318_2802af44
#define func_801F467C_Struct func_801F467C_Struct__func_801F9318_2802af44
#define func_801F4AA0_Struct func_801F4AA0_Struct__func_801F9318_2802af44
#define func_801F5F5C func_801F5F5C__func_801F9318_2802af44
#define func_801F5F5C_Inner func_801F5F5C_Inner__func_801F9318_2802af44
#define func_801F5F5C_Struct func_801F5F5C_Struct__func_801F9318_2802af44
#define func_801F9318_Mid func_801F9318_Mid__func_801F9318_2802af44
#define func_801F9318_Obj func_801F9318_Obj__func_801F9318_2802af44
#define func_801F9318_Pos func_801F9318_Pos__func_801F9318_2802af44
#define func_801F9318_Sub func_801F9318_Sub__func_801F9318_2802af44
#define VEC ((func_801F4620_Struct *)&D_8021B028)
typedef struct func_801F4AA0_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801F4AA0_Struct;
extern func_801F4AA0_Struct D_80216EE8;
typedef struct func_801F4620_Struct {
    f32 unk0;
    f32 unk4;
    f32 unk8;
} func_801F4620_Struct;
#define VEC ((func_801F4620_Struct *)&D_8021B028)
extern void func_80147768(f32 *, f32);
typedef struct func_801F467C_Struct {
    f32 unk0;
    f32 unk4;
    f32 unk8;
} func_801F467C_Struct;
void func_801F467C(s16 arg0, func_801F467C_Struct *arg1);
typedef struct func_801F5F5C_Inner {
    u8 pad0[0x14];
    s32 unk14;
} func_801F5F5C_Inner;
typedef struct func_801F5F5C_Struct {
    u8 pad0[0x38];
    func_801F5F5C_Inner *unk38;
    u8 pad1[0xAF - 0x3C];
    u8 unkAF;
} func_801F5F5C_Struct;
void func_801F5F5C(func_801F5F5C_Struct *arg0, s32 arg1);


typedef struct func_801F9318_Pos {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
} func_801F9318_Pos;

typedef struct func_801F9318_Mid {
    u8 pad0[0x2C];
    func_801F9318_Pos *unk2C;
} func_801F9318_Mid;

typedef struct func_801F9318_Obj {
    u8 pad0[0x24];
    func_801F9318_Mid *unk24;
    u8 pad28[0x5C - 0x28];
    void *unk5C;
} func_801F9318_Obj;

typedef struct func_801F9318_Sub {
    u8 pad0[0x78];
    u16 unk78;
} func_801F9318_Sub;

extern s32 B_8012CE9C(s32, s32, func_801F4AA0_Struct, s32);
extern s32 B_801F3C90(void *, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);
void func_801F9318(func_801F9318_Obj *arg0, s32 arg1, s32 arg2, s32 arg3, f32 k) {
    func_801F9318_Sub *temp_s0;
    f32 sp50[3];
    func_801F467C_Struct sp44;
    s8 sp43;

    if (arg2) {
    }
    if (arg3) {
    }
    temp_s0 = arg0->unk5C;
    func_8013A334(sp50, arg1, temp_s0, 6);
    func_801F467C(arg0->unk24->unk2C->unk12, &sp44);
    func_80147768((f32 *)&sp44, 22.0f);
    k = (0.15f);
    sp43 = B_801F3C90(arg0, 0x3C23D70A, k,
                      arg0->unk24->unk2C->unk4 + sp44.unk0 + VEC->unk0,
                      arg0->unk24->unk2C->unk8 + 5.0f + sp44.unk4 + VEC->unk4,
                      arg0->unk24->unk2C->unkC + sp44.unk8 + VEC->unk8,
                      (0.2f), sp50[0], sp50[1], sp50[2], k, 35.0f);
    if (B_8012CE9C(arg1, (s32)temp_s0, D_80216EE8, 0x14) == 0) {
        func_801FA2E0();
        if ((func_80010550(arg1, temp_s0) != 0) && (sp43 == 1)) {
            temp_s0->unk78 = 1;
            func_800058DC(arg0, (s32)func_801F5F5C);
        }
    }
}
#undef VEC
#undef B_8012CE9C
#undef B_801F3C90
#undef D_80216EE8
#undef func_80147768
#undef func_801F4620_Struct
#undef func_801F467C
#undef func_801F467C_Struct
#undef func_801F4AA0_Struct
#undef func_801F5F5C
#undef func_801F5F5C_Inner
#undef func_801F5F5C_Struct
#undef func_801F9318_Mid
#undef func_801F9318_Obj
#undef func_801F9318_Pos
#undef func_801F9318_Sub
#define B_8012CE9C B_8012CE9C__func_801F9318
#define B_801F3C90 B_801F3C90__func_801F9318
#define D_80216EE8 D_80216EE8__func_801F9318
#define VEC ((func_801F4620_Struct *)&D_8021B028)
#define func_80147768 func_80147768__func_801F9318
#define func_801F4620_Struct func_801F4620_Struct__func_801F9318
#define func_801F467C func_801F467C__func_801F9318
#define func_801F467C_Struct func_801F467C_Struct__func_801F9318
#define func_801F4AA0_Struct func_801F4AA0_Struct__func_801F9318
#define func_801F5F5C func_801F5F5C__func_801F9318
#define func_801F5F5C_Inner func_801F5F5C_Inner__func_801F9318
#define func_801F5F5C_Struct func_801F5F5C_Struct__func_801F9318
#undef VEC
#undef B_8012CE9C
#undef B_801F3C90
#undef D_80216EE8
#undef D_80218D24
#undef D_80218D28
#undef func_80147768
#undef func_801F4620_Struct
#undef func_801F467C
#undef func_801F467C_Struct
#undef func_801F4AA0_Struct
#undef func_801F5F5C
#undef func_801F5F5C_Inner
#undef func_801F5F5C_Struct

#define func_801C3B3C func_801C3B3C__func_801F94AC
#define func_801F9524 func_801F9524__func_801F94AC

typedef struct func_801F94AC_Struct {
    u8 pad0[0xAE];
    u8 unkAE;
} func_801F94AC_Struct;

extern s32 func_801C3B3C(void);
extern void func_801F9524();

void func_801F94AC(func_801F94AC_Struct *arg0, s32 arg1) {
    if (func_801C3B3C() == 0) {
        if (func_801F3FFC((struct func_801F3FFC_Arg *) arg0, (f32) (u32) arg0->unkAE) != 0) {
            func_801F5230((struct func_801F5230_StructArg *) arg0);
            func_800058DC(arg0, (s32) func_801F9524);
        }
    }
}
#undef func_801C3B3C
#undef func_801F9524


struct func_801F9524_Pos { u8 pad0[4]; f32 x; f32 y; f32 z; u8 pad10[2]; s16 unk12; };
struct func_801F9524_Mid { u8 pad0[0x2C]; struct func_801F9524_Pos *unk2C; };
struct func_801F9524_Obj {
    u8 pad0[0x24];
    struct func_801F9524_Mid *unk24;
    u8 pad28[0x16];
    u8 unk3E;
    u8 pad3F;
    f32 unk40;
    f32 unk44;
    f32 unk48;
    u8 pad4C[0x10];
    void *unk5C;
};
extern s32 D_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern u8 D_80218AFC[];
#define func_801F9664 func_801F9664__decl3015
extern u8 func_801F9664[];

void func_801F9524(struct func_801F9524_Obj *arg0, s32 arg1) {
    void *t;
    f32 v[3];

    t = arg0->unk5C;
    D_8013A334(v, arg1, t, 6);
    if (D_8011AAF4(D_80218AFC, 0x8E0, arg0, 0, 2, 3.0f, ((struct func_801F9524_Mid *)D_801BBCD0)->unk2C->x, ((struct func_801F9524_Mid *)D_801BBCD0)->unk2C->y + 22.0f, ((struct func_801F9524_Mid *)D_801BBCD0)->unk2C->z, 3.0f, v[0], v[1], v[2], 3.0f, 50.0f, -1, -1) == 0) {
        func_801F5210(arg0);
        arg0->unk3E = 2;
        arg0->unk44 = 2.0f;
        arg0->unk48 = func_8001EB64(arg0->unk24->unk2C->unk12) * -1.0f;
        arg0->unk40 = func_8001EAD0(arg0->unk24->unk2C->unk12) * -1.0f;
        func_800058DC(arg0, (s32)func_801F9664);
    }
}
#undef func_801F9664

#define D_801BBCD0 D_801BBCD0__func_801F9664
#define D_80218B38 D_80218B38__func_801F9664
#define func_801F3FFC_Node func_801F3FFC_Node__func_801F9664
#define func_801F97E0 func_801F97E0__func_801F9664
struct func_801F3FFC_Node {
    u8 pad0[8];
    f32 unk8;
    u8 pad1[0x20];
    struct func_801F3FFC_Node *unk2C;
};
extern struct func_801F3FFC_Node *D_801BBCD0;


typedef struct func_801F9664_Struct {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
} func_801F9664_Struct;

extern u8 D_80218B38[];
extern u8 func_801F97E0[];

#undef D_801BBCD0
#undef func_801F3FFC_Node
#undef func_801F97E0
#define D_801BBCD0 D_801BBCD0__func_801F9664_f7b6c6ca
#define func_801F3FFC_Node func_801F3FFC_Node__func_801F9664_f7b6c6ca
#define func_801F9664_Struct func_801F9664_Struct__func_801F9664_f7b6c6ca
#define func_801F97E0 func_801F97E0__func_801F9664_f7b6c6ca
struct func_801F3FFC_Node {
    u8 pad0[8];
    f32 unk8;
    u8 pad1[0x20];
    struct func_801F3FFC_Node *unk2C;
};
extern struct func_801F3FFC_Node *D_801BBCD0;


typedef struct func_801F9664_Struct {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
} func_801F9664_Struct;
extern u8 func_801F97E0[];

void func_801F9664(u8 *arg0, s32 arg1) {
    u8 *sp64;
    f32 sp58[3];

    sp64 = *(u8 **)(arg0 + 0x5C);
    D_8013A334(sp58, arg1, sp64, 6);
    func_8011AAF4("/hdisk1/u/nu64/rz011_usa/main/game/source/enemy/wanderer.c", 0x8F8, arg0, 0, 1, 10.0f, ((func_801F9664_Struct *)D_801BBCD0->unk2C)->unk4, D_801BBCD0->unk2C->unk8 + 22.0f, ((func_801F9664_Struct *)D_801BBCD0->unk2C)->unkC, 0.0f, sp58[0], sp58[1], sp58[2], 0.0f, 50.0f, -1, -1);
    if (*(u16 *)(arg0 + 0x70) == 0x33) {
        func_80020744(0x13C);
        *(f32 *)(arg0 + 0x48) = 0.0f;
        *(f32 *)(arg0 + 0x40) = 0.0f;
    }
    if (func_80010550(arg1, sp64) != 0) {
        *(s16 *)(sp64 + 0x78) = 1;
        D_8021B028 = (f32) (func_8012C6B4(0xA) - 5);
        D_8021B02C = (f32) func_8012C6B4(0x14);
        D_8021B030 = (f32) (func_8012C6B4(0xA) - 5);
        func_800058DC(arg0, (s32)func_801F97E0);
    }
}
#undef D_801BBCD0
#undef func_801F3FFC_Node
#undef func_801F9664_Struct
#undef func_801F97E0
#define D_801BBCD0 D_801BBCD0__func_801F9664
#define func_801F3FFC_Node func_801F3FFC_Node__func_801F9664
#define func_801F97E0 func_801F97E0__func_801F9664
#undef D_801BBCD0
#undef D_80218B38
#undef func_801F3FFC_Node
#undef func_801F97E0

#define B_8012CE9C B_8012CE9C__func_801F97E0
#define B_801F3C90 B_801F3C90__func_801F97E0
#define D_80216EE8 D_80216EE8__func_801F97E0
#define D_80218D2C D_80218D2C__func_801F97E0
#define D_80218D30 D_80218D30__func_801F97E0
#define func_80147768 func_80147768__func_801F97E0
#define func_801F4620_Struct func_801F4620_Struct__func_801F97E0
#define func_801F467C func_801F467C__func_801F97E0
#define func_801F467C_Struct func_801F467C_Struct__func_801F97E0
#define func_801F4AA0_Struct func_801F4AA0_Struct__func_801F97E0
#define func_801F5F5C func_801F5F5C__func_801F97E0
#define func_801F5F5C_Inner func_801F5F5C_Inner__func_801F97E0
#define func_801F5F5C_Struct func_801F5F5C_Struct__func_801F97E0
#define VEC ((func_801F4620_Struct *)&D_8021B028)
typedef struct func_801F4AA0_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801F4AA0_Struct;
extern func_801F4AA0_Struct D_80216EE8;
typedef struct func_801F4620_Struct {
    f32 unk0;
    f32 unk4;
    f32 unk8;
} func_801F4620_Struct;
#define VEC ((func_801F4620_Struct *)&D_8021B028)
extern void func_80147768(f32 *, f32);
typedef struct func_801F467C_Struct {
    f32 unk0;
    f32 unk4;
    f32 unk8;
} func_801F467C_Struct;
void func_801F467C(s16 arg0, func_801F467C_Struct *arg1);
typedef struct func_801F5F5C_Inner {
    u8 pad0[0x14];
    s32 unk14;
} func_801F5F5C_Inner;
typedef struct func_801F5F5C_Struct {
    u8 pad0[0x38];
    func_801F5F5C_Inner *unk38;
    u8 pad1[0xAF - 0x3C];
    u8 unkAF;
} func_801F5F5C_Struct;
void func_801F5F5C(func_801F5F5C_Struct *arg0, s32 arg1);


typedef struct func_801F97E0_Pos {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
} func_801F97E0_Pos;

typedef struct func_801F97E0_Mid {
    u8 pad0[0x2C];
    func_801F97E0_Pos *unk2C;
} func_801F97E0_Mid;

typedef struct func_801F97E0_Obj {
    u8 pad0[0x24];
    func_801F97E0_Mid *unk24;
    u8 pad28[0x5C - 0x28];
    void *unk5C;
} func_801F97E0_Obj;

typedef struct func_801F97E0_Sub {
    u8 pad0[0x78];
    u16 unk78;
} func_801F97E0_Sub;

extern s32 B_8012CE9C(s32, s32, func_801F4AA0_Struct, s32);
extern s32 B_801F3C90(void *, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);

extern f32 D_80218D2C;
extern f32 D_80218D30;

#undef B_8012CE9C
#undef B_801F3C90
#undef D_80216EE8
#undef VEC
#undef func_80147768
#undef func_801F4620_Struct
#undef func_801F467C
#undef func_801F467C_Struct
#undef func_801F4AA0_Struct
#undef func_801F5F5C
#undef func_801F5F5C_Inner
#undef func_801F5F5C_Struct
#define B_8012CE9C B_8012CE9C__func_801F97E0_e6a16af2
#define B_801F3C90 B_801F3C90__func_801F97E0_e6a16af2
#define D_80216EE8 D_80216EE8__func_801F97E0_e6a16af2
#define func_80147768 func_80147768__func_801F97E0_e6a16af2
#define func_801F4620_Struct func_801F4620_Struct__func_801F97E0_e6a16af2
#define func_801F467C func_801F467C__func_801F97E0_e6a16af2
#define func_801F467C_Struct func_801F467C_Struct__func_801F97E0_e6a16af2
#define func_801F4AA0_Struct func_801F4AA0_Struct__func_801F97E0_e6a16af2
#define func_801F5F5C func_801F5F5C__func_801F97E0_e6a16af2
#define func_801F5F5C_Inner func_801F5F5C_Inner__func_801F97E0_e6a16af2
#define func_801F5F5C_Struct func_801F5F5C_Struct__func_801F97E0_e6a16af2
#define func_801F97E0_Mid func_801F97E0_Mid__func_801F97E0_e6a16af2
#define func_801F97E0_Obj func_801F97E0_Obj__func_801F97E0_e6a16af2
#define func_801F97E0_Pos func_801F97E0_Pos__func_801F97E0_e6a16af2
#define func_801F97E0_Sub func_801F97E0_Sub__func_801F97E0_e6a16af2
#define VEC ((func_801F4620_Struct *)&D_8021B028)
typedef struct func_801F4AA0_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801F4AA0_Struct;
extern func_801F4AA0_Struct D_80216EE8;
typedef struct func_801F4620_Struct {
    f32 unk0;
    f32 unk4;
    f32 unk8;
} func_801F4620_Struct;
#define VEC ((func_801F4620_Struct *)&D_8021B028)
extern void func_80147768(f32 *, f32);
typedef struct func_801F467C_Struct {
    f32 unk0;
    f32 unk4;
    f32 unk8;
} func_801F467C_Struct;
void func_801F467C(s16 arg0, func_801F467C_Struct *arg1);
typedef struct func_801F5F5C_Inner {
    u8 pad0[0x14];
    s32 unk14;
} func_801F5F5C_Inner;
typedef struct func_801F5F5C_Struct {
    u8 pad0[0x38];
    func_801F5F5C_Inner *unk38;
    u8 pad1[0xAF - 0x3C];
    u8 unkAF;
} func_801F5F5C_Struct;
void func_801F5F5C(func_801F5F5C_Struct *arg0, s32 arg1);


typedef struct func_801F97E0_Pos {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
} func_801F97E0_Pos;

typedef struct func_801F97E0_Mid {
    u8 pad0[0x2C];
    func_801F97E0_Pos *unk2C;
} func_801F97E0_Mid;

typedef struct func_801F97E0_Obj {
    u8 pad0[0x24];
    func_801F97E0_Mid *unk24;
    u8 pad28[0x5C - 0x28];
    void *unk5C;
} func_801F97E0_Obj;

typedef struct func_801F97E0_Sub {
    u8 pad0[0x78];
    u16 unk78;
} func_801F97E0_Sub;

extern s32 B_8012CE9C(s32, s32, func_801F4AA0_Struct, s32);
extern s32 B_801F3C90(void *, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);
void func_801F97E0(func_801F97E0_Obj *arg0, s32 arg1, s32 arg2, s32 arg3, f32 k) {
    func_801F97E0_Sub *temp_s0;
    f32 sp50[3];
    func_801F467C_Struct sp44;
    s8 sp43;

    if (arg2) {
    }
    if (arg3) {
    }
    temp_s0 = arg0->unk5C;
    func_8013A334(sp50, arg1, temp_s0, 6);
    func_801F467C(arg0->unk24->unk2C->unk12, &sp44);
    func_80147768((f32 *)&sp44, 22.0f);
    k = (0.15f);
    sp43 = B_801F3C90(arg0, 0x3C23D70A, k,
                      arg0->unk24->unk2C->unk4 + sp44.unk0 + VEC->unk0,
                      arg0->unk24->unk2C->unk8 + 5.0f + sp44.unk4 + VEC->unk4,
                      arg0->unk24->unk2C->unkC + sp44.unk8 + VEC->unk8,
                      (0.2f), sp50[0], sp50[1], sp50[2], k, 35.0f);
    if (B_8012CE9C(arg1, (s32)temp_s0, D_80216EE8, 0x14) == 0) {
        func_801FA2E0();
        if ((func_80010550(arg1, temp_s0) != 0) && (sp43 == 1)) {
            temp_s0->unk78 = 1;
            func_800058DC(arg0, (s32)func_801F5F5C);
        }
    }
}
#undef VEC
#undef B_8012CE9C
#undef B_801F3C90
#undef D_80216EE8
#undef func_80147768
#undef func_801F4620_Struct
#undef func_801F467C
#undef func_801F467C_Struct
#undef func_801F4AA0_Struct
#undef func_801F5F5C
#undef func_801F5F5C_Inner
#undef func_801F5F5C_Struct
#undef func_801F97E0_Mid
#undef func_801F97E0_Obj
#undef func_801F97E0_Pos
#undef func_801F97E0_Sub
#define B_8012CE9C B_8012CE9C__func_801F97E0
#define B_801F3C90 B_801F3C90__func_801F97E0
#define D_80216EE8 D_80216EE8__func_801F97E0
#define VEC ((func_801F4620_Struct *)&D_8021B028)
#define func_80147768 func_80147768__func_801F97E0
#define func_801F4620_Struct func_801F4620_Struct__func_801F97E0
#define func_801F467C func_801F467C__func_801F97E0
#define func_801F467C_Struct func_801F467C_Struct__func_801F97E0
#define func_801F4AA0_Struct func_801F4AA0_Struct__func_801F97E0
#define func_801F5F5C func_801F5F5C__func_801F97E0
#define func_801F5F5C_Inner func_801F5F5C_Inner__func_801F97E0
#define func_801F5F5C_Struct func_801F5F5C_Struct__func_801F97E0
#undef VEC
#undef B_8012CE9C
#undef B_801F3C90
#undef D_80216EE8
#undef D_80218D2C
#undef D_80218D30
#undef func_80147768
#undef func_801F4620_Struct
#undef func_801F467C
#undef func_801F467C_Struct
#undef func_801F4AA0_Struct
#undef func_801F5F5C
#undef func_801F5F5C_Inner
#undef func_801F5F5C_Struct


struct func_801F9974_Struct {
    u8 pad0[0x24];
    func_801F40BC_StructB *unk24;
    u8 pad1[0x5C - 0x28];
    void *unk5C;
    u8 pad2[0x92 - 0x60];
    s16 unk92;
    f32 unk94;
    u8 pad4[0xAE - 0x98];
    u8 unkAE;
};
struct func_801F9974_Sub {
    u8 pad0[0x22];
    u8 unk22;
};
#define func_801F9A8C func_801F9A8C__decl3101
extern u8 func_801F9A8C[];

void func_801F9974(struct func_801F9974_Struct *arg0, s32 arg1) {
    void *sp2C;
    f32 sp20[3];

    sp2C = arg0->unk5C;
    func_80010550(arg1, sp2C);
    if (func_801C3B3C() == 0) {
        if (func_801F40BC((void *)arg0, (f32)arg0->unkAE) != 0) {
            ((struct func_801F9974_Sub *)arg0->unk24)->unk22 = 1;
            arg0->unk92 = func_801F3F70(arg0);
            arg0->unk94 = (arg0->unk24->unk2C->unk8 - (f32)arg0->unk92) + 3.0f;
            func_801F5230((void *)arg0);
            func_8013A334(sp20, arg1, sp2C, 1);
            if (func_801F53C4((void *)arg0) != 0) {
                func_801F536C();
            }
            func_800058DC(arg0, (s32)func_801F9A8C);
            return;
        }
    }
    func_8012A94C(arg0, 0x40);
}
#undef func_801F9A8C

#define D_801BBCD0 D_801BBCD0__func_801F9A8C
#define D_80218B74 D_80218B74__func_801F9A8C
#define func_8011AAF4 func_8011AAF4__func_801F9A8C
#define func_8013A334 func_8013A334__func_801F9A8C
#define func_801F3FFC_Node func_801F3FFC_Node__func_801F9A8C
#define func_801F4170_Inner func_801F4170_Inner__func_801F9A8C
#define func_801F4170_Mid func_801F4170_Mid__func_801F9A8C
#define func_801F536C func_801F536C__func_801F9A8C
#define func_801F53C4 func_801F53C4__func_801F9A8C
#define func_801F53C4_Struct func_801F53C4_Struct__func_801F9A8C
#define func_801F9BC8 func_801F9BC8__func_801F9A8C
#define func_801F9BC8_Obj func_801F9BC8_Obj__func_801F9A8C
struct func_801F3FFC_Node {
    u8 pad0[8];
    f32 unk8;
    u8 pad1[0x20];
    struct func_801F3FFC_Node *unk2C;
};
extern struct func_801F3FFC_Node *D_801BBCD0;
typedef struct func_801F4170_Inner {
    u8 pad0[8];
    f32 unk8;
} func_801F4170_Inner;
typedef struct func_801F4170_Mid {
    u8 pad0[0x2C];
    func_801F4170_Inner *unk2C;
} func_801F4170_Mid;
void func_801F536C(void);
typedef struct func_801F53C4_Struct {
    u8 pad0[0x92];
    s16 unk92;
} func_801F53C4_Struct;
s32 func_801F53C4(func_801F53C4_Struct *arg0);
struct func_801F9BC8_Obj {
    u8 pad0[0x24];
    struct func_801F3FFC_Node *unk24;
    u8 pad1[0x4];
    u32 unk2C;
    u8 pad2[0x2C];
    void *unk5C;
    u8 pad3[0x34];
    f32 unk94;
};
void func_801F9BC8(struct func_801F9BC8_Obj *arg0, s32 arg1);
extern s32 func_8013A334(f32 *, s32, void *, s32);
struct func_801F9A8C_Arg { u8 pad0[0x24]; func_801F4170_Mid *u24; u8 pad1[0x1C]; f32 u44; u8 pad2[0x14]; s32 u5C; };
extern s32 func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern u8 D_80218B74[];
#undef D_801BBCD0
#undef func_8011AAF4
#undef func_8013A334
#undef func_801F3FFC_Node
#undef func_801F4170_Inner
#undef func_801F4170_Mid
#undef func_801F536C
#undef func_801F53C4
#undef func_801F53C4_Struct
#undef func_801F9BC8
#undef func_801F9BC8_Obj
#define D_801BBCD0 D_801BBCD0__func_801F9A8C_56f82602
#define func_8011AAF4 func_8011AAF4__func_801F9A8C_56f82602
#define func_8013A334 func_8013A334__func_801F9A8C_56f82602
#define func_801F3FFC_Node func_801F3FFC_Node__func_801F9A8C_56f82602
#define func_801F4170_Inner func_801F4170_Inner__func_801F9A8C_56f82602
#define func_801F4170_Mid func_801F4170_Mid__func_801F9A8C_56f82602
#define func_801F536C func_801F536C__func_801F9A8C_56f82602
#define func_801F53C4 func_801F53C4__func_801F9A8C_56f82602
#define func_801F53C4_Struct func_801F53C4_Struct__func_801F9A8C_56f82602
#define func_801F9A8C_Arg func_801F9A8C_Arg__func_801F9A8C_56f82602
#define func_801F9BC8 func_801F9BC8__func_801F9A8C_56f82602
#define func_801F9BC8_Obj func_801F9BC8_Obj__func_801F9A8C_56f82602
struct func_801F3FFC_Node {
    u8 pad0[8];
    f32 unk8;
    u8 pad1[0x20];
    struct func_801F3FFC_Node *unk2C;
};
extern struct func_801F3FFC_Node *D_801BBCD0;
typedef struct func_801F4170_Inner {
    u8 pad0[8];
    f32 unk8;
} func_801F4170_Inner;
typedef struct func_801F4170_Mid {
    u8 pad0[0x2C];
    func_801F4170_Inner *unk2C;
} func_801F4170_Mid;
void func_801F536C(void);
typedef struct func_801F53C4_Struct {
    u8 pad0[0x92];
    s16 unk92;
} func_801F53C4_Struct;
s32 func_801F53C4(func_801F53C4_Struct *arg0);
struct func_801F9BC8_Obj {
    u8 pad0[0x24];
    struct func_801F3FFC_Node *unk24;
    u8 pad1[0x4];
    u32 unk2C;
    u8 pad2[0x2C];
    void *unk5C;
    u8 pad3[0x34];
    f32 unk94;
};
void func_801F9BC8(struct func_801F9BC8_Obj *arg0, s32 arg1);
extern s32 func_8013A334(f32 *, s32, void *, s32);
struct func_801F9A8C_Arg { u8 pad0[0x24]; func_801F4170_Mid *u24; u8 pad1[0x1C]; f32 u44; u8 pad2[0x14]; s32 u5C; };
extern s32 func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
void func_801F9A8C(struct func_801F9A8C_Arg *arg0, s32 arg1) {
    s32 a2;
    f32 v[3];
    struct func_801F3FFC_Node *t;
    a2 = arg0->u5C;
    func_80010550(arg1, a2);
    func_8013A334(v, arg1, (void *)a2, 1);
    if (func_8011AAF4("/hdisk1/u/nu64/rz011_usa/main/game/source/enemy/wanderer.c", 0x952, arg0, 0, 2, 3.0f, ((f32 *)(t = D_801BBCD0->unk2C))[1], t->unk8 + 20.0f, ((f32 *)t)[3], 4294967296.0f, v[0], arg0->u24->unk2C->unk8 + 5.0f, v[2], 3.0f, 35.0f, -1, -1) == 0) {
        if (func_801F53C4((void *)arg0) == 0) {
            func_801F536C();
        }
        arg0->u44 = 0.0f;
        func_800058DC(arg0, (s32)func_801F9BC8);
    }
}
#undef D_801BBCD0
#undef func_8011AAF4
#undef func_8013A334
#undef func_801F3FFC_Node
#undef func_801F4170_Inner
#undef func_801F4170_Mid
#undef func_801F536C
#undef func_801F53C4
#undef func_801F53C4_Struct
#undef func_801F9A8C_Arg
#undef func_801F9BC8
#undef func_801F9BC8_Obj
#define D_801BBCD0 D_801BBCD0__func_801F9A8C
#define func_8011AAF4 func_8011AAF4__func_801F9A8C
#define func_8013A334 func_8013A334__func_801F9A8C
#define func_801F3FFC_Node func_801F3FFC_Node__func_801F9A8C
#define func_801F4170_Inner func_801F4170_Inner__func_801F9A8C
#define func_801F4170_Mid func_801F4170_Mid__func_801F9A8C
#define func_801F536C func_801F536C__func_801F9A8C
#define func_801F53C4 func_801F53C4__func_801F9A8C
#define func_801F53C4_Struct func_801F53C4_Struct__func_801F9A8C
#define func_801F9BC8 func_801F9BC8__func_801F9A8C
#define func_801F9BC8_Obj func_801F9BC8_Obj__func_801F9A8C
#undef D_801BBCD0
#undef D_80218B74
#undef func_8011AAF4
#undef func_8013A334
#undef func_801F3FFC_Node
#undef func_801F4170_Inner
#undef func_801F4170_Mid
#undef func_801F536C
#undef func_801F53C4
#undef func_801F53C4_Struct
#undef func_801F9BC8
#undef func_801F9BC8_Obj


struct func_801F9BC8_Vec { s32 a; s32 b; s32 c; };
extern struct func_801F9BC8_Vec D_80216EDC;
extern u8 D_80218BB0[];
#define func_801F9D68 func_801F9D68__decl3208
extern u8 func_801F9D68[];
extern void func_8013A28C(s32, struct func_801F9BC8_Vec);
struct func_801F9BC8_Obj {
    u8 pad0[0x24];
    struct func_801F3FFC_Node *unk24;
    u8 pad1[0x4];
    u32 unk2C;
    u8 pad2[0x2C];
    void *unk5C;
    u8 pad3[0x34];
    f32 unk94;
};
struct func_801F9BC8_Tgt { u8 pad[0x78]; s16 unk78; };

void func_801F9BC8(struct func_801F9BC8_Obj *arg0, s32 arg1) {
    struct func_801F9BC8_Tgt *sp64;
    f32 sp58[3];

    sp64 = arg0->unk5C;
    func_8013A334(sp58, arg1, sp64, 1);
    func_8011AAF4(D_80218BB0, 0x968, arg0, 0, 1, 3.0f, ((f32 *)D_801BBCD0->unk2C)[1], ((f32 *)D_801BBCD0->unk2C)[2] + 20.0f, ((f32 *)D_801BBCD0->unk2C)[3], 3.0f, sp58[0], arg0->unk24->unk2C->unk8 + 5.0f, sp58[2], 0.0f, 35.0f, -1, -1);
    arg0->unk2C |= 0x20;
    func_80010550(arg1, sp64);
    func_801F5294((void *)arg0);
    func_8012A94C(arg0, 0x100);
    if (arg0->unk24->unk2C->unk8 < arg0->unk94) {
        func_801F5210(arg0);
        func_80020744(0x13C);
        arg0->unk24->unk2C->unk8 = arg0->unk94;
        func_8013A28C(arg1, D_80216EDC);
        sp64->unk78 = 1;
        func_800058DC(arg0, (s32)func_801F9D68);
    }
}
#undef func_801F9D68

#define D_801BBBF0 D_801BBBF0__func_801F9D68
#define D_80218BEC D_80218BEC__func_801F9D68
#define func_801F5230_StructArg func_801F5230_StructArg__func_801F9D68
#define func_801F5230_StructB func_801F5230_StructB__func_801F9D68
#define func_801F5230_StructD func_801F5230_StructD__func_801F9D68
#define func_801F9EC4 func_801F9EC4__func_801F9D68
struct func_801F5230_StructD {
    u8 pad0[0x18E];
    s16 unk18E;
    s16 unk190;
    s16 unk192;
};
extern struct func_801F5230_StructD D_801BBBF0;
struct func_801F5230_StructB {
    u8 pad0[0x78];
    s16 unk78;
};
struct func_801F5230_StructArg {
    u8 pad0[0x5C];
    struct func_801F5230_StructB *unk5C;
    u8 pad1[0xAF - 0x60];
    u8 unkAF;
};


struct func_801F9D68_StructPos {
    f32 unk0;
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[0x2C];
    f32 unk3C;
    f32 unk40;
    f32 unk44;
};
struct func_801F9D68_StructNode {
    u8 pad0[0x2C];
    struct func_801F9D68_StructPos *unk2C;
};
struct func_801F9D68_StructGlobal {
    u8 pad0[0xE0];
    struct func_801F9D68_StructNode *unkE0;
    u8 padE4[4];
    struct func_801F9D68_StructNode *unkE8;
};
extern u8 D_80218BEC[];
extern void func_801F9EC4(void);
struct func_801F9D68_StructVec { f32 x, y, z; };

#undef D_801BBBF0
#undef func_801F5230_StructArg
#undef func_801F5230_StructB
#undef func_801F5230_StructD
#undef func_801F9EC4
#define D_801BBBF0 D_801BBBF0__func_801F9D68_5e50bb81
#define func_801F5230_StructArg func_801F5230_StructArg__func_801F9D68_5e50bb81
#define func_801F5230_StructB func_801F5230_StructB__func_801F9D68_5e50bb81
#define func_801F5230_StructD func_801F5230_StructD__func_801F9D68_5e50bb81
#define func_801F9D68_StructGlobal func_801F9D68_StructGlobal__func_801F9D68_5e50bb81
#define func_801F9D68_StructNode func_801F9D68_StructNode__func_801F9D68_5e50bb81
#define func_801F9D68_StructPos func_801F9D68_StructPos__func_801F9D68_5e50bb81
#define func_801F9D68_StructVec func_801F9D68_StructVec__func_801F9D68_5e50bb81
#define func_801F9EC4 func_801F9EC4__func_801F9D68_5e50bb81
struct func_801F5230_StructD {
    u8 pad0[0x18E];
    s16 unk18E;
    s16 unk190;
    s16 unk192;
};
extern struct func_801F5230_StructD D_801BBBF0;
struct func_801F5230_StructB {
    u8 pad0[0x78];
    s16 unk78;
};
struct func_801F5230_StructArg {
    u8 pad0[0x5C];
    struct func_801F5230_StructB *unk5C;
    u8 pad1[0xAF - 0x60];
    u8 unkAF;
};


struct func_801F9D68_StructPos {
    f32 unk0;
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[0x2C];
    f32 unk3C;
    f32 unk40;
    f32 unk44;
};
struct func_801F9D68_StructNode {
    u8 pad0[0x2C];
    struct func_801F9D68_StructPos *unk2C;
};
struct func_801F9D68_StructGlobal {
    u8 pad0[0xE0];
    struct func_801F9D68_StructNode *unkE0;
    u8 padE4[4];
    struct func_801F9D68_StructNode *unkE8;
};
extern void func_801F9EC4(void);
struct func_801F9D68_StructVec { f32 x, y, z; };

void func_801F9D68(struct func_801F5230_StructArg *arg0, s32 arg1) {
    struct func_801F5230_StructB *sp5C;
    struct func_801F9D68_StructVec sp50;

    sp5C = arg0->unk5C;
    D_8013A334((f32 *)&sp50, arg1, sp5C, 1);
    func_8011AAF4("/hdisk1/u/nu64/rz011_usa/main/game/source/enemy/wanderer.c", 0x986, arg0, 0, 1, 3.0f,
        ((struct func_801F9D68_StructGlobal *)&D_801BBBF0)->unkE0->unk2C->unk4,
        ((struct func_801F9D68_StructGlobal *)&D_801BBBF0)->unkE0->unk2C->unk8 + 20.0f,
        ((struct func_801F9D68_StructGlobal *)&D_801BBBF0)->unkE0->unk2C->unkC, 3.0f,
        ((struct func_801F9D68_StructGlobal *)&D_801BBBF0)->unkE8->unk2C->unk3C,
        ((struct func_801F9D68_StructGlobal *)&D_801BBBF0)->unkE8->unk2C->unk40,
        ((struct func_801F9D68_StructGlobal *)&D_801BBBF0)->unkE8->unk2C->unk44,
        0.0f, 35.0f, -1, -1);
    if (func_80010550(arg1, sp5C) != 0) {
        D_8021B028 = (f32)(func_8012C6B4(10) - 5);
        D_8021B02C = (f32)func_8012C6B4(20);
        D_8021B030 = (f32)(func_8012C6B4(10) - 5);
        sp5C->unk78 = 1;
        func_800058DC(arg0, (s32)func_801F9EC4);
    }
}
#undef D_801BBBF0
#undef func_801F5230_StructArg
#undef func_801F5230_StructB
#undef func_801F5230_StructD
#undef func_801F9D68_StructGlobal
#undef func_801F9D68_StructNode
#undef func_801F9D68_StructPos
#undef func_801F9D68_StructVec
#undef func_801F9EC4
#define D_801BBBF0 D_801BBBF0__func_801F9D68
#define func_801F5230_StructArg func_801F5230_StructArg__func_801F9D68
#define func_801F5230_StructB func_801F5230_StructB__func_801F9D68
#define func_801F5230_StructD func_801F5230_StructD__func_801F9D68
#define func_801F9EC4 func_801F9EC4__func_801F9D68
#undef D_801BBBF0
#undef D_80218BEC
#undef func_801F5230_StructArg
#undef func_801F5230_StructB
#undef func_801F5230_StructD
#undef func_801F9EC4

#define D_80218C28 D_80218C28__func_801F9EC4
#define func_80147768 func_80147768__func_801F9EC4
#define func_801F4620_Struct func_801F4620_Struct__func_801F9EC4
#define func_801F467C_Struct func_801F467C_Struct__func_801F9EC4
typedef struct func_801F4620_Struct {
    f32 unk0;
    f32 unk4;
    f32 unk8;
} func_801F4620_Struct;
#define VEC ((func_801F4620_Struct *)&D_8021B028)
extern void func_80147768(f32 *, f32);
typedef struct func_801F467C_Struct {
    f32 unk0;
    f32 unk4;
    f32 unk8;
} func_801F467C_Struct;

struct func_801F9EC4_Pos { u8 pad0[4]; f32 x; f32 y; f32 z; };
struct func_801F9EC4_Mid { u8 pad0[0x12]; s16 unk12; u8 pad1[0x18]; struct func_801F9EC4_Pos *unk2C; };
struct func_801F9EC4_Mid2 { u8 pad0[0x2C]; struct func_801F9EC4_Pos *unk2C; };
struct func_801F9EC4_Obj { u8 pad0[0x24]; struct func_801F9EC4_Mid2 *unk24; u8 pad1[0x34]; s32 unk5C; };
extern u8 D_80218C28[];

void func_801F9EC4(struct func_801F9EC4_Obj *arg0, s32 arg1) {
    s32 sp74;
    f32 sp68[3];
    func_801F467C_Struct sp5C;
    s8 sp5B;

    sp74 = arg0->unk5C;
    func_8013A334(sp68, arg1, (void *)sp74, 6);
    func_8012A94C(arg0, 0x100);
    if (D_8012CE9C(arg1, sp74, *(func_801F63E0_Struct3 *)&D_80216EE8, 0xA) == 0) {
        func_801FA2E0();
        func_801F467C(((struct func_801F9EC4_Mid *)arg0->unk24->unk2C)->unk12, &sp5C);
        func_80147768((f32 *)&sp5C, 22.0f);
        sp5B = D_8011AAF4(D_80218C28, 0x9A6, arg0, 0, 2, 1.0f,
            arg0->unk24->unk2C->x + sp5C.unk0 + VEC->unk0,
            arg0->unk24->unk2C->y + 5.0f + sp5C.unk4 + VEC->unk4,
            arg0->unk24->unk2C->z + sp5C.unk8 + VEC->unk8,
            1.0f, sp68[0], sp68[1], sp68[2], 3.0f, 35.0f, -1, -1);
        if (func_80010550(arg1, sp74) != 0 && sp5B == 0) {
            func_800058DC(arg0, (s32)func_801F5F5C);
        }
    }
}
#undef VEC
#undef D_80218C28
#undef func_80147768
#undef func_801F4620_Struct
#undef func_801F467C_Struct

#define func_801F3B5C func_801F3B5C__func_801FA074
void func_801F3B5C(s32 a0);

extern void func_80127014();

void func_801FA074(s32 arg0, s32 arg1) {
    func_801F3B5C(0);
    func_800058DC(arg0, func_80127014);
}
#undef func_801F3B5C


#undef func_801F46DC

#undef func_801F474C

/* Original readonly objects; named loads retain their original addresses. */







































/* hh-owned-pool func_801F4D30 80218C64 80218CA0 */
/* hh-owned-pool func_801F5104 80218CA0 80218CA4 */
/* hh-owned-pool func_801F59B8 80218CA8 80218CB0 */
/* hh-owned-pool func_801F5BAC 80218CB0 80218CC0 */
/* hh-owned-pool func_801F70E0 80218CC0 80218CC4 */
/* hh-owned-pool func_801F7928 80218CD0 80218CE0 */
/* hh-owned-pool func_801F7DB4 80218CE0 80218D08 */
/* hh-owned-pool func_801F83B8 80218D08 80218D0C */
/* hh-owned-pool func_801F9318 80218D24 80218D2C */
/* hh-owned-pool func_801F97E0 80218D2C 80218D34 */












static const unsigned char rodata_801F3B30_802187C0[] = {
    0xA5, 0xAC, 0xA5, 0xE9, 0xA5, 0xB9, 0xA5, 0xBB, 0xA5, 0xC3, 0xA5, 0xC8, 0x21, 0x21, 0x21, 0x21,
    0x21, 0x21, 0x21, 0x21, 0x21, 0x21, 0x21, 0x21, 0x21, 0x21, 0x21, 0x21, 0x21, 0x21, 0x21, 0x21,
    0x21, 0x21, 0x0A, 0x00, 0xA5, 0xA8, 0xA5, 0xEC, 0xA5, 0xD9, 0xA1, 0xBC, 0xA5, 0xBF, 0xA5, 0xA8,
    0xA5, 0xEA, 0xA5, 0xA2, 0xA4, 0xAB, 0xA4, 0xE9, 0xBD, 0xD0, 0xA4, 0xDE, 0xA4, 0xB7, 0xA4, 0xBF,
    0xA1, 0xA3, 0x0A, 0x00, 0x73, 0x65, 0x67, 0x6D, 0x65, 0x6E, 0x74, 0x20, 0x25, 0x64, 0x20, 0x6D,
    0x6F, 0x64, 0x65, 0x6C, 0x20, 0x25, 0x64, 0x0A, 0x00, 0x00, 0x00, 0x00, 0x4F, 0x4B, 0x21, 0x00,
    0x65, 0x6C, 0x65, 0x5F, 0x73, 0x74, 0x61, 0x72, 0x74, 0x20, 0x25, 0x66, 0x20, 0x65, 0x6C, 0x65,
    0x5F, 0x65, 0x6E, 0x64, 0x20, 0x25, 0x66, 0x20, 0x62, 0x72, 0x65, 0x61, 0x6B, 0x20, 0x25, 0x66,
    0x0A, 0x00, 0x00, 0x00, 0xA5, 0xA8, 0xA5, 0xEC, 0xA5, 0xD9, 0xA1, 0xBC, 0xA5, 0xBF, 0xA5, 0xA8,
    0xA5, 0xEA, 0xA5, 0xA2, 0xA4, 0xAB, 0xA4, 0xE9, 0xBD, 0xD0, 0xA4, 0xDE, 0xA4, 0xB7, 0xA4, 0xBF,
    0xA1, 0xA3, 0x0A, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
static const unsigned char rodata_801F3B30_802188AC[] = {
    0x2F, 0x68, 0x64, 0x69, 0x73, 0x6B, 0x31, 0x2F, 0x75, 0x2F, 0x6E, 0x75, 0x36, 0x34, 0x2F, 0x72,
    0x7A, 0x30, 0x31, 0x31, 0x5F, 0x75, 0x73, 0x61, 0x2F, 0x6D, 0x61, 0x69, 0x6E, 0x2F, 0x67, 0x61,
    0x6D, 0x65, 0x2F, 0x73, 0x6F, 0x75, 0x72, 0x63, 0x65, 0x2F, 0x65, 0x6E, 0x65, 0x6D, 0x79, 0x2F,
    0x77, 0x61, 0x6E, 0x64, 0x65, 0x72, 0x65, 0x72, 0x2E, 0x63, 0x00, 0x00, 0x2B, 0x2B, 0x2B, 0x2B,
    0x2B, 0x2B, 0x2B, 0x2B, 0x2B, 0x2B, 0x2B, 0x2B, 0x2B, 0x2B, 0x2B, 0x2B, 0x2B, 0x2B, 0x2B, 0x2B,
    0x2B, 0x2B, 0x2B, 0x2B, 0x2B, 0x2B, 0x2B, 0x2B, 0x2B, 0x2B, 0x2B, 0x2B, 0x68, 0x65, 0x69, 0x67,
    0x68, 0x74, 0x20, 0x69, 0x73, 0x20, 0x25, 0x64, 0x0A, 0x00, 0x00, 0x00, 0x21, 0x00, 0x00, 0x00,
    0x57, 0x6F, 0x77, 0x20, 0x21, 0x21, 0x20, 0x49, 0x27, 0x6D, 0x20, 0x67, 0x6F, 0x69, 0x6E, 0x67,
    0x20, 0x74, 0x6F, 0x20, 0x63, 0x68, 0x61, 0x6E, 0x67, 0x65, 0x20, 0x74, 0x68, 0x65, 0x20, 0x74,
    0x61, 0x72, 0x67, 0x65, 0x74, 0x20, 0x62, 0x65, 0x63, 0x61, 0x75, 0x73, 0x65, 0x20, 0x6F, 0x66,
    0x20, 0x74, 0x68, 0x65, 0x20, 0x77, 0x61, 0x6C, 0x6C, 0x2E, 0x0A, 0x00,
};
static const unsigned char rodata_801F3B30_80218A0C[] = {
    0x2F, 0x68, 0x64, 0x69, 0x73, 0x6B, 0x31, 0x2F, 0x75, 0x2F, 0x6E, 0x75, 0x36, 0x34, 0x2F, 0x72,
    0x7A, 0x30, 0x31, 0x31, 0x5F, 0x75, 0x73, 0x61, 0x2F, 0x6D, 0x61, 0x69, 0x6E, 0x2F, 0x67, 0x61,
    0x6D, 0x65, 0x2F, 0x73, 0x6F, 0x75, 0x72, 0x63, 0x65, 0x2F, 0x65, 0x6E, 0x65, 0x6D, 0x79, 0x2F,
    0x77, 0x61, 0x6E, 0x64, 0x65, 0x72, 0x65, 0x72, 0x2E, 0x63, 0x00, 0x00,
};
static const unsigned char rodata_801F3B30_80218A84[] = {
    0x2F, 0x68, 0x64, 0x69, 0x73, 0x6B, 0x31, 0x2F, 0x75, 0x2F, 0x6E, 0x75, 0x36, 0x34, 0x2F, 0x72,
    0x7A, 0x30, 0x31, 0x31, 0x5F, 0x75, 0x73, 0x61, 0x2F, 0x6D, 0x61, 0x69, 0x6E, 0x2F, 0x67, 0x61,
    0x6D, 0x65, 0x2F, 0x73, 0x6F, 0x75, 0x72, 0x63, 0x65, 0x2F, 0x65, 0x6E, 0x65, 0x6D, 0x79, 0x2F,
    0x77, 0x61, 0x6E, 0x64, 0x65, 0x72, 0x65, 0x72, 0x2E, 0x63, 0x00, 0x00,
};
static const unsigned char rodata_801F3B30_80218AFC[] = {
    0x2F, 0x68, 0x64, 0x69, 0x73, 0x6B, 0x31, 0x2F, 0x75, 0x2F, 0x6E, 0x75, 0x36, 0x34, 0x2F, 0x72,
    0x7A, 0x30, 0x31, 0x31, 0x5F, 0x75, 0x73, 0x61, 0x2F, 0x6D, 0x61, 0x69, 0x6E, 0x2F, 0x67, 0x61,
    0x6D, 0x65, 0x2F, 0x73, 0x6F, 0x75, 0x72, 0x63, 0x65, 0x2F, 0x65, 0x6E, 0x65, 0x6D, 0x79, 0x2F,
    0x77, 0x61, 0x6E, 0x64, 0x65, 0x72, 0x65, 0x72, 0x2E, 0x63, 0x00, 0x00,
};
static const unsigned char rodata_801F3B30_80218BB0[] = {
    0x2F, 0x68, 0x64, 0x69, 0x73, 0x6B, 0x31, 0x2F, 0x75, 0x2F, 0x6E, 0x75, 0x36, 0x34, 0x2F, 0x72,
    0x7A, 0x30, 0x31, 0x31, 0x5F, 0x75, 0x73, 0x61, 0x2F, 0x6D, 0x61, 0x69, 0x6E, 0x2F, 0x67, 0x61,
    0x6D, 0x65, 0x2F, 0x73, 0x6F, 0x75, 0x72, 0x63, 0x65, 0x2F, 0x65, 0x6E, 0x65, 0x6D, 0x79, 0x2F,
    0x77, 0x61, 0x6E, 0x64, 0x65, 0x72, 0x65, 0x72, 0x2E, 0x63, 0x00, 0x00,
};
static const unsigned char rodata_801F3B30_80218C28[] = {
    0x2F, 0x68, 0x64, 0x69, 0x73, 0x6B, 0x31, 0x2F, 0x75, 0x2F, 0x6E, 0x75, 0x36, 0x34, 0x2F, 0x72,
    0x7A, 0x30, 0x31, 0x31, 0x5F, 0x75, 0x73, 0x61, 0x2F, 0x6D, 0x61, 0x69, 0x6E, 0x2F, 0x67, 0x61,
    0x6D, 0x65, 0x2F, 0x73, 0x6F, 0x75, 0x72, 0x63, 0x65, 0x2F, 0x65, 0x6E, 0x65, 0x6D, 0x79, 0x2F,
    0x77, 0x61, 0x6E, 0x64, 0x65, 0x72, 0x65, 0x72, 0x2E, 0x63, 0x00, 0x00,
};
/* hh-placed-function func_801F3C90 */
/* hh-placed-function func_801F73F0 */
/* hh-placed-function func_801F7638 */
/* hh-placed-function func_801F7928 */
/* hh-placed-function func_801F83B8 */
/* hh-placed-function func_801F8AE8 */
/* hh-placed-function func_801F8F3C */
/* hh-placed-function func_801F9104 */
/* hh-placed-function func_801F91C0 */
/* hh-placed-function func_801F9664 */
/* hh-placed-function func_801F9A8C */
/* hh-placed-function func_801F9D68 */
/* hh-rodata-layout [1408,[[0,176,60],[60,1292,4],[64,408,180],[244,1356,12],[256,648,60],[316,768,60],[376,888,120],[496,1068,60],[556,0,176],[732,236,172],[904,588,60],[964,708,60],[1024,828,60],[1084,1008,60],[1144,1128,164],[1312,1296,60],[1372,1368,36]]] */

#undef func_801F5630
