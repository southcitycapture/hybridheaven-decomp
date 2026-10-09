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

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801F3B30/func_801F3B5C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801F3B30/func_801F3B6C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801F3B30/func_801F3C90.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801F3B30/func_801F3F60.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801F3B30/func_801F3F70.s")


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

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801F3B30/func_801F42E4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801F3B30/func_801F442C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801F3B30/func_801F4514.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801F3B30/func_801F45E4.s")


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

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801F3B30/func_801F46DC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801F3B30/func_801F474C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801F3B30/func_801F47EC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801F3B30/func_801F48C8.s")


struct func_801F49E0_Inner {
    u8 pad0[0x4];
    s32 unk4;
    u8 pad1[0x4];
    f32 unkC;
};

s32 func_801F46DC(s32 a0, s16 *a1, s16 *a2, s32 a3, f32 a4);

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

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801F3B30/func_801F4AA0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801F3B30/func_801F4AFC.s")


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

extern s32 func_8013A1B4(s32, func_801F4C4C_Global, s32);
extern void func_801F3B5C(s32);
extern s16 func_801F3F70(void);
extern func_801F4C4C_Global D_80216ED0;
extern void func_801F9974(void);

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

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801F3B30/func_801F4D30.s")


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

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801F3B30/func_801F5104.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801F3B30/func_801F5210.s")


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

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801F3B30/func_801F5294.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801F3B30/func_801F536C.s")


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

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801F3B30/func_801F5524.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801F3B30/func_801F5574.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801F3B30/func_801F55E0.s")


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

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801F3B30/func_801F5630.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801F3B30/func_801F56A8.s")


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
void func_80005670(void *, void *);                 /* extern */
void func_800058DC(void *, s32);                    /* extern */
s32 func_801F5490(void *);                          /* extern */
s32 func_801F5524(void *);                          /* extern */
void func_801F5574(void *, s32);                    /* extern */

extern void (*D_80216D10[])(void *, s32);
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

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801F3B30/func_801F58AC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801F3B30/func_801F5960.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801F3B30/func_801F59B8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801F3B30/func_801F5BAC.s")


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

void func_80005700(void *);
void func_800062F8(s32, s32);
void func_80147450(void *);
void func_801FA570(s32);

void func_801F5EFC(struct func_801F5EFC_StructOuter *arg0, s32 arg1) {
    func_801FA570(arg0->unkC->unkA8);
    func_800062F8(arg0->unkC->unk24, 0x80000900);
    func_80147450(arg0->unkC);
    arg0->unkC->unkAD = 0;
    func_80005700(arg0);
}


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

s32 func_801270C0(void);
void func_801F5574(void *, s32);
void func_801F55E0(s32);
void func_80020744(s32);
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


struct func_801F6008_Struct {
    u8 pad0[0x5C];
    struct func_801F5230_StructB *unk5C;
    u8 pad1[0xAE - 0x60];
    u8 unkAE;
    u8 unkAF;
};

extern void func_80010550();
extern s32 func_801C3B3C();
extern void func_801F60D8();
extern void func_801F70E0();

void func_801F6008(struct func_801F6008_Struct *arg0, s32 arg1)
{
  struct func_801F5230_StructB *sp24;
  u32 temp_t8;
  f32 var_ft0;
  sp24 = arg0->unk5C;
  func_80010550(arg1, sp24, arg1);
  if ((arg0 && arg0) && arg0)
  {
  }
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

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801F3B30/func_801F60D8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801F3B30/func_801F62DC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801F3B30/func_801F63E0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801F3B30/func_801F6534.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801F3B30/func_801F671C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801F3B30/func_801F6820.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801F3B30/func_801F6A3C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801F3B30/func_801F6C58.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801F3B30/func_801F6E4C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801F3B30/func_801F6F50.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801F3B30/func_801F70E0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801F3B30/func_801F73F0.s")


typedef struct func_801F74FC_Struct {
    s32 w0;
    s32 w1;
    s32 w2;
} func_801F74FC_Struct;

typedef struct func_801F74FC_Obj {
    u8 pad0[0x5C];
    s32 unk5C;
} func_801F74FC_Obj;

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


struct func_801F75B0_Struct {
    u8 pad0[0x90];
    u16 unk90;
    u8 padA[0x1C];
    u8 unkAE;
};

extern void func_801F7638(void);

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

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801F3B30/func_801F7638.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801F3B30/func_801F7928.s")


struct func_801F7A5C_Struct {
    u8 pad[0x3C];
    u16 unk3C;
};

extern void *D_8021AFE4;
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


extern void func_801F7B2C(void);

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

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801F3B30/func_801F7B2C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801F3B30/func_801F7DB4.s")


typedef struct func_801F82D4_Struct {
    u8 pad[0x3C];
    u16 unk3C;
} func_801F82D4_Struct;

extern void func_80005700(void *);
extern void func_801479A8(s32, void *);
extern s32 D_8021AFE0;

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


extern void func_801F5210(void *);
extern void func_801F83B8(void);

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

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801F3B30/func_801F83B8.s")

void func_801F8660(void) {
}

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801F3B30/func_801F8668.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801F3B30/func_801F8760.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801F3B30/func_801F8900.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801F3B30/func_801F8974.s")


extern s32 func_8012C6B4(s32);
extern void func_801F8AE8();

extern f32 D_8021B028;
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

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801F3B30/func_801F8AE8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801F3B30/func_801F8C50.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801F3B30/func_801F8E4C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801F3B30/func_801F8F3C.s")


typedef struct func_801F908C_Struct {
    u8 pad0[0xAE];
    u8 unkAE;
} func_801F908C_Struct;

extern void func_801F9104(void);

void func_801F908C(func_801F908C_Struct *arg0, s32 arg1) {
    if (func_801C3B3C() == 0) {
        if (func_801F3FFC((struct func_801F3FFC_Arg *) arg0, (f32) (u32) arg0->unkAE) != 0) {
            func_801F5230((struct func_801F5230_StructArg *) arg0);
            func_800058DC(arg0, (s32) func_801F9104);
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801F3B30/func_801F9104.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801F3B30/func_801F91C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801F3B30/func_801F9318.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801F3B30/func_801F94AC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801F3B30/func_801F9524.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801F3B30/func_801F9664.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801F3B30/func_801F97E0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801F3B30/func_801F9974.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801F3B30/func_801F9A8C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801F3B30/func_801F9BC8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801F3B30/func_801F9D68.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801F3B30/func_801F9EC4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801F3B30/func_801FA074.s")

