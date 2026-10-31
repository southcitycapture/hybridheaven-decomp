#include "common.h"

extern f32 D_801CD094[];
extern f32 D_801CF3D4;
extern f32 func_8001EAD0(s16);
extern f64 D_801CF3B8;
extern f64 D_801CF3E0;
extern s16 func_8012C6B4(s32);
extern s32 D_801CD0CC;
extern s32 D_801CF2A0;
extern s32 D_801CFDB8[];
extern s32 func_80001060(s32);
extern s32 func_80006214(s32);
extern s32 func_80126A0C(void *, u16, s32);
extern s32 func_801C5AD4(u8);
extern s8 D_801CFDA6[];
extern u16 **D_80171CEC[];
extern u16 D_801CD0C0[];
extern u16 D_801CFDAC[];
extern u16 func_80152980(u8, u8);
extern u32 D_80171CF0[];
extern u8 *D_801CFD90[];
extern u8 D_80089474[];
extern u8 D_801CCBB0[];
extern u8 D_801CCBF8[];
extern u8 D_801CCC40[];
extern u8 D_801CCCA8[];
extern u8 D_801CCD10[];
extern u8 D_801CD0C4[];
extern u8 D_801CD0E4[];
extern u8 D_801CD100[];
extern u8 D_801CD13C[];
extern u8 D_801CD150[];
extern u8 D_801CD164;
extern u8 D_801CFD70;
extern u8 D_801CFDA8[];
extern u8 D_801CFDB0[];
extern u8 D_801CFDC0;
extern u8 func_80152890(u8);
#define func_801C8568 func_801C8568__decl
extern u8 func_801C8568[];
#define func_801C9328 func_801C9328__decl
extern u8 func_801C9328[];
extern void *D_801CFD78[];
extern void *D_801CFDA0;
extern void *func_80005670(s32, void *);
extern void func_80005700(void *);
extern void func_800058DC(void *, void *, void *, void *);
extern void func_80005E44(s32, void *);
extern void func_8001B204(s32, s32, s32, void *);
extern void func_800208C4(s32);
extern void func_80116E80(s32);
extern void func_8012C89C(s32, s32, s32, s32);
extern void func_8012FE50(s32, s32, s32, s32, s32);
extern void func_8013B268(void *, u16, s32, u8, void (*)(), s32);
extern void func_80145348(s32, s32, s32);
extern void func_80146208(s32, s16 *, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
extern void func_80147250(void *, s32, s32, s32, s32);
extern void func_801472C0(void *, s32, s32, s32, s32);
extern void func_80147370(void *, s32, s32, s32, s32);
extern void func_8014753C(void *, s32);
extern void func_80147734(void *arg0, void *arg1, void *arg2);
extern void func_80147768(f32 *arg0, s32 arg1);
extern void func_801477C4(void *arg0, f32 arg1);
extern void func_801C5D64(void *arg0, s32 arg1);
extern void func_801C5F04(void *arg0);
#define func_801C63CC func_801C63CC__decl
extern void func_801C63CC(s32);
extern void func_801C6C6C();
extern void func_801C70E8();
extern void func_801C7D5C();
extern void func_801C8328();



s32 func_801C5AB0(void) {
    if (D_801CD0CC != 0) {
        return 1;
    }
    return 0;
}


s32 func_801C5AD4(u8 arg0) {
    u8 o = 1 - arg0;
    if (D_801CFDB8[o] == 1 && D_801CFDAC[o] == D_801CFDAC[arg0]) {
        return 1;
    }
    return 0;
}



s32 func_801C5B38(void) {
    if (D_801CFDB8[0] == 1 && D_801CFDB8[1] == 1) {
        return 1;
    }
    return 0;
}


void func_801C5B70(u8 *arg0, u16 arg1, u16 arg2) {
    u32 *temp_v0;

    temp_v0 = &D_80171CF0[arg1];
    *(u16 *)(*(u8 **)(arg0 + 0x30) + 0x18) = *(u16 *)*(u8 **)temp_v0[-1];
    *(u32 *)(*(u8 **)(arg0 + 0x30) + 0x1C) = *(u32 *)(*(u8 **)(temp_v0[-1] + 4) + arg2 * 4);
}


void func_801C5BC4(u8 *arg0, u16 arg1, u16 arg2) {
    u32 *temp_v0;

    temp_v0 = &D_80171CF0[arg1];
    *(u16 *)(*(u8 **)(arg0 + 0x30) + 0x20) = *(u16 *)*(u8 **)temp_v0[-1];
    *(u32 *)(*(u8 **)(arg0 + 0x30) + 0x24) = *(u32 *)(*(u8 **)(temp_v0[-1] + 4) + arg2 * 4);
}



void func_801C5C18(void)
{
  s32 var_s0;
  s32 *var_s1;
 do { var_s0 = 0; var_s1 = &D_801CF2A0; do { func_8001B204(var_s0 & 0xFF, 0, 0, var_s1); var_s0 = (var_s0 + 1) & 0xFF; } while (var_s0 < 0xA); } while (0);
}


typedef struct func_801C5C70_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801C5C70_Struct;


void func_801C5C70(void *arg0, func_801C5C70_Struct *arg1, f32 arg2) {
    func_801C5C70_Struct sp1C;

    sp1C = *arg1;
    func_801477C4(&sp1C, arg2);
    func_80147734(arg0, &sp1C, arg0);
}



void func_801C5CC8(f32 *arg0, f32 *arg1, u8 *arg2) {
    f32 sp24;
    f32 sp20;
    f32 sp1C;

    sp1C = arg1[0] - arg0[0];
    sp20 = arg1[1] - arg0[1];
    sp24 = arg1[2] - arg0[2];
    func_80147768(&sp1C, 0x42FA0000);
    arg2[8] = (s32) sp1C;
    arg2[9] = (s32) sp20;
    arg2[10] = (s32) sp24;
}

/* hh-block asm/nonmatchings/file024/801C5AB0/_mrg_keep_text_func_801C5D64.s {"functions":["func_801C5D64"],"rodata":[]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file024/801C5AB0/_mrg_keep_text_func_801C5D64.s")

typedef struct func_801C5DAC_Struct {
    u8 pad[0x10];
    struct func_801C5DAC_Struct *unk10;
} func_801C5DAC_Struct;

void func_801C5DAC(u8 *arg0) {
    u8 i;
    u8 j;
    func_801C5DAC_Struct *p;

    p = (func_801C5DAC_Struct *)D_801CFD90[arg0[0x90]];
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            if ((i == 0 && D_801CFDA6[arg0[0x90]] == 1) || (i == 1 && D_801CFDA6[arg0[0x90]] == 2)) {
                func_80147250(p, 0xFF, 0xCF, 0xCF, 0xFF);
                func_801472C0(p, 0xFF, 0x20, 0x20, 0xFF);
            } else {
                func_80147250(p, 0x60, 0x30, 0x30, 0xFF);
                func_801472C0(p, 0x40, 0, 0, 0xFF);
            }
            p = p->unk10;
        }
    }
}


typedef struct func_801C5F04_StructNode {
    u8 pad[0x10];
    struct func_801C5F04_StructNode *next;
    u8 pad14[0xE];
    u8 active;
} func_801C5F04_StructNode;

extern func_801C5F04_StructNode *D_801CFD88[];
extern func_801C5F04_StructNode *D_801CFD98[];
extern u8 D_801CD03C[][3];
extern u8 D_801CD050[][3];

void func_801C5F04(void *arg0) {
    u8 i;
    u8 id;
    func_801C5F04_StructNode *node;

    node = D_801CFD88[((u8 *)arg0)[0x90]];
    func_80147250(node, 0x20, 0xA0, 0, 0x70);
    func_801472C0(node, 0x20, 0xA0, 0, 0xFF);
    node = node->next;
    func_80147250(node, 0x40, 0xA0, 0, 0xFF);
    func_801472C0(node, 0x40, 0xA0, 0, 0xFF);
    node = node->next;
    for (i = 1; i < 5; i++) {
        if (i == D_801CFDA6[((u8 *)arg0)[0x90]]) {
            node->active = 1;
            if (i == 3 && D_801CFDB8[((u8 *)arg0)[0x90]] != 0) {
                func_80147250(node, D_801CD03C[5][0], D_801CD03C[5][1], D_801CD03C[5][2], 0x70);
                func_801472C0(node, D_801CD03C[5][0], D_801CD03C[5][1], D_801CD03C[5][2], 0xFF);
            } else if (i == 3 && func_801C5AD4(((u8 *)arg0)[0x90])) {
                func_80147250(node, 0x38, 0x38, 0x38, 0xC0);
                func_801472C0(node, 0x38, 0x38, 0x38, 0xFF);
            } else {
                func_80147250(node, D_801CD03C[i][0], D_801CD03C[i][1], D_801CD03C[i][2], 0x70);
                func_801472C0(node, D_801CD03C[i][0], D_801CD03C[i][1], D_801CD03C[i][2], 0xFF);
            }
        } else {
            node->active = 0;
        }
        id = ((u8 *)arg0)[0x90];
        node = node->next;
        if (i == D_801CFDA6[id]) {
            if (i == 3 && D_801CFDB8[id] != 0) {
                func_80147250(node, D_801CD03C[5][0], D_801CD03C[5][1], D_801CD03C[5][2], 0xFF);
                func_801472C0(node, 0, 0, 0, 0xFF);
            } else if (i == 3 && func_801C5AD4(id)) {
                func_80147250(node, 0x50, 0x50, 0x50, 0xFF);
                func_801472C0(node, 0, 0, 0, 0xFF);
            } else {
                func_80147250(node, D_801CD03C[i][0], D_801CD03C[i][1], D_801CD03C[i][2], 0xFF);
                func_801472C0(node, D_801CD050[i][0], D_801CD050[i][1], D_801CD050[i][2], 0xFF);
            }
        } else {
            func_80147250(node, 0x50, 0x50, 0x50, 0xFF);
            func_801472C0(node, 0, 0, 0, 0xFF);
        }
        node = node->next;
    }
    if (func_801C5AD4(((u8 *)arg0)[0x90])) {
        id = ((u8 *)arg0)[0x90];
        if (D_801CFDA6[id] == 3) {
            func_80147250(D_801CFD98[id], 0, 0, 0, 0x80);
            func_801472C0(D_801CFD98[((u8 *)arg0)[0x90]], 0, 0, 0, 0xFF);
            return;
        }
        func_80147250(D_801CFD98[id], 0x50, 0x50, 0x50, 0xFF);
        func_801472C0(D_801CFD98[((u8 *)arg0)[0x90]], 0x40, 0x40, 0x40, 0xFF);
        return;
    }
    func_80147250(D_801CFD98[((u8 *)arg0)[0x90]], 0xFF, 0xFF, 0xFF, 0xFF);
    func_801472C0(D_801CFD98[((u8 *)arg0)[0x90]], 0xB0, 0xB0, 0xB0, 0xFF);
}

#undef func_801C63CC
#define D_801CFD80 D_801CFD80__func_801C63CC
#define D_801CFD88 D_801CFD88__func_801C63CC
#define func_8001EB64 func_8001EB64__func_801C63CC
#define func_801C5F04_StructNode func_801C5F04_StructNode__func_801C63CC
#define func_801C659C_Obj func_801C659C_Obj__func_801C63CC
#define func_801C659C_Obj30 func_801C659C_Obj30__func_801C63CC
#define ZQ(a, l) a##_##l
#define ZP(a, l) ZQ(a, l)
#define zA_325 func_801C9328_ctx325
typedef struct func_801C5F04_StructNode {
    u8 pad[0x10];
    struct func_801C5F04_StructNode *next;
    u8 pad14[0xE];
    u8 active;
} func_801C5F04_StructNode;
extern func_801C5F04_StructNode *D_801CFD88[];
typedef struct func_801C659C_Obj30 {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    s16 unk10;
    u8 pad12[6];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    s32 unk24;
    u8 pad28[8];
    s32 unk30;
} func_801C659C_Obj30;
typedef struct func_801C659C_Obj {
    u8 pad[0x30];
    func_801C659C_Obj30 *unk30;
} func_801C659C_Obj;
extern void (*D_801CCB04)(void *, s32, u8);

#undef ZP
#undef ZQ

typedef struct func_801C63CC_StructB {
    u8 pad0[0x4B];
    u8 unk4B;
} func_801C63CC_StructB;

typedef struct func_801C63CC_StructA {
    u8 pad0[0x10];
    struct func_801C63CC_StructA *unk10;
    u8 pad14[0x1C];
    func_801C63CC_StructB *unk30;
} func_801C63CC_StructA;

typedef struct func_801C63CC_StructC {
    u8 pad0[0x10];
    s16 unk10;
} func_801C63CC_StructC;

typedef struct func_801C63CC_StructD {
    u8 pad0[0x30];
    func_801C63CC_StructC *unk30;
} func_801C63CC_StructD;

extern struct func_801C659C_Obj *D_801CFD80[];
extern f32 func_8001EB64(s16, s32);

void func_801C63CC(u8 arg0) {
    s32 a1;
    s32 v0;
    u8 a0;
    u8 i;
    func_801C63CC_StructA *p;

    a1 = ((func_801C63CC_StructD *)D_801CFD80[arg0])->unk30->unk10;
    if (a1 & 0x1000) {
        a1 = (s16)((a1 & 0x1FFF) - 0x2000);
    } else {
        a1 = (s16)(a1 & 0x1FFF);
    }
    v0 = (a1 < 0) ? -a1 : a1;
    if (v0 < 0x800) {
        a0 = 0;
    } else {
        a0 = (u32)(-func_8001EB64(a1, a1) * 255.0f);
    }
    p = (func_801C63CC_StructA *)D_801CFD88[arg0];
    i = 0;
    do {
        p = p->unk10;
        i++;
        p->unk30->unk4B = a0;
        p = p->unk10;
    } while (i < 5);
    p = (func_801C63CC_StructA *)D_801CFD90[arg0];
    i = 0;
    do {
        p->unk30->unk4B = a0;
        i++;
        p = p->unk10;
    } while (i < 4);
}
#undef zA_325
#undef D_801CFD80
#undef D_801CFD88
#undef func_8001EB64
#undef func_801C5F04_StructNode
#undef func_801C659C_Obj
#undef func_801C659C_Obj30
#define func_801C63CC func_801C63CC__decl



void func_801C655C(void) {
    s32 var_s0;

    var_s0 = 0;
    do {
        func_801C63CC(var_s0 & 0xFF);
        var_s0 = (var_s0 + 1) & 0xFF;
    } while (var_s0 < 2);
}


typedef struct func_801C659C_Struct16 {
    s32 unk0;
    s32 unk4;
    s16 unk8;
    s16 unkA;
    s32 unkC;
} func_801C659C_Struct16;

typedef struct func_801C659C_Copy16 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
} func_801C659C_Copy16;

typedef struct func_801C659C_Arg20 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
} func_801C659C_Arg20;

typedef struct func_801C659C_Inner {
    s16 unk0;
    s16 unk2;
    s16 unk4;
    s16 unk6;
    func_801C659C_Copy16 unk8;
    u8 pad18[4];
    f32 unk1C;
    u8 pad20[8];
    f32 unk28;
    u8 pad2C[4];
    f32 unk30;
    f32 unk34;
    f32 unk38;
    f32 unk3C;
    f32 unk40;
    f32 unk44;
} func_801C659C_Inner;

typedef struct func_801C659C_Mid {
    u8 pad[0x2C];
    func_801C659C_Inner *unk2C;
} func_801C659C_Mid;

typedef struct func_801C659C_Glob {
    u8 pad[0x3C];
    s32 unk3C;
    u8 pad40[0x28C - 0x40];
    func_801C659C_Mid *unk28C[2];
} func_801C659C_Glob;

typedef struct func_801C659C_Obj30 {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    s16 unk10;
    u8 pad12[6];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    s32 unk24;
    u8 pad28[8];
    s32 unk30;
} func_801C659C_Obj30;

typedef struct func_801C659C_Obj {
    u8 pad[0x30];
    func_801C659C_Obj30 *unk30;
} func_801C659C_Obj;

typedef struct func_801C659C_Ret {
    u8 pad[0x90];
    u8 unk90;
} func_801C659C_Ret;

extern func_801C659C_Ret *func_8012C4D0(s32, func_801C659C_Arg20, s32);
extern func_801C659C_Struct16 D_80164F30;
extern func_801C659C_Struct16 D_80164F40;
extern func_801C659C_Glob D_801BBBF0;
extern func_801C659C_Copy16 D_801CCF28[];
extern func_801C659C_Copy16 D_801CCF48[];
extern func_801C659C_Arg20 D_801CD114;

void func_801C659C(s32 arg0, func_801C659C_Obj **arg1) {
    func_801C659C_Obj **p;
    func_801C659C_Struct16 sp7C;
    func_801C659C_Struct16 sp6C;
    s16 sp6A;
    u8 i;
    u8 idx;
    s8 v;
    func_801C659C_Ret *r;
    extern void func_800058DC();

    sp7C = D_80164F30;
    sp6C = D_80164F40;
    func_800208C4(0x5C);
    for (i = 0; i < 2; i++) {
        D_801CFDB0[i] = func_80152890(i);
        D_801CFDA8[i] = 0;
        D_801CFDB8[i] = 0;
    }
    func_80116E80(0x10);
    func_80116E80(0x2000);
    func_80116E80(0x4000);
    func_80116E80(0x200);
    sp6C.unk4 = -3;
    sp6C.unk8 = 0x2000;
    func_80005E44(arg0, &sp6C);
    func_80006214(arg0);
    arg1[0]->unk30->unk30 = (s32)D_801CCBB0;
    sp6C.unk4 = -3;
    sp6C.unk8 = 0x4000;
    func_80005E44(arg0, &sp6C);
    func_80006214(arg0);
    arg1[1]->unk30->unk30 = (s32)D_801CCBF8;
    for (i = 0; i < 2; i++) {
        v = i * 2 - 1;
        D_801BBBF0.unk28C[(s32)i]->unk2C->unk0 = (f64)(v * 70 + 160) - 60.0;
        D_801BBBF0.unk28C[(s32)i]->unk2C->unk2 = 20;
        D_801BBBF0.unk28C[(s32)i]->unk2C->unk4 = D_801BBBF0.unk28C[(s32)i]->unk2C->unk0 + 120;
        D_801BBBF0.unk28C[(s32)i]->unk2C->unk6 = D_801BBBF0.unk28C[(s32)i]->unk2C->unk2 + 100;
        D_801BBBF0.unk28C[(s32)i]->unk2C->unk30 = v * 25 + 100;
        D_801BBBF0.unk28C[(s32)i]->unk2C->unk34 = 6.0f;
        D_801BBBF0.unk28C[(s32)i]->unk2C->unk38 = 25.0f;
        D_801BBBF0.unk28C[(s32)i]->unk2C->unk3C = 100.0f;
        D_801BBBF0.unk28C[(s32)i]->unk2C->unk40 = 16.0f;
        D_801BBBF0.unk28C[(s32)i]->unk2C->unk44 = 0.0f;
        D_801BBBF0.unk28C[(s32)i]->unk2C->unk1C = 40.0f;
        D_801BBBF0.unk28C[(s32)i]->unk2C->unk28 = 50.0f;
        if (func_80001060(i) != 0) {
            D_801BBBF0.unk28C[(s32)i]->unk2C->unk0 *= 2;
            D_801BBBF0.unk28C[(s32)i]->unk2C->unk2 *= 2;
            D_801BBBF0.unk28C[(s32)i]->unk2C->unk4 *= 2;
            D_801BBBF0.unk28C[(s32)i]->unk2C->unk6 *= 2;
            D_801BBBF0.unk28C[(s32)i]->unk2C->unk8 = D_801CCF48[i];
        } else {
            D_801BBBF0.unk28C[(s32)i]->unk2C->unk8 = D_801CCF28[i];
        }
    }
    for (i = 0; i < 2; i++) {
        D_801CFD78[i] = func_80005670(arg0, D_801CD100);
        if (D_801CFD78[i] != NULL) {
            ((func_801C659C_Ret *)D_801CFD78[i])->unk90 = i;
        }
    }
    for (i = 0; i < 2; i++) {
        r = func_8012C4D0(D_801BBBF0.unk3C, D_801CD114, 3);
        if (r != NULL) {
            r->unk90 = i;
        }
    }
    for (i = 0; i < 4; i++) {
        (&D_801CFD70)[i] = 0;
    }
    func_80005670(arg0, D_801CD150);
    func_80146208(arg0, &sp6A, 0x66, 0x90, 0x19, 0x20, 0x20, 0, 0, 0xFF, 0x229, 0xC);
    func_80145348(arg0, 1, 0x1B);
    func_80146208(arg0, &sp6A, 0x66, 0x7A, 0x28, 0x10, 0x10, 0, 0, 0xFF, 0x229, 0xA);
    func_80145348(arg0, 1, 3);
    func_80146208(arg0, &sp6A, 0x66, 0xB6, 0x28, 0x10, 0x10, 0, 0, 0xFF, 0x229, 0xB);
    func_80145348(arg0, 1, 0xD);
    sp6C.unk8 = 0x10;
    func_80005E44(arg0, &sp6C);
    idx = func_80006214(arg0) - 1;
    func_8012C89C(arg0, idx, 0x229, 2);
    arg1[idx]->unk30->unk24 = 0x101;
    arg1[idx]->unk30->unk30 = (s32)D_801CCD10 | 0x40000000;
    arg1[idx]->unk30->unk4 = 160.0f;
    arg1[idx]->unk30->unk8 = 120.0f;
    arg1[idx]->unk30->unkC = -20.0f;
    arg1[idx]->unk30->unk10 = 0x1000;
    arg1[idx]->unk30->unk18 = 3.0f;
    arg1[idx]->unk30->unk1C = 3.0f;
    arg1[idx]->unk30->unk20 = 3.0f;
    func_80147250(arg1[idx], 0, 0, 0, 0);
    func_800058DC(arg0, func_801C6C6C);
}

#define D_800058DC D_800058DC__func_801C6C6C
extern void D_800058DC(void *, void *);

extern void func_80152BC8(u8, s8);
extern void func_80152CC8(u8, u16);
#define func_801C6D94 func_801C6D94__decl572
extern void func_801C6D94(void);
extern s8 D_801CD0C8[];
extern func_801C659C_Obj *D_801CFD80[];

void func_801C6C6C(void *arg0, s32 arg1) {
    u8 i;
    s32 v;

    if (func_801C5B38() != 0) {
        i = 0;
        do {
            D_801CFD80[i]->unk30->unk10 += 0x155;
            v = D_801CFD80[i]->unk30->unk10;
            if (v > 0x2000) {
                D_801CFD80[i]->unk30->unk10 = 0x2000;
                i = 0;
                do {
                    func_80152CC8(i, D_801CFDAC[i]);
                    func_80152BC8(i, D_801CD0C8[i]);
                    i++;
                } while (i < 2);
                D_800058DC(arg0, func_801C6D94);
            }
            i++;
        } while (i < 2);
        func_801C655C();
        func_801C5C18();
    }
}
#undef func_801C6D94
#undef D_800058DC

#define D_800058DC D_800058DC__func_801C6D94
#define D_80164F40 D_80164F40__func_801C6D94
#define D_801CCE00 D_801CCE00__func_801C6D94
#define D_801CD0D0 D_801CD0D0__func_801C6D94
#define D_801CF2E4 D_801CF2E4__func_801C6D94
#define func_8014646C func_8014646C__func_801C6D94
#define func_801C659C_Ret func_801C659C_Ret__func_801C6D94
#define func_801C659C_Struct16 func_801C659C_Struct16__func_801C6D94
#define func_801C70E8 func_801C70E8__func_801C6D94
extern void D_800058DC(void *, void *);
typedef struct func_801C659C_Struct16 {
    s32 unk0;
    s32 unk4;
    s16 unk8;
    s16 unkA;
    s32 unkC;
} func_801C659C_Struct16;
extern func_801C659C_Struct16 D_80164F40;
extern u8 D_801CD0D0;
typedef struct func_801C659C_Ret {
    u8 pad[0x90];
    u8 unk90;
} func_801C659C_Ret;
void func_801C70E8(void *arg0, s32 arg1);


typedef struct func_801C6D94_Struct30 {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    s16 unk10;
    u8 pad12[2];
    s16 unk14;
    u8 pad16[2];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    s32 unk24;
    u8 pad28[8];
    s32 unk30;
    f32 unk34;
    f32 unk38;
} func_801C6D94_Struct30;
typedef struct func_801C6D94_Struct {
    u8 pad[0x30];
    func_801C6D94_Struct30 *unk30;
} func_801C6D94_Struct;
extern void func_8014646C(s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
extern u8 D_801CCE00[];
extern u8 D_801CF2E4[];

void func_801C6D94(s32 arg0, func_801C6D94_Struct **arg1) {
    func_801C659C_Struct16 spA0;
    register u8 i;
    u8 temp_s4;
    u8 k;
#define temp_fs0 0.2f

    spA0 = D_80164F40;
    for (i = 0; i <= 1; i++) {
        k = i;
        if (D_801CFD78[(u32)k] == 0) {
            continue;
        }
        func_80005700(D_801CFD78[(u32)k]);
    }
    func_8001B204(0, 0x7D0, 0x7C, D_801CF2E4);
    func_8014646C(arg0, 0x2004, 0x80, 0x8D, 0x20, 0x20, 0x20, 0x20, 0, 0, 0, 0x229, 0xD, 0x229, 0xE);
    D_801CFDA0 = arg1[func_80006214(arg0) - 1];
    ((func_801C6D94_Struct *)D_801CFDA0)->unk30->unk34 = 2.0f;
    ((func_801C6D94_Struct *)D_801CFDA0)->unk30->unk38 = 2.0f;
    temp_s4 = func_80006214(arg0);
    for (i = k = 0; i < 2; i++) {
        spA0.unk8 = 0x10;
        func_80005E44(arg0, &spA0);
        func_80006214(arg0);
        func_8012C89C(arg0, temp_s4 + i, 0x229, 3);
#define p (&arg1[temp_s4 + i])
        (*p)->unk30->unk24 |= 0x300;
        (*p)->unk30->unk30 = (s32)D_801CCE00 | 0x40000000;
        (*p)->unk30->unk4 = (f32)(0xCA - ((i << 1) * 0x2A));
        (*p)->unk30->unk8 = 173.0f;
        (*p)->unk30->unkC = 0.0f;
        (*p)->unk30->unk10 = 0x1000;
        (*p)->unk30->unk14 = (i << 0xC) & 0x1FFF;
        (*p)->unk30->unk18 = temp_fs0;
        (*p)->unk30->unk1C = temp_fs0;
        (*p)->unk30->unk20 = temp_fs0;
        func_80147250(*p, 0xFF, 0xCF, 0xCF, 0xFF);
        func_801472C0(*p, 0xFF, 0x20, 0x20, 0xFF);
    }
    D_801CFD90[0] = (u8 *)arg1[temp_s4];
    ((func_801C659C_Ret *)arg0)->unk90 = 1 - D_801CD0D0;
    D_800058DC((void *)arg0, func_801C70E8);
}
#undef p
#undef temp_fs0
#undef D_800058DC
#undef D_80164F40
#undef D_801CCE00
#undef D_801CD0D0
#undef D_801CF2E4
#undef func_8014646C
#undef func_801C659C_Ret
#undef func_801C659C_Struct16
#undef func_801C70E8

#define func_801C7264 func_801C7264__func_801C70E8
extern void func_801C7264(s32 arg0, s32 arg1);

extern u8 D_800892B0[];
extern u8 D_801CF2F4[];
extern void (*D_801CCB04)(void *, s32, u8);
extern void func_80020718(s32);
extern void func_80020744(s32);
extern void func_801C72F8();
extern void D_800058DC(void *, void *);
extern void D_8001B204(s32, s32, s32, void *, s32);

void func_801C70E8(void *arg0, s32 arg1) {
    u16 temp_a1;
    u16 temp_a3;
    s32 var_a2;

    temp_a1 = *(u16 *)&D_800892B0[0x1D0] | *(u16 *)&D_800892B0[0x1F0];
    temp_a3 = *(u16 *)&D_800892B0[0x1C8] | *(u16 *)&D_800892B0[0x1E8];
    var_a2 = 0;
    if (temp_a1 & 0x100) {
        if (D_801CFDC0 == 7) {
            D_801CFDC0 = 0;
        } else {
            D_801CFDC0 += 1;
        }
        var_a2 = 1;
    } else if (temp_a1 & 0x200) {
        if (D_801CFDC0 == 0) {
            D_801CFDC0 = 7;
        } else {
            D_801CFDC0 -= 1;
        }
        var_a2 = 1;
    } else if (temp_a3 & 0x8000) {
        func_80020744(0x104);
        *(s16 *)((u8 *)arg0 + 0x3C) = 0x14;
        func_80020718(7);
        D_800058DC(arg0, func_801C72F8);
        return;
    }
    if (var_a2 != 0) {
        func_80020744(0x300);
        D_801CCB04(D_801CFDA0, 0x229, D_801CD0E4[D_801CFDC0]);
        D_800058DC(arg0, func_801C7264);
    }
    D_8001B204(1, 0x7D0, 0xCD, D_801CF2F4, D_801CFDC0 + 1);
}
#undef func_801C7264


typedef struct func_801C7264_StructInner {
    u8 pad[0xB];
    u8 unkB;
} func_801C7264_StructInner;

typedef struct func_801C7264_Struct {
    u8 pad[0x30];
    func_801C7264_StructInner *unk30;
} func_801C7264_Struct;

extern void (*D_801CCB00)(void *, s32, u8, void **);

void func_801C7264(s32 arg0, s32 arg1) {
    void func_800058DC();
    s16 temp_v0;
    func_801C7264_StructInner *temp_v1;

    temp_v1 = ((func_801C7264_Struct *) D_801CFDA0)->unk30;
    temp_v0 = temp_v1->unkB;
    temp_v0 += 0x14;
    if (temp_v0 >= 0x100) {
        temp_v1->unkB = 0;
        D_801CCB00(D_801CFDA0, 0x229, D_801CD0E4[D_801CFDC0], &D_801CFDA0);
        func_800058DC(arg0, func_801C70E8);
        return;
    }
    temp_v1->unkB = (u8) temp_v0;
}

extern u16 D_801CD0D4[];
typedef struct func_801C72F8_Struct { u8 pad[0x3C]; u16 unk3C; } func_801C72F8_Struct;
void func_801C72F8(func_801C72F8_Struct *arg0, s32 arg1) {
    if ((s32)arg0->unk3C > 0) {
        arg0->unk3C = arg0->unk3C - 1;
        return;
    }
    ((u16 *)&D_801BBBF0)[2] = D_801CD0D4[D_801CFDC0];
    func_8012FE50(0x1B, ((u16 *)&D_801BBBF0)[2], 1, 1, 0);
}

/* hh-block asm/nonmatchings/file024/801C5AB0/_mrg_keep_tail_b9f662b013c34ece.s {"functions":["func_801C7364"],"rodata":[],"rodata_bytes":[2149381024,7019968,16]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file024/801C5AB0/_mrg_keep_tail_b9f662b013c34ece.s")


extern s32 func_80152C68(u8, void *);
extern f32 D_801CCF68[][3];
extern u8 D_801CF300[];

void func_801C7C64(func_801C659C_Ret *arg0, s32 arg1) {
    s32 var_s0;
    func_801C659C_Obj30 *temp_v0;
    s32 result;
    s16 val;

    temp_v0 = D_801CFD80[arg0->unk90]->unk30;
    temp_v0->unk10 -= 0x155;
    var_s0 = arg0->unk90;
    temp_v0 = D_801CFD80[var_s0]->unk30;
    val = temp_v0->unk10;
    if (val < -0x1000) {
        temp_v0->unk10 = 0x1000;
        D_8001B204(var_s0 = arg0->unk90, (s16)((s16)D_801CCF68[var_s0][0] + 0x3E8), 0x82, D_801CF300, func_80152C68(arg0->unk90, D_801CFD80));
        D_800058DC(arg0, func_801C7D5C);
        var_s0 = arg0->unk90;
    }
    func_801C63CC(var_s0 & 0xFF);
}

#define D_800692B0 D_800692B0__func_801C7D5C
#define D_801CD0D0 D_801CD0D0__func_801C7D5C
#define D_801CF30C D_801CF30C__func_801C7D5C
#define D_801CF314 D_801CF314__func_801C7D5C
#define func_801C813C func_801C813C__func_801C7D5C
#define func_801C813C_Struct func_801C813C_Struct__func_801C7D5C
#define func_801C81C8 func_801C81C8__func_801C7D5C
#define func_801C81C8_Struct func_801C81C8_Struct__func_801C7D5C
typedef struct func_801C813C_Struct {
    u8 pad0[0x90];
    u8 unk90;
} func_801C813C_Struct;
extern void func_801C813C(func_801C813C_Struct *arg0, s32 arg1);
typedef struct func_801C81C8_Struct {
    u8 pad[0x3C];
    u16 unk3C;
} func_801C81C8_Struct;
extern void func_801C81C8(func_801C81C8_Struct *arg0, s32 arg1);

extern u8 D_800692B0[];
extern u8 D_801CD0D0;
extern u8 D_801CF30C[];
extern u8 D_801CF314[];

typedef struct func_801C7D5C_Struct {
    u8 pad0[0x3C];
    s16 unk3C;
    u8 pad3E[0x52];
    u8 unk90;
} func_801C7D5C_Struct;
typedef struct func_801C7D5C_StructInput {
    u8 pad0[0x1C8];
    u16 unk1C8;
    u8 pad1CA[6];
    u16 unk1D0;
} func_801C7D5C_StructInput;

void func_801C7D5C(func_801C7D5C_Struct *arg0, s32 arg1) {
    u16 buttons;
    u16 pressed;
    u8 color;
    u8 changed;
    s32 confirm;
    u8 index;
    func_801C7D5C_StructInput *input;
extern void func_8001B204();
extern void func_800058DC();

    index = arg0->unk90;
    input = (func_801C7D5C_StructInput *) (D_800692B0 + (index << 5) + 0x20000);
    buttons = input->unk1D0;
    color = 0xFF;
    pressed = input->unk1C8;
    changed = 1;
    if (D_801CFDB8[index] == 0) {
        if ((buttons & 0x800) && (D_801CFDA6[index] >= 2)) {
            D_801CFDA6[index]--;
        } else if ((buttons & 0x400) && (D_801CFDA6[index] < 3)) {
            D_801CFDA6[index]++;
        } else {
            confirm = pressed & 0x8000;
            if (confirm && (D_801CFDA6[index] < 3)) {
                D_801CFDA6[index]++;
            } else if ((buttons & 0x100) && (D_801CFDA6[index] == 3)) {
                D_801CFDA6[index]++;
            } else if ((buttons & 0x200) && (D_801CFDA6[index] == 4)) {
                D_801CFDA6[index]--;
            } else if (confirm && (D_801CFDA6[index] == 3) && (func_801C5AD4(index) == 0)) {
                func_801C5D64(arg0, 1);
                D_801CFDB8[arg0->unk90] = 1;
                D_801CD0D0 = arg0->unk90;
            } else {
                changed = 0;
            }
        }
        index = arg0->unk90;
    }
    if (D_801CFDA6[index] == 2) {
        if ((buttons & 0x100) && (D_801CD0C8[index] < 10)) {
            D_801CD0C8[index]++;
            index = arg0->unk90;
        }
        if ((buttons & 0x200) && (D_801CD0C8[index] >= -9)) {
            D_801CD0C8[index]--;
            index = arg0->unk90;
        }
    } else {
        color = 0x78;
    }
    if (D_801CD0C8[index] > 0) {
        func_8001B204((u8)((u32)index + 4), (s16)((s16)(s32)D_801CCF68[index][0] + 1000), 0xAB, D_801CF30C, color, D_801CD0C8[index]);
    } else {
        func_8001B204((u8)((u32)index + 4), (s16)((s16)(s32)D_801CCF68[index][0] + 1000), 0xAB, D_801CF314, color, D_801CD0C8[index]);
    }
    func_801C5F04(arg0);
    if (changed) {
        func_801C5DAC((u8 *)arg0);
        if (D_801CFDB8[arg0->unk90] != 0) {
            func_80020744(0x104);
            func_800058DC(arg0, func_801C813C);
            return;
        }
        func_80020744(0x300);
        return;
    }
    if ((D_801CFDA6[arg0->unk90] == 4) && (pressed & 0x8000)) {
        D_801CD0CC = 1;
        func_80020744(0x104);
        arg0->unk3C = 0x14;
        func_80020718(7);
        func_800058DC(arg0, func_801C81C8);
    }
}
#undef D_800692B0
#undef D_801CD0D0
#undef D_801CF30C
#undef D_801CF314
#undef func_801C813C
#undef func_801C813C_Struct
#undef func_801C81C8
#undef func_801C81C8_Struct


typedef struct func_801C813C_Struct {
    u8 pad0[0x90];
    u8 unk90;
} func_801C813C_Struct;


void func_801C813C(func_801C813C_Struct *arg0, s32 arg1) {
    extern void func_800058DC();
    u16 flags;

    flags = *(u16 *)(D_80089474 + 4 + (arg0->unk90 << 5));
    if ((flags & 0x4000) && (func_801C5B38() == 0)) {
        D_801CFDB8[arg0->unk90] = 0;
        func_801C5D64(arg0, 0);
        func_801C5F04(arg0);
        func_800058DC(arg0, &func_801C7D5C);
    }
}


typedef struct func_801C81C8_Struct {
    u8 pad[0x3C];
    u16 unk3C;
} func_801C81C8_Struct;


void func_801C81C8(func_801C81C8_Struct *arg0, s32 arg1) {
    u16 temp_v0;

    temp_v0 = arg0->unk3C;
    if ((s32)temp_v0 > 0) {
        arg0->unk3C = temp_v0 - 1;
    } else {
        func_8012FE50(0x1C, (*(u16 *)((u8 *)&D_801BBBF0 + 4) = 0xBE), 1, 1, 0);
    }
}

#define func_801C8328 func_801C8328__func_801C8220

typedef struct func_801C8220_Struct {
    u8 pad[0x90];
    u8 unk90;
} func_801C8220_Struct;
typedef struct func_801C8220_StructCopy {
    u16 data[57];
} func_801C8220_StructCopy;

extern func_801C8220_StructCopy D_801CD1A0;
extern void func_801C8328();

void func_801C8220(func_801C8220_Struct *arg0, s32 arg1)
{
    func_801C8220_StructCopy copy = D_801CD1A0;
    u8 pad[4];
    u16 saved;

    saved = D_801CFDAC[arg0->unk90] = func_80152980(arg0->unk90, D_801CFDA8[arg0->unk90]);
    if (func_80126A0C(arg0, **D_80171CEC[saved], 0)) {
        func_8013B268(arg0, saved, 0, D_801CD0C4[arg0->unk90], func_801C8328, D_801CD0C0[arg0->unk90]);
    }
}
#undef func_801C8328

#define func_801C5AD4 func_801C5AD4__func_801C8328

typedef struct func_801C8328_Inner {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
} func_801C8328_Inner;
typedef struct func_801C8328_Mid {
    u8 pad[0x2C];
    func_801C8328_Inner *unk2C;
} func_801C8328_Mid;
typedef struct func_801C8328_Src {
    u8 pad[0x50];
    f32 unk50;
} func_801C8328_Src;
typedef struct func_801C8328_Struct {
    u8 pad0[0x24];
    func_801C8328_Mid *unk24;
    u8 pad28[0x14];
    s16 unk3C;
    u8 pad3E[0x1E];
    func_801C8328_Src *unk5C;
    u8 pad60[0x30];
    u8 unk90;
    u8 pad91[3];
    s16 unk94;
    s16 unk96;
    s16 unk98;
    s16 unk9A;
} func_801C8328_Struct;

extern s32 func_801C5AD4(u8);

void func_801C8328(func_801C8328_Struct *arg0, s32 arg1) {
    func_801C8328_Src *sp2C;
    f32 t;
    f32 v;
    func_801C8328_Struct *r;

    sp2C = arg0->unk5C;
    r = func_80005670((s32)arg0, D_801CD13C);
    if (r != NULL) {
        r->unk90 = arg0->unk90;
    }
    arg0->unk24->unk2C->unk4 = D_801CD094[0];
    arg0->unk24->unk2C->unk8 = D_801CD094[1];
    arg0->unk24->unk2C->unkC = D_801CD094[2];
    if (arg0->unk90 == 0) {
        arg0->unk24->unk2C->unk12 = 0;
    }
    if (func_801C5AD4(arg0->unk90) != 0) {
        func_8014753C(arg0, (s32)D_801CCC40 | 0x40000000);
        func_80147370(arg0, 0, 0, 0, 0);
    } else {
        func_8014753C(arg0, (s32)D_801CCCA8 | 0x40000000);
        func_80147370(arg0, 0, 0, 0, 0xFF);
    }
    arg0->unk98 = 0;
    arg0->unk3C = 0;
    arg0->unk96 = arg0->unk98;
    arg0->unk94 = arg0->unk98;
    arg0->unk9A = arg0->unk98;
    t = sp2C->unk50 - 18.0f;
    D_801BBBF0.unk28C[arg0->unk90]->unk2C->unk34 = 6.0f + t;
    D_801BBBF0.unk28C[arg0->unk90]->unk2C->unk40 = 16.0f + t;
    if (D_801CFDAC[arg0->unk90] == 0xFA) {
        v = 2.0f;
    } else {
        v = 0.0f;
    }
    D_801BBBF0.unk28C[arg0->unk90]->unk2C->unk44 = v;
    D_801BBBF0.unk28C[arg0->unk90]->unk2C->unk38 = 25.0f + v;
    D_801BBBF0.unk28C[arg0->unk90]->unk2C->unk28 = (2.0f - 1.0f) * v + 50.0f;
    {
        extern void func_800058DC();
        func_800058DC(arg0, func_801C8568);
    }
}
#undef func_801C5AD4

#undef func_801C8568
#define D_801BBC2C D_801BBC2C__func_801C8568
#define D_801CD114 D_801CD114__func_801C8568
#define D_801CD128 D_801CD128__func_801C8568
#define D_801CF340 D_801CF340__func_801C8568
#define D_801CF348 D_801CF348__func_801C8568
#define func_800058DC func_800058DC__func_801C8568
#define func_8001B204 func_8001B204__func_801C8568
#define func_80127014 func_80127014__func_801C8568
#define func_8012C4D0 func_8012C4D0__func_801C8568
#define func_80152C04 func_80152C04__func_801C8568
#define func_801C5AB0 func_801C5AB0__func_801C8568
#define func_801C5AD4 func_801C5AD4__func_801C8568
#define func_801C5B38 func_801C5B38__func_801C8568
#define func_801C659C_Arg20 func_801C659C_Arg20__func_801C8568
#define func_801C659C_Ret func_801C659C_Ret__func_801C8568
#define CAT2(a, b) a##b
#define CAT(a, b) CAT2(a, b)
typedef struct func_801C659C_Arg20 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
} func_801C659C_Arg20;
extern func_801C659C_Arg20 D_801CD114;
typedef struct func_801C659C_Ret {
    u8 pad[0x90];
    u8 unk90;
} func_801C659C_Ret;
extern func_801C659C_Ret *func_8012C4D0(s32, func_801C659C_Arg20, s32);
s32 func_801C5AB0(void);
s32 func_801C5AD4(u8 arg0);
s32 func_801C5B38(void);


extern u8 D_801CF340[];
extern u8 D_801CF348[];
extern u8 D_801CD128[];
extern s32 D_801BBC2C;
extern u8 func_80127014[];
extern s32 func_80152C04(u16);
extern void func_8001B204(u8, s16, s32, void *, s32, s32);
extern void func_800058DC(void *, void *);

typedef struct func_801C8568_Obj {
    u8 pad0[8];
    void *unk8;
    u8 pad0C[0x18];
    u8 *unk24;
    u8 pad28[0x14];
    u16 unk3C;
    u8 pad3E[0x1E];
    s32 unk5C;
    u8 pad60[0x30];
    u8 unk90;
    u8 pad91[3];
    s16 unk94;
    s16 unk96;
    s16 unk98;
} func_801C8568_Obj;

typedef struct func_801C8568_I { u8 pad[0x4B]; u8 unk4B; } func_801C8568_I;
typedef struct func_801C8568_M { u8 pad[0x2C]; func_801C8568_I *unk2C; } func_801C8568_M;

void func_801C8568(func_801C8568_Obj *arg0, func_801C8568_M **arg1) {
    u16 sp46;
    u8 sp45;
    u8 pad[12];
    s16 v;
    s16 w;
    s32 t;
    s32 n;
    s32 f;
    u8 *p;
    func_801C659C_Ret *r;
    void *q;

    sp46 = *(u16 *)(D_80089474 + arg0->unk90 * 32 + 0xC);
    sp45 = 0;
    if (func_801C5B38() == 0) {
        t = func_80152C04(D_801CFDAC[arg0->unk90]);
        if (D_801CFDA6[arg0->unk90] == 1) {
            func_8001B204(arg0->unk90 + 2, (s16)D_801CCF68[arg0->unk90][0] + 0x3E8, 0x91, D_801CF340, 0xDD, t);
        } else {
            func_8001B204(arg0->unk90 + 2, (s16)D_801CCF68[arg0->unk90][0] + 0x3E8, 0x91, D_801CF348, 0x78, t);
        }
    }
    if (D_801CFDA6[arg0->unk90] == 1 && func_801C5AB0() == 0) {
        if (sp46 & 0x200) {
            p = D_801CFDA8 + arg0->unk90;
            if (*p == 0) {
                *p = D_801CFDB0[arg0->unk90] - 1;
            } else {
                (*p)--;
            }
            sp45 = 1;
        }
        if (sp46 & 0x100) {
            p = D_801CFDA8 + arg0->unk90;
            if (*p + 1 == D_801CFDB0[arg0->unk90]) {
                sp45 = 1;
                *p = 0;
            } else {
                sp45 = 1;
                (*p)++;
            }
        }
    }
    if (sp45 != 0) {
        func_80020744(0x300);
        r = func_8012C4D0(D_801BBC2C, D_801CD114, 3);
        if (r != NULL) {
            r->unk90 = arg0->unk90;
        }
        if (arg0->unk8 != 0) {
            arg0->unk24[0x22] = 0;
            func_80005700(arg0->unk8);
        }
        func_800058DC(arg0, func_80127014);
        return;
    }
    if (func_801C5AD4(arg0->unk90) != 0) {
        v = (*arg1)->unk2C->unk4B;
        if (v == 0xFF) {
            func_8014753C(arg0, (s32)D_801CCC40 | 0x40000000);
        }
        v = (s16)(v - 8);
        if (v < 0) {
            v = 0;
        }
        func_80147370(arg0, 0, 0, 0, v);
        arg0->unk94 += 0x32;
        arg0->unk96 += 0x64;
        arg0->unk98 += 0x96;
        if (arg0->unk3C++ % 10 == 0) {
            q = func_80005670((s32)arg0, D_801CD128);
            if (q != NULL) {
                ((func_801C8568_Obj *)q)->unk94 = arg0->unk94;
                ((func_801C8568_Obj *)q)->unk96 = arg0->unk96;
                ((func_801C8568_Obj *)q)->unk98 = arg0->unk98;
                ((func_801C8568_Obj *)q)->unk90 = arg0->unk90;
                ((func_801C8568_Obj *)q)->unk5C = arg0->unk5C;
            }
        }
    } else {
        w = (*arg1)->unk2C->unk4B;
        if (w == 0xFF) {
            func_8014753C(arg0, (s32)D_801CCCA8 | 0x40000000);
        } else {
            w = w + 8;
        }
        if (w >= 0x100) {
            w = 0xFF;
        }
        func_80147370(arg0, 0, 0, 0, w);
    }
}
#undef CAT2
#undef CAT
#undef D_801BBC2C
#undef D_801CD114
#undef D_801CD128
#undef D_801CF340
#undef D_801CF348
#undef func_800058DC
#undef func_8001B204
#undef func_80127014
#undef func_8012C4D0
#undef func_80152C04
#undef func_801C5AB0
#undef func_801C5AD4
#undef func_801C5B38
#undef func_801C659C_Arg20
#undef func_801C659C_Ret
#define func_801C8568 func_801C8568__decl

#undef func_801C9328
#define D_8017B7F8 D_8017B7F8__func_801C896C
#define D_801CD178 D_801CD178__func_801C896C
#define func_801C8328_Inner func_801C8328_Inner__func_801C896C
#define func_801C8328_Mid func_801C8328_Mid__func_801C896C
#define func_801C8328_Src func_801C8328_Src__func_801C896C
#define func_801C8328_Struct func_801C8328_Struct__func_801C896C
#define func_801C8B20 func_801C8B20__func_801C896C
#define func_801C8B20_Arg func_801C8B20_Arg__func_801C896C
#define func_801C8B20_Inner func_801C8B20_Inner__func_801C896C
#define func_801C8B20_Outer func_801C8B20_Outer__func_801C896C
#define func_801C9328 func_801C9328__func_801C896C
#define CAT2(a, b) a##b
#define CAT(a, b) CAT2(a, b)
#define CAT_(a,b) a##b
#define CAT(a,b) CAT_(a,b)
#define func_801C9328 CAT(func_801C9328_L, __LINE__)
typedef struct func_801C8328_Src {
    u8 pad[0x50];
    f32 unk50;
} func_801C8328_Src;
typedef struct func_801C8328_Inner {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
} func_801C8328_Inner;
typedef struct func_801C8328_Mid {
    u8 pad[0x2C];
    func_801C8328_Inner *unk2C;
} func_801C8328_Mid;
typedef struct func_801C8328_Struct {
    u8 pad0[0x24];
    func_801C8328_Mid *unk24;
    u8 pad28[0x14];
    s16 unk3C;
    u8 pad3E[0x1E];
    func_801C8328_Src *unk5C;
    u8 pad60[0x30];
    u8 unk90;
    u8 pad91[3];
    s16 unk94;
    s16 unk96;
    s16 unk98;
    s16 unk9A;
} func_801C8328_Struct;
typedef struct func_801C8B20_Arg {
    u8 pad[0x94];
    s16 unk94;
    s16 unk96;
    s16 unk98;
} func_801C8B20_Arg;
typedef struct func_801C8B20_Inner {
    u8 pad[8];
    f32 unk8;
    u8 pad2[0x3C];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
} func_801C8B20_Inner;
typedef struct func_801C8B20_Outer {
    u8 pad[0x30];
    func_801C8B20_Inner *unk30;
} func_801C8B20_Outer;
void func_801C8B20(func_801C8B20_Arg *arg0, func_801C8B20_Outer **arg1);
extern u8 func_801C9328[];


typedef struct func_801C896C_StructCopy {
    s32 unk0, unk4, unk8, unkC;
} func_801C896C_StructCopy;
typedef struct func_801C896C_StructInner {
    u8 pad0[4];
    f32 unk4, unk8, unkC;
    s16 unk10, unk12, unk14;
    u8 pad16[2];
    f32 unk18, unk1C, unk20;
    s32 unk24;
    u8 pad28[8];
    s32 unk30;
    u8 pad34[0x14];
    u8 unk48, unk49, unk4A, unk4B;
} func_801C896C_StructInner;
typedef struct func_801C896C_StructOuter {
    u8 pad[0x30];
    func_801C896C_StructInner *unk30;
} func_801C896C_StructOuter;
extern func_801C896C_StructCopy D_801CD178[];
extern u8 D_8017B7F8[];

void func_801C896C(func_801C8328_Struct *arg0, func_801C896C_StructOuter **arg1) {
    func_801C896C_StructCopy sp28;
    func_801C8328_Src *source;
    f32 sp20;

    sp28 = D_801CD178[arg0->unk90];
    source = arg0->unk5C;
    sp20 = source->unk50 - 18.0f;
    sp28.unk4 = 0x800008FF;
    func_80005E44((s32)arg0, &sp28);
    func_80006214((s32)arg0);
    func_8012C89C((s32)arg0, 0, 0x229, 9);
    (*arg1)->unk30->unk24 |= 0x100;
    (*arg1)->unk30->unk30 = (s32)D_8017B7F8 | 0x40000000;
    (*arg1)->unk30->unk48 = 0;
    (*arg1)->unk30->unk49 = 0xFF;
    (*arg1)->unk30->unk4A = 0;
    (*arg1)->unk30->unk4B = 0x40;
    (*arg1)->unk30->unk4 = 100.0f;
    (*arg1)->unk30->unk8 = 5.0f + sp20;
    (*arg1)->unk30->unkC = 0.0f;
    (*arg1)->unk30->unk10 = 0x800;
    (*arg1)->unk30->unk12 = 0;
    (*arg1)->unk30->unk14 = 0;
    (*arg1)->unk30->unk18 = 0.10000000149011612f;
    (*arg1)->unk30->unk1C = 0.10000000149011612f;
    (*arg1)->unk30->unk20 = 0.10000000149011612f;
    {
extern void func_800058DC();
        func_800058DC(arg0, (void *)func_801C8B20);
    }
}
#undef CAT2
#undef CAT
#undef CAT_
#undef D_8017B7F8
#undef D_801CD178
#undef func_801C8328_Inner
#undef func_801C8328_Mid
#undef func_801C8328_Src
#undef func_801C8328_Struct
#undef func_801C8B20
#undef func_801C8B20_Arg
#undef func_801C8B20_Inner
#undef func_801C8B20_Outer
#undef func_801C9328
#define func_801C9328 func_801C9328__decl


typedef struct func_801C8B20_Inner {
    u8 pad[8];
    f32 unk8;
    u8 pad2[0x3C];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
} func_801C8B20_Inner;
typedef struct func_801C8B20_Outer {
    u8 pad[0x30];
    func_801C8B20_Inner *unk30;
} func_801C8B20_Outer;
typedef struct func_801C8B20_Arg {
    u8 pad[0x94];
    s16 unk94;
    s16 unk96;
    s16 unk98;
} func_801C8B20_Arg;

void func_801C8B20(func_801C8B20_Arg *arg0, func_801C8B20_Outer **arg1) {
    f32 sp24;
    func_801C8B20_Inner *t;

    t = (*arg1)->unk30;
    t->unk8 = (f32) ((f64) t->unk8 + (0.2));
    sp24 = (*arg1)->unk30->unk8;
    arg0->unk94 = arg0->unk94 + 0x64;
    arg0->unk96 = arg0->unk96 + 0x96;
    arg0->unk98 = arg0->unk98 + 0xC8;
    (*arg1)->unk30->unk48 = (u32) ((f64) ((func_8001EAD0(arg0->unk94) + 1.0f) * 255.0f) * 0.5);
    (*arg1)->unk30->unk49 = (u32) ((f64) ((func_8001EAD0(arg0->unk96) + 1.0f) * 255.0f) * 0.5);
    (*arg1)->unk30->unk4A = (u32) ((f64) ((func_8001EAD0(arg0->unk98) + 1.0f) * 255.0f) * 0.5);
    if (sp24 > 30.0f) {
        func_80005700(arg0);
    }
}

#undef func_801C9328
#define D_801CCE68 D_801CCE68__func_801C8E20
#define D_801CCED0 D_801CCED0__func_801C8E20
#define D_801CD178 D_801CD178__func_801C8E20
#define func_801C909C func_801C909C__func_801C8E20
#define func_801C909C_Holder func_801C909C_Holder__func_801C8E20
#define func_801C909C_Inner func_801C909C_Inner__func_801C8E20
#define func_801C909C_Obj func_801C909C_Obj__func_801C8E20
#define func_801C9328 func_801C9328__func_801C8E20
#define HZP(p,l) HZQ(p,l)
#define HZQ(p,l) p##_##l
#define func_801C9328 HZP(HZF,__LINE__)
typedef struct func_801C909C_Inner {
    u8 pad0[0x8];
    f32 unk8;
    u8 pad1[0x3C];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
} func_801C909C_Inner;
typedef struct func_801C909C_Holder {
    u8 pad0[0x30];
    func_801C909C_Inner *unk30;
} func_801C909C_Holder;
typedef struct func_801C909C_Obj {
    func_801C909C_Holder *unk0;
    func_801C909C_Holder *unk4;
} func_801C909C_Obj;
void func_801C909C(s32 arg0, func_801C909C_Obj *arg1);
extern u8 func_801C9328[];


typedef struct func_801C8E20_StructC {
    /* 0x00 */ u8 pad0[0x4];
    /* 0x04 */ f32 f4;
    /* 0x08 */ f32 f8;
    /* 0x0C */ f32 fC;
    /* 0x10 */ s16 s10;
    /* 0x12 */ s16 s12;
    /* 0x14 */ s16 s14;
    /* 0x16 */ u8 pad16[0x2];
    /* 0x18 */ f32 f18;
    /* 0x1C */ f32 f1C;
    /* 0x20 */ f32 f20;
    /* 0x24 */ s32 flags;
    /* 0x28 */ u8 pad28[0x8];
    /* 0x30 */ s32 s30;
    /* 0x34 */ u8 pad34[0x14];
    /* 0x48 */ u8 b48;
    /* 0x49 */ u8 b49;
    /* 0x4A */ u8 b4A;
    /* 0x4B */ u8 b4B;
} func_801C8E20_StructC;

