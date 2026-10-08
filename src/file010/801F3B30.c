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

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801F3B30/func_801F467C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801F3B30/func_801F46DC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801F3B30/func_801F474C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801F3B30/func_801F47EC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801F3B30/func_801F48C8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801F3B30/func_801F49E0.s")


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

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801F3B30/func_801F4C4C.s")

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

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801F3B30/func_801F53E8.s")


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


extern void func_8001F74C(void);
extern void func_801473F4(void *p);
extern void func_8014753C(void *p, s32 v);
extern void func_801FA410(s32 v);
extern s32 func_801FA600(s32 v);
extern u8 D_80216DE0[];
extern s16 D_8021B0C0;
extern void func_801F5960(void);

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

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801F3B30/func_801F5960.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801F3B30/func_801F59B8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801F3B30/func_801F5BAC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801F3B30/func_801F5EFC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801F3B30/func_801F5F5C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801F3B30/func_801F6008.s")

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

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801F3B30/func_801F74FC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801F3B30/func_801F7554.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801F3B30/func_801F75B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801F3B30/func_801F7638.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801F3B30/func_801F7928.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801F3B30/func_801F7A5C.s")


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

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801F3B30/func_801F82D4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801F3B30/func_801F832C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801F3B30/func_801F83B8.s")

void func_801F8660(void) {
}

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801F3B30/func_801F8668.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801F3B30/func_801F8760.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801F3B30/func_801F8900.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801F3B30/func_801F8974.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801F3B30/func_801F8A44.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801F3B30/func_801F8AE8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801F3B30/func_801F8C50.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801F3B30/func_801F8E4C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801F3B30/func_801F8F3C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801F3B30/func_801F908C.s")

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

