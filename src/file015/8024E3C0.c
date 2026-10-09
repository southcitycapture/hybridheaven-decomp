#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file015/8024E3C0/func_8024E3C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/8024E3C0/func_8024E43C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/8024E3C0/func_8024E60C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/8024E3C0/func_8024E67C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/8024E3C0/func_8024E7EC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/8024E3C0/func_8024E87C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/8024E3C0/func_8024E8EC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/8024E3C0/func_8024E9A8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/8024E3C0/func_8024EACC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/8024E3C0/func_8024EB90.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/8024E3C0/func_8024ECAC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/8024E3C0/func_8024ED2C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/8024E3C0/func_8024ED80.s")


extern void func_800058DC(void *, void *);
extern void func_8024EE60(void);

typedef struct func_8024EE04_Inner {
    u8 pad[0x4B];
    u8 unk4B;
} func_8024EE04_Inner;

typedef struct func_8024EE04_Outer {
    u8 pad[0x30];
    func_8024EE04_Inner *unk30;
} func_8024EE04_Outer;

void func_8024EE04(void *arg0, func_8024EE04_Outer **arg1) {
    func_8024EE04_Inner *temp_v0;

    temp_v0 = (*arg1)->unk30;
    temp_v0->unk4B = (u8) (temp_v0->unk4B + 3);
    temp_v0 = (*arg1)->unk30;
    if ((s32) temp_v0->unk4B >= 0xFB) {
        temp_v0->unk4B = 0xFF;
        *(s16 *) ((u8 *) arg0 + 0x3C) = 0;
        func_800058DC(arg0, func_8024EE60);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file015/8024E3C0/func_8024EE60.s")


struct func_8024EED0_Target {
    u8 pad[0x4B];
    u8 unk4B;
};

struct func_8024EED0_Ref {
    u8 pad[0x30];
    struct func_8024EED0_Target *unk30;
};

struct func_8024EED0_Pair {
    struct func_8024EED0_Ref *unk0;
    struct func_8024EED0_Ref *unk4;
};

extern s32 func_80133A24(s32);
extern void func_8024EF28(void);

void func_8024EED0(s32 arg0, struct func_8024EED0_Pair *arg1) {
    if (func_80133A24(0x7B) != 0) {
        arg1->unk0->unk30->unk4B = 0;
        arg1->unk4->unk30->unk4B = 0;
        func_800058DC(arg0, func_8024EF28);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file015/8024E3C0/func_8024EF28.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/8024E3C0/func_8024EF34.s")


typedef struct func_8024EF6C_Inner {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    u16 unk12;
} func_8024EF6C_Inner;

typedef struct func_8024EF6C_Outer {
    u8 pad[0x2C];
    func_8024EF6C_Inner *unk2C;
} func_8024EF6C_Outer;

typedef struct func_8024EF6C_Vec {
    s32 x;
    s32 y;
    s32 z;
} func_8024EF6C_Vec;

extern void func_8013A1B4(void **, func_8024EF6C_Vec, s32);
extern func_8024EF6C_Vec D_80254AB8;
extern void func_8024F024(void);

void func_8024EF6C(void *arg0, func_8024EF6C_Outer **arg1) {
    (*arg1)->unk2C->unk4 = 27.0f;
    (*arg1)->unk2C->unk8 = -130.0f;
    (*arg1)->unk2C->unkC = 406.0f;
    (*arg1)->unk2C->unk12 = 0x800;
    func_8013A1B4((void **)arg1, D_80254AB8, 0xFFFFFF);
    func_800058DC(arg0, (void *)func_8024F024);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file015/8024E3C0/func_8024F024.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/8024E3C0/func_8024F188.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/8024E3C0/func_8024F24C.s")


typedef struct func_8024F2D4_Sub {
    u8 pad[0x12];
    s16 unk12;
} func_8024F2D4_Sub;

typedef struct func_8024F2D4_Obj {
    u8 pad[0x2C];
    func_8024F2D4_Sub *unk2C;
} func_8024F2D4_Obj;

extern s32 func_80010550(void **, s32, void **);
extern void func_800179B0(void *);
extern void func_8024F334(void);
extern u8 D_80254E1C[];

void func_8024F2D4(void *arg0, func_8024F2D4_Obj **arg1) {
    func_8024F2D4_Obj **temp_a2;
    s32 temp_a1;
    func_8024F2D4_Sub *temp_v0;

    temp_a2 = arg1;
    temp_a1 = *(s32 *) ((u8 *) arg0 + 0x5C);
    temp_v0 = (*temp_a2)->unk2C;
    temp_v0->unk12 = (s16) (temp_v0->unk12 - 0x3A);
    if (func_80010550((void **) temp_a2, temp_a1, (void **) temp_a2) != 0) {
        func_800179B0(D_80254E1C);
        func_800058DC(arg0, func_8024F334);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file015/8024E3C0/func_8024F334.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/8024E3C0/func_8024F3D8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/8024E3C0/func_8024F4D4.s")


struct func_8024F588_StructB { u8 pad[0x12]; s16 unk12; };
struct func_8024F588_StructA { u8 pad[0x2C]; struct func_8024F588_StructB *unk2C; };
struct func_8024F588_Arg0 { u8 pad[0x5C]; s32 unk5C; };

extern func_8024EF6C_Vec D_80254AD0;
extern u8 D_80254F6C[];
extern void func_8024F624(void);

void func_8024F588(struct func_8024F588_Arg0 *arg0, void **arg1) {
    struct func_8024F588_StructB *temp_v0;
    s32 temp_a1;

    temp_a1 = arg0->unk5C;
    temp_v0 = ((struct func_8024F588_StructA *) *arg1)->unk2C;
    temp_v0->unk12 += 0x3A;
    if (func_80010550(arg1, temp_a1, arg1) != 0) {
        func_8013A1B4(arg1, D_80254AD0, 0xFFFFFF);
        func_800179B0(D_80254F6C);
        func_800058DC(arg0, func_8024F624);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file015/8024E3C0/func_8024F624.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/8024E3C0/func_8024F6C4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/8024E3C0/func_8024F818.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/8024E3C0/func_8024F8C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/8024E3C0/func_8024F984.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/8024E3C0/func_8024F9F0.s")


extern s32 func_800178E8(void);
extern void func_80133980(s32);
extern void func_8024FAD8(void);

void func_8024FA7C(void *arg0, void *arg1) {
    s32 tmp = *(s32 *)((u8 *)arg0 + 0x5C);

    if (func_80010550(arg1, tmp, arg1) != 0) {
        if (func_800178E8() != 0) {
            func_80133980(0x77);
            func_800058DC(arg0, &func_8024FAD8);
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file015/8024E3C0/func_8024FAD8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/8024E3C0/func_8024FB64.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/8024E3C0/func_8024FCC0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/8024E3C0/func_8024FE38.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/8024E3C0/func_8024FECC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/8024E3C0/func_8024FF60.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/8024E3C0/func_8024FFF4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/8024E3C0/func_80250110.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/8024E3C0/func_802501B4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/8024E3C0/func_802501F4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/8024E3C0/func_80250334.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/8024E3C0/func_802505C0.s")


extern void func_80005700();

typedef struct func_802507D8_Struct {
    u8 pad[0x90];
    u16 unk90;
} func_802507D8_Struct;

void func_802507D8(func_802507D8_Struct *arg0, void *arg1)
{
  s32 temp_v0;
  s32 temp_v1;
  temp_v0 = arg0->unk90;
  temp_v1 = temp_v0 > (5 - 1);
  arg0->unk90 = temp_v0 + 1;
  temp_v0 = temp_v1 != 0;
  if (temp_v1 != 0)
  {
    func_80005700();
  }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file015/8024E3C0/func_80250814.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/8024E3C0/func_80250914.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/8024E3C0/func_80250AB0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/8024E3C0/func_80250C58.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/8024E3C0/func_80250DDC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/8024E3C0/func_80251504.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/8024E3C0/func_802515AC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/8024E3C0/func_80251688.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/8024E3C0/func_80251884.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/8024E3C0/func_80251978.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/8024E3C0/func_80251B6C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/8024E3C0/func_80251BEC.s")



struct func_80251DB4_Struct_Obj {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[0x4B - 0x10];
    u8 unk4B;
};

struct func_80251DB4_Struct_Node {
    u8 pad[0x30];
    struct func_80251DB4_Struct_Obj *unk30;
};

struct func_80251DB4_Struct_Arg0 {
    u8 pad[0x40];
    f32 unk40;
    f32 unk44;
    f32 unk48;
};

void func_80251DB4(struct func_80251DB4_Struct_Arg0 *arg0, struct func_80251DB4_Struct_Node **arg1) {
    (*arg1)->unk30->unk4 = (*arg1)->unk30->unk4 + arg0->unk40;
    (*arg1)->unk30->unk8 = (*arg1)->unk30->unk8 + arg0->unk44;
    (*arg1)->unk30->unkC = (*arg1)->unk30->unkC + arg0->unk48;
    (*arg1)->unk30->unk4B--;
    if ((s32) (*arg1)->unk30->unk4B <= 0) {
        func_80005700();
    }
}


typedef struct func_80251E44_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
} func_80251E44_Struct;

extern void *func_8012C4D0(s32, func_80251E44_Struct, s32);
extern s32 D_801BBC2C;
extern func_80251E44_Struct D_80254AA4;

void *func_80251E44(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5) {
    void *temp_v0;

    temp_v0 = func_8012C4D0(D_801BBC2C, D_80254AA4, 2);
    if (temp_v0 != NULL) {
        ((f32 *)temp_v0)[0x90 / 4] = arg0;
        ((f32 *)temp_v0)[0x94 / 4] = arg1;
        ((f32 *)temp_v0)[0x98 / 4] = arg2;
        ((f32 *)temp_v0)[0x40 / 4] = arg3;
        ((f32 *)temp_v0)[0x44 / 4] = arg4;
        ((f32 *)temp_v0)[0x48 / 4] = arg5;
        return temp_v0;
    }
    return NULL;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file015/8024E3C0/func_80251EF8.s")

