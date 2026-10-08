#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8012A0F0/func_8012A0F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8012A0F0/func_8012A564.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8012A0F0/func_8012A630.s")


struct func_8012A72C_Vec {
    u8 pad0[4];
    f32 x;
    u8 pad1[4];
    f32 y;
};

struct func_8012A72C_Obj {
    u8 pad0[0x2C];
    struct func_8012A72C_Vec *vec;
};

struct func_8012A72C_Arg {
    u8 pad0[0x24];
    struct func_8012A72C_Obj *obj;
};

extern struct func_8012A72C_Obj *D_801BBCD0;
void func_8001EF38(f32, f32);

void func_8012A72C(struct func_8012A72C_Arg *arg0) {
    struct func_8012A72C_Vec *a;
    struct func_8012A72C_Vec *b;

    a = D_801BBCD0->vec;
    b = arg0->obj->vec;
    func_8001EF38(a->x - b->x, a->y - b->y);
}


typedef struct func_8012A774_Vec {
    u8 pad0[0x12];
    s16 unk12;
} func_8012A774_Vec;

typedef struct func_8012A774_Obj {
    u8 pad0[0x2C];
    func_8012A774_Vec *unk2C;
} func_8012A774_Obj;

typedef struct func_8012A774_Arg {
    u8 pad0[0x24];
    func_8012A774_Obj *unk24;
} func_8012A774_Arg;

