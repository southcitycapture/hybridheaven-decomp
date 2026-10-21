#include "common.h"

extern f32 D_801906F0;
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern f64 D_80190688;
extern f64 D_80190690;
extern f64 D_80190698;
extern f64 D_801906A0;
extern f64 D_801906A8;
extern f64 D_801906B0;
extern f64 D_801906B8;
extern s16 func_801FD284(s16, s16, s32, void *);
extern s32 D_801BF180;
extern s32 func_800178E8();
extern s32 func_8010843C(f32, f32, f32, f32, f32, f32);
extern s32 func_80126880(s32 arg0);
extern s32 func_80126CC0(void *, void *);
extern s32 func_8012C97C(u16, u16);
extern s32 func_8012FFC0();
extern s32 func_80150584();
extern s32 func_801C3044();
extern s32 func_801C3B88();                                /* extern */
extern s32 func_801C3D90(u64 arg0);                          /* extern */
extern u16 D_801BBDA0;
extern u16 D_801BBFA8;
extern u32 D_801BBFAC[];
extern u8 D_8017AF38[];
extern u8 D_801826AC[];
extern u8 D_801826D8[];
extern u8 D_801826E0[];
extern u8 D_80182734[];
extern u8 D_801BBBF0[];
extern u8 D_801BC025;
extern void *D_801BBCD0;
extern void func_80005670(void *, void *);
extern void func_800058DC();
extern void func_80006214(void *);
extern void func_800179B0();
extern void func_8001F74C(void *);
extern void func_8001F7D4(void *);
extern void func_80020718(s32);
extern void func_8012636C(void *, s32);
extern void func_80126820(u16);
extern void func_80126EAC(void);
extern void func_8012C89C(void *, s32, s16, s32);
extern void func_8014BC18();
extern void func_8014C6F4();
extern void func_8014C72C();
extern void func_8014CE54();
extern void func_8014D070();
extern void func_8014D190();
extern void func_8014D204();
extern void func_8014F400();
extern void func_8014FF14();
extern void func_801501C0();
extern void func_80150734();
extern void func_80150794();
extern void func_801509D8();
extern void func_80150AB4();
extern void func_80150B74();
extern void func_80150BAC();
extern void func_80150C8C();
extern void func_801C3B7C(s32);


typedef struct func_8014C2B0_Struct_Data {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    s16 unk10;
    s16 unk12;
    s16 unk14;
} func_8014C2B0_Struct_Data;

typedef struct func_8014C2B0_Struct_Sub {
    u8 pad0[0x30];
    func_8014C2B0_Struct_Data *unk30;
} func_8014C2B0_Struct_Sub;

typedef struct func_8014C2B0_Struct_Info {
    u8 pad0[0x10];
    u32 unk10;
    u32 unk14;
    u32 unk18;
} func_8014C2B0_Struct_Info;

typedef struct func_8014C2B0_Struct {
    u8 pad0[0x24];
    func_8014C2B0_Struct_Sub *unk24;
    u8 pad28[0x2C - 0x28];
    s32 unk2C;
    u8 pad30[0x36 - 0x30];
    u16 unk36;
    func_8014C2B0_Struct_Info *unk38;
    u8 pad3C[0x74 - 0x3C];
    s32 unk74;
    f32 unk78;
    f32 unk7C;
    f32 unk80;
    s16 unk84;
    s16 unk86;
    s16 unk88;
    u8 pad8A[0x90 - 0x8A];
    u8 unk90;
    u8 unk91;
    u8 pad92;
    u8 unk93;
    f32 unk94;
    u8 pad98[0x9C - 0x98];
    u8 unk9C;
    u8 pad9D;
    s16 unk9E;
    s16 unkA0;
    s16 unkA2;
    u8 unkA4;
    u8 unkA5;
    u8 unkA6;
} func_8014C2B0_Struct;

typedef struct func_8014C2B0_Struct_ObjSub {
    u8 pad0[0x24];
    s32 unk24;
    u8 pad28[0x30 - 0x28];
    s32 unk30;
    u8 pad34[0x4C - 0x34];
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
    u8 unk4F;
} func_8014C2B0_Struct_ObjSub;