typedef struct func_801C8E20_StructB {
    /* 0x00 */ u8 pad0[0x30];
    /* 0x30 */ func_801C8E20_StructC *c;
} func_801C8E20_StructB;

typedef struct func_801C8E20_StructA {
    /* 0x00 */ func_801C8E20_StructB *b[2];
} func_801C8E20_StructA;

typedef struct func_801C8E20_StructS {
    s32 w[4];
} func_801C8E20_StructS;

typedef struct func_801C8E20_StructO {
    u8 pad[0x90];
    u8 idx;
} func_801C8E20_StructO;

extern func_801C8E20_StructS D_801CD178[];
extern u8 D_801CCE68[];
extern u8 D_801CCED0[];

void func_801C8E20(func_801C8E20_StructO *arg0, func_801C8E20_StructA *arg1) {
    func_801C8E20_StructS sp;
extern void func_800058DC();

    sp = D_801CD178[arg0->idx];
    sp.w[1] = 0x80000901;
    func_80005E44((s32)arg0, &sp);
    func_80006214((s32)arg0);
    func_8012C89C((s32)arg0, 0, 0x229, 1);
    arg1->b[0]->c->flags |= 0x100;
    arg1->b[0]->c->s30 = (s32)D_801CCE68 | 0x40000000;
    arg1->b[0]->c->b48 = 0;
    arg1->b[0]->c->b49 = 0;
    arg1->b[0]->c->b4A = 0;
    arg1->b[0]->c->b4B = 0;
    arg1->b[0]->c->s10 = 0;
    arg1->b[0]->c->s12 = 0;
    arg1->b[0]->c->s14 = 0;
    sp.w[1] = 0x800008FF;
    func_80005E44((s32)arg0, &sp);
    func_80006214((s32)arg0);
    func_8012C89C((s32)arg0, 1, 0x229, 1);
    arg1->b[1]->c->flags |= 0x100;
    arg1->b[1]->c->s30 = (s32)D_801CCED0 | 0x40000000;
    arg1->b[0]->c->f4 = 100.0f;
    arg1->b[0]->c->f8 = 42.29999923706055f;
    arg1->b[0]->c->fC = 0.0f;
    arg1->b[0]->c->f18 = 0.23999999463558197f;
    arg1->b[0]->c->f1C = 0.699999988079071f;
    arg1->b[0]->c->f20 = 0.23999999463558197f;
    arg1->b[1]->c->f4 = 100.0f;
    arg1->b[1]->c->f8 = 42.0f;
    arg1->b[1]->c->fC = 0.0f;
    arg1->b[1]->c->f18 = arg1->b[0]->c->f18 + 0.1;
    arg1->b[1]->c->f1C = 0.699999988079071f;
    arg1->b[1]->c->f20 = arg1->b[0]->c->f20 + 0.1;
    func_800058DC(arg0, func_801C909C);
}
#undef HZP
#undef HZQ
#undef D_801CCE68
#undef D_801CCED0
#undef D_801CD178
#undef func_801C909C
#undef func_801C909C_Holder
#undef func_801C909C_Inner
#undef func_801C909C_Obj
#undef func_801C9328
#define func_801C9328 func_801C9328__decl

