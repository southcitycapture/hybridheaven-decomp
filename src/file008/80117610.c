#include "common.h"


typedef struct func_80117610_Struct {
    u8 pad0[0x18E];
    u16 unk18E;
    u16 unk190;
    u8 pad1[0x1D8 - 0x192];
    u16 unk1D8;
    u8 pad2[2];
    u16 unk1DC;
} func_80117610_Struct;

extern func_80117610_Struct D_801BBBF0;

s32 func_80117610(s32 arg0) {
    if (D_801BBBF0.unk18E == 0) {
        D_801BBBF0.unk18E = 1;
        D_801BBBF0.unk190 = 3;
        D_801BBBF0.unk1D8 = 1;
        D_801BBBF0.unk1DC = 0;
        return 1;
    }
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80117610/func_80117650.s")


typedef struct func_801178E4_StructB {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
} func_801178E4_StructB;
typedef struct func_801178E4_StructA {
    u8 pad0[0x2C];
    func_801178E4_StructB *unk2C;
} func_801178E4_StructA;
typedef struct func_801178E4_Struct {
    u8 pad0[0xE0];
    func_801178E4_StructA *unkE0;
    u8 pad1[0x320 - 0xE4];
    f32 unk320;
    u8 pad2[0x374 - 0x324];
    f32 unk374;
    f32 unk378;
    f32 unk37C;
} func_801178E4_Struct;
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern s32 func_801084C4(f32, f32, f32, f32, f32, f32);
extern f64 D_80189B20;
extern f64 D_80189B28;

void func_801178E4(f32 *arg0, f32 *arg1, f32 *arg2, f32 *arg3, f32 *arg4, f32 *arg5) {
#define G ((func_801178E4_Struct *) &D_801BBBF0)
    *arg0 = (f32) ((f64) G->unkE0->unk2C->unk4 - ((f64) func_8001EAD0(G->unkE0->unk2C->unk12) * D_80189B20));
    *arg1 = (f32) ((f64) G->unkE0->unk2C->unk8 + 25.0 + (f64) G->unk320);
    *arg2 = (f32) ((f64) G->unkE0->unk2C->unkC - ((f64) func_8001EB64(G->unkE0->unk2C->unk12) * D_80189B28));
    *arg3 = G->unkE0->unk2C->unk4;
    *arg4 = (f32) ((f64) G->unkE0->unk2C->unk8 + 15.0);
    *arg5 = G->unkE0->unk2C->unkC;
    if (func_801084C4(*arg3, *arg4, *arg5, *arg0, *arg1, *arg2) != 0) {
        *arg0 = G->unk374;
        *arg1 = G->unk378;
        *arg2 = G->unk37C;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80117610/func_80117A7C.s")


extern s32 func_8011AAF4(void *, s32, s32, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern struct func_80117CD0_Struct0 *D_801BBCD8;
extern u8 D_80189558[];

struct func_80117C0C_Struct1 {
    u8 pad[0x1C];
    f32 unk1C;
};

struct func_80117C0C_Struct0 {
    u8 pad[0x2C];
    struct func_80117C0C_Struct1 *unk2C;
};

void func_80117C0C(s32 arg0) {
    f32 sp64;
    f32 sp60;
    f32 sp5C;
    f32 sp58;
    f32 sp54;
    f32 sp50;

    func_801178E4(&sp64, &sp60, &sp5C, &sp58, &sp54, &sp50);
    func_8011AAF4(D_80189558, 0xE6, arg0, 2, 1, 0.0f, sp64, sp60, sp5C, 0.0f, sp58, sp54, sp50, 0.0f, ((struct func_80117C0C_Struct0 *)D_801BBCD8)->unk2C->unk1C, -1, -1);
}


struct func_80117CD0_Struct1 {
    u8 pad[0x1C];
    f32 unk1C;
};

struct func_80117CD0_Struct0 {
    u8 pad[0x2C];
    struct func_80117CD0_Struct1 *unk2C;
};

extern s32 func_80117A7C(s16, f32 *, f32 *, f32 *, f32 *, f32 *, f32 *);
extern u8 D_8018959C[];

void func_80117CD0(s32 arg0, s16 arg1) {
    f32 sp64;
    f32 sp60;
    f32 sp5C;
    f32 sp58;
    f32 sp54;
    f32 sp50;

    func_80117A7C(arg1, &sp64, &sp60, &sp5C, &sp58, &sp54, &sp50);
    func_8011AAF4(D_8018959C, 0xFB, arg0, 2, 1, 0.0f, sp64, sp60, sp5C, 0.0f, sp58, sp54, sp50, 0.0f, D_801BBCD8->unk2C->unk1C, -1, -1);
}


typedef struct func_80117DA0_Struct0 {
    u8 pad0[0x5C];
    s32 unk5C;
} func_80117DA0_Struct0;

typedef struct func_80117DA0_Struct1 {
    u8 pad0[0xEF0];
    u16 unkEF0;
} func_80117DA0_Struct1;

typedef struct func_80117DA0_Struct2 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_80117DA0_Struct2;

extern s32 func_80011140(s32, s32, func_80117DA0_Struct2, s32);
extern s16 D_80216BF8;
extern func_80117DA0_Struct2 D_80216B90;

s32 func_80117DA0(arg0, arg1)
func_80117DA0_Struct0 *arg0;
s32 arg1;
{
    s32 sp24;
    s32 flags;

    sp24 = arg0->unk5C;
    flags = ((func_80117DA0_Struct1 *) &D_801BBBF0)->unkEF0;
    if (flags & 0x2000) {
        D_80216BF8 -= 1;
        if (D_80216BF8 <= 0) {
            D_80216BF8 = 0;
            ((func_80117DA0_Struct1 *) &D_801BBBF0)->unkEF0 = flags & 0xDFFF;
        }
    } else {
        D_80216BF8 = 0;
    }
    if (func_80011140(arg1, sp24, D_80216B90, 5) != 0) {
        return 0;
    }
    return 1;
}

extern u8 D_801BBB90[];
extern u8 D_801BBB92[];
extern u8 D_801BBB94[];
extern f32 D_801BBBB4;

extern f32 func_8002FC20(f32);
extern void func_80119F9C(void *, void *);
extern void func_8011A0F0(void *);

typedef struct func_80117E58_StructB {
    u8 pad0[0x30];
    f32 unk30;
    f32 unk34;
    f32 unk38;
    f32 unk3C;
    f32 unk40;
    f32 unk44;
} func_80117E58_StructB;
typedef struct func_80117E58_StructA {
    u8 pad0[0x2C];
    func_80117E58_StructB *unk2C;
} func_80117E58_StructA;

extern u8 D_801BBB98[];
extern f32 D_801BBB9C;
extern f32 D_801BBBA0;
extern f32 D_801BBBA4;
extern f32 D_801BBBA8;
extern f32 D_801BBBAC;
extern f32 D_801BBBB0;

void func_80117E58(void) {
    f32 a;
    f32 b;
    f32 c;

    func_80119F9C(D_801BBB90, D_801BBB92);
    func_8011A0F0(D_801BBB94);
    D_801BBBA8 = ((func_80117E58_StructA *)D_801BBCD8)->unk2C->unk3C;
    D_801BBBAC = ((func_80117E58_StructA *)D_801BBCD8)->unk2C->unk40;
    D_801BBBB0 = ((func_80117E58_StructA *)D_801BBCD8)->unk2C->unk44;
    D_801BBB9C = ((func_80117E58_StructA *)D_801BBCD8)->unk2C->unk30;
    D_801BBBA0 = ((func_80117E58_StructA *)D_801BBCD8)->unk2C->unk34;
    D_801BBBA4 = ((func_80117E58_StructA *)D_801BBCD8)->unk2C->unk38;
    func_80119F9C(D_801BBB94 + 2, D_801BBB98);
    a = D_801BBBA8 - D_801BBB9C;
    b = D_801BBBAC - D_801BBBA0;
    c = D_801BBBB0 - D_801BBBA4;
    D_801BBBB4 = func_8002FC20(a * a + b * b + c * c);
}


typedef struct func_80117F64_Struct0 {
    u8 pad0[0x5C];
    void *unk5C;
} func_80117F64_Struct0;

typedef struct func_80117F64_Struct1 {
    u8 pad0[0x1C];
    u32 unk1C;
} func_80117F64_Struct1;

extern void func_80010550(s32, void *);

void func_80117F64(func_80117F64_Struct0 *arg0, s32 arg1) {
    func_80117F64_Struct1 *sp24;
    s32 flags;

    sp24 = arg0->unk5C;
    flags = ((func_80117DA0_Struct1 *) &D_801BBBF0)->unkEF0;
    if (flags & 0x2000) {
        D_80216BF8 -= 1;
        if (D_80216BF8 <= 0) {
            D_80216BF8 = 0;
            ((func_80117DA0_Struct1 *) &D_801BBBF0)->unkEF0 = flags & 0xDFFF;
        }
    } else {
        D_80216BF8 = 0;
    }
    if (sp24->unk1C == 0x01680041) {
        func_80010550(arg1, sp24);
        return;
    }
    func_80011140(arg1, (s32) sp24, D_80216B90, 5);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80117610/func_80118038.s")


#define G ((func_801178E4_Struct *)&D_801BBBF0)

void func_801182F4(s16 arg0, s16 arg1, f32 *arg2, f32 *arg3, f32 *arg4, f32 *arg5, f32 *arg6, f32 *arg7) {
    f32 t;

    t = func_8001EB64(arg1);
    *arg2 = G->unkE0->unk2C->unk4 - (func_8001EB64(arg0) * (3.0 * t));
    *arg3 = (G->unkE0->unk2C->unk8 + 18.0) - (func_8001EAD0(arg1) * 3.0);
    t = func_8001EB64(arg1);
    *arg4 = G->unkE0->unk2C->unkC - (func_8001EAD0(arg0) * (3.0 * t));
    t = func_8001EB64(arg1);
    *arg5 = ((f64)func_8001EB64(arg0) * (f64)t) + G->unkE0->unk2C->unk4;
    *arg6 = func_8001EAD0(arg1) + (G->unkE0->unk2C->unk8 + 18.0);
    t = func_8001EB64(arg1);
    *arg7 = ((f64)func_8001EAD0(arg0) * (f64)t) + G->unkE0->unk2C->unkC;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80117610/func_80118500.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80117610/func_80118768.s")

extern void func_800058DC();

extern void func_80118BB0();

void func_80118B70(s32 arg0) {
    if (func_80117DA0() == 0) {
        func_80117E58();
        func_800058DC(arg0, func_80118BB0);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80117610/func_80118BB0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80117610/func_801190F4.s")


typedef struct func_8011913C_Struct2 {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[0x1C - 0x10];
    f32 unk1C;
    u8 pad20[0x30 - 0x20];
    f32 unk30;
    u8 pad34[0x38 - 0x34];
    f32 unk38;
    f32 unk3C;
    f32 unk40;
    f32 unk44;
    f32 unk48;
} func_8011913C_Struct2;

typedef struct func_8011913C_Struct1 {
    u8 pad0[0x2C];
    func_8011913C_Struct2 *unk2C;
} func_8011913C_Struct1;

typedef struct func_8011913C_Struct4 {
    u8 pad0[0x22];
    u8 unk22;
} func_8011913C_Struct4;

typedef struct func_8011913C_Struct0 {
    u8 pad0[0x24];
    func_8011913C_Struct4 *unk24;
    u8 pad28[0x30 - 0x28];
    s32 unk30;
    u8 pad34[0x40 - 0x34];
    f32 unk40;
    f32 unk44;
    f32 unk48;
} func_8011913C_Struct0;

typedef struct func_8011913C_Struct3 {
    u8 pad0[0x9E];
    u16 unk9E;
    u8 padA0[0xE8 - 0xA0];
    func_8011913C_Struct1 *unkE8;
    u8 padEC[0x380 - 0xEC];
    f32 unk380;
    f32 unk384;
    f32 unk388;
    u8 pad38C[0xEF0 - 0x38C];
    u16 unkEF0;
} func_8011913C_Struct3;

extern s32 func_8001EF38(f32, f32);
extern void func_80117650(f32, f32, f32, f32, f32, f32);
extern void func_80118038(void *, void *);
extern void func_8011A148(s16, s16, s16, void *, void *, void *);
extern void func_8011E480(s16, s16, f32 *, f32 *, f32 *, f32 *, f32 *, f32 *);
extern s32 D_801636F4;
extern u8 D_80189A14[];
extern f64 D_80189B48;
extern func_8011913C_Struct1 *D_801BBCD0;
extern u8 func_801E5010[];
extern u8 func_80379970[];

#define G ((func_8011913C_Struct3 *)&D_801BBBF0)
#define YAW (*(s16 *)D_801BBB90)
#define PITCH (*(s16 *)D_801BBB92)
#define CALC() func_8001EF38(spB4 - spC0, func_8002FC20((spC4 - spB8) * (spC4 - spB8) + (spBC - spB0) * (spBC - spB0)))

void func_8011913C(func_8011913C_Struct0 *arg0) {
    f32 spC4;
    f32 spC0;
    f32 spBC;
    f32 spB8;
    f32 spB4;
    f32 spB0;
    f32 spAC;
    f32 spA8;
    f32 spA4;
    s16 spA2;
    s16 spA0;
    f32 sp9C;
    s32 v1;
    u8 pad[0x30];

    arg0->unk40 = 0.0f;
    arg0->unk44 = 0.0f;
    arg0->unk48 = 0.0f;
    if (G->unkEF0 & 0x1000) {
        arg0->unk24->unk22 = 1;
        func_80117CD0((s32)arg0, YAW);
        func_800058DC(arg0, func_80379970);
        return;
    }
    if (!(G->unk9E & 2) || (((func_80117610_Struct *)&D_801BBBF0)->unk18E != 0) || !(arg0->unk30 & 4)) {
        arg0->unk24->unk22 = 1;
        func_80117CD0((s32)arg0, YAW);
        func_800058DC(arg0, func_801E5010);
        return;
    }
    {
        extern void func_80117F64();
        func_80117F64(arg0);
    }
    func_80118038(D_801BBB90, D_801BBB92);
    if (PITCH >= 0x601) {
        PITCH = 0x600;
    }
    if (PITCH < -0x600) {
        PITCH = -0x600;
    }
    spC4 = ((func_8011913C_Struct1 *)D_801BBCD8)->unk2C->unk3C - ((sp9C = func_8001EB64(PITCH), func_8001EB64(YAW)) * (D_801BBBB4 * sp9C));
    spC0 = ((func_8011913C_Struct1 *)D_801BBCD8)->unk2C->unk40 - (func_8001EAD0(PITCH) * D_801BBBB4);
    spBC = ((func_8011913C_Struct1 *)D_801BBCD8)->unk2C->unk44 - ((sp9C = func_8001EB64(PITCH), func_8001EAD0(YAW)) * (D_801BBBB4 * sp9C));
    spB8 = ((func_8011913C_Struct1 *)D_801BBCD8)->unk2C->unk3C + (D_801BBCD0->unk2C->unk4 - ((func_8011913C_Struct1 *)D_801BBCD8)->unk2C->unk3C) * 0.25;
    spB4 = ((func_8011913C_Struct1 *)D_801BBCD8)->unk2C->unk40 + ((D_801BBCD0->unk2C->unk8 + 15.0) - ((func_8011913C_Struct1 *)D_801BBCD8)->unk2C->unk40) * 0.25;
    spB0 = ((func_8011913C_Struct1 *)D_801BBCD8)->unk2C->unk44 + (D_801BBCD0->unk2C->unkC - ((func_8011913C_Struct1 *)D_801BBCD8)->unk2C->unk44) * 0.25;
    if (D_801636F4 != 0) {
        if (CALC() & 0x1000) {
            CALC();
        } else {
            CALC();
        }
        if (CALC() & 0x1000) {
            v1 = (CALC() & 0x1FFF) - 0x2000;
        } else {
            v1 = CALC() & 0x1FFF;
        }
        if (v1 < 0) {
            if (CALC() & 0x1000) {
                CALC();
            } else {
                CALC();
            }
        } else {
            if (CALC() & 0x1000) {
                CALC();
            } else {
                CALC();
            }
        }
    }
    func_8011E480(YAW, PITCH, &spC4, &spC0, &spBC, &spB8, &spB4, &spB0);
    spAC = (sp9C = func_8001EB64(PITCH), func_8001EB64(YAW)) * (6.5 * sp9C) + spC4;
    spA8 = func_8001EAD0(PITCH) * 6.5 + spC0;
    spA4 = (sp9C = func_8001EB64(PITCH), func_8001EAD0(YAW)) * (6.5 * sp9C) + spBC;
    if (func_801084C4(spC4, spC0, spBC, spAC, spA8, spA4) != 0) {
        spC4 += G->unk380 - spAC;
        spC0 += G->unk384 - spA8;
        spBC += G->unk388 - spA4;
    }
    spC4 = G->unkE8->unk2C->unk30 + (spC4 - G->unkE8->unk2C->unk30) * 0.25;
    spBC = G->unkE8->unk2C->unk38 + (spBC - G->unkE8->unk2C->unk38) * 0.25;
    func_80117650(spC4, spC0, spBC, spB8, spB4, spB0);
    func_8011AAF4(D_80189A14, 0x310, (s32)arg0, 0, 1, 0.0f, spC4, spC0, spBC, 0.0f, spB8, spB4, spB0, 0.0f, ((func_8011913C_Struct1 *)D_801BBCD8)->unk2C->unk1C, -1, -1);
    if (func_8002FC20((spC4 - D_801BBCD0->unk2C->unk4) * (spC4 - D_801BBCD0->unk2C->unk4) + (spC0 - (D_801BBCD0->unk2C->unk8 + 15.0)) * (spC0 - (D_801BBCD0->unk2C->unk8 + 15.0)) + (spBC - D_801BBCD0->unk2C->unkC) * (spBC - D_801BBCD0->unk2C->unkC)) < D_80189B48) {
        arg0->unk24->unk22 = 0;
    } else if (func_8002FC20((spC4 - D_801BBCD0->unk2C->unk4) * (spC4 - D_801BBCD0->unk2C->unk4) + (spC0 - (D_801BBCD0->unk2C->unk8 + 15.0)) * (spC0 - (D_801BBCD0->unk2C->unk8 + 15.0)) + (spBC - D_801BBCD0->unk2C->unkC) * (spBC - D_801BBCD0->unk2C->unkC)) > 12.0) {
        arg0->unk24->unk22 = 1;
    }
    func_80119F9C(&spA2, &spA0);
    func_8011A148(spA2, spA0, *(s16 *)D_801BBB94, &((func_8011913C_Struct1 *)D_801BBCD8)->unk2C->unk48, &((func_8011913C_Struct1 *)D_801BBCD8)->unk2C->unk48 + 1, &((func_8011913C_Struct1 *)D_801BBCD8)->unk2C->unk48 + 2);
}

void func_80119B80(s32 arg0, s32 arg1);


void func_80119B24(s32 arg0, s32 arg1) {
    if (func_80117610(0) != 0) {
        func_80119F9C(D_801BBB90, D_801BBB92);
        func_8011A0F0(D_801BBB94);
        func_800058DC(arg0, func_80119B80);
    }
}


extern u16 D_801BBC8E;
extern void func_80119BB8();

void func_80119B80(s32 arg0, s32 arg1) {
    if (!(D_801BBC8E & 4)) {
        func_800058DC(arg0, func_80119BB8);
    }
}


extern u8 D_80163870;
extern u8 D_80163874;
extern u8 D_80163878;
extern void func_8010FABC();

void func_80119BB8(s32 arg0, s32 arg1) {
    if (D_801BBBF0.unk1DC == 1) {
        *(u16 *)((u8 *)&D_801BBBF0 + 0x1DA) = 2;
        D_80163870 = D_80163874 = D_80163878 = 0;
        func_800058DC(arg0, func_8010FABC, &D_801BBBF0);
    }
}