typedef struct func_8014C2B0_Struct_Obj {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad23[0x30 - 0x23];
    func_8014C2B0_Struct_ObjSub *unk30;
} func_8014C2B0_Struct_Obj;

typedef struct func_8014C2B0_Struct_Pair {
    s16 unk0;
    u16 unk2;
} func_8014C2B0_Struct_Pair;

typedef struct func_8014C2B0_Struct_Table {
    func_8014C2B0_Struct_Pair *unk0;
    u16 unk4;
    u8 pad6[0xE - 0x6];
    u16 unkE;
    u16 unk10;
    u8 pad12[2];
} func_8014C2B0_Struct_Table;

typedef struct func_8014C2B0_Struct_G {
    u8 pad0[0x3A6];
    u8 unk3A6;
    u8 pad3A7[0x3B8 - 0x3A7];
    u16 unk3B8;
    u8 pad3BA[2];
    void *unk3BC[30];
    u8 pad434[0xF32 - 0x434];
    u8 unkF32;
    u8 unkF33;
    u8 unkF34;
    u8 unkF35;
} func_8014C2B0_Struct_G;

typedef struct func_8014C2B0_Struct_Arg {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
} func_8014C2B0_Struct_Arg;

extern void func_80005E44(void *, func_8014C2B0_Struct_Arg *);
extern func_8014C2B0_Struct_Arg D_80164F40;
extern void (*D_80182268[])(func_8014C2B0_Struct *, func_8014C2B0_Struct_Obj **);
extern void (*D_80182694[])(func_8014C2B0_Struct *, func_8014C2B0_Struct_Obj **);
extern func_8014C2B0_Struct_Table D_8018294C[];

#define G ((func_8014C2B0_Struct_G *)D_801BBBF0)

void func_8014C2B0(func_8014C2B0_Struct *arg0, func_8014C2B0_Struct_Obj **arg1) {
    func_8014C2B0_Struct_Arg s;
    func_8014C2B0_Struct_Pair *list;
    s32 j;
    s32 i;

    if (func_80126CC0(arg0, func_8014D204) != 0) {
        func_8001F7D4(arg0);
        arg0->unk90 = arg0->unk38->unk10 >> 24;
        arg0->unk91 = (arg0->unk38->unk10 >> 16) & 0xFF;
        arg0->unkA4 = arg0->unk38->unk14 >> 24;
        arg0->unkA5 = (arg0->unk38->unk14 >> 16) & 0xFF;
        arg0->unk9E = arg0->unk38->unk14 & 0xFFFF;
        arg0->unkA0 = arg0->unk38->unk18 >> 16;
        arg0->unkA2 = arg0->unk38->unk18 & 0xFFFF;
        arg0->unkA6 = arg0->unk38->unk10 & 0xFF;
        arg0->unk9C = 0;
        for (j = 0; j < 30; j++) {
            if (G->unk3BC[j] == NULL) {
                G->unk3BC[j] = arg0;
                arg0->unk9C = j;
                G->unk3B8 = 30;
                break;
            }
        }
        list = D_8018294C[arg0->unk90].unk0;
        s = D_80164F40;
        s.unk4 = 0x80000C00;
        for (i = 0; list[i].unk0 != -1; i++) {
            func_80005E44(arg0, &s);
        }
        func_80006214(arg0);
        for (i = 0; list[i].unk0 != -1; i++) {
            if (!(list[i].unk2 & 0x8000)) {
                func_8012636C(arg0, i);
            }
            if (D_8018294C[arg0->unk90].unk4 == 0 || D_8018294C[arg0->unk90].unk4 == 0x22) {
                arg1[i]->unk22 = 0;
                arg1[i]->unk30->unk30 = (s32)D_801826D8;
            } else {
                arg1[i]->unk30->unk24 |= 0x400;
                arg1[i]->unk30->unk30 = (s32)D_8017AF38 | 0x40000000;
                arg1[i]->unk30->unk4C = G->unkF32;
                arg1[i]->unk30->unk4D = G->unkF33;
                arg1[i]->unk30->unk4E = G->unkF34;
                arg1[i]->unk30->unk4F = G->unkF35;
                func_8012C89C(arg0, i, list[i].unk0, list[i].unk2 & ~0x8000);
            }
        }
        func_8001F74C(arg0);
        arg0->unk2C |= 0x800;
        arg0->unk78 = arg0->unk24->unk30->unk4;
        arg0->unk7C = arg0->unk24->unk30->unk8;
        arg0->unk80 = arg0->unk24->unk30->unkC;
        arg0->unk84 = arg0->unk24->unk30->unk10;
        arg0->unk86 = arg0->unk24->unk30->unk12;
        arg0->unk88 = arg0->unk24->unk30->unk14;
        arg0->unk93 = 0;
        arg0->unk94 = 0.0f;
        if (arg0->unk91 & 2) {
            arg0->unk74 = func_8012C97C(arg0->unk36, D_8018294C[arg0->unk90].unk10);
        } else {
            arg0->unk74 = func_8012C97C(arg0->unk36, D_8018294C[arg0->unk90].unkE);
        }
        if (arg0->unkA4 == G->unk3A6) {
            if (D_80182694[(arg0->unk38->unk10 >> 8) & 0xFF] != NULL) {
                D_80182694[(arg0->unk38->unk10 >> 8) & 0xFF](arg0, arg1);
            }
        }
        if (arg0->unk91 & 0x10) {
            if (D_80182268[D_8018294C[arg0->unk90].unk4] != NULL) {
                D_80182268[D_8018294C[arg0->unk90].unk4](arg0, arg1);
            }
            func_800058DC((s32)arg0, func_8014D070);
        } else {
            func_800058DC((s32)arg0, func_8014C6F4);
        }
    }
}