#define func_80005700 func_80005700__func_801C909C

extern void func_80005700(s32);

typedef struct func_801C909C_Inner {
    u8 pad0[0x8];
    f32 unk8;
    u8 pad1[0x3C];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
} func_801C909C_Inner;

typedef struct func_801C909C_Holder {
    u8 pad0[0x30];
    func_801C909C_Inner *unk30;
} func_801C909C_Holder;

typedef struct func_801C909C_Obj {
    func_801C909C_Holder *unk0;
    func_801C909C_Holder *unk4;
} func_801C909C_Obj;

void func_801C909C(s32 arg0, func_801C909C_Obj *arg1)
{
  func_801C909C_Inner *temp_a0;
  func_801C909C_Inner *temp_v1;
  s16 temp_v0;
  f32 k;
  f32 cmp;
  arg1->unk4->unk30->unk48 = func_8012C6B4(0x100);
  arg1->unk4->unk30->unk49 = func_8012C6B4(0x100);
  temp_v0 = func_8012C6B4(0x100);
  k = (0.6000000238418579f);
 goto dummy_label_48230; dummy_label_48230: ;
  arg1->unk4->unk30->unk4A = temp_v0;
  temp_a0 = arg1->unk0->unk30;
  temp_a0->unk8 = temp_a0->unk8 + k;
  temp_v1 = arg1->unk4->unk30;
  cmp = arg1->unk0->unk30->unk8;
  temp_v1->unk8 = arg1->unk4->unk30->unk8 + k;
  if (cmp > 60.0f)
  {
    func_80005700(arg0);
  }
}
#undef func_80005700


