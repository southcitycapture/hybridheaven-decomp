#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8014C2B0/func_8014C2B0.s")


s32 func_801C3D90(u64 arg0);                          /* extern */
void func_800058DC(s32 arg0, void *arg1);            /* extern */
extern void func_8014C72C();

void func_8014C6F4(u64 arg0) {
    if (func_801C3D90(arg0) != 0) {
        func_800058DC(*(s32 *)&arg0, &func_8014C72C);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8014C2B0/func_8014C72C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8014C2B0/func_8014CDA0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8014C2B0/func_8014CE54.s")


typedef struct func_8014D070_Struct_Data {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    s16 unk10;
    s16 unk12;
    s16 unk14;
} func_8014D070_Struct_Data;

typedef struct func_8014D070_Struct_Sub {
    u8 pad0[0x30];
    func_8014D070_Struct_Data *unk30;
} func_8014D070_Struct_Sub;

typedef struct func_8014D070_Struct {
    u8 pad0[0x24];
    func_8014D070_Struct_Sub *unk24;
    u8 pad1[0x74 - 0x28];
    s32 unk74;
    f32 unk78;
    f32 unk7C;
    f32 unk80;
    s16 unk84;
    s16 unk86;
    s16 unk88;
    u8 pad2[0x90 - 0x8A];
    u8 unk90;
    u8 pad3[0x98 - 0x91];
    s32 unk98;
} func_8014D070_Struct;

typedef struct func_8014D070_Struct_Table {
    u16 unk0;
    u8 pad[18];
} func_8014D070_Struct_Table;

extern void func_8014BC18();
extern void func_801C3B7C(s32);
extern s32 (*D_801823CC[])(func_8014D070_Struct *, s32);
extern s32 (*D_80182530[])(func_8014D070_Struct *, s32);
extern func_8014D070_Struct_Table D_80182950[];
extern void func_8014D190();

void func_8014D070(func_8014D070_Struct *arg0, s32 arg1) {
    arg0->unk78 = arg0->unk24->unk30->unk4;
    arg0->unk7C = arg0->unk24->unk30->unk8;
    arg0->unk80 = arg0->unk24->unk30->unkC;
    arg0->unk84 = arg0->unk24->unk30->unk10;
    arg0->unk86 = arg0->unk24->unk30->unk12;
    arg0->unk88 = arg0->unk24->unk30->unk14;
    if ((D_801823CC[D_80182950[arg0->unk90].unk0] != NULL) &&
        (D_801823CC[D_80182950[arg0->unk90].unk0](arg0, arg1) == 0)) {
        arg0->unk74 = arg0->unk98;
        func_801C3B7C(0);
        func_8014BC18();
        if (D_80182530[D_80182950[arg0->unk90].unk0] != NULL) {
            D_80182530[D_80182950[arg0->unk90].unk0](arg0, arg1);
        }
        func_800058DC((s32) arg0, func_8014D190);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8014C2B0/func_8014D190.s")


extern u32 D_801BBFAC[];
extern void func_80126EAC(void);

void func_8014D204(void *arg0, s32 arg1) {
    *((u32 *) ((u8 *) arg0 + 0x2C)) &= 0xFFFF7FFF;
    D_801BBFAC[*((u8 *) arg0 + 0x9C)] = 0;
    func_800058DC((s32) arg0, func_80126EAC);
}


extern void func_8014F400(void);
extern s32 D_801BF180;

struct func_8014D254_Struct {
    u8 pad[0x93];
    u8 unk93;
    f32 unk94;
};

s32 func_8014D254(struct func_8014D254_Struct *arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = (s32) arg0->unk94;
    arg0->unk94 += 1.0f;
    if (temp_v0 == 0) {
        func_8014F400();
        return 1;
    }
    if (D_801BF180 == 0) {
        arg0->unk93 = 1;
        arg0->unk94 = 0.0f;
        return 0;
    }
    return 1;
}


void func_8014D2D0(void *arg0, s32 arg1) {
    ((u8 *)arg0)[0x93] = 4;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8014C2B0/func_8014D2E0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8014C2B0/func_8014D6BC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8014C2B0/func_8014D978.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8014C2B0/func_8014DF54.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8014C2B0/func_8014E3C8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8014C2B0/func_8014ECD0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8014C2B0/func_8014F070.s")


s32 func_801C3B88();                                /* extern */

s32 func_8014F330(s32 arg0) {
    return func_801C3B88() == arg0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8014C2B0/func_8014F358.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8014C2B0/func_8014F400.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8014C2B0/func_8014F940.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8014C2B0/func_8014FB38.s")


extern void func_8014FF14(void);

void func_8014FEE0(s32 arg0, s32 arg1) {
    D_801BF180 = 1;
    func_800058DC(arg0, (void *) func_8014FF14);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8014C2B0/func_8014FF14.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8014C2B0/func_80150198.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8014C2B0/func_801501C0.s")


struct func_80150314_Struct {
    u8 pad[0x90];
    u8 unk90;
    u8 pad2[2];
    u8 unk93;
    f32 unk94;
};

void func_80150314(struct func_80150314_Struct *arg0, s32 arg1) {
    s32 *p;
    f32 temp;

    p = &arg1;
    temp = 0.0f;
    arg0->unk90 = arg1;
    arg0->unk93 = 0;
    arg0->unk94 = temp;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8014C2B0/func_8015032C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8014C2B0/func_80150584.s")


struct func_801505AC_Struct {
    u8 pad[0x3B8];
    u16 unk3B8;
    s32 unk3BC[1];
};

extern struct func_801505AC_Struct D_801BBBF0;

s32 func_801505AC(s32 arg0) {
    struct func_801505AC_Struct *ptr;
    s32 *argp;

    argp = &arg0;
    ptr = &D_801BBBF0;
    arg0 = arg0 & 0xFFFF;
    if (arg0 < ptr->unk3B8) {
        return ptr->unk3BC[arg0];
    }
    return 0;
}


s32 func_80150584();
extern u16 D_801BBDA0;

s32 func_801505E4(void) {
    if (func_80150584() != 0) {
        return D_801BBDA0;
    }
    return -1;
}


struct func_80150614_Struct {
    u8 pad[0x92];
    u8 unk92;
};

s32 func_80150614(void) {
    struct func_80150614_Struct *obj;

    if (func_80150584() != 0) {
        obj = (struct func_80150614_Struct *)func_801505AC(func_801505E4() & 0xFFFF);
        if (obj->unk92 == 1) {
            return 1;
        }
        if (obj->unk92 == 2) {
            return 2;
        }
    }
    return 0;
}


extern u16 D_801BBFA8;

s32 func_8015067C(u16 arg0, u16 arg1) {
    void *temp_v0;

    arg0 &= 0xFFFF;
    if (arg0 < (s32) D_801BBFA8) {
        temp_v0 = (void *) func_801505AC(arg0);
        if (arg1 == 1) {
            return *(u16 *) ((u8 *) temp_v0 + 0xA0);
        }
        if (arg1 == 2) {
            return *(u16 *) ((u8 *) temp_v0 + 0xA2);
        }
        goto block_5;
    }
block_5:
    return 0xFFFF0000U;
}


extern void func_800179B0(void *arg0);
extern void func_8012FFC0();
extern void func_80150734();
extern u8 D_801826E0[];

void func_801506EC(s32 arg0, s32 arg1) {
    func_8014F400();
    func_800179B0(D_801826E0);
    func_8012FFC0();
    func_800058DC(arg0, func_80150734);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8014C2B0/func_80150734.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8014C2B0/func_80150794.s")


struct func_80150970_Struct {
    s16 a;
    s16 pad0;
    s32 b;
    f32 c;
    s16 d;
    s16 pad1;
};

extern void func_801C2F0C(s32 arg0, struct func_80150970_Struct *arg1);
extern s32 func_801C3044();
extern void func_801509D8();

void func_80150970(s32 arg0, s32 arg1) {
    u8 pad[0x10];
    struct func_80150970_Struct sp18;

    if (func_801C3044() == 0) {
        sp18.a = 0;
        sp18.b = 0x0168002D;
        sp18.d = 0x14;
        sp18.c = 1.0f;
        func_801C2F0C(3, &sp18);
        func_800058DC(arg0, &func_801509D8);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8014C2B0/func_801509D8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8014C2B0/func_80150AB4.s")


extern void func_80020718(s32);
extern u8 D_80182734[];
extern void func_80150B74(void);

void func_80150B30(s32 arg0, s32 arg1) {
    func_80020718(0x3DD);
    func_800179B0(D_80182734);
    func_800058DC(arg0, func_80150B74);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8014C2B0/func_80150B74.s")


typedef struct func_80150BAC_StructB {
    u8 pad0[0x4];
    f32 unk4;
    u8 pad1[0x4];
    f32 unkC;
    u8 pad2[0x2];
    s16 unk12;
} func_80150BAC_StructB;

typedef struct func_80150BAC_StructA {
    u8 pad0[0x2C];
    func_80150BAC_StructB *unk2C;
} func_80150BAC_StructA;

typedef struct func_80150BAC_StructC {
    f32 unk0;
    f32 unk4;
    f32 unk8;
    s16 unkC;
    s32 unk10;
    f32 unk14;
    s16 unk18;
    s16 unk1A;
    u8 pad1C[0x4];
} func_80150BAC_StructC;

f32 func_8001EAD0(s16);
f32 func_8001EB64(s16);
extern f32 D_801906F0;
extern void *D_801BBCD0;
extern void func_80150C8C(void);

void func_80150BAC(s32 arg0, s32 arg1) {
    func_80150BAC_StructC sp20;

    sp20.unk0 = ((func_80150BAC_StructA *)D_801BBCD0)->unk2C->unk4 - (func_8001EAD0(((func_80150BAC_StructA *)D_801BBCD0)->unk2C->unk12) * 8.0f);
    sp20.unk4 = ((func_80150BAC_StructA *)D_801BBCD0)->unk2C->unkC - (func_8001EB64(((func_80150BAC_StructA *)D_801BBCD0)->unk2C->unk12) * 8.0f);
    sp20.unkC = 0x1102;
    sp20.unk10 = 0x01680003;
    sp20.unk18 = 0x1000;
    sp20.unk1A = 0x5A;
    sp20.unk8 = D_801906F0;
    sp20.unk14 = 1.0f;
    func_801C2F0C(2, (struct func_80150970_Struct *)&sp20);
    func_800058DC(arg0, (void *)func_80150C8C);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8014C2B0/func_80150C8C.s")