s32 func_8012A774(func_8012A774_Arg *arg0, s16 arg1, s16 arg2) {
    func_8012A774_Vec *temp_v1;
    s16 temp_v0;
    s32 temp_a3;
    s32 var_a0;

    temp_v1 = arg0->unk24->unk2C;
    temp_v0 = temp_v1->unk12;
    temp_a3 = temp_v0 - arg1;
    if (temp_a3 < 0) {
        var_a0 = -temp_a3;
    } else {
        var_a0 = temp_a3;
    }
    if (arg2 >= (var_a0 & 0x1FFF)) {
        temp_v1->unk12 = arg1;
        return 1;
    }
    if (((arg1 - temp_v0) & 0x1FFF) >= 0x1000) {
        temp_v1->unk12 = (s16) (temp_v0 - arg2);
    } else {
        temp_v1->unk12 = (s16) (temp_v0 + arg2);
    }
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8012A0F0/func_8012A7F4.s")


extern void func_8012A7F4(s32, s32, s32, s16);

void func_8012A94C(s32 arg0, s16 arg1) {
    struct func_8012A72C_Vec *temp_v0;

    temp_v0 = D_801BBCD0->vec;
    func_8012A7F4(arg0, *(s32 *)&temp_v0->x, *(s32 *)&temp_v0->y, arg1);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8012A0F0/func_8012A988.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8012A0F0/func_8012AAE8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8012A0F0/func_8012ACDC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8012A0F0/func_8012AE54.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8012A0F0/func_8012AEE0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8012A0F0/func_8012AF88.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8012A0F0/func_8012B1E4.s")


typedef struct func_8012B7C0_Vec {
    u8 pad0[4];
    f32 x;
    f32 y;
    f32 z;
} func_8012B7C0_Vec;

typedef struct func_8012B7C0_Obj {
    u8 pad0[0x2C];
    func_8012B7C0_Vec *vecA;
    func_8012B7C0_Vec *vecB;
} func_8012B7C0_Obj;

typedef struct func_8012B7C0_Arg {
    u8 pad0[0x24];
    func_8012B7C0_Obj *obj;
    u8 pad1[0x4];
    u32 flags;
    u8 pad2[0x48];
    f32 outX;
    f32 outY;
    f32 outZ;
} func_8012B7C0_Arg;

void func_8012B7C0(func_8012B7C0_Arg *arg0) {
    func_8012B7C0_Obj *temp_v0;
    func_8012B7C0_Vec *var_v1;
    f32 var_fv0;
    f32 var_fv1;
    f32 var_fa0;

    if (arg0->flags & 0x400) {
        temp_v0 = arg0->obj;
        if (temp_v0 != NULL) {
            var_v1 = temp_v0->vecA;
            if (var_v1 != NULL) {
                var_fv0 = var_v1->x;
                var_fv1 = var_v1->y;
                var_fa0 = var_v1->z;
            } else {
                var_v1 = temp_v0->vecB;
                var_fv0 = var_v1->x;
                var_fv1 = var_v1->y;
                var_fa0 = var_v1->z;
            }
            arg0->outX = var_fv0;
            arg0->outY = var_fv1;
            arg0->outZ = var_fa0;
        }
    }
}


extern s32 func_8010854C(s32, s32, s32, s32, f32, f32);

s32 func_8012B81C(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    f32 *fp;
    s32 *ap;
    fp = (f32 *) &arg2;
    ap = &arg3;
    if (func_8010854C(arg0, arg1, arg2, arg3, fp[2], fp[3]) != 0) {
        return 1;
    }
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8012A0F0/func_8012B85C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8012A0F0/func_8012BFA0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8012A0F0/func_8012C148.s")


typedef struct func_8012C1BC_Struct {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    s32 unkC;
} func_8012C1BC_Struct;

typedef struct func_8012C1BC_Mid {
    u8 pad0[0x2C];
    func_8012C1BC_Struct *unk2C;
} func_8012C1BC_Mid;

typedef struct func_8012C1BC_Outer {
    u8 pad0[0x24];
    func_8012C1BC_Mid *unk24;
} func_8012C1BC_Outer;

extern void func_8012C148(f32, f32, s32, void *, void *, void *);

void func_8012C1BC(func_8012C1BC_Outer *arg0) {
    func_8012C1BC_Struct *temp_v0;

    temp_v0 = arg0->unk24->unk2C;
    temp_v0->unk8 = temp_v0->unk8 - 20.0f;
    temp_v0 = arg0->unk24->unk2C;
    func_8012C148(temp_v0->unk4, temp_v0->unk8 + 40.0f, temp_v0->unkC, &temp_v0->unk4, &temp_v0->unk8, &temp_v0->unkC);
}


typedef struct func_8012C228_StructData {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    s16 unk10;
    s16 unk12;
    s16 unk14;
} func_8012C228_StructData;

typedef struct func_8012C228_StructSub {
    u8 pad0[0x30];
    func_8012C228_StructData *unk30;
} func_8012C228_StructSub;

typedef struct func_8012C228_StructArg {
    u8 pad0[0x24];
    func_8012C228_StructSub *unk24;
    u8 pad1[0x4];
    s32 unk2C;
    u8 pad2[0x44];
    s32 unk74;
    f32 unk78;
    f32 unk7C;
    f32 unk80;
    s16 unk84;
    s16 unk86;
    s16 unk88;
} func_8012C228_StructArg;

typedef struct func_8012C228_StructEntry {
    u16 *unk0;
    s32 *unk4;
} func_8012C228_StructEntry;

extern func_8012C228_StructEntry *D_80171CEC[];
s32 func_8000522C(u16, s32, s32);

void func_8012C228(func_8012C228_StructArg *arg0, s32 arg1, s32 arg2) {
    func_8012C228_StructEntry *temp_v0;

    arg0->unk2C |= 0x800;
    temp_v0 = D_80171CEC[arg1];
    arg0->unk74 = func_8000522C(*temp_v0->unk0, temp_v0->unk4[arg2], arg2);
    arg0->unk78 = arg0->unk24->unk30->unk4;
    arg0->unk7C = arg0->unk24->unk30->unk8;
    arg0->unk80 = arg0->unk24->unk30->unkC;
    arg0->unk84 = arg0->unk24->unk30->unk10;
    arg0->unk86 = arg0->unk24->unk30->unk12;
    arg0->unk88 = arg0->unk24->unk30->unk14;
}


typedef struct func_8012C2DC_StructInner {
    u8 pad0[0x24];
    s32 unk24;
    u8 pad1[0x8];
    void *unk30;
    u8 pad2[0x18];
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
    u8 unk4F;
} func_8012C2DC_StructInner;

typedef struct func_8012C2DC_StructOuter {
    u8 pad0[0x30];
    func_8012C2DC_StructInner *unk30;
} func_8012C2DC_StructOuter;

extern void *D_8008DA88[];
extern u8 D_8017AF38[];
extern u8 D_801BBBF0[];

void func_8012C2DC(s32 arg0) {
    func_8012C2DC_StructOuter **temp_v0;

    temp_v0 = (func_8012C2DC_StructOuter **) &D_8008DA88[arg0];
    (*temp_v0)->unk30->unk24 = (*temp_v0)->unk30->unk24 | 0x400;
    (*temp_v0)->unk30->unk30 = D_8017AF38;
    (*temp_v0)->unk30->unk4C = D_801BBBF0[0xF32];
    (*temp_v0)->unk30->unk4D = D_801BBBF0[0xF33];
    (*temp_v0)->unk30->unk4E = D_801BBBF0[0xF34];
    (*temp_v0)->unk30->unk4F = D_801BBBF0[0xF35];
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8012A0F0/func_8012C360.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8012A0F0/func_8012C36C.s")


extern void func_80005700(s32 arg0, s32 arg1);

void func_8012C378(s32 arg0, s32 arg1) {
    s32 *p;
    p = &arg1;
    func_80005700(arg0, *p);
}