typedef struct func_801C9154_Struct {
    u8 pad0[0x90];
    u8 unk90;
    u8 unk91;
    u8 pad92[2];
    s16 unk94;
    s16 unk96;
    s16 unk98;
} func_801C9154_Struct;


void func_801C9154(s32 arg0, void *arg1) {
    u8 var_s1;
    u8 *temp_s2;
    func_801C9154_Struct *temp_v0;

    for (var_s1 = 0; var_s1 < 4; var_s1++) {
        temp_s2 = &D_801CFD70 + var_s1;
        if (*temp_s2 == 0) {
            temp_v0 = func_80005670(arg0, &D_801CD164);
            if (temp_v0 != NULL) {
                temp_v0->unk90 = var_s1;
                temp_v0->unk91 = func_8012C6B4(0x28) + 0xA;
                temp_v0->unk94 = func_8012C6B4(0xFF);
                temp_v0->unk96 = func_8012C6B4(0xFF);
                temp_v0->unk98 = func_8012C6B4(0xFF);
            }
            *temp_s2 = 1;
        }
    }
}


typedef struct func_801C9234_Struct {
    f32 unk0;
    f32 unk4;
    f32 unk8;
} func_801C9234_Struct;

extern func_801C9234_Struct D_801CFD10[];
extern func_801C9234_Struct D_801CFD40[];

