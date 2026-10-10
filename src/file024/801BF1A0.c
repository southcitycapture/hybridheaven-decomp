#include "common.h"


extern void func_800058DC(s32, void *);
extern s32 D_801CFCF4;
extern void func_801BF1DC(void);

void func_801BF1A0(void) {
    func_800058DC(D_801CFCF4, func_801BF1DC);
}



void func_801BF1CC(s32 arg0, s32 arg1) {
    D_801CFCF4 = arg0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801BF1A0/func_801BF1DC.s")


extern void func_80152238();
extern u16 *D_801CFCF0;
extern void func_801BF288();

void func_801BF248(s32 arg0, s32 arg1) {
    func_800058DC(arg0, func_801BF288);
    *D_801CFCF0 += 1;
    func_80152238();
}


extern void func_801170DC(s32);
extern void func_801C12B0(void);
extern void func_801BF2DC(void);

typedef struct func_801BF288_Struct {
    u8 pad[0x92];
    s16 unk92;
    s16 unk94;
    s16 unk96;
    s16 unk98;
} func_801BF288_Struct;

extern func_801BF288_Struct D_800892B0;

void func_801BF288(s32 arg0, s32 arg1) {
    func_801170DC(0x80);
    D_800892B0.unk92 = 0;
    D_800892B0.unk94 = 0;
    D_800892B0.unk96 = 0;
    D_800892B0.unk98 = 0;
    func_801C12B0();
    func_800058DC(arg0, func_801BF2DC);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801BF1A0/func_801BF2DC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801BF1A0/func_801BF630.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801BF1A0/func_801BFFBC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801BF1A0/func_801C01AC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801BF1A0/func_801C0500.s")


typedef struct func_801C0608_StructInner {
    u8 pad[0x4C];
    s8 unk4C;
} func_801C0608_StructInner;

typedef struct func_801C0608_StructOuter {
    u8 pad[0x2C];
    func_801C0608_StructInner *unk2C;
} func_801C0608_StructOuter;

typedef struct func_801C0608_StructArg0 {
    u8 pad[0x90];
    f32 unk90;
} func_801C0608_StructArg0;

extern void func_8001B204();
extern u8 D_801CE930[];

void func_801C0608(func_801C0608_StructArg0 *arg0, func_801C0608_StructOuter **arg1) {
    func_8001B204(0, 0x80, 0x78, D_801CE930);
    arg0->unk90 = (f32) ((f64) arg0->unk90 + 0.5);
    (*arg1)->unk2C->unk4C = (s8) ((s32) arg0->unk90 % 128);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801BF1A0/func_801C0694.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801BF1A0/func_801C08D4.s")


void func_801C09E4(u8 *arg0, u8 **arg1) {
    u8 *temp_v0;
    s16 temp_v1;

    temp_v0 = *(u8 **)(*(u8 **)(arg0 + 0x24) + 0x2C);
    temp_v1 = *(s16 *)(temp_v0 + 0x12);
    if ((temp_v1 & 0x1FFF) != 0x1000) {
        *(s16 *)(temp_v0 + 0x12) = temp_v1 + 0x10;
    }
    *(s8 *)(*(u8 **)(*arg1 + 0x2C) + 0x4C) = (s8) ((s32) *(f32 *)(arg0 + 0x90) % 128);
    *(s8 *)(*(u8 **)(*arg1 + 0x2C) + 0x4E) = (s8) ((s32) *(f32 *)(arg0 + 0x90) % 128);
    *(f32 *)(arg0 + 0x90) = (f32) ((f64) *(f32 *)(arg0 + 0x90) + 0.5);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801BF1A0/func_801C0A88.s")


typedef struct func_801C0AF8_StructInner {
    u8 pad[0x12];
    s16 unk12;
} func_801C0AF8_StructInner;

typedef struct func_801C0AF8_StructMid {
    u8 pad[0x2C];
    func_801C0AF8_StructInner *unk2C;
} func_801C0AF8_StructMid;

typedef struct func_801C0AF8_StructArg0 {
    u8 pad[0x24];
    func_801C0AF8_StructMid *unk24;
} func_801C0AF8_StructArg0;

void func_801C0AF8(func_801C0AF8_StructArg0 *arg0, s32 arg1) {
    func_801C0AF8_StructInner *temp_v0;
    s16 temp_v1;

    temp_v0 = arg0->unk24->unk2C;
    temp_v1 = temp_v0->unk12;
    if ((temp_v1 & 0x1FFF) != 0x1000) {
        temp_v0->unk12 = temp_v1 - 0x10;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801BF1A0/func_801C0B24.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801BF1A0/func_801C0B30.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801BF1A0/func_801C0F64.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801BF1A0/func_801C0F70.s")


typedef struct func_801C0F98_Struct {
    u8 pad[0x90];
    f32 unk90;
} func_801C0F98_Struct;

extern u8 D_801CE978[];
extern u8 D_801CE994[];
extern u8 D_801CE9B0[];
extern u8 D_801CE9CC[];
extern void func_801C1034(void);

void func_801C0F98(func_801C0F98_Struct *arg0, s32 arg1) {
    arg0->unk90 = 150.0f;
    func_8001B204(1, 0x7D0, 0x50, D_801CE978);
    func_8001B204(2, 0x7D0, 0x5A, D_801CE994);
    func_8001B204(3, 0x7D0, 0x64, D_801CE9B0);
    func_8001B204(4, 0x7D0, 0x6E, D_801CE9CC);
    func_800058DC((s32)arg0, func_801C1034);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801BF1A0/func_801C1034.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801BF1A0/func_801C1040.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801BF1A0/func_801C1088.s")

s32 func_801C1088(s32, s8);

u8 func_801C10DC(void *arg0, u8 arg1, s8 arg2) {
    u8 pad;
    u8 ret;
    s32 count;
    s32 i;
    void *p;

    count = arg1;
    p = arg0;
    i = 0;
    if (count > 0) {
        do {
            ret = func_801C1088((s32)p, arg2);
            i = (i + 1) & 0xFF;
            p = ((void **)p)[4];
        } while (i < count);
    }
    return ret;
}

extern s32 D_801CC8A8;

typedef struct func_801C1160_Struct {
    u8 pad[0x3C];
    s16 unk3C;
} func_801C1160_Struct;

extern void func_80145390(s32);
extern void func_801C258C();

s32 func_801C1160(void) {
    if (D_801CC8A8 != 0) {
        func_80145390(0x1800);
        ((func_801C1160_Struct *) D_801CC8A8)->unk3C = 0;
        func_800058DC(D_801CC8A8, func_801C258C);
        return 1;
    }
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801BF1A0/func_801C11BC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801BF1A0/func_801C125C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801BF1A0/func_801C12B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801BF1A0/func_801C1308.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801BF1A0/func_801C1334.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801BF1A0/func_801C1340.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801BF1A0/func_801C134C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801BF1A0/func_801C1508.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801BF1A0/func_801C1624.s")


typedef struct func_801C1764_Struct {
    u8 pad[0x3C];
    s16 unk3C;
} func_801C1764_Struct;

extern s32 func_801C1334();
extern u8 D_801CC8CC;
extern void func_801C17C8();
extern void func_801C1A30();

void func_801C1764(func_801C1764_Struct *arg0, s32 arg1) {
    if (func_801C1334() & 0xB000) {
        func_800058DC(arg0, func_801C1A30);
    }
    if (D_801CC8CC == 0) {
        arg0->unk3C = 0x30;
        func_800058DC(arg0, func_801C17C8);
    }
}


typedef struct func_801C17C8_Struct {
    u8 pad[0x3C];
    u16 unk3C;
} func_801C17C8_Struct;

extern u8 D_801CEB88[];
extern void func_801C184C();

void func_801C17C8(func_801C17C8_Struct *arg0, s32 arg1) {
    s32 temp_v0;

    if (func_801C1334() & 0xB000) {
        func_800058DC((s32) arg0, func_801C1A30);
    }
    temp_v0 = arg0->unk3C;
    arg0->unk3C = temp_v0 - 1;
    if (temp_v0 == 0) {
        arg0->unk3C = 0x384;
        func_8001B204(0, 0x7D0, 0xA2, D_801CEB88);
        func_800058DC((s32) arg0, func_801C184C);
    }
}


extern void func_80020718(s32);
extern void func_801C5A00();
extern void func_801C18FC();
extern void func_801C2050();
extern void func_801C27DC();
extern u8 D_801CEB9C[];

struct func_801C184C_Struct {
    u8 pad[0x3C];
    u16 unk3C;
};

void func_801C184C(struct func_801C184C_Struct *arg0, s32 arg1) {
    s32 temp_v0;

    if (func_801C1334() & 0xB000) {
        func_8001B204(0, 0x7D0, 0xA2, D_801CEB9C, 4);
        func_800058DC(D_801CC8A8, (void *) func_801C27DC);
        func_800058DC((s32) arg0, (void *) func_801C18FC);
        arg0->unk3C = 0x1E;
    }
    temp_v0 = arg0->unk3C;
    arg0->unk3C = (u16) (temp_v0 - 1);
    if (temp_v0 == 0) {
        func_80020718(8);
        func_801C5A00();
        func_800058DC((s32) arg0, (void *) func_801C2050);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801BF1A0/func_801C18FC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801BF1A0/func_801C1A30.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801BF1A0/func_801C1A98.s")


extern s32 D_801CFD08;
extern s16 D_801CC8D0;
extern void func_801C1040(s32, s32, s32);
extern void func_801C125C(s32);
extern void func_801C1C44(void);
extern void func_801C28E4(void);

void func_801C1BDC(s32 arg0, s32 arg1) {
    func_800058DC(D_801CC8A8, &func_801C28E4);
    func_801C1040(D_801CFD08, -1, 5);
    func_801C125C(-0x64);
    D_801CC8D0 = 0;
    func_800058DC(arg0, &func_801C1C44);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801BF1A0/func_801C1C44.s")


typedef struct func_801C1D7C_Struct {
    u8 pad[0x3C];
    s16 unk3C;
} func_801C1D7C_Struct;

extern void func_801C1DB8();

void func_801C1D7C(func_801C1D7C_Struct *arg0, s32 arg1) {
    if (D_801CC8CC == 0) {
        arg0->unk3C = 0x384;
        func_800058DC(arg0, func_801C1DB8);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801BF1A0/func_801C1DB8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801BF1A0/func_801C2050.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801BF1A0/func_801C205C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801BF1A0/func_801C220C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801BF1A0/func_801C2280.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801BF1A0/func_801C2518.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801BF1A0/func_801C258C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801BF1A0/func_801C2684.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801BF1A0/func_801C27D0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801BF1A0/func_801C27DC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801BF1A0/func_801C28E4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801BF1A0/func_801C2A38.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801BF1A0/func_801C2A44.s")


struct func_801C2D78_Struct_Inner {
    u8 pad[0x4D];
    u8 unk4D;
};

struct func_801C2D78_Struct_Mid {
    u8 pad[0x30];
    struct func_801C2D78_Struct_Inner *unk30;
};

struct func_801C2D78_Struct_Arg1 {
    u8 pad[0x8];
    struct func_801C2D78_Struct_Mid *unk8;
};

struct func_801C2D78_Struct_Arg0 {
    u8 pad[0x3C];
    u16 unk3C;
};

void func_801C2D78(struct func_801C2D78_Struct_Arg0 *arg0, struct func_801C2D78_Struct_Arg1 *arg1)
{
  s32 temp_t7;
  ;
  if (((++arg0->unk3C) % 3) == 0)
  {
    struct func_801C2D78_Struct_Inner *temp_v0 = arg1->unk8->unk30;
    temp_v0->unk4D = (u8) (temp_v0->unk4D + 1);
  }
 ;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801BF1A0/func_801C2DB8.s")


extern void func_801453CC(s32, s32, s32, s32, s32, s32, s32);
extern void func_80145E78(s32, s32, s32);

void func_801C2FDC(s32 arg0, s32 *arg1) {
    func_801453CC(arg1[0], 0x1A0, 0, 3, 0x21, 0x22, 0x22);
    func_80145E78(arg1[1], 0xC0, 1);
    func_80145E78(arg1[2], 0xA0, 2);
    func_80145E78(arg1[3], 0, 2);
    func_80145E78(arg1[4], 0x80, 3);
    func_80145E78(arg1[5], 0, 3);
    func_80145E78(arg1[6], 0, 3);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801BF1A0/func_801C3090.s")


typedef struct func_801C3288_Sub {
    u8 pad[0x8];
    f32 unk8;
    u8 pad2[0x6];
    s16 unk12;
} func_801C3288_Sub;

typedef struct func_801C3288_Obj {
    u8 pad[0x30];
    func_801C3288_Sub *unk30;
} func_801C3288_Obj;

void func_801C3288(func_801C3288_Sub *arg0, func_801C3288_Obj **arg1) {
    s32 var_v0;
    s32 temp_t6;
    s32 temp_t0;
    func_801C3288_Obj **temp_v1;

    temp_t6 = 0xAA;
    temp_t0 = -0x136;
    var_v0 = 0;
    do {
        temp_v1 = (func_801C3288_Obj **) ((s32) arg1 + (var_v0 << 2));
        arg0 = (*temp_v1)->unk30;
        arg0->unk8 = arg0->unk8 + 0.625f;
        arg0 = (*temp_v1)->unk30;
        if ((f32) temp_t6 <= arg0->unk8) {
            arg0->unk8 = (f32) temp_t0;
            arg0 = (*temp_v1)->unk30;
        }
        var_v0 = (var_v0 + 1) & 0xFF;
        arg0->unk12 = (s16) (s32) ((f32) arg0->unk12 + 16.0f);
    } while (var_v0 < 3);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801BF1A0/func_801C3334.s")


typedef struct func_801C33C8_Struct {
    u8 pad[0x90];
    s8 unk90;
} func_801C33C8_Struct;


void func_801C33C8(func_801C33C8_Struct *arg0, s32 *arg1) {
    if (func_801C1088(*arg1, arg0->unk90) != 0) {
        D_801CC8CC = 2;
        return;
    }
    D_801CC8CC = 1;
}


struct func_801C3410_Struct {
    u8 pad[0x90];
    s8 unk90;
};

extern s32 D_801CC8A4;

void func_801C3410(struct func_801C3410_Struct *arg0, s32 *arg1) {
    if (func_801C1088(*arg1, arg0->unk90) != 0) {
        D_801CC8CC = 0;
        D_801CC8A4 = 0;
        func_80005700(arg0);
        return;
    }
    D_801CC8CC = 1;
}


extern void func_80145348(u8 *, s32, s32);
extern void func_80146208(u8 *, u8 *, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
extern void func_801C3934();

void func_801C346C(u8 *arg0, u8 **arg1) {
    u8 sp4F;

    func_80146208(arg0, &sp4F, 0x66, 0x1D, 0x40, 0x80, 0x10, 0, 0, 0xFF, 0x228, 0x27);
    func_80145348(arg0, 2, 0xF);
    func_80146208(arg0, &sp4F, 0x66, 0x1D, 0x50, 0x80, 0x10, 0, 0, 0xFF, 0x228, 0x28);
    func_80145348(arg0, 2, 0xF);
    func_80146208(arg0, &sp4F, 0x66, 0x1D, 0x60, 0x80, 0x10, 0, 0, 0xFF, 0x228, 0x28);
    func_80145348(arg0, 2, 0xF);
    func_80146208(arg0, &sp4F, 0x66, 0x1D, 0x70, 0x80, 0x10, 0, 0, 0xFF, 0x228, 0x28);
    func_80145348(arg0, 2, 0xF);
    func_80146208(arg0, &sp4F, 0x66, 0x1D, 0x80, 0x80, 0x10, 0, 0, 0xFF, 0x228, 0x28);
    func_80145348(arg0, 2, 0xF);
    func_80146208(arg0, &sp4F, 0x66, 0x1D, 0x90, 0x80, 0x10, 0, 0, 0xFF, 0x228, 0x29);
    func_80145348(arg0, 2, 0xF);
    func_80146208(arg0, &sp4F, 0x66, 0xA3, 0x40, 0x80, 0x10, 0, 0, 0xFF, 0x228, 0x27);
    func_80145348(arg0, 2, 0xF);
    func_80146208(arg0, &sp4F, 0x66, 0xA3, 0x50, 0x80, 0x10, 0, 0, 0xFF, 0x228, 0x28);
    func_80145348(arg0, 2, 0xF);
    func_80146208(arg0, &sp4F, 0x66, 0xA3, 0x60, 0x80, 0x10, 0, 0, 0xFF, 0x228, 0x28);
    func_80145348(arg0, 2, 0xF);
    func_80146208(arg0, &sp4F, 0x66, 0xA3, 0x70, 0x80, 0x10, 0, 0, 0xFF, 0x228, 0x28);
    func_80145348(arg0, 2, 0xF);
    func_80146208(arg0, &sp4F, 0x66, 0xA3, 0x80, 0x80, 0x10, 0, 0, 0xFF, 0x228, 0x28);
    func_80145348(arg0, 2, 0xF);
    func_80146208(arg0, &sp4F, 0x66, 0xA3, 0x90, 0x80, 0x10, 0, 0, 0xFF, 0x228, 0x29);
    func_80145348(arg0, 2, 0xF);
    for (sp4F = 0; sp4F < 0xC; sp4F++) {
        *(s16 *)(arg1[sp4F] + 0x28) = 0x100;
    }
    func_800058DC((s32)arg0, &func_801C3934);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801BF1A0/func_801C3934.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801BF1A0/func_801C3940.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801BF1A0/func_801C3A40.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801BF1A0/func_801C3BA4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801BF1A0/func_801C3BD8.s")

extern void func_800023A8(s32);
extern void func_8012FE50(s32, s32, s32, s32, s32);

typedef struct func_801C3C14_Struct {
    u8 pad[0x2];
    u16 unk2;
    u16 unk4;
    u8 pad2[0x4];
    u16 unkA;
    u16 unkC;
    u8 pad3[0x3A2 - 0xE];
    u16 unk3A2;
    u8 pad4[0xEF2 - 0x3A4];
    u16 unkEF2;
} func_801C3C14_Struct;

extern func_801C3C14_Struct D_801BBBF0;
extern void func_801C3CD0();
extern void func_8012FFCC(s32);
extern void func_80133830();
extern void func_80133950();
extern void func_80133A70();
extern void func_8014AC60();
extern void func_80152240();
extern void func_801C1308();

void func_801C3C14(s32 arg0, s32 arg1) {
    func_800023A8(0);
    func_80020718(8);
    D_801BBBF0.unkA = 0;
    D_801BBBF0.unkC = 0;
    func_8012FE50(0x15, (u16)(D_801BBBF0.unk4 = 0x104), 0, 1, 0);
    D_801BBBF0.unk3A2 = 0;
    D_801BBBF0.unk2 = 1;
    func_80133830();
    func_80133950();
    func_80133A70();
    func_8014AC60();
    D_801BBBF0.unkEF2 = 0;
    func_8012FFCC(0);
    func_801C1308();
    func_80152240();
    func_800058DC(arg0, &func_801C3CD0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801BF1A0/func_801C3CD0.s")

extern u8 D_80044090[];
extern s32 D_801CC8B8;
extern s32 D_801CC8BC;
extern s32 func_80005670(s32, void *);
extern s32 func_80005700(s32);

extern void func_801C3D50();

void func_801C3CDC(s32 arg0, s32 arg1) {
    func_80005700(D_801CC8A8);
    func_80005700(D_801CC8B8);
    D_801CC8A8 = 0;
    D_801CC8B8 = 0;
    D_801CC8BC = func_80005670(arg0, &D_80044090);
    func_80152240();
    func_800058DC(arg0, func_801C3D50);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801BF1A0/func_801C3D50.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801BF1A0/func_801C3D84.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801BF1A0/func_801C3E24.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801BF1A0/func_801C3F48.s")


struct func_801C4018_Struct {
    u8 pad[0x3C];
    u16 unk3C;
};

extern void func_801C4074(void);

void func_801C4018(struct func_801C4018_Struct *arg0, s32 arg1) {
    s32 temp_v0;

    if (func_801C1334() & 0xB000) {
        func_800058DC(arg0, func_801C4074);
    }
    temp_v0 = arg0->unk3C;
    arg0->unk3C = temp_v0 - 1;
    if (temp_v0 != 0) {
        return;
    }
    func_800058DC(arg0, func_801C4074);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801BF1A0/func_801C4074.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801BF1A0/func_801C40EC.s")

extern u8 D_801CC8C8;

extern u8 D_801CEDA4[];
extern u8 D_801CEDB8[];
extern u8 D_801CEDCC[];
extern u8 D_801CEDE0[];
extern u8 D_801CEDF4[];
extern u8 D_801CEE08[];
extern u8 D_801CEE0C[];
extern void func_801C4200();

void func_801C40F8(s32 arg0, s32 arg1) {
    D_801CC8C8 = 0;
    func_8001B204(0, 0x7D0, (s16) ((D_801CC8C8 * 0xA) + 0x8A), D_801CEDA4);
    func_8001B204(1, 0x7D0, 0x8A, D_801CEDB8);
    func_8001B204(2, 0x7D0, 0x94, D_801CEDCC);
    func_8001B204(3, 0x7D0, 0x9E, D_801CEDE0);
    func_8001B204(4, 0x7D0, 0xA8, D_801CEDF4);
    func_8001B204(5, 0, 0, D_801CEE08);
    func_8001B204(6, 0, 0, D_801CEE0C);
    func_80152240();
    func_800058DC(arg0, func_801C4200);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801BF1A0/func_801C4200.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801BF1A0/func_801C43B0.s")


extern u8 D_801CEE24[];
extern u8 D_801CEE38[];
extern u8 D_801CEE44[];
extern u8 D_801CEE50[];
extern u8 D_801CEE5C[];
extern u8 D_801CEE60[];
extern u8 D_801CEE64[];
extern void func_801C44C4(void);

void func_801C43BC(s32 arg0, s32 arg1) {
    D_801CC8C8 = 0;
    func_8001B204(0, 0x7D0, 0x8A, D_801CEE24, 2);
    func_8001B204(1, 0x7D0, (s16) ((D_801CC8C8 * 0xA) + 0x94), D_801CEE38);
    func_8001B204(2, 0x7D0, 0x94, D_801CEE44);
    func_8001B204(3, 0x7D0, 0x9E, D_801CEE50);
    func_8001B204(4, 0, 0, D_801CEE5C);
    func_8001B204(5, 0, 0, D_801CEE60);
    func_8001B204(6, 0, 0, D_801CEE64);
    func_800058DC(arg0, func_801C44C4);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801BF1A0/func_801C44C4.s")


extern void func_801C4640();

void func_801C45C8(s32 arg0, s32 arg1) {
    func_800023A8(0);
    func_80005700(D_801CC8A8);
    func_80005700(D_801CC8B8);
    D_801CC8A8 = 0;
    D_801CC8B8 = 0;
    D_801CC8BC = func_80005670(arg0, &D_80044090);
    func_800058DC(arg0, &func_801C4640);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801BF1A0/func_801C4640.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801BF1A0/func_801C4674.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801BF1A0/func_801C47C4.s")


extern void func_801C4840(void);

void func_801C47D0(s32 arg0, s32 arg1) {
    func_80005700(D_801CC8A8);
    func_80005700(D_801CC8B8);
    D_801CC8A8 = 0;
    D_801CC8B8 = 0;
    D_801CC8BC = func_80005670(arg0, D_80044090);
    func_800058DC(arg0, func_801C4840);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801BF1A0/func_801C4840.s")


extern s32 func_801406A4();
extern void func_80142570();
extern void func_800179B0(s32);
extern void func_801C4954();
extern s32 D_801CC8C0;

void func_801C48A4(s32 arg0, s32 arg1) {
    if (func_801406A4() & 0xFF) {
        func_80142570();
        func_800179B0(0);
        if (D_801CC8BC != 0) {
            func_80005700(D_801CC8BC);
            D_801CC8BC = 0;
        }
        if (D_801CC8C0 != 0) {
            func_80005700(D_801CC8C0);
            D_801CC8C0 = 0;
        }
        func_800023A8(0);
        func_8012FE50(0x17, 0x73, 1, 1, 0);
        func_800058DC(arg0, func_801C4954);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801BF1A0/func_801C4954.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801BF1A0/func_801C4960.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801BF1A0/func_801C4AA8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801BF1A0/func_801C4C7C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801BF1A0/func_801C4E90.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801BF1A0/func_801C5108.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801BF1A0/func_801C5378.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801BF1A0/func_801C56AC.s")


extern u8 D_801CC8C4;
extern u16 D_80037754;
extern u8 D_801CF110[];
extern u8 D_801CF120[];
extern u8 D_801CF130[];
extern u8 D_801CF140[];
extern u8 D_801CF150[];
extern u8 D_801CF160[];
extern u8 D_801CF170[];

struct func_801C56B8_Struct {
    u8 pad[0x3C];
    s16 unk3C;
};

void func_801C56B8(struct func_801C56B8_Struct *arg0, s32 arg1) {
    arg0->unk3C = 0x384;
    func_8001B204(0, 0x7D0, (s16) ((D_801CC8C4 * 0xA) + 0x76), D_801CF110);
    func_8001B204(1, 0x7D0, 0x76, D_801CF120);
    func_8001B204(2, 0x7D0, 0x80, D_801CF130);
    func_8001B204(3, 0x7D0, 0x8A, D_801CF140);
    func_8001B204(4, 0x7D0, 0x94, D_801CF150);
    if (D_80037754 == 1) {
        func_8001B204(5, 0x7D0, 0x9E, D_801CF160);
    } else {
        func_8001B204(5, 0x7D0, 0x9E, D_801CF170, 6);
    }
    func_800058DC(arg0, func_801C1DB8);
}


extern void func_801C11BC(s32);
extern void func_801C5824();

void func_801C57D8(s32 arg0, s32 arg1) {
    D_801CC8BC = func_80005670(arg0, &D_80044090);
    func_801C11BC(0x64);
    func_800058DC(arg0, &func_801C5824);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801BF1A0/func_801C5824.s")


extern void func_801C5944();

void func_801C5910(s32 arg0, s32 arg1) {
    if (D_801CC8CC == 0) {
        func_800058DC(arg0, func_801C5944);
    }
}


extern s32 func_8013EFF0();
extern void func_801C59F4();

void func_801C5944(s32 arg0, s32 arg1) {
    s32 sp24;

    sp24 = func_8013EFF0();
    if (sp24 == 1) {
        func_80142570();
        func_800179B0(0);
        func_8012FE50(0x20, 0xC0, 1, 1, 0);
        func_800058DC(arg0, func_801C59F4);
    }
    if (sp24 == 2) {
        func_80142570();
        func_800179B0(0);
        func_8012FE50(0x17, 0x73, 1, 1, 0);
        func_800058DC(arg0, func_801C59F4);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801BF1A0/func_801C59F4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801BF1A0/func_801C5A00.s")