void func_8014C6F4(u64 arg0) {
    if (func_801C3D90(arg0) != 0) {
        func_800058DC(*(s32 *)&arg0, &func_8014C72C);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8014C2B0/func_8014C72C.s")


typedef struct func_8014CDA0_Struct {
    u8 pad0[0x92];
    u8 unk92;
    u8 pad93[0xA0 - 0x93];
    u16 unkA0;
    u16 unkA2;
    u8 unkA4;
    u8 unkA5;
} func_8014CDA0_Struct;


void func_8014CDA0(func_8014CDA0_Struct *arg0, s32 arg1) {
    if ((D_801BBBF0[0x182] == 0) && (D_801BBBF0[0x187] == 0)) {
        if (arg0->unkA5 != 0) {
            if (arg0->unk92 == 1) {
                *(u16 *)(D_801BBBF0 + 6) = arg0->unkA0;
            } else {
                *(u16 *)(D_801BBBF0 + 6) = arg0->unkA2;
            }
        } else if (arg0->unk92 == 1) {
            func_80126820(arg0->unkA0);
        } else {
            func_80126820(arg0->unkA2);
        }
        func_800058DC(arg0, func_8014CE54);
    }
}

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

extern s32 (*D_801823CC[])(func_8014D070_Struct *, s32);
extern s32 (*D_80182530[])(func_8014D070_Struct *, s32);
extern func_8014D070_Struct_Table D_80182950[];

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


typedef struct func_8014D190_Struct {
    u8 pad0[0x92];
    u8 unk92;
    u8 pad1[0xA0 - 0x93];
    u16 unkA0;
    u16 unkA2;
} func_8014D190_Struct;


void func_8014D190(func_8014D190_Struct *arg0, s32 arg1) {
    u16 var_v0;
    u8 *base;

    if (arg0->unk92 == 2) {
        var_v0 = arg0->unkA0;
    } else {
        var_v0 = arg0->unkA2;
    }
    if (func_80126880(var_v0 & 0xFFFF) != 0) {
        base = (u8 *) &D_801BBBF0;
        base[0x435] = (u8) (base[0x435] & 0xFFFE);
        func_800058DC(arg0, func_8014C72C);
    }
}



void func_8014D204(void *arg0, s32 arg1) {
    *((u32 *) ((u8 *) arg0 + 0x2C)) &= 0xFFFF7FFF;
    D_801BBFAC[*((u8 *) arg0 + 0x9C)] = 0;
    func_800058DC((s32) arg0, func_80126EAC);
}



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



s32 func_8014F330(s32 arg0) {
    return func_801C3B88() == arg0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8014C2B0/func_8014F358.s")


typedef struct func_8014F400_Struct_Pos {
    u8 pad0[0x6];
    s16 unk6;
    s16 unk8;
    s16 unkA;
} func_8014F400_Struct_Pos;

typedef struct func_8014F400_Struct {
    u8 pad0[0x24];
    func_8014C2B0_Struct_Sub *unk24;
    u8 pad28[0x38 - 0x28];
    func_8014F400_Struct_Pos *unk38;
    u8 pad3C[0x90 - 0x3C];
    u8 unk90;
    u8 unk91;
    u8 unk92;
} func_8014F400_Struct;

typedef struct func_8014F400_Struct_Table {
    u8 pad0[0x6];
    u16 unk6;
    u8 pad8[0xC - 0x8];
    u16 unkC;
    u8 padE[0x14 - 0xE];
} func_8014F400_Struct_Table;

typedef struct func_8014F400_Struct_Mtx {
    u8 pad0[0x30];
    f32 unk30;
    f32 unk34;
    f32 unk38;
    f32 unk3C;
    f32 unk40;
    f32 unk44;
} func_8014F400_Struct_Mtx;

typedef struct func_8014F400_Struct_Obj {
    u8 pad0[0x2C];
    func_8014F400_Struct_Mtx *unk2C;
} func_8014F400_Struct_Obj;

typedef struct func_8014F400_Struct_G {
    u8 pad0[0xE8];
    func_8014F400_Struct_Obj *unkE8;
    u8 padEC[0x1E8 - 0xEC];
    f32 unk1E8;
    f32 unk1EC;
    f32 unk1F0;
    f32 unk1F4;
    f32 unk1F8;
    f32 unk1FC;
    u8 pad200[0x334 - 0x200];
    f32 unk334;
    f32 unk338;
    f32 unk33C;
    f32 unk340;
    f32 unk344;
    f32 unk348;
    u8 pad34C[0x380 - 0x34C];
    f32 unk380;
    f32 unk384;
    f32 unk388;
} func_8014F400_Struct_G;

#define GG ((func_8014F400_Struct_G *)D_801BBBF0)
#define TBL ((func_8014F400_Struct_Table *)D_8018294C)


void func_8014F400(arg0)
    func_8014F400_Struct *arg0;
{
    s32 angle;

    if (arg0->unk92 == 2) {
        GG->unk334 = (f32)arg0->unk38->unk6 / 10.0 -
                     func_8001EAD0(arg0->unk24->unk30->unk12) * ((f32)TBL[arg0->unk90].unk6 * D_80190688 + 50.0);
        GG->unk33C = (f32)arg0->unk38->unkA / 10.0 -
                     func_8001EB64(arg0->unk24->unk30->unk12) * ((f32)TBL[arg0->unk90].unk6 * D_80190690 + 50.0);
    } else {
        GG->unk334 = func_8001EAD0(arg0->unk24->unk30->unk12) * ((f32)TBL[arg0->unk90].unk6 * D_80190698 + 50.0) +
                     (f32)arg0->unk38->unk6 / 10.0;
        GG->unk33C = func_8001EB64(arg0->unk24->unk30->unk12) * ((f32)TBL[arg0->unk90].unk6 * D_801906A0 + 50.0) +
                     (f32)arg0->unk38->unkA / 10.0;
    }
    GG->unk338 = arg0->unk24->unk30->unk8 + 20.0f;
    if (arg0->unk92 == 2) {
        angle = (s16)(arg0->unk24->unk30->unk12 + 0x1000) & 0x1FFF;
    } else {
        angle = arg0->unk24->unk30->unk12;
    }
    GG->unk340 = func_8001EAD0(angle) * ((f32)TBL[arg0->unk90].unkC * 0.5 + D_801906A8) +
                 (f32)arg0->unk38->unk6 / 10.0;
    GG->unk344 = (f32)TBL[arg0->unk90].unk6 * D_801906B0 + 10.0f + (f32)arg0->unk38->unk8 / 10.0;
    GG->unk348 = func_8001EB64(angle) * ((f32)TBL[arg0->unk90].unkC * 0.5 + D_801906B8) +
                 (f32)arg0->unk38->unkA / 10.0;
    if (func_8010843C(GG->unk340, GG->unk344, GG->unk348, GG->unk334, GG->unk338, GG->unk33C) != 0) {
        GG->unk334 = GG->unk380;
        GG->unk338 = GG->unk384;
        GG->unk33C = GG->unk388;
    }
    GG->unk1E8 = GG->unkE8->unk2C->unk30;
    GG->unk1EC = GG->unkE8->unk2C->unk34;
    GG->unk1F0 = GG->unkE8->unk2C->unk38;
    GG->unk1F4 = GG->unkE8->unk2C->unk3C;
    GG->unk1F8 = GG->unkE8->unk2C->unk40;
    GG->unk1FC = GG->unkE8->unk2C->unk44;
    func_80005670(arg0, D_801826AC);
}


typedef struct func_8014F940_Struct_Cam {
    u8 pad0[0x30];
    f32 unk30;
    f32 unk34;
    f32 unk38;
    f32 unk3C;
    f32 unk40;
    f32 unk44;
} func_8014F940_Struct_Cam;
typedef struct func_8014F940_Struct_E8 {
    u8 pad0[0x2C];
    func_8014F940_Struct_Cam *unk2C;
} func_8014F940_Struct_E8;
typedef struct func_8014F940_Struct_G {
    u8 pad0[0xE8];
    func_8014F940_Struct_E8 *unkE8;
    u8 pad1[0x198 - 0xEC];
    f32 unk198;
    u8 pad2[0x1A0 - 0x19C];
    f32 unk1A0;
    u8 pad3[0x1E8 - 0x1A4];
    f32 unk1E8;
    f32 unk1EC;
    f32 unk1F0;
    f32 unk1F4;
    f32 unk1F8;
    f32 unk1FC;
    f32 unk200;
    u8 pad4[0x328 - 0x204];
    f32 unk328;
    f32 unk32C;
    f32 unk330;
    f32 unk334;
    f32 unk338;
    f32 unk33C;
    f32 unk340;
    f32 unk344;
    f32 unk348;
} func_8014F940_Struct_G;
typedef struct func_8014F940_Struct_P {
    u8 pad0[6];
    s16 unk6;
    s16 unk8;
    s16 unkA;
} func_8014F940_Struct_P;
typedef struct func_8014F940_Struct_A {
    u8 pad0[0x38];
    func_8014F940_Struct_P *unk38;
} func_8014F940_Struct_A;

#define GF ((func_8014F940_Struct_G *)D_801BBBF0)
extern f32 func_8002FC20(f32);
extern u8 D_801826C0[];

void func_8014F940(func_8014F940_Struct_A *arg0)
{
  func_8014F940_Struct_Cam *c;
  func_8014F940_Struct_P *p;
  f32 dx;
  f32 dz;
  f32 dy;
  f64 a;
  f64 b;
  f64 a2;
  f64 b2;
  ((func_8014F940_Struct_G *) D_801BBBF0)->unk1E8 = ((func_8014F940_Struct_G *) D_801BBBF0)->unkE8->unk2C->unk30;
  ((func_8014F940_Struct_G *) D_801BBBF0)->unk1EC = ((func_8014F940_Struct_G *) D_801BBBF0)->unkE8->unk2C->unk34;
  ((func_8014F940_Struct_G *) D_801BBBF0)->unk1F0 = ((func_8014F940_Struct_G *) D_801BBBF0)->unkE8->unk2C->unk38;
  ((func_8014F940_Struct_G *) D_801BBBF0)->unk1F4 = ((func_8014F940_Struct_G *) D_801BBBF0)->unkE8->unk2C->unk3C;
  ((func_8014F940_Struct_G *) D_801BBBF0)->unk1F8 = ((func_8014F940_Struct_G *) D_801BBBF0)->unkE8->unk2C->unk40;
  ((func_8014F940_Struct_G *) D_801BBBF0)->unk1FC = ((func_8014F940_Struct_G *) D_801BBBF0)->unkE8->unk2C->unk44;
  ((func_8014F940_Struct_G *) D_801BBBF0)->unk334 = ((func_8014F940_Struct_G *) D_801BBBF0)->unk328;
  ((func_8014F940_Struct_G *) D_801BBBF0)->unk338 = ((func_8014F940_Struct_G *) D_801BBBF0)->unk32C;
  ((func_8014F940_Struct_G *) D_801BBBF0)->unk33C = ((func_8014F940_Struct_G *) D_801BBBF0)->unk330;
  ((func_8014F940_Struct_G *) D_801BBBF0)->unk340 = ((func_8014F940_Struct_G *) D_801BBBF0)->unk198;
  ((func_8014F940_Struct_G *) D_801BBBF0)->unk344 = (((f64) ((f32) arg0->unk38->unk8)) / 10.0) + 15.0;
  ((func_8014F940_Struct_G *) D_801BBBF0)->unk348 = ((func_8014F940_Struct_G *) D_801BBBF0)->unk1A0;
  c = ((func_8014F940_Struct_G *) D_801BBBF0)->unkE8->unk2C;
  p = arg0->unk38;
  a = c->unk30;
  b = ((f64) ((f32) p->unk6)) / 10.0;
  if (a < b)
  {
    dx = -(a - b);
  }
  else
  {
    b2 = b;
    dx = a - b2;
  }
  a2 = c->unk34;
  b2 = ((f64) ((f32) p->unk8)) / 10.0;
  if (b2 > a2)
  {
    dy = -(a2 - b2);
  }
  else
  {
    dy = a2 - b2;
  }
  a = c->unk38;
  b = ((f64) ((f32) p->unkA)) / 10.0;
  if (a < b)
  {
    dz = -(a - b);
  }
  else
  {
    dz = a - b;
  }
  ((func_8014F940_Struct_G *) D_801BBBF0)->unk200 = func_8002FC20(((dx * dx) + (dy * dy)) + (dz * dz)) / 12.0;
  func_80005670(arg0, D_801826C0);
}
#undef GF

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8014C2B0/func_8014FB38.s")



void func_8014FEE0(s32 arg0, s32 arg1) {
    D_801BF180 = 1;
    func_800058DC(arg0, (void *) func_8014FF14);
}

#ifndef GG
#endif

extern u8 D_801904E8[];
extern f64 D_801906D0;
extern f64 D_801906D8;
extern f64 D_801906E0;
extern void func_80005700(s32);
extern void func_8011AAF4(u8 *, s32, s32, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);

typedef struct func_8014FF14_Struct {
    u8 pad0[0x1E8];
    f32 unk1E8;
    f32 unk1EC;
    f32 unk1F0;
    f32 unk1F4;
    f32 unk1F8;
    f32 unk1FC;
    u8 pad200[0x2AC - 0x200];
    u8 unk2AC;
    u8 pad2AD[0x334 - 0x2AD];
    f32 unk334;
    f32 unk338;
    f32 unk33C;
    f32 unk340;
    f32 unk344;
    f32 unk348;
} func_8014FF14_Struct;

#define S ((func_8014FF14_Struct *)D_801BBBF0)

void func_8014FF14(s32 arg0, s32 arg1) {
    f32 x;
    f32 a;
    f32 b;
    f32 c;
    f32 r;
    f32 r2;
    f32 r3;

    x = S->unk1E8;
    a = S->unk1EC;
    b = S->unk1F0;
    S->unk1E8 = x + (S->unk334 - x) * D_801906D0;
    S->unk1EC = a + (S->unk338 - a) * D_801906D8;
    S->unk1F0 = b + (S->unk33C - b) * D_801906E0;
    S->unk1F4 = S->unk1F4 + (S->unk340 - S->unk1F4) * 0.5;
    S->unk1F8 = S->unk1F8 + (S->unk344 - S->unk1F8) * 0.5;
    c = S->unk1FC;
    S->unk1FC = c + (S->unk348 - c) * 0.5;
    func_8011AAF4(D_801904E8, 0x88B, arg0, 0, 1, 0.0f, S->unk1E8, S->unk1EC, S->unk1F0, 0.0f, S->unk1F4, S->unk1F8, S->unk1FC, 0.0f, 35.0f, -1, -1);
    x = S->unk1E8;
    if (x < S->unk334) {
        r = -(x - S->unk334);
    } else {
        r = x - S->unk334;
    }
    if ((s32)r == 0) {
        a = S->unk1EC;
        if (a < S->unk338) {
            r2 = -(a - S->unk338);
        } else {
            r2 = a - S->unk338;
        }
        if ((s32)r2 == 0) {
            b = S->unk1F0;
            if (b < S->unk33C) {
                r3 = -(b - S->unk33C);
            } else {
                r3 = b - S->unk33C;
            }
            if ((s32)r3 == 0) {
                S->unk2AC = 1;
                D_801BF180 = 0;
                func_80005700(arg0);
            }
        }
    }
}
#undef S



void func_80150198(s32 arg0, s32 arg1) {
    func_800058DC(arg0, func_801501C0);
}

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

#ifndef GG
#endif

typedef struct func_8015032C_Struct_P {
    u8 pad0[6];
    s16 unk6;
    s16 unk8;
    s16 unkA;
    s16 unkC;
} func_8015032C_Struct_P;
typedef struct func_8015032C_Struct_O {
    u8 pad0[0x24];
    func_8014C2B0_Struct_Sub *unk24;
    u8 pad28[0x38 - 0x28];
    func_8015032C_Struct_P *unk38;
} func_8015032C_Struct_O;
typedef struct func_8015032C_Struct_R {
    f32 unk0;
    f32 unk4;
    f32 unk8;
    s16 unkC;
    s16 unkE;
} func_8015032C_Struct_R;
extern f32 D_801906E8;

s32 func_8015032C(f32 arg0, f32 arg1, f32 arg2, func_8015032C_Struct_R *arg3) {
    f32 pad;
    f32 sp78, sp74, sp70, sp6C;
    f32 dx, dz, d, best;
    s32 found;
    s32 idx;
    s32 i;
    func_8015032C_Struct_O *o;
    func_8014C2B0_Struct_Data *v;
    func_8015032C_Struct_P *p;
    f64 t;
    f64 a;

    found = 0;
    best = D_801906E8;
    idx = 0;
    for (i = 0; i < G->unk3B8; i++) {
        o = (func_8015032C_Struct_O *)G->unk3BC[i];
        v = o->unk24->unk30;
        if (arg0 < v->unk4) {
            dx = -(arg0 - v->unk4);
        } else {
            dx = arg0 - v->unk4;
        }
        if (arg2 < v->unkC) {
            dz = -(arg2 - v->unkC);
        } else {
            dz = arg2 - v->unkC;
        }
        d = func_8002FC20(dx * dx + dz * dz);
        if (d <= 30.0f && d < best) {
            p = o->unk38;
            if ((f64)(f32)p->unk8 / 10.0 <= arg1 && arg1 <= (f64)(f32)p->unk8 / 10.0 + 18.0) {
                sp78 = (f32)((f64)(f32)p->unk6 / 10.0);
                best = d;
                idx = i;
                sp74 = (f32)p->unk8 / 10.0;
                found = 1;
                sp70 = (f32)((f64)(f32)p->unkA / 10.0);
                sp6C = (f32)p->unkC;
            }
        }
    }
    if (found != 0) {
        arg3->unk0 = sp78;
        arg3->unk4 = sp74;
        arg3->unk8 = sp70;
        arg3->unkC = (s16)(s32)sp6C;
        arg3->unkE = idx;
    }
    return found;
}



s32 func_80150584(void) {
    s32 ret;

    ret = 0;
    return (D_801BC025 & 1) ? 1 : ret;
}


struct func_801505AC_Struct {
    u8 pad[0x3B8];
    u16 unk3B8;
    s32 unk3BC[1];
};


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



void func_801506EC(s32 arg0, s32 arg1) {
    func_8014F400();
    func_800179B0(D_801826E0);
    func_8012FFC0();
    func_800058DC(arg0, func_80150734);
}



void func_80150734(s32 arg0, s32 arg1) {
    if (func_800178E8() != 0) {
        if (func_8012FFC0() == 0) {
            func_800058DC(arg0, func_80150BAC);
            return;
        }
        func_800058DC(arg0, func_80150794);
    }
}

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


struct func_801509D8_Struct {
    u8 pad0[0x24];
    struct func_801509D8_StructC *unk24;
    u8 pad1[0x92 - 0x28];
    u8 unk92;
};

struct func_801509D8_StructA {
    u8 pad0[0x2C];
    struct func_801509D8_StructB *unk2C;
};

struct func_801509D8_StructB {
    u8 pad0[0x12];
    s16 unk12;
};

struct func_801509D8_StructC {
    u8 pad0[0x30];
    struct func_801509D8_StructB *unk30;
};

struct func_801509D8_StructLocal {
    s16 a;
    s16 pad0;
    s32 b;
    f32 c;
    u8 pad1[0x14];
};


void func_801509D8(struct func_801509D8_Struct *arg0, s32 arg1) {
    struct func_801509D8_StructLocal sp20;
    s16 var_a1;

    if (arg0->unk92 == 1) {
        var_a1 = (s16) (arg0->unk24->unk30->unk12 + 0x1000) & 0x1FFF;
    } else {
        var_a1 = arg0->unk24->unk30->unk12;
    }
    ((struct func_801509D8_StructA *) D_801BBCD0)->unk2C->unk12 = func_801FD284(((struct func_801509D8_StructA *) D_801BBCD0)->unk2C->unk12, var_a1, 0x3DCCCCCD, arg0);
    if (func_801C3044() == 0) {
        sp20.a = 0x1000;
        sp20.b = 0x0168002D;
        sp20.c = 3.0f;
        func_801C2F0C(4, (struct func_80150970_Struct *) &sp20);
        func_800058DC((s32) arg0, func_80150AB4);
    }
}

#define func_80150B30 func_80150B30__func_80150AB4
extern void func_80150B30(s32 arg0, s32 arg1);
#ifndef GG
#endif

extern void func_801C3B5C();
extern s32 D_8012FFC0();

void func_80150AB4(func_8014C2B0_Struct *arg0, s32 arg1) {
    if (func_801C3044() == 0) {
        func_80020718(0x3DE);
        if (D_8012FFC0() >= (s32)arg0->unkA6) {
            func_801C3B5C();
            func_800058DC(arg0, func_8014CDA0);
            return;
        }
        func_800058DC(arg0, func_80150B30);
    }
}
#undef func_80150B30



void func_80150B30(s32 arg0, s32 arg1) {
    func_80020718(0x3DD);
    func_800179B0(D_80182734);
    func_800058DC(arg0, func_80150B74);
}



void func_80150B74(u64 arg0) {
    if (func_800178E8(arg0) != 0) {
        func_800058DC(*(s32 *)&arg0, &func_80150BAC);
    }
}


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

#define func_8001EAD0 func_8001EAD0__func_80150C8C
#define func_8001EB64 func_8001EB64__func_80150C8C
#define func_8011AAF4 func_8011AAF4__func_80150C8C
#ifndef GG
float func_8001EAD0(short);
float func_8001EB64(short);
#endif

extern s32 func_8011AAF4(void *, s32, s32, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern u8 D_80190634[];
extern s32 D_801C2F0C(s32, void *);
extern func_8014F400_Struct_Obj *D_801BBCD8;

void func_80150C8C(s32 arg0, s32 arg1) {
    if (func_801C3044() == 0) {
        D_801C2F0C(1, NULL);
        func_8011AAF4(D_80190634, 0xA20, arg0, 2, 1, 0.0f,
                     D_801BBCD8->unk2C->unk30, D_801BBCD8->unk2C->unk34, D_801BBCD8->unk2C->unk38, 0.0f,
                     D_801BBCD8->unk2C->unk3C, D_801BBCD8->unk2C->unk40, D_801BBCD8->unk2C->unk44, 0.0f,
                     35.0f, -1, -1);
        D_801BBBF0[0x435] &= 0xFFFE;
        func_800058DC(arg0, func_8014C72C);
    }
}
#undef func_8001EAD0
#undef func_8001EB64
#undef func_8011AAF4