void func_801C9234(void *arg0, s32 arg1) {
    u8 temp_v1;
    func_801C9234_Struct *temp_a2;

    D_801CFD10[((u8 *)arg0)[0x90]].unk0 = 1000.0f;
    temp_v1 = ((u8 *)arg0)[0x90];
    D_801CFD10[temp_v1].unk4 = (f32) (temp_v1 * 0xA);
    temp_a2 = &D_801CFD10[((u8 *)arg0)[0x90]];
    temp_a2->unk8 = 300.0f - temp_a2->unk0;
    D_801CFD40[((u8 *)arg0)[0x90]].unk0 = -1.0f;
    D_801CFD40[((u8 *)arg0)[0x90]].unk4 = 0.0f;
    D_801CFD40[((u8 *)arg0)[0x90]].unk8 = 1.0f;
    func_800058DC(arg0, func_801C9328, temp_a2, D_801CFD10);
}

#undef func_801C9328
#define D_801CD0A0 D_801CD0A0__func_801C9328
#define D_801CF3D8 D_801CF3D8__func_801C9328
#define func_801476E0 func_801476E0__func_801C9328
#define func_801C5C70_Struct func_801C5C70_Struct__func_801C9328
#define func_801C9234_Struct func_801C9234_Struct__func_801C9328
#define func_801C9678 func_801C9678__func_801C9328
#define func_801C9678_Pair func_801C9678_Pair__func_801C9328
#define func_801C9678_Struct func_801C9678_Struct__func_801C9328
#define func_801C9328 D_801C9328
typedef struct func_801C9678_Pair {
    u8 *unk0;
    u8 *unk4;
} func_801C9678_Pair;
extern func_801C9678_Pair D_801CD0A0[];
typedef struct func_801C5C70_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801C5C70_Struct;
typedef struct func_801C9234_Struct {
    f32 unk0;
    f32 unk4;
    f32 unk8;
} func_801C9234_Struct;
typedef struct func_801C9678_Struct {
    u8 pad0[0x90];
    u8 unk90;
    u8 pad91[3];
    s16 unk94;
    s16 unk96;
    s16 unk98;
    u8 pad9A[2];
    f32 unk9C;
} func_801C9678_Struct;
extern void func_801C9678(func_801C9678_Struct *arg0, s32 arg1);
#undef func_801C9328

