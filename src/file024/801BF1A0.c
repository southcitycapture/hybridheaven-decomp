#include "common.h"


extern void func_800058DC(s32, void *);
extern s32 D_801CFCF4;
extern void func_801BF1DC();

void func_801BF1A0(void) {
    func_800058DC(D_801CFCF4, func_801BF1DC);
}



void func_801BF1CC(s32 arg0, s32 arg1) {
    D_801CFCF4 = arg0;
}

extern u16 *D_801CFCF0;
void func_801BF248(s32 arg0, s32 arg1);
extern u8 D_80044090[];
extern s32 func_80005670(s32, void *);

extern void func_80002364(s32, s32, s32, s32);

void func_801BF1DC(void *arg0, s32 arg1) {
    func_80005670(arg0, D_80044090);
    D_801CFCF0 = (u16 *)((u8 *)arg0 + 0x90);
    *D_801CFCF0 = 0;
    func_80002364(0x0C000C0C, 0xA, 2, 0);
    func_800058DC((s32)arg0, (void *)func_801BF248);
}


extern void func_80152238();
extern void func_801BF288();

void func_801BF248(s32 arg0, s32 arg1) {
    func_800058DC(arg0, func_801BF288);
    *D_801CFCF0 += 1;
    func_80152238();
}


extern void func_801170DC(s32);
extern void func_801C12B0(void);
extern void func_801BF2DC();

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


extern void func_801C0608();

extern void func_80005E44(void *, void *);
extern void func_80006214(void *);
extern void func_8012636C(void *, s32);
extern void func_8012C784(void *, s32, s32);
extern u8 D_80164F30[];
extern u8 D_8017BA00[];
extern f32 D_801CEAC0;

