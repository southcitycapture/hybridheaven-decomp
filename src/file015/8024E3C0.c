#include "common.h"

extern void func_800058DC(void *, void *);
extern s32 func_80133A24(s32);
extern void func_8024EF28(s32 arg0, s32 arg1);

typedef struct func_8024E3C0_Struct {
    u8 pad[0x3C];
    s16 unk3C;
} func_8024E3C0_Struct;

extern s32 func_80126CC0(void *, void *);
extern void func_80126EAC(void);
extern void func_8024E43C();
extern void *D_8025A2F0;

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

#pragma GLOBAL_ASM("asm/nonmatchings/file015/8024E3C0/func_8024E43C.s")


extern s32 func_80005670(s32, void *);
extern s32 func_80126A0C(s32, s32, s32);
extern u8 func_8024E67C[];
extern u8 D_80254A54[];
extern u8 D_80254A68[];
extern s32 D_8025A2F4;
extern s32 D_8025A2F8;

void func_8024E60C(s32 arg0, s32 arg1) {
    if (func_80126A0C(arg0, 0x85, 0) != 0) {
        D_8025A2F4 = func_80005670(arg0, D_80254A54);
        D_8025A2F8 = func_80005670(arg0, D_80254A68);
        func_800058DC(arg0, func_8024E67C);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file015/8024E3C0/func_8024E67C.s")


extern s32 func_801C2FF8(void);
extern void func_801C2F0C(s32, void *);
extern void func_8024E87C(void *arg0, void *arg1);
extern f32 D_8025A058;

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

extern s32 func_801C3044(void);
extern void func_8024E8EC();

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

extern void func_80133980(s32);

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

extern void func_801339D0(s32);
extern void func_8024E9A8();
extern f32 D_8025A05C;

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

#pragma GLOBAL_ASM("asm/nonmatchings/file015/8024E3C0/func_8024E9A8.s")


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

extern struct func_8024EACC_Glob D_801BBBF0;
extern s32 func_801505AC(s32);
extern void *func_801C3B7C(s32);
extern void func_8024EB90();

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

#pragma GLOBAL_ASM("asm/nonmatchings/file015/8024E3C0/func_8024EB90.s")


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

extern void func_8024ED2C();

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

extern void func_8024ED80(s32 arg0, s32 arg1);

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


extern void func_80020718(s32);
struct func_8024EE04_Outer;
extern void func_8024EE04();

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


extern void func_8024EE60();

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


extern void func_8013B570(s32, s32, s32, s32, void *);
extern void func_8024EF6C();

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

extern void func_8013A1B4();
extern func_8024EF6C_Vec D_80254AB8;
extern void func_8024F024();

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
extern void func_8024F334();
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
extern void func_8024F624();

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

extern void func_8024F6C4();
extern func_8024EF6C_Vec D_80254AE8;

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

#pragma GLOBAL_ASM("asm/nonmatchings/file015/8024E3C0/func_8024F6C4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/8024E3C0/func_8024F818.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/8024E3C0/func_8024F8C0.s")


typedef struct func_8024F984_Struct {
    u8 pad[0x5C];
    s32 unk5C;
} func_8024F984_Struct;

extern s32 func_80011140(s32, s32, func_8024EF6C_Vec, s32);
extern void func_8024F9F0(s32 arg0, s32 arg1);

void func_8024F984(func_8024F984_Struct *arg0, volatile s32 arg1) {
    s32 temp_a1;

    temp_a1 = arg0->unk5C;
    if (func_80011140(arg1, temp_a1, D_80254AD0, 10) != 0) {
        func_800058DC(arg0, func_8024F9F0);
    }
}

void func_8024FA7C(void *arg0, void *arg1);

extern u8 D_80254FE0[];

void func_8024F9F0(s32 arg0, s32 arg1) {
    if (func_80133A24(0x73) != 0) {
        func_801339D0(0x73);
        func_800179B0(D_80254FE0);
        func_8013A1B4((void **) arg1, D_80254AD0, 0xFFFFFF);
        func_800058DC((void *) arg0, (void *) func_8024FA7C);
    }
}


extern s32 func_800178E8(void);
extern void func_8024FAD8(s32 arg0, s32 arg1);

void func_8024FA7C(void *arg0, void *arg1) {
    s32 tmp = *(s32 *)((u8 *)arg0 + 0x5C);

    if (func_80010550(arg1, tmp, arg1) != 0) {
        if (func_800178E8() != 0) {
            func_80133980(0x77);
            func_800058DC(arg0, &func_8024FAD8);
        }
    }
}

void func_8024FB64(void *arg0, void *arg1);

extern u8 D_80255030[];

void func_8024FAD8(s32 arg0, s32 arg1) {
    if (func_80133A24(0x73) != 0) {
        func_801339D0(0x73);
        func_800179B0(D_80255030);
        func_8013A1B4((void **) arg1, D_80254AD0, 0xFFFFFF);
        func_800058DC((void *) arg0, (void *) func_8024FB64);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file015/8024E3C0/func_8024FB64.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/8024E3C0/func_8024FCC0.s")


void func_8024FECC(struct func_802433D4_Struct *arg0, s32 arg1);

typedef struct func_8024FE38_Struct {
    u8 pad[0x5C];
    s32 unk5C;
} func_8024FE38_Struct;

extern u8 D_8025513C[];

void func_8024FE38(func_8024FE38_Struct *arg0, s32 arg1, s32 arg2) {
    s32 val = arg0->unk5C;

    if ((func_80010550(arg1, val, arg2) != 0) && (func_800178E8() != 0)) {
        func_8013A1B4((void **)arg1, D_80254AD0, 0xFFFFFF);
        func_800179B0(D_8025513C);
        func_800058DC(arg0, (void *)func_8024FECC);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file015/8024E3C0/func_8024FECC.s")

extern func_8024EF6C_Vec D_80254B0C;
extern void func_80017990(void *);

void func_8024FFF4(struct func_802433D4_Struct *arg0, s32 arg1);

typedef struct func_8024FF60_Struct {
    u8 pad[0x5C];
    s32 unk5C;
} func_8024FF60_Struct;

extern u8 D_80255324[];

void func_8024FF60(func_8024FF60_Struct *arg0, s32 arg1, s32 arg2) {
    s32 val = arg0->unk5C;

    if ((func_80010550(arg1, val, arg2) != 0) && (func_800178E8() != 0)) {
        func_8013A1B4((void **)arg1, D_80254B0C, 0xFFFFFF);
        func_80017990(D_80255324);
        func_800058DC(arg0, (void *)func_8024FFF4);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file015/8024E3C0/func_8024FFF4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/8024E3C0/func_80250110.s")


struct func_802501B4_Struct {
    u8 pad[0x5C];
    s32 unk5C;
};

extern void func_802501F4();

void func_802501B4(struct func_802501B4_Struct *arg0, s32 arg1) {
    s32 temp = arg0->unk5C;

    if (func_80010550(arg1, temp, arg1) != 0) {
        func_800058DC(arg0, &func_802501F4);
    }
}

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