typedef struct func_801C9328_Struct {
    u8 pad0[0x90];
    u8 unk90;
    u8 unk91;
    u8 pad92[2];
    s16 unk94;
    s16 unk96;
    s16 unk98;
    u8 pad9A[2];
    f32 unk9C;
} func_801C9328_Struct;
extern f32 func_801476E0(f32 *, func_801C9234_Struct *);
extern f64 D_801CF3D8;

void func_801C9328(func_801C9328_Struct *arg0, s32 arg1) {
    u8 *s0;
    u8 *s1;
    u8 buf[3];
    u8 i;
extern void func_800058DC();

    s0 = D_801CD0A0[arg0->unk90].unk0;
    s1 = D_801CD0A0[arg0->unk90].unk4;
    func_801C5C70(&D_801CFD10[arg0->unk90], (func_801C5C70_Struct *)&D_801CFD40[arg0->unk90], (f32)(u32)arg0->unk91);
    func_801C5CC8(D_801CD094, &D_801CFD10[arg0->unk90].unk0, s0);
    ((s8 *)s1)[8] = -((s8 *)s0)[8];
    ((s8 *)s1)[9] = ((s8 *)s0)[9];
    ((s8 *)s1)[10] = ((s8 *)s0)[10];
    arg0->unk9C = 140.0f / func_801476E0(D_801CD094, &D_801CFD10[arg0->unk90]);
    buf[0] = (u32)(arg0->unk9C * arg0->unk94);
    buf[1] = (u32)(arg0->unk9C * arg0->unk96);
    buf[2] = (u32)(arg0->unk9C * arg0->unk98);
    for (i = 0; i < 3; i++) {
        s0[i] = s1[i] = buf[i];
    }
    if (arg0->unk9C < (0.1)) {
        func_800058DC(arg0, func_801C9678);
    }
}
#undef D_801CD0A0
#undef D_801CF3D8
#undef func_801476E0
#undef func_801C5C70_Struct
#undef func_801C9234_Struct
#undef func_801C9678
#undef func_801C9678_Pair
#undef func_801C9678_Struct
#define func_801C9328 func_801C9328__decl


