#include "common.h"

extern f32 D_8025A058;
extern f32 D_8025A05C;
extern f32 D_8025A060;
extern f32 D_8025A064;
extern f32 D_8025A068;
extern f32 D_8025A06C;
extern f32 D_8025A070;
extern f32 D_8025A090;
extern f32 D_8025A094;
extern f32 D_8025A098;
extern f32 D_8025A09C;
extern f32 D_8025A0A0;
extern f32 D_8025A0A8;
extern f32 D_8025A0B8;
extern f32 D_8025A0BC;
extern f32 D_8025A0C0;
extern f32 D_8025A0C4;
extern f32 D_8025A0C8;
extern f32 D_8025A0CC;
extern f32 D_8025A0D0;
extern f32 D_8025A0D4;
extern f32 D_8025A0D8;
extern f32 D_8025A0DC;
extern f32 D_8025A0E0;
extern f32 D_8025A0E4;
extern f32 D_8025A0E8;
extern f32 D_8025A10C;
extern f32 D_8025A110;
extern f32 D_8025A114;
extern f32 D_8025A118;
extern f32 D_8025A160;
extern f32 D_8025A164;
extern f32 D_8025A168;
extern f32 D_8025A16C;
extern f32 D_8025A170;
extern f32 D_8025A174;
extern f32 D_8025A178;
extern f32 D_8025A17C;
extern f32 D_8025A180;
extern f32 D_8025A184;
extern f32 D_8025A188;
extern f32 D_8025A18C;
extern f32 D_8025A190;
extern f32 D_8025A194;
extern f32 D_8025A198;
extern f32 D_8025A19C;
extern f32 D_8025A1FC;
extern f32 D_8025A228;
extern f32 D_8025A250;
extern f32 D_8025A254;
extern f32 D_8025A268;
extern f64 D_8025A0B0;
extern f64 D_8025A218;
extern f64 D_8025A220;
extern f64 D_8025A230;
extern f64 D_8025A258;
extern f64 D_8025A260;
extern s16 D_80089354;
extern s32 D_80010550(void *, s32);
extern s32 D_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern s32 D_801BBC2C;
extern s32 D_8025A2F4;
extern s32 D_8025A2F8;
extern s32 D_8025A2FC;
extern s32 func_80005670(s32, void *);
extern s32 func_80010550(void **, s32, void **);
extern s32 func_800178E8(void);
extern s32 func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern s32 func_80126A0C(s32, s32, s32);
extern s32 func_80126CC0(void *, void *);
extern s32 func_801270C0(s32);
extern s32 func_8012C6B4(s32);
extern s32 func_801302CC();
extern s32 func_80133A24(s32);
extern s32 func_801505AC(s32);
extern s32 func_8015105C(s32);
extern s32 func_801516CC(s32);
extern s32 func_801517CC(s32);
extern s32 func_801C2FF8(void);
extern s32 func_801C3044(void);
extern u8 D_8017AF90[];
extern u8 D_80254A54[];
extern u8 D_80254A68[];
extern u8 D_80254B48[];
extern u8 D_80254B54[];
extern u8 D_80254B78[];
extern u8 D_80254BC8[];
extern u8 D_80254C18[];
extern u8 D_80254CE0[];
extern u8 D_80254E1C[];
extern u8 D_80254F6C[];
extern u8 D_80254FE0[];
extern u8 D_80255030[];
extern u8 D_8025513C[];
extern u8 D_80255324[];
extern u8 D_80259B7C[];
extern u8 D_80259BBC[];
extern u8 D_80259BFC[];
extern u8 D_80259C3C[];
extern u8 D_80259C7C[];
extern u8 D_80259D3C[];
extern u8 D_80259DFC[];
extern u8 D_80259E3C[];
extern u8 D_80259E9C[];
extern u8 D_80259EDC[];
extern u8 D_80259F1C[];
extern u8 func_8024E67C[];
#define func_8024F188 func_8024F188__decl
extern u8 func_8024F188[];
#define func_8024F818 func_8024F818__decl
extern u8 func_8024F818[];
extern u8 func_8024FCC0[];
#define func_80250334 func_80250334__decl
extern u8 func_80250334[];
extern void *D_8025A2F0;
extern void *func_801C3B7C(s32);
extern void func_80005700();
extern void func_800058DC(void *, void *);
extern void func_80005E44(void *, void *);
extern void func_80006214(void *);
extern void func_80017990(void *);
extern void func_800179B0(void *);
extern void func_8001E978(void *, s32, s32, s32, s32, s32, s32, s32);
extern void func_80020718(s32);
extern void func_80020744(s32);
extern void func_801268CC(s32);
extern void func_80126EAC(void);
extern void func_80129FB8(f32, f32, f32, f32, f32, f32, f32, s32, s32, s32, s32, s32, s32, s32, s32, f32, s32, s32);
extern void func_8012C89C(void *, s32, s32, s32);
extern void func_8012CF8C(void *, s32, s32, s32);
extern void func_80133980(s32);
extern void func_801339D0(s32);
extern void func_8013A1B4();
extern void func_8013B570(s32, s32, s32, s32, void *);
extern void func_8015115C(s32, void *);
extern void func_801512CC(s32, s32, s32, s32);
extern void func_80151430(s32, s32);
extern void func_80151700(s32, s32, void *);
extern void func_801C2F0C(s32, void *);
extern void func_801C3DC8(void *, s32, s32, f32, f32, f32, f32, f32, f32);
extern void func_801FA2E0(void);
extern void func_801FBB30(void);
extern void func_8024E43C();
extern void func_8024E60C(s32, s32);
extern void func_8024E87C(void *arg0, void *arg1);
extern void func_8024E8EC();
extern void func_8024E9A8();
extern void func_8024EB90();
extern void func_8024ED2C();
extern void func_8024ED80(s32 arg0, s32 arg1);
extern void func_8024EE04();
extern void func_8024EE60();
extern void func_8024EED0();
extern void func_8024EF28(s32 arg0, s32 arg1);
extern void func_8024EF6C();
extern void func_8024F024();
extern void func_8024F334();
extern void func_8024F3D8();
extern void func_8024F4D4();
extern void func_8024F624();
extern void func_8024F6C4();
extern void func_8024F9F0(s32 arg0, s32 arg1);
extern void func_8024FA7C(void *arg0, void *arg1);
extern void func_8024FAD8(s32 arg0, s32 arg1);
extern void func_8024FB64(void *arg0, void *arg1);
extern void func_802501B4();
extern void func_802501F4();
extern void func_80250914();
extern void func_80250C58();
extern void func_80380F94(f32, f32, f32, f32, f32, f32, s32);


typedef struct func_8024E3C0_Struct {
    u8 pad[0x3C];
    s16 unk3C;
} func_8024E3C0_Struct;


void func_8024E3C0(func_8024E3C0_Struct *arg0, s32 arg1) {
    if (func_80126CC0(arg0, func_80126EAC) != 0) {
        D_8025A2F0 = arg0;
        if (func_80133A24(0x7A) != 0) {
            func_800058DC(arg0, func_8024EF28);
            return;
        }
        arg0->unk3C = 0;
        func_800058DC(arg0, func_8024E43C);
    }
}


typedef struct func_8024E43C_StructV { s32 w[4]; } func_8024E43C_StructV;
typedef struct func_8024E43C_StructI {
    u8 pad0[4]; f32 x4; f32 x8; f32 xC; u8 pad10[0x14];
    u32 flags24; u8 pad28[8]; u32 ptr30; u8 pad34[0x17]; u8 b4B;
} func_8024E43C_StructI;
typedef struct func_8024E43C_StructO { u8 pad[0x30]; func_8024E43C_StructI *p; } func_8024E43C_StructO;
typedef struct func_8024E43C_StructA { func_8024E43C_StructO *a; func_8024E43C_StructO *b; } func_8024E43C_StructA;
typedef struct func_8024E43C_StructR { u8 pad[0xA6]; u8 unkA6; } func_8024E43C_StructR;
typedef struct func_8024E43C_StructS { u8 pad[0x3C]; s16 unk3C; } func_8024E43C_StructS;