typedef struct func_801C0500_Cam {
    u8 pad[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u16 unk10;
} func_801C0500_Cam;

typedef struct func_801C0500_Props {
    u8 pad[0x18];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    u32 unk24;
    u8 pad2[0x8];
    void *unk30;
} func_801C0500_Props;

typedef struct func_801C0500_Holder {
    u8 pad[0x2C];
    func_801C0500_Props *unk2C;
} func_801C0500_Holder;

typedef struct func_801C0500_Owner {
    u8 pad[0x2C];
    func_801C0500_Cam *unk2C;
} func_801C0500_Owner;

typedef struct func_801C0500_Arg0 {
    u8 pad[0x24];
    func_801C0500_Owner *unk24;
} func_801C0500_Arg0;

void func_801C0500(void *arg0, void **arg1) {
    func_801C0500_Props *temp_v0;
    f32 temp_f0;

    func_80005E44(arg0, D_80164F30);
    func_80006214(arg0);
    func_8012636C(arg0, 0);
    temp_f0 = D_801CEAC0;
    ((func_801C0500_Holder *) *arg1)->unk2C->unk18 = temp_f0;
    ((func_801C0500_Holder *) *arg1)->unk2C->unk1C = temp_f0;
    ((func_801C0500_Holder *) *arg1)->unk2C->unk20 = temp_f0;
    func_8012C784(arg0, 0, 2);
    func_800058DC((s32) arg0, (void *) func_801C0608);
    ((func_801C0500_Arg0 *) arg0)->unk24->unk2C->unk4 = 0.0f;
    ((func_801C0500_Arg0 *) arg0)->unk24->unk2C->unk8 = 15.0f;
    ((func_801C0500_Arg0 *) arg0)->unk24->unk2C->unkC = -40.0f;
    ((func_801C0500_Arg0 *) arg0)->unk24->unk2C->unk10 = 0x800;
    temp_v0 = ((func_801C0500_Holder *) *arg1)->unk2C;
    temp_v0->unk24 = temp_v0->unk24 | 0x4000;
    ((func_801C0500_Holder *) *arg1)->unk2C->unk30 = (void *) D_8017BA00;
}


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


void func_801C0B24(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801BF1A0/func_801C0B30.s")


void func_801C0F64(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}


extern void func_801C0F98();

void func_801C0F70(s32 arg0, s32 arg1) {
    func_800058DC(arg0, func_801C0F98);
}


typedef struct func_801C0F98_Struct {
    u8 pad[0x90];
    f32 unk90;
} func_801C0F98_Struct;

extern u8 D_801CE978[];
extern u8 D_801CE994[];
extern u8 D_801CE9B0[];
extern u8 D_801CE9CC[];
extern void func_801C1034();

void func_801C0F98(func_801C0F98_Struct *arg0, s32 arg1) {
    arg0->unk90 = 150.0f;
    func_8001B204(1, 0x7D0, 0x50, D_801CE978);
    func_8001B204(2, 0x7D0, 0x5A, D_801CE994);
    func_8001B204(3, 0x7D0, 0x64, D_801CE9B0);
    func_8001B204(4, 0x7D0, 0x6E, D_801CE9CC);
    func_800058DC((s32)arg0, func_801C1034);
}


void func_801C1034(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}

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

struct func_801C3410_Struct {
    u8 pad[0x90];
    s8 unk90;
};
extern s32 D_801CC8A4;
void func_801C3410(struct func_801C3410_Struct *arg0, s32 *arg1);

s32 func_801C125C(s8 arg0) {
    if (D_801CC8A4 != 0) {
        ((struct func_801C3410_Struct *)D_801CC8A4)->unk90 = arg0;
        func_800058DC(D_801CC8A4, (void *)func_801C3410);
        return 1;
    }
    return 0;
}

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


extern u8 D_801CC8C4;
extern u16 D_80037754;
extern u8 D_801CEBB4[];
extern u8 D_801CEBC4[];
extern u8 D_801CEBD4[];
extern u8 D_801CEBE4[];
extern u8 D_801CEBF4[];
extern u8 D_801CEC04[];
extern u8 D_801CEC14[];
extern void func_801C1DB8();

typedef struct func_801C18FC_Struct {
    u8 pad[0x3C];
    u16 unk3C;
} func_801C18FC_Struct;

void func_801C18FC(func_801C18FC_Struct *arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = arg0->unk3C;
    arg0->unk3C = (u16) (temp_v0 - 1);
    if (temp_v0 == 0) {
        arg0->unk3C = 0x384;
        func_8001B204(0, 0x7D0, (s16) ((D_801CC8C4 * 0xA) + 0x76), D_801CEBB4);
        func_8001B204(1, 0x7D0, 0x76, D_801CEBC4);
        func_8001B204(2, 0x7D0, 0x80, D_801CEBD4);
        func_8001B204(3, 0x7D0, 0x8A, D_801CEBE4);
        func_8001B204(4, 0x7D0, 0x94, D_801CEBF4);
        if (D_80037754 == 1) {
            func_8001B204(5, 0x7D0, 0x9E, D_801CEC04);
        } else {
            func_8001B204(5, 0x7D0, 0x9E, D_801CEC14, 6);
        }
        func_800058DC((s32) arg0, func_801C1DB8);
    }
}


extern s32 func_801C11BC();
extern void func_801C33C8();

extern void func_801C1A98();

typedef struct func_801C1A30_Struct {
    u8 pad[0x90];
    s8 unk90;
} func_801C1A30_Struct;

void func_801C1A30(s32 arg0, s32 arg1) {
    if (D_801CC8A4 == 0) {
        func_801C11BC(0x64);
    } else {
        ((func_801C1A30_Struct *) D_801CC8A4)->unk90 = 0x64;
        func_800058DC(D_801CC8A4, (void *) func_801C33C8);
    }
    func_800058DC(arg0, (void *) func_801C1A98);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801BF1A0/func_801C1A98.s")


extern s32 D_801CFD08;
extern s16 D_801CC8D0;
extern void func_801C1040(s32, s32, s32);
extern void func_801C1C44();
extern void func_801C28E4();

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


void func_801C1D7C(func_801C1D7C_Struct *arg0, s32 arg1) {
    if (D_801CC8CC == 0) {
        arg0->unk3C = 0x384;
        func_800058DC(arg0, func_801C1DB8);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801BF1A0/func_801C1DB8.s")


void func_801C2050(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801BF1A0/func_801C205C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801BF1A0/func_801C220C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801BF1A0/func_801C2280.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801BF1A0/func_801C2518.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801BF1A0/func_801C258C.s")


typedef struct func_801C2684_Node {
    u8 pad[0x10];
    struct func_801C2684_Node *unk10;
} func_801C2684_Node;

typedef struct func_801C2684_Arg0 {
    u8 pad[0x3C];
    u16 unk3C;
} func_801C2684_Arg0;

extern func_801C2684_Node *D_801CFD00;
extern func_801C2684_Node *D_801CFD04;
extern void func_801C27D0();
extern void func_801453CC(s32, s32, s32, s32, s32, s32, s32);

void func_801C2684(func_801C2684_Arg0 *arg0, s32 arg1) {
    u8 i;
    func_801C2684_Node *node;

    node = D_801CFD04;
    func_801453CC(node, 0x80, 0, 1, 0x1D, 1, 0x1E);
    node = node->unk10;
    i = 0;
    do {
        func_801453CC(node, 0, 0, 1, 0x1D, 1, 0x1E);
        i++;
        node = node->unk10;
    } while (i < 8);
    node = D_801CFD00;
    func_801453CC(node, 0x80, 1, 1, 0x1F, 0x1F, 0xD);
    node = node->unk10;
    i = 0;
    do {
        func_801453CC(node, 0, 1, 1, 0x1F, 0x1F, 0xD);
        i++;
        node = node->unk10;
    } while (i < 0xB);
    arg0->unk3C++;
    if (arg0->unk3C >= 0x20) {
        func_800058DC((s32) arg0, func_801C27D0);
    }
}


void func_801C27D0(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801BF1A0/func_801C27DC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801BF1A0/func_801C28E4.s")


void func_801C2A38(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}

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



typedef struct func_801C3334_StructInner {
    u8 pad[0x28];
    s16 unk28;
} func_801C3334_StructInner;

extern void func_80116E80(s32);
extern void func_80146178(s32, u8 *, s32, s32, s32, s32, s32, s32, s32, s32, s32);

void func_801C3334(s32 arg0, func_801C3334_StructInner **arg1) {
    u8 sp3F;

    func_80116E80(0x800);
    func_80146178(arg0, &sp3F, 0, 0, 0x140, 0xF0, 2, 0, 0, 0, 0);
    func_80006214(arg0);
    (*arg1)->unk28 = 0x800;
    D_801CC8A4 = arg0;
    func_800058DC(arg0, (void *)func_801C33C8);
}


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


void func_801C3934(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}

extern u8 D_801CC8C8;

extern u8 D_801CED10[];
extern u8 D_801CED20[];
extern u8 D_801CED2C[];
extern u8 D_801CED38[];
extern u8 D_801CED44[];
extern u8 D_801CED48[];
extern u8 D_801CED4C[];
extern void func_801C3A40();

void func_801C3940(s32 arg0, s32 arg1) {
    D_801CC8C8 = 0;
    func_8001B204(0, 0x7D0, (s16) ((D_801CC8C8 * 0xA) + 0x8A), D_801CED10);
    func_8001B204(1, 0x7D0, 0x8A, D_801CED20);
    func_8001B204(2, 0x7D0, 0x94, D_801CED2C);
    func_8001B204(3, 0x7D0, 0x9E, D_801CED38);
    func_8001B204(4, 0, 0, D_801CED44);
    func_8001B204(5, 0, 0, D_801CED48);
    func_8001B204(6, 0, 0, D_801CED4C);
    func_800058DC(arg0, func_801C3A40);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801BF1A0/func_801C3A40.s")


extern s32 func_8013E770();
extern void func_801C3BD8();

void func_801C3BA4(s32 arg0, s32 arg1) {
    func_8013E770();
    func_800058DC(arg0, &func_801C3BD8);
}

extern s32 func_8013E794(void);
extern void func_801C3C14();

void func_801C3BD8(s32 arg0, s32 arg1) {
    if (func_8013E794() == 1) {
        func_800058DC(arg0, (void *) func_801C3C14);
    }
}

extern void func_800023A8(s32);
extern s32 func_8012FE50();

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


void func_801C3CD0(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}

extern s32 D_801CC8B8;
extern s32 D_801CC8BC;
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


extern s32 func_8013E7C0();
extern void func_801C3D84();

void func_801C3D50(s32 arg0, s32 arg1) {
    func_8013E7C0();
    func_800058DC(arg0, &func_801C3D84);
}

void func_801C40EC(s32 arg0, s32 arg1);
extern void func_80142570();
extern void func_800179B0(s32);

extern u8 func_8013E850();
extern void func_801C3E24();

void func_801C3D84(s32 arg0, s32 arg1) {
    u8 sp27;
    u8 temp_v0;

    temp_v0 = func_8013E850();
    sp27 = temp_v0;
    if (temp_v0 & 0xFF) {
        func_80142570();
        func_800179B0(0);
        if (sp27 == 1) {
            func_801C11BC(0xA);
            func_800058DC(arg0, &func_801C3E24);
        }
        if (sp27 == 2) {
            func_8012FE50(0x17, 0x73, 1, 1, 0);
            func_800058DC(arg0, &func_801C40EC);
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801BF1A0/func_801C3E24.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801BF1A0/func_801C3F48.s")


struct func_801C4018_Struct {
    u8 pad[0x3C];
    u16 unk3C;
};

extern void func_801C4074();

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


void func_801C40EC(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}


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


void func_801C43B0(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}


extern u8 D_801CEE24[];
extern u8 D_801CEE38[];
extern u8 D_801CEE44[];
extern u8 D_801CEE50[];
extern u8 D_801CEE5C[];
extern u8 D_801CEE60[];
extern u8 D_801CEE64[];
extern void func_801C44C4();

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


extern s32 func_80140368();
extern void func_801C4674();

void func_801C4640(s32 arg0, s32 arg1) {
    func_80140368();
    func_800058DC(arg0, &func_801C4674);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801BF1A0/func_801C4674.s")


void func_801C47C4(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}


extern void func_801C4840();

void func_801C47D0(s32 arg0, s32 arg1) {
    func_80005700(D_801CC8A8);
    func_80005700(D_801CC8B8);
    D_801CC8A8 = 0;
    D_801CC8B8 = 0;
    D_801CC8BC = func_80005670(arg0, D_80044090);
    func_800058DC(arg0, func_801C4840);
}

extern s32 D_801CC8C0;
void func_801C48A4(s32 arg0, s32 arg1);

extern void func_80140600();
extern u8 D_801CCA34[];

void func_801C4840(s32 arg0, s32 arg1) {
    func_80140600();
    D_801CC8C0 = func_80005670(arg0, D_801CCA34);
    func_80002364(0x0C000C0C, 0xA, 2, 0);
    func_800058DC(arg0, func_801C48A4);
}


extern s32 func_801406A4();
extern void func_801C4954();

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


void func_801C4954(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}


extern u8 D_801BBF0A[];
extern u8 D_801CEE74[];
extern u8 D_801CEE80[];
extern u8 D_801CEE8C[];
extern u8 D_801CEE98[];
extern u8 D_801CEEA4[];
extern u8 D_801CEEA8[];
extern u8 D_801CEEAC[];
extern void func_801C4AA8();

void func_801C4960(s32 arg0, s32 arg1) {
    s32 var_v0;
    s32 var_v1;

    if (D_801BBF0A[0x32] == 0) {
        var_v0 = 2;
        var_v1 = 6;
        D_801CC8C8 = 0;
    } else {
        var_v0 = 6;
        var_v1 = 2;
        D_801CC8C8 = 1;
    }
    func_8001B204(0, 0x7D0, (s16) ((D_801CC8C8 * 0xA) + 0x8A), D_801CEE74);
    func_8001B204(1, 0x7D0, 0x8A, D_801CEE80, var_v0);
    func_8001B204(2, 0x7D0, 0x94, D_801CEE8C, var_v1);
    func_8001B204(3, 0x7D0, 0x9E, D_801CEE98);
    func_8001B204(4, 0, 0, D_801CEEA4);
    func_8001B204(5, 0, 0, D_801CEEA8);
    func_8001B204(6, 0, 0, D_801CEEAC);
    func_800058DC(arg0, func_801C4AA8);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801BF1A0/func_801C4AA8.s")


extern u8 D_801BBC0D;
extern u8 D_801CEEEC[];
extern u8 D_801CEEF8[];
extern u8 D_801CEF04[];
extern u8 D_801CEF10[];
extern u8 D_801CEF1C[];
extern u8 D_801CEF28[];
extern u8 D_801CEF34[];
extern u8 D_801CEF40[];
extern u8 D_801CEF4C[];
extern u8 D_801CEF58[];
extern u8 D_801CEF64[];
extern u8 D_801CEF70[];
extern u8 D_801CEF74[];
extern void func_801C4E90();

void func_801C4C7C(s32 arg0, s32 arg1) {
    if (D_801BBC0D != 0) {
        if (D_801BBC0D != 1) {
            if (D_801BBC0D == 2) {
                func_8001B204(1, 0x7D0, 0x8A, D_801CEEEC, 2);
                func_8001B204(2, 0x7D0, 0x94, D_801CEEF8, 6);
                func_8001B204(3, 0x7D0, 0x9E, D_801CEF04, 6);
                D_801CC8C8 = 0;
            }
        } else {
            func_8001B204(1, 0x7D0, 0x8A, D_801CEF10, 6);
            func_8001B204(2, 0x7D0, 0x94, D_801CEF1C, 2);
            func_8001B204(3, 0x7D0, 0x9E, D_801CEF28, 6);
            D_801CC8C8 = 1;
        }
    } else {
        func_8001B204(1, 0x7D0, 0x8A, D_801CEF34, 6);
        func_8001B204(2, 0x7D0, 0x94, D_801CEF40, 6);
        func_8001B204(3, 0x7D0, 0x9E, D_801CEF4C, 2);
        D_801CC8C8 = 2;
    }
    func_8001B204(0, 0x7D0, (s16) ((D_801CC8C8 * 0xA) + 0x8A), D_801CEF58);
    func_8001B204(4, 0x7D0, 0xA8, D_801CEF64);
    func_8001B204(5, 0, 0, D_801CEF70);
    func_8001B204(6, 0, 0, D_801CEF74);
    func_800058DC(arg0, func_801C4E90);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801BF1A0/func_801C4E90.s")


extern u16 func_80001060();
extern s32 func_801302CC();
extern s32 func_80130290();
extern void func_801C5378();
extern u16 D_801CFD0E;
extern u8 D_801CEFF0[];
extern u8 D_801CEFF4[];
extern u8 D_801CEFF8[];
extern u8 D_801CF008[];
extern u8 D_801CF01C[];
extern u8 D_801CF024[];
extern u8 D_801CF034[];
extern u8 D_801CF048[];
extern u8 D_801CF050[];
extern u8 D_801CF060[];
extern u8 D_801CF074[];
extern u8 D_801CF07C[];
extern u8 D_801CF084[];

void func_801C5108(s32 arg0, s32 arg1) {
    D_801CC8C8 = 0;
    if (func_801302CC() != 0) {
        D_801CC8C8 = 1;
    } else if (func_80130290() != 0) {
        D_801CC8C8 = 0;
    } else {
        D_801CC8C8 = 2;
    }
    func_8001B204(0, 0x6B, (s16) ((D_801CC8C8 * 0xA) + 0x8A), D_801CEFF0);
    func_8001B204(1, 0, 0, D_801CEFF4);
    D_801CFD0E = func_80001060();
    if (func_801302CC() != 0) {
        D_801CFD0E = 2;
    }
    if (D_801CFD0E == 0) goto case0;
    if (D_801CFD0E == 1) goto case1;
    if (D_801CFD0E != 2) goto done;
    goto case2;
case0:
    func_8001B204(2, 0x73, 0x8A, D_801CEFF8, 6);
    func_8001B204(3, 0x73, 0x94, D_801CF008, 6);
    func_8001B204(4, 0x73, 0x9E, D_801CF01C, 2);
    goto done;
case1:
    func_8001B204(2, 0x73, 0x8A, D_801CF024, 2);
    func_8001B204(3, 0x73, 0x94, D_801CF034, 6);
    func_8001B204(4, 0x73, 0x9E, D_801CF048, 6);
    goto done;
case2:
    func_8001B204(2, 0x73, 0x8A, D_801CF050, 6);
    func_8001B204(3, 0x73, 0x94, D_801CF060, 2);
    func_8001B204(4, 0x73, 0x9E, D_801CF074, 6);
done:
    func_8001B204(5, 0x73, 0xA8, D_801CF07C);
    func_8001B204(6, 0, 0, D_801CF084);
    func_800058DC(arg0, func_801C5378);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801BF1A0/func_801C5378.s")


void func_801C56AC(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}


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


extern void func_801C5824();

void func_801C57D8(s32 arg0, s32 arg1) {
    D_801CC8BC = func_80005670(arg0, &D_80044090);
    func_801C11BC(0x64);
    func_800058DC(arg0, &func_801C5824);
}

void func_801C5910(s32 arg0, s32 arg1);

extern s32 func_8011AAF4(void *, s32, s32, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern void func_8013EF54();
extern u8 D_801CC9F8[];
extern u8 D_801CF190[];
extern s32 D_801CC8B4;

void func_801C5824(s32 arg0, s32 arg1) {
    if (D_801CC8CC == 2) {
        func_8011AAF4(&D_801CF190, 0x833, arg0, 0, 1, 3.0f, 0.0f, 120.0f, -22.0f, 3.0f, 0.0f, 42.5f, 0.0f, 0.0f, 30.0f, -1, -1);
        func_8013EF54();
        D_801CC8B4 = func_80005670(arg0, D_801CC9F8);
        func_801C125C(-0x14);
        func_800058DC(arg0, (void *)func_801C5910);
    }
}


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


void func_801C59F4(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801BF1A0/func_801C5A00.s")