typedef struct func_801C9678_Struct {
    u8 pad0[0x90];
    u8 unk90;
    u8 pad91[3];
    s16 unk94;
    s16 unk96;
    s16 unk98;
    u8 pad9A[2];
    f32 unk9C;
} func_801C9678_Struct;

typedef struct func_801C9678_Pair {
    u8 *unk0;
    u8 *unk4;
} func_801C9678_Pair;

extern func_801C9678_Pair D_801CD0A0[];

void func_801C9678(func_801C9678_Struct *arg0, s32 arg1)
{
  u8 *a;
  u8 *b;
  u8 buf[3];
  s32 new_var;
  a = D_801CD0A0[arg0->unk90].unk0;
  b = D_801CD0A0[arg0->unk90].unk4;
  new_var = 0;
  buf[0] = (u32) (arg0->unk9C * ((f32) arg0->unk94));
  buf[1] = (u32) (arg0->unk9C * ((f32) arg0->unk96));
  buf[2] = (u32) (arg0->unk9C * ((f32) arg0->unk98));
  new_var = new_var;
  do
  {
    u8 v = buf[new_var];
    b[new_var] = v;
    a[new_var] = v;
    new_var = (new_var + 1) & 0xFF;
  }
  while (new_var < 3);
  arg0->unk9C = arg0->unk9C - (0.01);
  if (arg0->unk9C < 0.0f)
  {
    *((&D_801CFD70) + arg0->unk90) = 0;
    func_80005700(arg0);
  }
}