extern func_8024E43C_StructV D_80164F40;

void func_8024E43C(func_8024E43C_StructS *arg0, func_8024E43C_StructA *arg1) {
    struct { s32 w[5]; } sp24;
    if (func_80133A24(0x79) != 0) {
        func_801FBB30();
        *(func_8024E43C_StructV *)&sp24 = D_80164F40;
        sp24.w[1] = 0x80000C00;
        func_80005E44(arg0, &sp24);
        sp24.w[1] = 0x80000300;
        func_80005E44(arg0, &sp24);
        func_80006214(arg0);
        func_8012C89C(arg0, 0, 0x28C, 0);
        arg1->a->p->flags24 |= 0x100;
        arg1->a->p->ptr30 = (u32)D_80254B78 | 0x40000000;
        arg1->a->p->x4 = 0.0f;
        arg1->a->p->x8 = 0.0f;
        arg1->a->p->xC = 0.0f;
        arg1->a->p->b4B = 0;
        func_8012C89C(arg0, 1, 0x28C, 1);
        arg1->b->p->flags24 |= 0x100;
        arg1->b->p->ptr30 = (u32)D_80254BC8 | 0x40000000;
        arg1->b->p->x4 = 0.0f;
        arg1->b->p->x8 = 0.0f;
        arg1->b->p->xC = 0.0f;
        arg1->b->p->b4B = 0;
        func_801339D0(0x73);
        func_801339D0(0x77);
        func_801339D0(0x7B);
        arg0->unk3C = 0;
        ((func_8024E43C_StructR *)func_801505AC(1))->unkA6 = 0xFF;
        func_800058DC(arg0, (void *)func_8024E60C);
    }
}



void func_8024E60C(s32 arg0, s32 arg1) {
    if (func_80126A0C(arg0, 0x85, 0) != 0) {
        D_8025A2F4 = func_80005670(arg0, D_80254A54);
        D_8025A2F8 = func_80005670(arg0, D_80254A68);
        func_800058DC(arg0, func_8024E67C);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file015/8024E3C0/func_8024E67C.s")



typedef struct func_8024E7EC_Struct {
    f32 unk0;
    f32 unk4;
    f32 unk8;
    s16 unkC;
    s32 unk10;
    f32 unk14;
    s16 unk18;
    s16 unk1A;
    s32 unk1C;
} func_8024E7EC_Struct;

void func_8024E7EC(s32 arg0, s32 arg1) {
    func_8024E7EC_Struct sp18;

    if (func_801C2FF8() != 0) {
        sp18.unk0 = 150.0f;
        sp18.unk4 = D_8025A058;
        sp18.unk8 = 0.0f;
        sp18.unkC = 0x1100;
        sp18.unk10 = 0x0168003E;
        sp18.unk14 = 1.0f;
        sp18.unk18 = 0;
        sp18.unk1A = 0x96;
        func_801C2F0C(2, &sp18.unk0);
        func_800058DC(arg0, func_8024E87C);
    }
}


typedef struct func_8024E87C_Obj {
    u8 pad[0x3C];
    s16 unk3C;
} func_8024E87C_Obj;

typedef struct func_8024E87C_Struct {
    s16 unk0;
    s32 unk4;
    f32 unk8;
    s16 unkC;
    u8 pad[0x10];
} func_8024E87C_Struct;


void func_8024E87C(void *arg0, void *arg1) {
    func_8024E87C_Struct sp18;

    if (func_801C3044() == 0) {
        sp18.unk0 = 0x1100;
        sp18.unk4 = 0x0348007A;
        sp18.unkC = 0x14;
        sp18.unk8 = 5.0f;
        func_801C2F0C(5, &sp18);
        ((func_8024E87C_Obj *)arg0)->unk3C = 0;
        func_800058DC(arg0, func_8024E8EC);
    }
}


struct func_8024E8EC_Struct {
    u8 pad[0x3C];
    u16 unk3C;
};

struct func_8024E8EC_Init {
    f32 unk0;
    f32 unk4;
    f32 unk8;
    s16 unkC;
    s32 unk10;
    f32 unk14;
    s16 unk18;
    s16 unk1A;
    s32 pad;
};


void func_8024E8EC(struct func_8024E8EC_Struct *arg0, s32 arg1) {
    struct func_8024E8EC_Init sp20;
    s32 temp_v0;

    temp_v0 = arg0->unk3C;
    arg0->unk3C = temp_v0 + 1;
    if (temp_v0 == 0x3C) {
        func_80133980(0x73);
    }
    if (func_80133A24(0x77) != 0) {
        func_801339D0(0x77);
        sp20.unkC = 0x1100;
        sp20.unk10 = 0x0168003F;
        sp20.unk18 = 0;
        sp20.unk1A = 0x96;
        sp20.unk0 = -45.0f;
        sp20.unk4 = 464.0f;
        sp20.unk8 = 0.0f;
        sp20.unk14 = D_8025A05C;
        func_801C2F0C(2, &sp20);
        func_800058DC(arg0, func_8024E9A8);
    }
}


struct func_8024EACC_Glob;
struct func_8024EACC_Obj;
extern struct func_8024EACC_Glob D_801BBBF0;
void func_8024EACC(struct func_8024EACC_Obj *arg0, s32 arg1);

struct func_8024E9A8_StructA {
    u8 pad[0x4];
    f32 unk4;
};
struct func_8024E9A8_StructB {
    u8 pad[0x2C];
    struct func_8024E9A8_StructA *unk2C;
};
struct func_8024E9A8_StructC {
    u8 pad[0xE0];
    struct func_8024E9A8_StructB *unkE0;
};
struct func_8024E9A8_StructD {
    u8 pad[0x3C];
    u16 unk3C;
};


#define GG(i) (*(f32 *)((u8 *)&D_801BBBF0 + 0x1E8 + 4 * (i)))

void func_8024E9A8(struct func_8024E9A8_StructD *arg0, s32 arg1) {
    if (((struct func_8024E9A8_StructC *)&D_801BBBF0)->unkE0->unk2C->unk4 < -10.0) {
        GG(0) = -73.5f;
        GG(1) = D_8025A060;
        GG(2) = D_8025A064;
        GG(3) = D_8025A068;
        GG(4) = D_8025A06C;
        GG(5) = D_8025A070;
        func_8011AAF4(D_80259B7C, 0x2DA, arg0, 0, 1, 0.0f, GG(0), GG(1), GG(2), 0.0f, GG(3), GG(4), GG(5), 0.0f, 35.0f, -1, -1);
        arg0->unk3C = 0;
        func_800058DC(arg0, func_8024EACC);
    }
}


struct func_8024EACC_Sub2 {
    u8 pad[0xC];
    f32 unkC;
    u8 pad2[0x2];
    s16 unk12;
};

struct func_8024EACC_Sub {
    u8 pad[0x2C];
    struct func_8024EACC_Sub2 *unk2C;
};

struct func_8024EACC_Glob {
    u8 pad[0xE0];
    struct func_8024EACC_Sub *unkE0;
};

struct func_8024EACC_Obj {
    u8 pad[0x3C];
    u16 unk3C;
};

struct func_8024EACC_Msg {
    s16 unk0;
    s32 unk4;
    f32 unk8;
    s16 unkC;
    u8 pad[0x12];
};


void func_8024EACC(struct func_8024EACC_Obj *arg0, s32 arg1) {
    struct func_8024EACC_Msg msg;

    if ((u32) arg0->unk3C++ < 1) {
        D_801BBBF0.unkE0->unk2C->unkC = 454.0f;
        D_801BBBF0.unkE0->unk2C->unk12 = 0x1800;
    }
    if (func_801C3044() == 0) {
        func_801C3B7C(func_801505AC(8));
        msg.unk0 = 0x1100;
        msg.unk4 = 0x0348007A;
        msg.unkC = 0x14;
        msg.unk8 = 5.0f;
        func_801C2F0C(5, &msg);
        arg0->unk3C = 0;
        func_800058DC(arg0, (void *) func_8024EB90);
    }
}

#define G_(i) (*(f32 *)((u8 *)&D_801BBBF0 + 0x1E8 + 4 * (i)))
struct func_8024ECAC_Struct;
void func_8024ECAC(struct func_8024ECAC_Struct *arg0, void *arg1);
extern f32 D_8025A074, D_8025A078, D_8025A07C, D_8025A080, D_8025A084, D_8025A088, D_8025A08C;

void func_8024EB90(struct func_8024EACC_Obj *arg0, s32 arg1) {
    if (arg0->unk3C++ >= 0x1E) {
        G_(0) = D_8025A074;
        G_(1) = D_8025A078;
        G_(2) = D_8025A07C;
        G_(3) = D_8025A080;
        G_(4) = D_8025A084;
        G_(5) = D_8025A088;
        func_8011AAF4(D_80259BBC, 0x309, arg0, 0, 1, 0.0f, G_(0), G_(1), G_(2), 0.0f, G_(3), G_(4), G_(5), 0.0f, D_8025A08C, -1, -1);
        func_80133980(0x73);
        func_800058DC(arg0, func_8024ECAC);
    }
}


struct func_8024ECAC_Struct {
    u8 pad[0x3C];
    s16 unk3C;
};

struct func_8024ECAC_Local {
    s16 a;
    s32 b;
    f32 c;
    s16 d;
    u8 pad[0x10];
};


void func_8024ECAC(struct func_8024ECAC_Struct *arg0, void *arg1) {
    struct func_8024ECAC_Local sp18;

    if (func_80133A24(0x77) != 0) {
        func_801339D0(0x77);
        sp18.a = 0x1100;
        sp18.b = 0x01900016;
        sp18.d = 0x14;
        sp18.c = 1.0f;
        func_801C2F0C(5, (f32 *)&sp18);
        arg0->unk3C = 0;
        func_800058DC(arg0, func_8024ED2C);
    }
}


typedef struct func_8024ED2C_Struct {
    u8 pad[0x3C];
    u16 unk3C;
} func_8024ED2C_Struct;


void func_8024ED2C(func_8024ED2C_Struct *arg0, s32 arg1) {
    s32 temp_v0;
    s32 cond;

    temp_v0 = arg0->unk3C;
    cond = arg0->unk3C > 0x13;
    arg0->unk3C = temp_v0 + 1;
    if (cond != 0) {
        func_80133980(0x73);
        func_800058DC(arg0, &func_8024ED80);
    }
}


struct func_8024EE04_Outer;

typedef struct func_8024ED80_Struct {
    s16 unk0;
    s32 unk4;
    f32 unk8;
    s16 unkC;
    u8 pad[0x10];
} func_8024ED80_Struct;

void func_8024ED80(s32 arg0, s32 arg1) {
    func_8024ED80_Struct sp18;

    if (func_80133A24(0x77) != 0) {
        func_801339D0(0x77);
        func_80020718(0x172);
        sp18.unk0 = 0x1000;
        sp18.unk4 = 0x01900016;
        sp18.unkC = 0x14;
        sp18.unk8 = 1.0f;
        func_801C2F0C(5, (f32 *) &sp18);
        func_800058DC((void *) arg0, (void *) func_8024EE04);
    }
}



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


typedef struct func_8024EE60_Struct { u8 pad[0x3C]; u16 unk3C; } func_8024EE60_Struct;
typedef struct func_8024EE60_Struct_T { u8 pad[0x4B]; u8 unk4B; } func_8024EE60_Struct_T;
typedef struct func_8024EE60_Struct_R { u8 pad[0x30]; func_8024EE60_Struct_T *unk30; } func_8024EE60_Struct_R;
typedef struct func_8024EE60_Struct_P { func_8024EE60_Struct_R *unk0; func_8024EE60_Struct_R *unk4; } func_8024EE60_Struct_P;


void func_8024EE60(func_8024EE60_Struct *arg0, func_8024EE60_Struct_P *arg1) {
    if (arg0->unk3C++ >= 0x46) {
        arg1->unk4->unk30->unk4B += 3;
        if (arg1->unk4->unk30->unk4B >= 0xFB) {
            arg1->unk4->unk30->unk4B = 0xFF;
            func_800058DC(arg0, func_8024EED0);
        }
    }
}


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


void func_8024EED0(s32 arg0, struct func_8024EED0_Pair *arg1) {
    if (func_80133A24(0x7B) != 0) {
        arg1->unk0->unk30->unk4B = 0;
        arg1->unk4->unk30->unk4B = 0;
        func_800058DC(arg0, func_8024EF28);
    }
}


void func_8024EF28(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}



void func_8024EF34(s32 arg0, s32 arg1) {
    func_8013B570(arg0, 0x30, 0, 4, func_8024EF6C);
}


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

extern func_8024EF6C_Vec D_80254AB8;

void func_8024EF6C(void *arg0, func_8024EF6C_Outer **arg1) {
    (*arg1)->unk2C->unk4 = 27.0f;
    (*arg1)->unk2C->unk8 = -130.0f;
    (*arg1)->unk2C->unkC = 406.0f;
    (*arg1)->unk2C->unk12 = 0x800;
    func_8013A1B4((void **)arg1, D_80254AB8, 0xFFFFFF);
    func_800058DC(arg0, (void *)func_8024F024);
}


typedef struct func_8024F024_Struct { u8 pad[0x5C]; s32 unk5C; } func_8024F024_Struct;
typedef struct func_8024F024_Glob { u8 pad[0x1E8]; f32 f[6]; } func_8024F024_Glob;
typedef struct func_8024F024_Vec { s32 a; s32 b; s32 c; } func_8024F024_Vec;
extern func_8024F024_Vec D_80254AC4;

void func_8024F024(func_8024F024_Struct *arg0, s32 volatile arg1) {
    extern s32 func_80010550();
    func_8024F024_Glob *g;
    s32 t = arg0->unk5C;

    func_80010550(arg1, t);
    if (func_80133A24(0x73) != 0) {
        func_801339D0(0x73);
        g = (func_8024F024_Glob *)&D_801BBBF0;
        g->f[0] = D_8025A090;
        g->f[1] = D_8025A094;
        g->f[2] = D_8025A098;
        g->f[3] = 27.5f;
        g->f[4] = D_8025A09C;
        g->f[5] = D_8025A0A0;
        func_8011AAF4(D_80259BFC, 0x3B0, arg0, 0, 1, 0.0f, g->f[0], g->f[1], g->f[2], 0.0f, g->f[3], g->f[4], g->f[5], 0.0f, 35.0f, -1, -1);
        func_8013A1B4(arg1, D_80254AC4, 0xFFFFFF);
        func_800179B0(D_80254CE0);
        func_800058DC(arg0, func_8024F188);
    }
}

#undef func_8024F188
#define D_80254AD0 D_80254AD0__func_8024F188
#define func_8024F24C func_8024F24C__func_8024F188
extern func_8024EF6C_Vec D_80254AD0;

typedef struct func_8024F188_StructArg {
    u8 pad[0x5C];
    s32 unk5C;
} func_8024F188_StructArg;

extern u8 D_80254D64[];
extern f32 D_8025A0A4;
extern void func_8024F24C(void);

void func_8024F188(func_8024F188_StructArg *arg0, void ** volatile arg1, void **arg2) {
    s32 id = arg0->unk5C;
    if (func_80010550(arg1, id, arg2) != 0 && func_800178E8() != 0) {
        func_80017990(D_80254D64);
        func_8013A1B4(arg1, D_80254AD0, 0xFFFFFF);
        ((func_8024EF6C_Inner *)D_801BBBF0.unkE0->unk2C)->unk4 = 150.0f;
        D_801BBBF0.unkE0->unk2C->unkC = D_8025A0A4;
        func_800058DC(arg0, func_8024F24C);
    }
}
#undef D_80254AD0
#undef func_8024F24C
#define func_8024F188 func_8024F188__decl

typedef struct func_8024F24C_Struct {
    u8 pad[0x5C];
    s32 unk5C;
} func_8024F24C_Struct;
extern func_8024EF6C_Vec D_80254ADC;
struct func_8024F2D4_Obj;
void func_8024F2D4(void *arg0, struct func_8024F2D4_Obj **arg1);

void func_8024F24C(func_8024F24C_Struct *arg0, void **arg1) {
    extern s32 func_80010550();
    s32 v = arg0->unk5C;
    if ((func_80010550(arg1, v) != 0) && (func_800178E8() != 0)) {
        func_8013A1B4(arg1, D_80254ADC, 0xFFFFFF);
        func_800058DC(arg0, func_8024F2D4);
    }
}


typedef struct func_8024F2D4_Sub {
    u8 pad[0x12];
    s16 unk12;
} func_8024F2D4_Sub;

typedef struct func_8024F2D4_Obj {
    u8 pad[0x2C];
    func_8024F2D4_Sub *unk2C;
} func_8024F2D4_Obj;


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


typedef struct func_8024F334_Struct {
    u8 pad[0x5C];
    s32 unk5C;
} func_8024F334_Struct;

extern s32 func_80011140(s32, s32, func_8024EF6C_Vec, s32);
extern func_8024EF6C_Vec D_80254AF4;

void func_8024F334(func_8024F334_Struct *arg0, volatile s32 arg1)
{
  func_8024EF6C_Vec *g = &D_80254AF4;
  s32 new_var;
  new_var = arg0->unk5C;
  if (func_80011140(arg1, new_var, *g, 0xA) != 0)
  {
    func_8013A1B4(arg1, *g, 0xFFFFFF);
    func_800058DC(arg0, func_8024F3D8);
  }
}


typedef struct func_8024F3D8_Glob {
    u8 pad[0x1E8];
    s32 unk1E8;
    s32 unk1EC;
    f32 unk1F0;
    f32 unk1F4;
    f32 unk1F8;
    f32 unk1FC;
} func_8024F3D8_Glob;

typedef struct func_8024F3D8_Sub {
    u8 pad[0xC];
    f32 unkC;
} func_8024F3D8_Sub;

typedef struct func_8024F3D8_Obj {
    u8 pad[0x2C];
    func_8024F3D8_Sub *unk2C;
} func_8024F3D8_Obj;

typedef struct func_8024F3D8_Arg0 {
    u8 pad[0x5C];
    s32 unk5C;
} func_8024F3D8_Arg0;


void func_8024F3D8(func_8024F3D8_Arg0 *arg0, func_8024F3D8_Obj **arg1)
{
  s32 new_var;
  func_8024F3D8_Glob *g;
  func_8024F3D8_Sub *temp_v0;
  extern s32 func_80010550();
  new_var = arg0->unk5C;
  func_80010550(arg1, new_var);
  g = (func_8024F3D8_Glob *) (&D_801BBBF0);
  g->unk1F0 = (f32) (((f64) (*arg1)->unk2C->unkC) - 3.5);
  g->unk1FC = (*arg1)->unk2C->unkC;
  func_801C3DC8(arg0, g->unk1E8, g->unk1EC, g->unk1F0, g->unk1F4, g->unk1F8, g->unk1FC, D_8025A0A8, 35.0f);
  temp_v0 = (*arg1)->unk2C;
  if (D_8025A0B0 <= ((f64) temp_v0->unkC))
  {
    temp_v0->unkC = 454.0f;
    func_800058DC(arg0, &func_8024F4D4);
  }
}

struct func_8024F588_Arg0 { u8 pad[0x5C]; s32 unk5C; };

typedef struct func_8024F4D4_Struct {
    u8 pad[0x5C];
    s32 unk5C;
} func_8024F4D4_Struct;

extern func_8024EF6C_Vec D_80254AE8;
extern void func_8024F588(struct func_8024F588_Arg0 *, void **);

void func_8024F4D4(func_8024F4D4_Struct *arg0, volatile s32 arg1)
{
  func_8024EF6C_Vec *g = &D_80254AE8;
  s32 new_var;
  new_var = arg0->unk5C;
  if ((func_80011140(arg1, new_var, *g, 0x28) != 0) && (func_800178E8() != 0))
  {
    func_8013A1B4(arg1, *g, 0xFFFFFF);
    func_800058DC(arg0, func_8024F588);
  }
}


struct func_8024F588_StructB { u8 pad[0x12]; s16 unk12; };
struct func_8024F588_StructA { u8 pad[0x2C]; struct func_8024F588_StructB *unk2C; };

extern func_8024EF6C_Vec D_80254AD0;

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


struct func_8024F624_Struct {
    u8 pad0[0x5C];
    s32 unk5C;
    u8 pad1[0x90 - 0x60];
    s16 unk90;
};


void func_8024F624(struct func_8024F624_Struct *arg0, void **arg1, void **arg2) {
    s32 f;

    f = arg0->unk5C;
    if (func_80010550(arg1, f, arg2) != 0 && func_800178E8() != 0) {
        func_801C3B7C(func_801505AC(8));
        func_8013A1B4(arg1, D_80254AE8, 0xFFFFFF);
        arg0->unk90 = 0;
        func_800058DC(arg0, func_8024F6C4);
    }
}


typedef struct func_8024F6C4_Sub2 { u8 pad[0x12]; s16 unk12; } func_8024F6C4_Sub2;
typedef struct func_8024F6C4_Sub { u8 pad[0x2C]; func_8024F6C4_Sub2 *unk2C; } func_8024F6C4_Sub;
typedef struct func_8024F6C4_Struct { u8 pad[0x5C]; s32 unk5C; u8 pad2[0x30]; u16 unk90; } func_8024F6C4_Struct;


#define GF(i) (*(f32 *)((u8 *)&D_801BBBF0 + 0x1E8 + 4 * (i)))

void func_8024F6C4(func_8024F6C4_Struct *arg0, func_8024F6C4_Sub **arg1) {
    s32 sp54;
    u16 t;
    func_8024F6C4_Sub2 *s;

    sp54 = arg0->unk5C;
    t = arg0->unk90;
    arg0->unk90 = t + 1;
    if (t >= 0x14) {
        if (t == 0x14) {
            GF(0) = D_8025A0B8;
            GF(1) = D_8025A0BC;
            GF(2) = D_8025A0C0;
            GF(3) = D_8025A0C4;
            GF(4) = D_8025A0C8;
            GF(5) = D_8025A0CC;
            func_8011AAF4(D_80259C3C, 0x456, arg0, 0, 1, 0.0f, GF(0), GF(1), GF(2), 0.0f, GF(3), GF(4), GF(5), 0.0f, 35.0f, -1, -1);
        }
        s = (*arg1)->unk2C;
        s->unk12 += 0x74;
        if (func_80010550((void **)arg1, sp54, (void **)arg0) != 0) {
            func_800058DC(arg0, func_8024F818);
        }
    }
}

#undef func_8024F818

struct func_8024F818_Struct {
    u8 pad[0x5C];
    s32 unk5C;
    u8 pad2[0x90 - 0x60];
    s16 unk90;
};

extern func_8024EF6C_Vec D_80254B00;
extern void func_8024F8C0();

void func_8024F818(struct func_8024F818_Struct *arg0, volatile s32 arg1)
{
  s32 new_var;
  new_var = arg0->unk5C;
  if (func_80011140(arg1, new_var, D_80254B00, 0xA) != 0)
  {
    func_8013A1B4(arg1, D_80254B00, 0xFFFFFF);
    arg0->unk90 = 0;
    func_800058DC(arg0, func_8024F8C0);
  }
}
#define func_8024F818 func_8024F818__decl


struct func_8024F984_Struct;
void func_8024F984(struct func_8024F984_Struct *arg0, volatile s32 arg1);

typedef struct func_8024F8C0_StructArg {
    u8 pad0[0x5C];
    s32 unk5C;
    u8 pad1[0x30];
    u16 unk90;
} func_8024F8C0_StructArg;

typedef struct func_8024F8C0_StructInner {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
} func_8024F8C0_StructInner;

typedef struct func_8024F8C0_StructOuter {
    u8 pad[0x2C];
    func_8024F8C0_StructInner *unk2C;
} func_8024F8C0_StructOuter;

void func_8024F8C0(func_8024F8C0_StructArg *arg0, func_8024F8C0_StructOuter **arg1) {
    s32 temp_v0;
    s32 sp18[1];
    s32 temp_a1;

    temp_v0 = arg0->unk90;
    temp_a1 = arg0->unk5C;
    sp18[0] = temp_v0;
    arg0->unk90 = temp_v0 + 1;
    func_80010550((void **)arg1, temp_a1, (void **)arg0);
    if (sp18[0] == 0) {
        func_80133980(0x77);
    }
    if (sp18[0] >= 0x78) {
        (*arg1)->unk2C->unk4 = D_8025A0D0;
        (*arg1)->unk2C->unkC = D_8025A0D4;
        (*arg1)->unk2C->unk12 = 0x800;
        func_800058DC(arg0, (void *)func_8024F984);
    }
}


typedef struct func_8024F984_Struct {
    u8 pad[0x5C];
    s32 unk5C;
} func_8024F984_Struct;


void func_8024F984(func_8024F984_Struct *arg0, volatile s32 arg1) {
    s32 temp_a1;

    temp_a1 = arg0->unk5C;
    if (func_80011140(arg1, temp_a1, D_80254AD0, 10) != 0) {
        func_800058DC(arg0, func_8024F9F0);
    }
}



void func_8024F9F0(s32 arg0, s32 arg1) {
    if (func_80133A24(0x73) != 0) {
        func_801339D0(0x73);
        func_800179B0(D_80254FE0);
        func_8013A1B4((void **) arg1, D_80254AD0, 0xFFFFFF);
        func_800058DC((void *) arg0, (void *) func_8024FA7C);
    }
}



void func_8024FA7C(void *arg0, void *arg1) {
    s32 tmp = *(s32 *)((u8 *)arg0 + 0x5C);

    if (func_80010550(arg1, tmp, arg1) != 0) {
        if (func_800178E8() != 0) {
            func_80133980(0x77);
            func_800058DC(arg0, &func_8024FAD8);
        }
    }
}



void func_8024FAD8(s32 arg0, s32 arg1) {
    if (func_80133A24(0x73) != 0) {
        func_801339D0(0x73);
        func_800179B0(D_80255030);
        func_8013A1B4((void **) arg1, D_80254AD0, 0xFFFFFF);
        func_800058DC((void *) arg0, (void *) func_8024FB64);
    }
}


typedef struct func_8024FB64_Struct {
    u8 pad[0x5C];
    s32 unk5C;
    u8 pad2[0x90 - 0x60];
    s16 unk90;
} func_8024FB64_Struct;


void func_8024FB64(void *arg0, void *arg1) {
    u8 *b;
    extern s32 func_80010550();
    s32 t = ((func_8024FB64_Struct *)arg0)->unk5C;

    if (func_80010550(arg1, t) != 0 && func_800178E8() != 0) {
        b = (u8 *)&D_801BBBF0;
        *(f32 *)(b + 0x1E8) = D_8025A0D8;
        *(f32 *)(b + 0x1EC) = -127.5f;
        *(f32 *)(b + 0x1F0) = D_8025A0DC;
        *(f32 *)(b + 0x1F4) = D_8025A0E0;
        *(f32 *)(b + 0x1F8) = D_8025A0E4;
        *(f32 *)(b + 0x1FC) = D_8025A0E8;
        func_8011AAF4(D_80259C7C, 0x4C8, arg0, 0, 1, 0.0f, *(f32 *)(b + 0x1E8), *(f32 *)(b + 0x1EC), *(f32 *)(b + 0x1F0), 0.0f, *(f32 *)(b + 0x1F4), *(f32 *)(b + 0x1F8), *(f32 *)(b + 0x1FC), 0.0f, 35.0f, -1, -1);
        func_8013A1B4(arg1, *(func_8024EF6C_Vec *)((u8 *)&D_80254AB8 + 0x54), 0xFFFFFF);
        ((func_8024FB64_Struct *)arg0)->unk90 = 0;
        func_800058DC(arg0, func_8024FCC0);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file015/8024E3C0/func_8024FCC0.s")


#define func_8024FECC func_8024FECC__decl1070
void func_8024FECC(struct func_802433D4_Struct *arg0, s32 arg1);

typedef struct func_8024FE38_Struct {
    u8 pad[0x5C];
    s32 unk5C;
} func_8024FE38_Struct;


void func_8024FE38(func_8024FE38_Struct *arg0, s32 arg1, s32 arg2) {
    s32 val = arg0->unk5C;

    if ((func_80010550(arg1, val, arg2) != 0) && (func_800178E8() != 0)) {
        func_8013A1B4((void **)arg1, D_80254AD0, 0xFFFFFF);
        func_800179B0(D_8025513C);
        func_800058DC(arg0, (void *)func_8024FECC);
    }
}
#undef func_8024FECC

#define func_8024FF60 func_8024FF60__func_8024FECC
#define func_8024FF60_Struct func_8024FF60_Struct__func_8024FECC
typedef struct func_8024FF60_Struct {
    u8 pad[0x5C];
    s32 unk5C;
} func_8024FF60_Struct;
extern void func_8024FF60(func_8024FF60_Struct *arg0, s32 arg1, s32 arg2);
#define XCAT2(a, b) a##b
#define XCAT(a, b) XCAT2(a, b)
#define func_8024F188 XCAT(func_8024F188_, __LINE__)
#define func_8024F24C XCAT(func_8024F24C_, __LINE__)
#define func_8024F818 XCAT(func_8024F818_, __LINE__)
#define func_8024FFF4 XCAT(func_8024FFF4_, __LINE__)

typedef struct func_8024FECC_Struct {
    u8 pad[0x5C];
    s32 unk5C;
} func_8024FECC_Struct;

extern u8 D_8025522C[];

void func_8024FECC(func_8024FECC_Struct *arg0, s32 arg1, s32 arg2) {
    s32 val = arg0->unk5C;

    if ((func_80010550((void **)arg1, val, (void **)arg2) != 0) && (func_800178E8() != 0)) {
        func_8013A1B4((void **)arg1, D_80254AC4, 0xFFFFFF);
        func_800179B0(D_8025522C);
        func_800058DC(arg0, (void *)func_8024FF60);
    }
}
#undef XCAT2
#undef XCAT
#undef func_8024F188
#undef func_8024F24C
#undef func_8024F818
#undef func_8024FFF4
#undef func_8024FF60
#undef func_8024FF60_Struct

extern func_8024EF6C_Vec D_80254B0C;

#define func_8024FFF4 func_8024FFF4__decl1131
void func_8024FFF4(struct func_802433D4_Struct *arg0, s32 arg1);

typedef struct func_8024FF60_Struct {
    u8 pad[0x5C];
    s32 unk5C;
} func_8024FF60_Struct;


void func_8024FF60(func_8024FF60_Struct *arg0, s32 arg1, s32 arg2) {
    s32 val = arg0->unk5C;

    if ((func_80010550(arg1, val, arg2) != 0) && (func_800178E8() != 0)) {
        func_8013A1B4((void **)arg1, D_80254B0C, 0xFFFFFF);
        func_80017990(D_80255324);
        func_800058DC(arg0, (void *)func_8024FFF4);
    }
}
#undef func_8024FFF4

#define func_80010550 func_80010550__func_8024FFF4
#define func_80250110 func_80250110__func_8024FFF4
#define func_80250110_Struct func_80250110_Struct__func_8024FFF4
typedef struct func_80250110_Struct {
    u8 pad[0x5C];
    s32 unk5C;
} func_80250110_Struct;
extern void func_80250110(func_80250110_Struct *arg0, volatile s32 arg1);
#define CAT2(a, b) a##b
#define CAT(a, b) CAT2(a, b)
#define func_8024F188 CAT(func_8024F188_, __LINE__)
#define func_8024F24C CAT(func_8024F24C_, __LINE__)
#define func_8024F818 CAT(func_8024F818_, __LINE__)
#define func_8024FFF4 CAT(func_8024FFF4_, __LINE__)
extern s32 func_80010550(void **, s32);
#undef func_8024F188
#undef func_8024F24C
#undef func_8024F818
#undef func_8024FFF4

extern u8 D_80259CFC[];
extern f32 D_8025A0F4;
extern f32 D_8025A0F8;
extern f32 D_8025A0FC;
extern f32 D_8025A100;
extern f32 D_8025A104;
extern f32 D_8025A108;

typedef struct func_8024FFF4_Struct {
    u8 pad[0x5C];
    s32 unk5C;
} func_8024FFF4_Struct;

void func_8024FFF4(func_8024FFF4_Struct *arg0, void **arg1) {
    s32 t = arg0->unk5C;

    if (func_80010550(arg1, t) != 0 && func_800178E8() != 0) {
        GF(0) = D_8025A0F4;
        GF(1) = D_8025A0F8;
        GF(2) = D_8025A0FC;
        GF(3) = D_8025A100;
        GF(4) = D_8025A104;
        GF(5) = D_8025A108;
        func_8011AAF4(D_80259CFC, 0x520, arg0, 0, 1, 0.0f, GF(0), GF(1), GF(2), 0.0f, GF(3), GF(4), GF(5), 0.0f, 35.0f, -1, -1);
        func_800058DC(arg0, func_80250110);
    }
}
#undef CAT2
#undef CAT
#undef func_80010550
#undef func_80250110
#undef func_80250110_Struct


typedef struct func_80250110_Struct {
    u8 pad[0x5C];
    s32 unk5C;
} func_80250110_Struct;

extern func_8024EF6C_Vec D_80254B24;

void func_80250110(func_80250110_Struct *arg0, volatile s32 arg1)
{
  func_8024EF6C_Vec *g = &D_80254B24;
  s32 new_var;
  new_var = arg0->unk5C;
  if (func_80011140(arg1, new_var, *g, 0x1E) != 0)
  {
    func_8013A1B4(arg1, *g, 0xFFFFFF);
    func_800058DC(arg0, func_802501B4);
  }
}


struct func_802501B4_Struct {
    u8 pad[0x5C];
    s32 unk5C;
};


void func_802501B4(struct func_802501B4_Struct *arg0, s32 arg1) {
    s32 temp = arg0->unk5C;

    if (func_80010550(arg1, temp, arg1) != 0) {
        func_800058DC(arg0, &func_802501F4);
    }
}

extern func_8024EF6C_Vec D_80254B30;

void func_802501F4(func_8024F984_Struct *arg0, volatile s32 arg1) {
    s32 t = arg0->unk5C;
    if (func_80011140(arg1, t, D_80254B30, 0x14) != 0) {
        GF(0) = D_8025A10C;
        GF(1) = -113.0f;
        GF(2) = 454.0f;
        GF(3) = D_8025A110;
        GF(4) = D_8025A114;
        GF(5) = D_8025A118;
        func_8011AAF4(D_80259D3C, 0x54D, arg0, 0, 1, 0.0f, GF(0), GF(1), GF(2), 0.0f, GF(3), GF(4), GF(5), 0.0f, 35.0f, -1, -1);
        *(s16 *)((u8 *)arg0 + 0x90) = 0;
        func_800058DC(arg0, func_80250334);
    }
}

#undef func_80250334
#define func_802505C0 func_802505C0__func_80250334
#define func_802505C0_Struct func_802505C0_Struct__func_80250334
#define func_802505C0_StructB func_802505C0_StructB__func_80250334
#define func_802515AC func_802515AC__func_80250334
#define func_802515AC_Struct func_802515AC_Struct__func_80250334
struct func_802515AC_Struct {
    u8 pad[0x92];
    u16 unk92;
};
typedef struct func_802505C0_Struct {
    u8 pad[0x5C];
    s32 unk5C;
    u8 pad60[0x30];
    u16 unk90;
} func_802505C0_Struct;
typedef struct func_802505C0_StructB { u8 pad[0x22]; u8 unk22; } func_802505C0_StructB;
extern void func_802505C0(func_802505C0_Struct *arg0, func_802505C0_StructB **arg1);
extern void func_802515AC(struct func_802515AC_Struct *arg0);
#define LP(p, l) LQ(p, l)
#define LQ(p, l) p##_##l
#define func_80250334 D_80250334
#define func_8024F188 LP(fA, __LINE__)
#define func_8024F24C LP(fB, __LINE__)
#define func_8024F818 LP(fC, __LINE__)
#define func_8024FFF4 LP(fD, __LINE__)
#undef func_80250334
#undef func_8024F188
#undef func_8024F24C
#undef func_8024F818
#undef func_8024FFF4

typedef struct func_80250334_StructA {
    u8 pad[0x4];
    f32 unk4;
    u8 pad8[0x4];
    f32 unkC;
} func_80250334_StructA;

typedef struct func_80250334_StructB {
    u8 pad[0x2C];
    func_80250334_StructA *unk2C;
} func_80250334_StructB;

typedef struct func_80250334_Struct {
    u8 pad[0x90];
    u16 unk90;
} func_80250334_Struct;

extern func_8024EF6C_Vec D_80254B3C;
extern u8 D_80259D7C[];
extern u8 D_80259DBC[];
extern f32 D_8025A11C;
extern f32 D_8025A120;
extern f32 D_8025A124;
extern f32 D_8025A128;
extern f32 D_8025A12C;
extern f32 D_8025A130;
extern f32 D_8025A134;
extern f32 D_8025A138;
extern f32 D_8025A13C;

void func_80250334(func_80250334_Struct *arg0, func_80250334_StructB **arg1) {
    s32 v = arg0->unk90;

    arg0->unk90++;
    if (v == 0) {
        (*arg1)->unk2C->unk4 = D_8025A11C;
        (*arg1)->unk2C->unkC = D_8025A120;
    }
    if (v == 20) {
        func_80133980(0x77);
    }
    if (v >= 30) {
        func_802515AC((struct func_802515AC_Struct *)arg0);
    }
    if (v == 50) {
        GF(0) = D_8025A124;
        GF(1) = D_8025A128;
        GF(2) = 454.0f;
        GF(3) = D_8025A12C;
        GF(4) = D_8025A130;
        GF(5) = D_8025A134;
        func_8011AAF4(D_80259D7C, 0x575, arg0, 0, 1, 0.0f, GF(0), GF(1), GF(2), 0.0f, GF(3), GF(4), GF(5), 0.0f, 35.0f, -1, -1);
    }
    if (v == 100) {
        GF(0) = D_8025A138;
        GF(1) = -116.0f;
        GF(2) = 450.0f;
        GF(3) = D_8025A13C;
        GF(4) = -111.5f;
        GF(5) = 450.0f;
        func_8011AAF4(D_80259DBC, 0x582, arg0, 0, 1, 0.0f, GF(0), GF(1), GF(2), 0.0f, GF(3), GF(4), GF(5), 0.0f, 35.0f, -1, -1);
        func_8013A1B4(arg1, D_80254B3C, 0xFFFFFF);
        arg0->unk90 = 0;
        func_800058DC(arg0, func_802505C0);
    }
}
#undef LP
#undef LQ
#undef func_802505C0
#undef func_802505C0_Struct
#undef func_802505C0_StructB
#undef func_802515AC
#undef func_802515AC_Struct
#define func_80250334 func_80250334__decl

typedef struct func_802507D8_Struct {
    u8 pad[0x90];
    u16 unk90;
} func_802507D8_Struct;
void func_802507D8(func_802507D8_Struct *arg0, void *arg1);
struct func_802515AC_Struct {
    u8 pad[0x92];
    u16 unk92;
};
void func_802515AC(struct func_802515AC_Struct *arg0);

typedef struct func_802505C0_Struct {
    u8 pad[0x5C];
    s32 unk5C;
    u8 pad60[0x30];
    u16 unk90;
} func_802505C0_Struct;
typedef struct func_802505C0_StructB { u8 pad[0x22]; u8 unk22; } func_802505C0_StructB;
extern f32 D_8025A140, D_8025A144, D_8025A148, D_8025A14C, D_8025A150, D_8025A154, D_8025A158, D_8025A15C;

void func_802505C0(func_802505C0_Struct *arg0, func_802505C0_StructB **arg1) {
    s32 sp5C;
    s32 sp58;

    sp5C = arg0->unk5C;
    sp58 = arg0->unk90++;
    func_802515AC((struct func_802515AC_Struct *)arg0);
    D_80010550(arg1, sp5C);
    if (sp58 == 0x82) {
        D_80089354 = 0;
        func_8001E978(arg0, 0xFF, 0xFF, 0xFF, 0x1E, 0, 1, 0);
    }
    if (D_8011AAF4(D_80259DFC, 0x5A4, arg0, 0, 2, D_8025A140, D_8025A144, GG(1), GG(2), 0.0f, GG(3), GG(4), GG(5), 0.0f, 35.0f, -1, -1) == 0) {
        GG(0) = D_8025A148;
        GG(1) = D_8025A14C;
        GG(2) = D_8025A150;
        GG(3) = D_8025A154;
        GG(4) = D_8025A158;
        GG(5) = D_8025A15C;
        func_8011AAF4(D_80259E3C, 0x5B0, arg0, 0, 1, 0.0f, GG(0), GG(1), GG(2), 0.0f, GG(3), GG(4), GG(5), 0.0f, 35.0f, -1, -1);
        (*arg1)->unk22 = 0;
        func_80133980(0x7B);
        arg0->unk90 = 0;
        func_800058DC(arg0, func_802507D8);
    }
}




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

void *func_80251E44(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5);


void func_80250814(s32 arg0, s32 arg1)
{
  s8 *base;
  int new_var;
  if (func_80133A24(0x7B) != 0)
  {
    D_8025A2FC = func_8015105C(0x149);
    func_80251E44(-160.0f, -123.0f, 460.0f, 0.0f, 0.0f, D_8025A160);
    func_80251E44(-162.0f, -123.0f, 440.0f, 0.0f, 0.0f, D_8025A164);
    base = (s8 *) (&D_801BBBF0);
    base[0xF20] = 0x20;
    new_var = 0xFF;
    base[0xF21] = 0x20;
    base[0xF22] = 0x20;
    base[0xF23] = new_var;
    base[0xF24] = new_var;
    base[0xF25] = new_var;
    base[0xF26] = -0x40;
    base[0xF27] = 0;
    base[0xF28] = 0;
    base[0xF29] = 0;
    base[0xF2A] = 0;
    base[0xF2B] = 0;
    base[0xF2C] = -0x40;
    base[0xF2D] = 0;
    base[0xF2E] = 0;
    func_800058DC((void *) arg0, (void *) func_80250914);
  }
}

typedef struct func_80250AB0_Struct {
    u8 pad[0x90];
    u16 unk90;
} func_80250AB0_Struct;
void func_80250AB0(func_80250AB0_Struct *arg0, s32 arg1);


typedef struct func_80250914_Struct { u8 pad[0x90]; s16 unk90; } func_80250914_Struct;

void func_80250914(func_80250914_Struct *arg0, s32 arg1) {
    s32 i;

    if (func_801517CC(D_8025A2FC) != 0) {
        func_801512CC(D_8025A2FC, 0xC340B333, 0xC3020000, 0x43E13333);
        func_80151430(D_8025A2FC, 0x800);
        func_8015115C(D_8025A2FC, D_80254B48);
        i = 0;
        if (func_801516CC(D_8025A2FC) > 0) {
            do {
                func_80151700(D_8025A2FC, i & 0xFF, D_8017AF90);
                i += 1;
            } while (i < func_801516CC(D_8025A2FC));
        }
        D_80089354 = 0;
        func_8001E978(D_8025A2F0, 0xFF, 0xFF, 0xFF, 0x1E, 0, 2, 0);
        func_8011AAF4(D_80259E9C, 0x607, arg0, 0, 1, 0.0f, D_8025A168, D_8025A16C, 450.0f, 0.0f, D_8025A170, D_8025A174, 450.0f, 0.0f, 35.0f, -1, -1);
        arg0->unk90 = 0;
        func_800058DC(arg0, func_80250AB0);
    }
}



void func_80250AB0(func_80250AB0_Struct *arg0, s32 arg1) {
    arg0->unk90 = arg0->unk90 + 1;
    if (func_8011AAF4(D_80259EDC, 0x618, arg0, 0, 2, D_8025A178, D_8025A17C, -124.0f, 450.0f, 4294967296.0f, D_8025A180, D_8025A184, 450.0f, 0.0f, 35.0f, -1, -1) == 0) {
        func_8011AAF4(D_80259F1C, 0x61C, arg0, 0, 1, 0.0f, D_8025A188, D_8025A18C, D_8025A190, 0.0f, D_8025A194, D_8025A198, D_8025A19C, 0.0f, 35.0f, -1, -1);
        func_80251E44(-180.0f, -130.0f, 450.0f, 0.06f, 0.0f, 0.0f);
        arg0->unk90 = 0;
        func_800058DC(arg0, func_80250C58);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file015/8024E3C0/func_80250C58.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/8024E3C0/func_80250DDC.s")


typedef struct func_80251504_StructObj {
    u8 pad[0x90];
    u16 unk90;
} func_80251504_StructObj;
typedef struct func_80251504_StructGlobal {
    u8 pad[4];
    s16 unk4;
} func_80251504_StructGlobal;

extern func_80251504_StructGlobal D_801BBF90;

void func_80251504(func_80251504_StructObj *arg0, s32 arg1) {
    s32 timer;

    timer = arg0->unk90++;
    if (timer == 0x23) {
        func_8015115C(D_8025A2FC, D_80254B54);
    }
    if (timer == 0x78) {
        func_801FA2E0();
    }
    if ((timer >= 0x96) && (func_801270C0(D_8025A2FC) != 0)) {
        D_801BBF90.unk4 = 0x7F;
        func_801268CC(0);
        func_80020744(7);
        func_80005700(arg0);
    }
}



struct func_802515AC_Vec {
    u8 pad[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
};

struct func_802515AC_Node {
    u8 pad[0x2C];
    struct func_802515AC_Vec *unk2C;
};

struct func_802515AC_Root {
    u8 pad[0x24];
    struct func_802515AC_Node *unk24;
};


void func_802515AC(struct func_802515AC_Struct *arg0) {
    s32 temp_v0;
    s32 sp28;
    struct func_802515AC_Vec *temp_v1;

    if (!((s32) arg0->unk92 % 2)) {
        sp28 = func_8012C6B4(0x8C);
        temp_v0 = func_8012C6B4(0x8C);
        temp_v1 = ((struct func_802515AC_Root *) D_8025A2F4)->unk24->unk2C;
        func_80380F94((f32) (((f64) (sp28 - 0x46) / 10.0) + (f64) temp_v1->unk4), temp_v1->unk8, (f32) (((f64) (temp_v0 - 0x46) / 10.0) + (f64) temp_v1->unkC), 0.0f, D_8025A1FC, 0.0f, 3);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file015/8024E3C0/func_80251688.s")


typedef struct func_80251884_Obj {
    u8 pad[0x12];
    s16 unk12;
    u8 pad2[0x4];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
} func_80251884_Obj;

typedef struct func_80251884_Ref {
    u8 pad[0x30];
    func_80251884_Obj *unk30;
} func_80251884_Ref;

typedef struct func_80251884_Arg {
    u8 pad[0x90];
    f32 unk90;
    f32 unk94;
    f32 unk98;
} func_80251884_Arg;


void func_80251884(func_80251884_Arg *arg0, func_80251884_Ref **arg1)
{
  func_80251884_Obj *temp_v0;
  func_80251884_Arg *g;
  g = arg0;
  temp_v0 = (*arg1)->unk30;
  temp_v0->unk12 = (((((((((((((temp_v0->unk12 + 0x22) & 0xFFFF) & 0xFFFF) & 0xFFFF) & 0xFFFF) & 0xFFFF) & 0xFFFF) & 0xFFFF) & 0xFFFF) & 0xFFFF) & 0xFFFF) & 0xFFFF) & 0xFFFF) & 0x1FFF;
  g->unk94 = (f32) (((f64) g->unk94) + D_8025A218);
  if (D_8025A220 < ((f64) g->unk94))
  {
    g->unk94 = D_8025A228;
  }
  {
    f64 k;
    k = D_8025A230;
    (*arg1)->unk30->unk18 = (f32) (((f64) g->unk90) * k);
    (*arg1)->unk30->unk1C = (f32) (((f64) g->unk94) * k);
    (*arg1)->unk30->unk20 = (f32) (((f64) g->unk98) * k);
  }
  if (func_80133A24(0x7B) != 0)
  {
    func_80005700(g);
  }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file015/8024E3C0/func_80251978.s")


typedef struct func_80251B6C_Struct_Obj {
    u8 pad[0x12];
    s16 unk12;
    u8 pad2[0x4B - 0x14];
    u8 unk4B;
} func_80251B6C_Struct_Obj;

typedef struct func_80251B6C_Struct_Ref {
    u8 pad[0x30];
    func_80251B6C_Struct_Obj *unk30;
} func_80251B6C_Struct_Ref;

void func_80251B6C(s32 arg0, func_80251B6C_Struct_Ref **arg1)
{
  func_80251B6C_Struct_Obj *temp_v0;
  temp_v0 = (*arg1)->unk30;
  temp_v0->unk12 = (s16) ((((temp_v0->unk12 - 0x2D) & 0xFFFF) & 0xFFFF) & 0x1FFF);
  temp_v0 = (*arg1)->unk30;
  temp_v0->unk4B = (u8) (temp_v0->unk4B + 3);
  temp_v0 = (*arg1)->unk30;
  if (((s32) temp_v0->unk4B) >= 0xFB)
  {
    temp_v0->unk4B = 0xFA;
  }
  if (func_80133A24(0x7B) != 0)
  {
    func_80005700(arg0);
  }
}

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
void func_80251DB4(struct func_80251DB4_Struct_Arg0 *arg0, struct func_80251DB4_Struct_Node **arg1);
typedef struct func_80251BEC_StructO {
    u8 pad0[4];
    f32 unk4; f32 unk8; f32 unkC;
    u8 pad1[8];
    f32 unk18; f32 unk1C; f32 unk20;
    u32 unk24;
    u8 pad2[8];
    u32 unk30;
    u8 pad3[0x14];
    u8 unk48; u8 unk49; u8 unk4A; u8 unk4B; u8 unk4C; u8 unk4D; u8 unk4E;
} func_80251BEC_StructO;
typedef struct func_80251BEC_StructN { u8 pad[0x30]; func_80251BEC_StructO *unk30; } func_80251BEC_StructN;
typedef struct func_80251BEC_StructA { u8 pad[0x90]; f32 unk90; f32 unk94; f32 unk98; } func_80251BEC_StructA;
void func_80251BEC(func_80251BEC_StructA *arg0, func_80251BEC_StructN **arg1) {
    register f32 k;
    struct { s32 a[3]; } sp20;
    *(func_8024E43C_StructV *)&sp20 = D_80164F40;
    sp20.a[1] = 0x80000600;
    func_80005E44(arg0, &sp20);
    func_80006214(arg0);
    func_8012C89C(arg0, 0, 3, 5);
    func_8012CF8C(arg0, (s32)(*arg1)->unk30 + 0x40, 0x28C, 2);
    k = D_8025A250;
    (*arg1)->unk30->unk24 |= 0x60300;
    (*arg1)->unk30->unk30 = (u32)D_80254C18 | 0x40000000;
    (*arg1)->unk30->unk4 = arg0->unk90;
    (*arg1)->unk30->unk8 = arg0->unk94;
    (*arg1)->unk30->unkC = arg0->unk98;
    (*arg1)->unk30->unk48 = 0xFF;
    (*arg1)->unk30->unk49 = 0xFF;
    (*arg1)->unk30->unk4A = 0xFF;
    (*arg1)->unk30->unk4B = 0xFF;
    (*arg1)->unk30->unk4C = 0x80;
    (*arg1)->unk30->unk4D = 0x80;
    (*arg1)->unk30->unk4E = 0x80;
    (*arg1)->unk30->unk1C = k;
    (*arg1)->unk30->unk20 = k;
    if (func_801302CC() == 0) {
        (*arg1)->unk30->unk18 = D_8025A254;
    } else {
        (*arg1)->unk30->unk18 = 0.25f;
    }
    func_800058DC(arg0, (void *)func_80251DB4);
}






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



void func_80251EF8(void) {
    u8 pad[4];
    s32 sp50;

    sp50 = func_8012C6B4(0x64);
    func_80129FB8((f32) (((f64) (sp50 - 0x32) / 10.0) + D_8025A258), -130.0f, (f32) (((f64) (func_8012C6B4(0x64) - 0x32) / 10.0) + D_8025A260), 0.0f, 1.0f, 0.0f, 0.0f, 0xFF, 0xFF, 0xFF, 0x14, 0xFF, 0x76, 0xDC, -7, D_8025A268, 0x15, 0);
}