/* Original readonly objects; named loads retain their original addresses. */
static const unsigned char rodata_801C5AB0[] = {
    0x00, 0x00, 0x00, 0x00, 0x25, 0x64, 0x50, 0x20, 0x63, 0x61, 0x6E, 0x20, 0x75, 0x73, 0x65, 0x20,
    0x25, 0x64, 0x20, 0x63, 0x68, 0x61, 0x72, 0x61, 0x63, 0x74, 0x65, 0x72, 0x73, 0x2E, 0x0A, 0x00,
    0x25, 0x64, 0x50, 0x20, 0x68, 0x61, 0x6E, 0x64, 0x69, 0x63, 0x61, 0x70, 0x20, 0x69, 0x73, 0x20,
    0x25, 0x64, 0x20, 0x65, 0x6E, 0x65, 0x6B, 0x69, 0x6E, 0x64, 0x20, 0x69, 0x73, 0x20, 0x25, 0x64,
    0x0A, 0x00, 0x00, 0x00, 0x53, 0x54, 0x41, 0x47, 0x45, 0xA1, 0xB8, 0x53, 0x45, 0x4C, 0x45, 0x43,
    0x54, 0x00, 0x00, 0x00, 0x53, 0x54, 0x41, 0x47, 0x45, 0xA1, 0xB8, 0x25, 0x64, 0x00, 0x00, 0x00,
    0x4C, 0x45, 0x56, 0x45, 0x4C, 0xA1, 0xB8, 0x25, 0x64, 0x00, 0x00, 0x00, 0x25, 0x61, 0x2B, 0x25,
    0x64, 0x00, 0x00, 0x00, 0x25, 0x61, 0x25, 0x64, 0x00, 0x00, 0x00, 0x00, 0x25, 0x64, 0x70, 0x6C,
    0x61, 0x79, 0x65, 0x72, 0x27, 0x73, 0x20, 0x6E, 0x65, 0x78, 0x74, 0x20, 0x6D, 0x6F, 0x64, 0x65,
    0x6C, 0x20, 0x6B, 0x69, 0x6E, 0x64, 0x20, 0x69, 0x73, 0x20, 0x25, 0x64, 0x0A, 0x00, 0x00, 0x00,
    0x25, 0x61, 0x25, 0x73, 0x00, 0x00, 0x00, 0x00, 0x25, 0x61, 0x25, 0x73, 0x00, 0x00, 0x00, 0x00,
    0x43, 0x68, 0x61, 0x6E, 0x67, 0x65, 0x20, 0x63, 0x68, 0x61, 0x72, 0x61, 0x63, 0x74, 0x65, 0x72,
    0x20, 0x21, 0x21, 0x0A, 0x00, 0x00, 0x00, 0x00, 0x25, 0x64, 0x70, 0x6C, 0x61, 0x79, 0x65, 0x72,
    0x27, 0x73, 0x20, 0x6E, 0x65, 0x78, 0x74, 0x20, 0x63, 0x68, 0x61, 0x72, 0x61, 0x63, 0x74, 0x65,
    0x72, 0x20, 0x6E, 0x75, 0x6D, 0x62, 0x65, 0x72, 0x28, 0x69, 0x6E, 0x64, 0x65, 0x78, 0x20, 0x30,
    0xA1, 0xC1, 0x29, 0x20, 0x69, 0x73, 0x20, 0x25, 0x64, 0x0A, 0x00, 0x00,
};



/* hh-owned-pool func_801C6D94 801CF39C 801CF3A0 */
/* hh-owned-pool func_801C896C 801CF3B0 801CF3B8 */
/* hh-owned-pool func_801C8B20 801CF3B8 801CF3C0 */
/* hh-owned-pool func_801C8E20 801CF3C0 801CF3D4 */
/* hh-owned-pool func_801C909C 801CF3D4 801CF3D8 */
/* hh-owned-pool func_801C9328 801CF3D8 801CF3E0 */
/* hh-owned-pool func_801C9678 801CF3E0 801CF3E8 */
