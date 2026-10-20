#include "common.h"


extern void func_8001F74C(void);
extern void func_80380EEC();
extern void *D_80388D84[];

void func_80380E90(u8 *arg0, s32 arg1) {
    void (*temp_v0)(u8 *, s32);

    func_8001F74C();
    temp_v0 = D_80388D84[arg0[0x90]];
    if (temp_v0 != NULL) {
        temp_v0(arg0, arg1);
    }
    func_800058DC(arg0, func_80380EEC);
}


struct func_80380EEC_Struct {
    u8 pad0[0x40];
    f32 unk40;
    f32 unk44;
    f32 unk48;
    u8 pad1[0x44];
    u8 unk90;
    u8 pad2[0x3];
    f32 unk94;
    f32 unk98;
    f32 unk9C;
};

extern void func_8001F75C(void *);
extern u16 D_801BCAE0;
extern s32 D_80388E0C[];

void func_80380EEC(struct func_80380EEC_Struct *arg0, s32 arg1) {
    void (*temp_v0)(void *, s32);

    if (D_801BCAE0 & 0x10) {
        func_8001F74C();
    } else {
        func_8001F75C(arg0);
    }
    temp_v0 = (void (*)(void *, s32)) D_80388E0C[arg0->unk90];
    if (temp_v0 != NULL) {
        temp_v0(arg0, arg1);
    }
    arg0->unk94 = arg0->unk94 + arg0->unk40;
    arg0->unk98 = arg0->unk98 + arg0->unk44;
    arg0->unk9C = arg0->unk9C + arg0->unk48;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file056/80380E90/func_80380F94.s")


void func_80381078(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file056/80380E90/func_80381084.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/80380E90/func_80381204.s")


struct func_803813A8_Struct16 { s32 a, b, c, d; };
struct func_803813A8_StructIn {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[0x8];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    u32 unk24;
    u8 pad3[0x8];
    u32 unk30;
    u8 pad4[0x14];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
};
struct func_803813A8_StructOut {
    u8 pad0[0x30];
    struct func_803813A8_StructIn *unk30;
};
struct func_803813A8_StructA {
    u8 pad0[0x94];
    f32 unk94;
    f32 unk98;
    f32 unk9C;
    u8 pad1[0x8];
    u8 unkA8;
};
extern struct func_803813A8_Struct16 D_80164F40;
extern u8 D_80175C58[];
extern f64 D_80389AD8;
extern f64 D_80389AE0;
extern void func_80005E44(void *, void *);
extern void func_80006214(void *);
extern void func_8012C89C(void *, s32, s32, s32);
extern void func_8012D814(void *, s32, s32, f32, s32);

void func_803813A8(struct func_803813A8_StructA *arg0, struct func_803813A8_StructOut **arg1) {
    struct func_803813A8_Struct16 sp30;
    f32 t;

    sp30 = D_80164F40;
    sp30.b = 0x80000300;
    func_80005E44(arg0, &sp30);
    func_80006214(arg0);
    func_8012C89C(arg0, 0, 3, 2);
    func_8012D814(arg0, 0x4B1, 0, 1.0f, 1);
    (*arg1)->unk30->unk24 |= 0x60300;
    (*arg1)->unk30->unk30 = (u32)D_80175C58 | 0x40000000;
    (*arg1)->unk30->unk4 = arg0->unk94;
    (*arg1)->unk30->unk8 = arg0->unk98;
    (*arg1)->unk30->unkC = arg0->unk9C;
    (*arg1)->unk30->unk48 = 0xFF;
    (*arg1)->unk30->unk49 = 0xFF;
    (*arg1)->unk30->unk4A = 0xFF;
    (*arg1)->unk30->unk4B = 0;
    (*arg1)->unk30->unk4C = 0xFF;
    (*arg1)->unk30->unk4D = 0x1A;
    (*arg1)->unk30->unk4E = 0x40;
    t = (f32)func_8012C6B4(0x96) / D_80389AD8 + D_80389AE0;
    (*arg1)->unk30->unk18 = t;
    (*arg1)->unk30->unk1C = t;
    (*arg1)->unk30->unk20 = t;
    arg0->unkA8 = 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file056/80380E90/func_80381568.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/80380E90/func_803816EC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/80380E90/func_803818A4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/80380E90/func_80381A7C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/80380E90/func_80381C08.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/80380E90/func_80381D78.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/80380E90/func_80381F30.s")


void func_803820E0(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file056/80380E90/func_803820EC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/80380E90/func_80382280.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/80380E90/func_80382410.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/80380E90/func_8038259C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/80380E90/func_80382724.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/80380E90/func_803828BC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/80380E90/func_80382B80.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/80380E90/func_80382CF8.s")


extern void func_80005700();
extern void func_80129FB8(f32, f32, f32, f32, f32, f32, f32, s32, s32, s32, s32, s32, s32, s32, s32, f32, s32, s32);
extern s32 func_8012C6B4(s32);
extern f32 D_80389B50;
extern f32 D_80389B54;

struct func_80383098_Struct {
    u8 pad0[0x3C];
    u16 unk3C;
    u8 pad1[0x56];
    f32 unk94;
    f32 unk98;
    f32 unk9C;
};

void func_80383098(struct func_80383098_Struct *arg0, s32 arg1) {
    s32 sp64;
    u8 pad[4];
    s32 sp5C;

    sp64 = arg0->unk3C;
    arg0->unk3C++;
    sp5C = func_8012C6B4(0xC8);
    func_80129FB8((f32) (((f64) (sp5C - 0x64) / 100.0) + (f64) arg0->unk94), arg0->unk98, (f32) (((f64) (func_8012C6B4(0xC8) - 0x64) / 100.0) + (f64) arg0->unk9C), 0.0f, D_80389B50, 0.0f, 0.0f, 0x4B, 0x4B, 0x4B, 0x32, 0x32, 0x32, 0x82, -4, D_80389B54, 4, 0);
    if (sp64 >= 0xA) {
        func_80005700(arg0);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file056/80380E90/func_803831D0.s")


struct func_80383490_StructArg0 {
    u8 pad0[0x94];
    f32 unk94;
    f32 unk98;
    f32 unk9C;
};

struct func_80383490_StructInner {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[0x10];
    f32 unk20;
    u8 pad2[0x27];
    u8 unk4B;
};

struct func_80383490_StructOuter {
    u8 pad0[0x30];
    struct func_80383490_StructInner *unk30;
};

extern f64 D_80389B78;

void func_80383490(struct func_80383490_StructArg0 *arg0, struct func_80383490_StructOuter **arg1) {
    struct func_80383490_StructInner *temp_v0;

    (*arg1)->unk30->unk4 = arg0->unk94;
    (*arg1)->unk30->unk8 = arg0->unk98;
    (*arg1)->unk30->unkC = arg0->unk9C;
    temp_v0 = (*arg1)->unk30;
    temp_v0->unk20 = (f32) ((f64) temp_v0->unk20 + D_80389B78);
    temp_v0 = (*arg1)->unk30;
    temp_v0->unk4B = (u8) (temp_v0->unk4B - 6);
    if ((s32) (*arg1)->unk30->unk4B < 6) {
        func_80005700();
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file056/80380E90/func_80383530.s")


extern u8 D_801BBBF0[];

struct func_803837A8_StructArg0 {
    u8 pad0[0x3C];
    u16 unk3C;
    u8 pad1[0x94 - 0x3E];
    f32 unk94;
    f32 unk98;
    f32 unk9C;
};

struct func_803837A8_StructInner {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[0x48 - 0x10];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
};

struct func_803837A8_StructOuter {
    u8 pad0[0x30];
    struct func_803837A8_StructInner *unk30;
};

void func_803837A8(struct func_803837A8_StructArg0 *arg0, struct func_803837A8_StructOuter **arg1) {
    (*arg1)->unk30->unk48 = D_801BBBF0[0x204];
    (*arg1)->unk30->unk49 = D_801BBBF0[0x205];
    (*arg1)->unk30->unk4A = D_801BBBF0[0x206];
    (*arg1)->unk30->unk4C = D_801BBBF0[0x208];
    (*arg1)->unk30->unk4D = D_801BBBF0[0x209];
    (*arg1)->unk30->unk4E = D_801BBBF0[0x20A];
    (*arg1)->unk30->unk4 = arg0->unk94;
    (*arg1)->unk30->unk8 = arg0->unk98;
    (*arg1)->unk30->unkC = arg0->unk9C;
    if (arg0->unk3C == 0) {
        goto case0;
    }
    if (arg0->unk3C != 1) {
        return;
    }
    goto case1;
case0:
    (*arg1)->unk30->unk4B = (u8) ((*arg1)->unk30->unk4B + 0x20);
    if ((s32) (*arg1)->unk30->unk4B >= 0xE0) {
        (*arg1)->unk30->unk4B = 0xFF;
        arg0->unk3C = 1;
    }
    return;
case1:
    (*arg1)->unk30->unk4B = (u8) ((*arg1)->unk30->unk4B - 0xA);
    if ((s32) (*arg1)->unk30->unk4B < 0xA) {
        func_80005700();
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file056/80380E90/func_803838EC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/80380E90/func_80383C6C.s")


struct func_803840D0_Inner {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[0xC];
    f32 unk1C;
    u8 pad2[0x2B];
    u8 unk4B;
};
struct func_803840D0_Out {
    u8 pad0[0x30];
    struct func_803840D0_Inner *unk30;
};
struct func_803840D0_Struct {
    u8 pad0[0x3C];
    u16 unk3C;
    u8 pad1[6];
    f32 unk44;
    u8 pad2[0x4C];
    f32 unk94;
    f32 unk98;
    f32 unk9C;
};
extern f64 D_80389BC0;
extern f64 D_80389BC8;

void func_803840D0(struct func_803840D0_Struct *arg0, struct func_803840D0_Out **arg1) {
    arg0->unk44 = arg0->unk44 * D_80389BC0;
    (*arg1)->unk30->unk4 = arg0->unk94;
    (*arg1)->unk30->unk8 = arg0->unk98;
    (*arg1)->unk30->unkC = arg0->unk9C;
    (*arg1)->unk30->unk1C = arg0->unk44 * D_80389BC8;
    if (arg0->unk3C == 0) goto c0;
    if (arg0->unk3C != 1) goto end;
    goto c1;
c0:
    (*arg1)->unk30->unk4B = (*arg1)->unk30->unk4B + 0x20;
    if ((*arg1)->unk30->unk4B >= 0xE0) {
        (*arg1)->unk30->unk4B = 0xFF;
        arg0->unk3C = 1;
    }
    return;
c1:
    (*arg1)->unk30->unk4B = (*arg1)->unk30->unk4B - 0xA;
    if ((*arg1)->unk30->unk4B < 0xA) {
        func_80005700();
    }
end:
    return;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file056/80380E90/func_803841EC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/80380E90/func_80384518.s")


struct func_803846EC_StructArg0 {
    u8 pad[0x3C];
    u16 unk3C;
};

struct func_803846EC_StructInner {
    u8 pad[0x18];
    f32 unk18;
    u8 pad1[4];
    f32 unk20;
    u8 pad2[0x24];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
};

struct func_803846EC_StructOuter {
    u8 pad[0x30];
    struct func_803846EC_StructInner *unk30;
};

extern f64 D_80389BF8;

void func_803846EC(struct func_803846EC_StructArg0 *arg0, struct func_803846EC_StructOuter **arg1) {
    u16 temp_a3;
    struct func_803846EC_StructInner *temp_v0;

    temp_a3 = arg0->unk3C;
    arg0->unk3C = temp_a3 + 1;
    (*arg1)->unk30->unk48 = D_801BBBF0[0x204];
    (*arg1)->unk30->unk49 = D_801BBBF0[0x205];
    (*arg1)->unk30->unk4A = D_801BBBF0[0x206];
    (*arg1)->unk30->unk4C = D_801BBBF0[0x208];
    (*arg1)->unk30->unk4D = D_801BBBF0[0x209];
    (*arg1)->unk30->unk4E = D_801BBBF0[0x20A];
    temp_v0 = (*arg1)->unk30;
    temp_v0->unk18 = (f32) ((f64) temp_v0->unk18 + D_80389BF8);
    temp_v0 = (*arg1)->unk30;
    temp_v0->unk20 = temp_v0->unk18;
    if ((s32) temp_a3 < 4) {
        temp_v0 = (*arg1)->unk30;
        temp_v0->unk4B += 0x3C;
        return;
    }
    if ((s32) temp_a3 >= 5) {
        temp_v0 = (*arg1)->unk30;
        temp_v0->unk4B -= 0x20;
        if ((s32) (*arg1)->unk30->unk4B < 0x20) {
            func_80005700();
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file056/80380E90/func_8038480C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/80380E90/func_80384AEC.s")


extern f64 D_80389C38;
extern f64 D_80389C40;
extern f64 D_80389C48;
extern f64 D_80389C50;

struct func_80384E5C_Struct {
    u8 pad0[0x3C];
    u16 unk3C;
    u8 pad1[0x54];
    f32 unk94;
    f32 unk98;
    f32 unk9C;
};

void func_80384E5C(struct func_80384E5C_Struct *arg0, s32 arg1) {
    s32 sp7C;
    u8 pad[4];
    s32 sp74;
    s32 sp70;
    s32 sp6C;

    sp7C = arg0->unk3C++;
    if (sp7C == 0) {
        sp6C = func_8012C6B4(0xC8);
        sp70 = func_8012C6B4(0xC8);
        sp74 = func_8012C6B4(0xC8);
        func_80129FB8((f32) (((f64) (sp6C - 0x64) / 100.0) + (f64) arg0->unk94), (f32) (((f64) (sp70 - 0x64) / 100.0) + (f64) arg0->unk98), (f32) (((f64) (sp74 - 0x64) / 100.0) + (f64) arg0->unk9C), 0.0f, 0.0f, 0.0f, 0.0f, 0, 0, 0, 0, 0, 0, 0x78, -6, (f32) (((f64) func_8012C6B4(0x28) / D_80389C38) + D_80389C40), 1, 0);
    }
    if (sp7C == 1) {
        sp6C = func_8012C6B4(0xC8);
        sp70 = func_8012C6B4(0xC8);
        sp74 = func_8012C6B4(0xC8);
        func_80129FB8((f32) (((f64) (sp6C - 0x64) / 100.0) + (f64) arg0->unk94), (f32) (((f64) (sp70 - 0x64) / 100.0) + (f64) arg0->unk98), (f32) (((f64) (sp74 - 0x64) / 100.0) + (f64) arg0->unk9C), 0.0f, 0.0f, 0.0f, 0.0f, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x64, -6, (f32) (((f64) func_8012C6B4(0x28) / D_80389C48) + D_80389C50), 5, 0);
        func_80005700(arg0);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file056/80380E90/func_80385114.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/80380E90/func_80385584.s")


typedef struct func_80385918_Struct {
    u8 pad0[0x3C];
    u16 unk3C;
    u8 pad1[0x94 - 0x3E];
    f32 unk94;
    f32 unk98;
    f32 unk9C;
} func_80385918_Struct;

extern f32 D_80389C88;
extern f32 D_80389C8C;
extern f32 D_80389C90;
extern f64 D_80389C98;
extern f64 D_80389CA0;

void func_80385918(func_80385918_Struct *arg0, s32 arg1) {
    s32 cnt;
    register f32 fs1;
    s32 r0;
    s32 r1;
    s32 r2;
    s32 i;

    cnt = arg0->unk3C++;
    if (cnt == 0) {
        f32 fs2;
        fs1 = 0.0f;
        func_80129FB8(arg0->unk94, arg0->unk98, arg0->unk9C, 0.0f, 0.0f, 0.0f, 0.0f, 0xFF, 0xFF, 0xFF, 0xFF, 0x9A, 0, 0xB4, -4, D_80389C88, 5, 0);
        for (fs2 = D_80389C8C, fs1 = D_80389C90, i = 0; i != 4; i++) {
            r0 = func_8012C6B4(0x190);
            r1 = func_8012C6B4(0x190);
            func_80129FB8(arg0->unk94, arg0->unk98, arg0->unk9C, (r0 - 0xC8) / 100.0, (r1 - 0x96) / 100.0, -((func_8012C6B4(0x190) - 0xC8) / 100.0), fs1, 0xFF, 0xFF, 0xFF, 0x14, 0xFF, 0x76, 0xDC, -0xE, fs2, 0x15, 0);
            r0 = func_8012C6B4(0x190);
            r1 = func_8012C6B4(0x190);
            func_80129FB8(arg0->unk94, arg0->unk98, arg0->unk9C, (r0 - 0xC8) / 100.0, (r1 - 0x96) / 100.0, -((func_8012C6B4(0x190) - 0xC8) / 100.0), fs1, 0, 0xFF, 0, 0, 0x40, 0, 0xDC, -0xE, fs2, 0x15, 0);
        }
    }
    r2 = func_8012C6B4(0x3E8);
    r0 = func_8012C6B4(0x3E8);
    r1 = func_8012C6B4(0x3E8);
    func_80129FB8((r2 - 0x1F4) / 100.0 + arg0->unk94, (r0 - 0x1F4) / 100.0 + arg0->unk98, (r1 - 0x1F4) / 100.0 + arg0->unk9C, 0.0f, 0.0f, 0.0f, 0.0f, 0xFF, 0xFF, 0xFF, 0x14, 0xFF, 0x76, 0x78, -4, func_8012C6B4(0x3C) / D_80389C98 + D_80389CA0, 0, 0);
    if (cnt == 0xA) {
        func_80005700(arg0);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file056/80380E90/func_80385D08.s")


extern void func_80380F94(f32, f32, s32, f32, f32, f32, s32);
extern f64 D_80389CC8;
extern f64 D_80389CD0;
extern f64 D_80389CD8;
extern f64 D_80389CE0;

void func_80386094(struct func_803837A8_StructArg0 *arg0, s32 arg1) {
    s32 sp8C;
    u8 pad[8];
    s32 sp80;
    s32 sp7C;
    s32 sp78;
    s32 sp74;
    s32 sp70;
    s32 sp6C;

    sp8C = arg0->unk3C;
    arg0->unk3C = arg0->unk3C + 1;
    sp6C = func_8012C6B4(0x578);
    sp70 = func_8012C6B4(0x578);
    sp74 = func_8012C6B4(0x578);
    sp78 = func_8012C6B4(0x3C);
    sp7C = func_8012C6B4(0x28);
    sp80 = func_8012C6B4(0x28);
    func_80129FB8((f32) (((f64) (sp6C - 0x2BC) / 100.0) + (f64) arg0->unk94), (f32) (((f64) (sp70 - 0x2BC) / 100.0) + (f64) arg0->unk98), (f32) (((f64) (sp74 - 0x2BC) / 100.0) + (f64) arg0->unk9C), 0.0f, 0.0f, 0.0f, 0.0f, 0xFF, 0xFF, 0xFF, sp78 + 0x14, sp7C + 0xD7, sp80 + 0x76, 0xA0, -4, (f32) (((f64) func_8012C6B4(0x3C) / D_80389CC8) + D_80389CD0), 0x10, 0);
    if (!(sp8C % 2)) {
        sp70 = func_8012C6B4(0x578);
        sp74 = func_8012C6B4(0x578);
        sp78 = func_8012C6B4(0x578);
        sp7C = func_8012C6B4(0x28);
        sp80 = func_8012C6B4(0x28);
        func_80129FB8((f32) (((f64) (sp70 - 0x2BC) / 100.0) + (f64) arg0->unk94), (f32) (((f64) (sp74 - 0x2BC) / 100.0) + (f64) arg0->unk98), (f32) (((f64) (sp78 - 0x2BC) / 100.0) + (f64) arg0->unk9C), 0.0f, 0.0f, 0.0f, 0.0f, 0xFF, sp7C + 0x8E, 0, 0x94, sp80, 0, 0x78, -4, (f32) (((f64) func_8012C6B4(0x28) / D_80389CD8) + D_80389CE0), 5, 0);
    }
    if (!(sp8C % 4)) {
        func_80380F94(arg0->unk94, arg0->unk98, *(s32 *)&arg0->unk9C, 0.0f, 0.0f, 0.0f, 0x15);
    }
    if (sp8C == 0) {
        func_80380F94(arg0->unk94, arg0->unk98, *(s32 *)&arg0->unk9C, 0.0f, 0.0f, 0.0f, 0x14);
    }
    if (sp8C == 0xA) {
        func_80005700(arg0);
    }
}


struct func_80386420_StructInner {
    u8 pad0[0x18];
    f32 unk18;
    u8 pad1[0x4];
    f32 unk20;
    u8 pad2[0x27];
    u8 unk4B;
};

struct func_80386420_StructOuter {
    u8 pad0[0x30];
    struct func_80386420_StructInner *unk30;
};

struct func_80386420_StructArg0 {
    u8 pad0[0x3C];
    u16 unk3C;
};

extern f64 D_80389CE8;

void func_80386420(struct func_80386420_StructArg0 *arg0, struct func_80386420_StructOuter **arg1) {
    u16 temp_a2;

    temp_a2 = arg0->unk3C;
    arg0->unk3C = (u16) (temp_a2 + 1);
    (*arg1)->unk30->unk18 = (f32) ((f64) (*arg1)->unk30->unk18 + D_80389CE8);
    (*arg1)->unk30->unk20 = (*arg1)->unk30->unk18;
    if (temp_a2 < 4) {
        (*arg1)->unk30->unk4B = (*arg1)->unk30->unk4B + 0x3C;
        return;
    }
    if (temp_a2 >= 5) {
        (*arg1)->unk30->unk4B = (*arg1)->unk30->unk4B - 0x20;
        if ((s32) (*arg1)->unk30->unk4B < 0x20) {
            func_80005700();
        }
    }
}


struct func_803864D8_StructArg0 {
    u8 pad[0x3C];
    u16 unk3C;
};
struct func_803864D8_StructInner {
    u8 pad[0x10];
    s16 unk10;
    u8 pad1[2];
    s16 unk14;
    u8 pad2[2];
    f32 unk18;
    f32 unk1C;
    u8 pad3[0x2B];
    u8 unk4B;
};
struct func_803864D8_StructOuter {
    u8 pad[0x30];
    struct func_803864D8_StructInner *unk30;
};
extern f64 D_80389CF0;
extern f64 D_80389CF8;

void func_803864D8(struct func_803864D8_StructArg0 *arg0, struct func_803864D8_StructOuter **arg1) {
    u16 temp_a2;
    struct func_803864D8_StructInner *temp;

    temp_a2 = arg0->unk3C;
    arg0->unk3C = temp_a2 + 1;
    temp = (*arg1)->unk30;
    temp->unk18 = (f64) temp->unk18 + D_80389CF0;
    temp = (*arg1)->unk30;
    temp->unk1C = (f64) temp->unk1C + D_80389CF8;
    temp = (*arg1)->unk30;
    temp->unk10 = (s16) (temp->unk10 + 0x155) & 0x1FFF;
    temp = (*arg1)->unk30;
    temp->unk14 = (s16) (temp->unk14 + 0x155) & 0x1FFF;
    if ((s32) temp_a2 < 4) {
        temp = (*arg1)->unk30;
        temp->unk4B += 0x32;
        return;
    }
    if ((s32) temp_a2 >= 5) {
        temp = (*arg1)->unk30;
        temp->unk4B -= 0x18;
        if ((*arg1)->unk30->unk4B < 0x18) {
            func_80005700(arg0, arg1);
        }
    }
}


extern f64 D_80389D00;
extern f64 D_80389D08;
extern f64 D_80389D10;
extern f64 D_80389D18;
extern f64 D_80389D20;
extern f64 D_80389D28;

struct func_803865D4_StructIn {
    u8 pad0[0x18];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    u8 pad1[0x24];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
};
struct func_803865D4_StructOut {
    u8 pad0[0x30];
    struct func_803865D4_StructIn *unk30;
};
struct func_803865D4_StructArg {
    u8 pad0[0x30];
    u32 unk30;
    u8 pad1[0x8];
    u16 unk3C;
};

void func_803865D4(struct func_803865D4_StructArg *arg0, struct func_803865D4_StructOut **arg1)
{
  s32 t = arg0->unk3C;
  struct func_803865D4_StructIn *p;
  u8 a3;
  f64 k;
  k = D_80389D00;
  arg0->unk3C = t + 1;
  p = (*arg1)->unk30;
  p->unk18 = p->unk18 + k;
  p = (*arg1)->unk30;
  p->unk1C = p->unk1C + k;
  p = (*arg1)->unk30;
  p->unk20 = p->unk20 + k;
  p = (*arg1)->unk30;
  a3 = p->unk4B;
  if (a3 < 0x10)
  {
    p->unk4B = 0;
  }
  else
  {
 if (1) { } if (1) { } if (1) { } if (1) { }
    p->unk4B = a3 - 0x10;
  }
  if (t < 4)
  {
    f64 d = 4 - t;
    (*arg1)->unk30->unk49 = (u32) ((d * D_80389D08) + D_80389D10);
    (*arg1)->unk30->unk4A = (u32) (d * D_80389D18);
  }
  else
    if (t < 8)
  {
    f64 d = 8 - t;
    (*arg1)->unk30->unk48 = (u32) (d * D_80389D20);
    (*arg1)->unk30->unk49 = (u32) (d * D_80389D28);
  }
  if ((arg0->unk30 & 0x20) || ((*arg1)->unk30->unk4B == 0))
  {
    func_80005700();
  }
}


extern f32 D_80389D30;
extern f64 D_80389D38;
extern f64 D_80389D40;

typedef struct func_80386968_Struct {
    u8 pad0[0x3C];
    u16 f3C;
    u8 pad3E[0x94 - 0x3E];
    f32 x;
    f32 y;
    f32 z;
} func_80386968_Struct;

void func_80386968(func_80386968_Struct *arg0, s32 arg1)
{
  volatile s32 cnt;
  u16 t;
  s32 e;
  s32 d;
  s32 c;
  s32 b;
  s32 a;
  func_80386968_Struct *p;
  p = arg0;
  cnt = (t = arg0->f3C);
  arg0->f3C = t + 1;
  if (cnt == 0)
  {
    func_80380F94(arg0->x, arg0->y, *((s32 *) (&arg0->z)), 0.0f, 0.0f, 0.0f, 0x1A);
    arg0++;
    arg0--;
    func_80380F94(p->x, p->y, *((s32 *) (&p->z)), 0.0f, 0.0f, 0.0f, 0x1B);
    func_80129FB8(p->x, p->y + 4.0f, p->z, 0.0f, 0.0f, 0.0f, 0.0f, 0xFF, 0xF3, 0x22, 0xFF, 0x66, 0, 0xF0, -4, D_80389D30, 6, 0);
  }
  if (!(cnt % 2))
  {
    a = func_8012C6B4(0x640);
    b = func_8012C6B4(0x258);
    c = func_8012C6B4(0x640);
    d = func_8012C6B4(0x28);
    e = func_8012C6B4(0x28);
    func_80129FB8((f32) ((((f64) (a - 0x320)) / 100.0) + ((f64) p->x)), (f32) ((((f64) b) / 100.0) + ((f64) (p->y + 3.0f))), (f32) ((((f64) (c - 0x320)) / 100.0) + ((f64) p->z)), 0.0f, 0.0f, 0.0f, 0.0f, 0xFF, d + 0xC8, 0x1E, 0xFF, e + 0x3C, 0, 0x78, -4, (f32) ((((f64) func_8012C6B4(0x14)) / D_80389D38) + D_80389D40), 0xD, 0);
  }
  if (cnt >= 8)
  {
    func_80005700(p);
  }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file056/80380E90/func_80386C0C.s")


struct func_80386D54_StructArg0 {
    u8 pad0[0x3C];
    u16 unk3C;
    u8 pad1[0x56];
    f32 unk94;
    f32 unk98;
    s32 unk9C;
};
struct func_80386D54_StructInner {
    u8 pad0[0x4B];
    u8 unk4B;
};
struct func_80386D54_StructOuter {
    u8 pad0[0x30];
    struct func_80386D54_StructInner *unk30;
};


void func_80386D54(struct func_80386D54_StructArg0 *arg0, struct func_80386D54_StructOuter **arg1)
{
  s32 sp34;
  u8 temp_a0;
  extern void func_80005700();
  int new_var;
  sp34 = arg0->unk3C++;
  func_80380F94(arg0->unk94, arg0->unk98, arg0->unk9C, (f32) func_8012C6B4(0x2000), 0.0f, 0.0f, 0x18);
  temp_a0 = (*arg1)->unk30->unk4B;
  ;
  if (((s32) temp_a0) < 0xF0)
  {
    (*arg1)->unk30->unk4B = (u8) ((*arg1)->unk30->unk4B + 4);
  }
  if (sp34 >= 0x3C)
  {
    func_80005700(arg0);
  }
}


struct func_80386DFC_StructB { u8 pad0[0x18]; f32 f18; f32 f1C; f32 f20; u8 pad24[0x27]; u8 f4B; };
struct func_80386DFC_StructA { u8 pad0[0x30]; struct func_80386DFC_StructB *p; };
struct func_80386DFC_StructC { u8 pad0[0x3C]; u16 f3C; };
extern f64 D_80389D48;
extern f64 D_80389D50;

void func_80386DFC(struct func_80386DFC_StructC *arg0, struct func_80386DFC_StructA **arg1) {
    s32 t = arg0->f3C;
    f32 v;
    arg0->f3C = t + 1;
    if (t < 8) {
        (*arg1)->p->f18 = (f32)((f64)(*arg1)->p->f18 + D_80389D48);
        v = (*arg1)->p->f18;
        (*arg1)->p->f20 = v;
        (*arg1)->p->f1C = v;
        return;
    }
    (*arg1)->p->f18 = (f32)((f64)(*arg1)->p->f18 - D_80389D50);
    v = (*arg1)->p->f18;
    (*arg1)->p->f20 = v;
    (*arg1)->p->f1C = v;
    (*arg1)->p->f4B -= 6;
    if ((*arg1)->p->f4B < 6) {
        func_80005700();
    }
}


extern f64 D_80389D58;
extern f64 D_80389D60;

struct func_80386EE0_StructInner {
    u8 pad0[0x12];
    s16 unk12;
    u8 pad1[0x4];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    u8 pad2[0x27];
    u8 unk4B;
};

struct func_80386EE0_StructOuter {
    u8 pad0[0x30];
    struct func_80386EE0_StructInner *unk30;
};

void func_80386EE0(struct func_80386420_StructArg0 *arg0, struct func_80386EE0_StructOuter **arg1)
{
  u16 temp_a2;
  struct func_80386EE0_StructInner *temp_v0;
  s16 temp_t1;
  temp_a2 = arg0->unk3C;
  arg0->unk3C = (u16) (temp_a2 + 1);
  temp_v0 = (*arg1)->unk30;
  temp_v0->unk18 = (f32) (((f64) temp_v0->unk18) + D_80389D58);
  temp_v0 = (*arg1)->unk30;
  temp_v0->unk20 = temp_v0->unk18;
  temp_v0 = (*arg1)->unk30;
  temp_v0->unk18 = (f32) (((f64) temp_v0->unk18) + D_80389D60);
  temp_v0 = (*arg1)->unk30;
  *((s16 *) (((u8 *) temp_v0) + 0x12)) = (s16) (((short) ((*((s16 *) (((u8 *) temp_v0) + 0x12))) + 0x555)) & 0x1FFF);
  if (((s32) temp_a2) < 4)
  {
    temp_v0 = (*arg1)->unk30;
    temp_v0->unk4B = (u8) (temp_v0->unk4B + 0x37);
    return;
  }
  if (((s32) temp_a2) >= 5)
  {
    temp_v0 = (*arg1)->unk30;
    temp_v0->unk4B = (u8) (temp_v0->unk4B - 0x10);
    if (((s32) (*arg1)->unk30->unk4B) < 0x10)
    {
      func_80005700();
    }
  }
}


void func_80386FD4(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}


extern f32 D_80389D68;
extern f32 D_80389D6C;
extern f64 D_80389D70;
extern f64 D_80389D78;

typedef struct func_80386FE0_Struct30 {
    u8 pad0[0x18];
    f32 f18;
    f32 f1C;
    f32 f20;
    u8 pad24[0x27];
    u8 b4B;
} func_80386FE0_Struct30;

typedef struct func_80386FE0_Struct0 {
    u8 pad0[0x30];
    func_80386FE0_Struct30 *p30;
} func_80386FE0_Struct0;

typedef struct func_80386FE0_Struct1 {
    func_80386FE0_Struct0 *a;
    func_80386FE0_Struct0 *b;
} func_80386FE0_Struct1;

typedef struct func_80386FE0_StructA {
    u8 pad0[0x3C];
    u16 u3C;
    u8 pad3E[0x56];
    f32 f94;
    f32 f98;
    f32 f9C;
} func_80386FE0_StructA;

void func_80386FE0(func_80386FE0_StructA *arg0, func_80386FE0_Struct1 *arg1)
{
  s32 t = arg0->u3C;
  s32 i;
  s32 x;
  s32 y;
  f32 v;
  f32 fs3;
  f32 fs2;
  arg0->u3C = t + 1;
  if (t == 0)
  {
    fs3 = 0.0f;
    fs3 = D_80389D68;
    if (((!arg1) && (!arg1)) && (!arg1))
    {
    }
    fs2 = D_80389D6C;
    for (i = 0; i != 0x10; i++)
    {
      x = func_8012C6B4(0xC8);
      y = func_8012C6B4(0x258);
      func_80129FB8(arg0->f94, arg0->f98, arg0->f9C, (-(((f64) x) / 100.0)) - 5.0, ((f64) (y - 0xFA)) / 100.0, ((f64) (func_8012C6B4(0x258) - 0x12C)) / 100.0, fs2, 0xFF, 0xFF, 0xFF, 0x64, 0, 0xFF, 0xF0, -0xC, fs3, 0x15, 0);
    }

  }
  arg1->a->p30->f18 = arg1->a->p30->f18 + D_80389D70;
  v = arg1->a->p30->f18;
  arg1->a->p30->f20 = v;
  arg1->a->p30->f1C = v;
  arg1->b->p30->f18 = arg1->b->p30->f18 + D_80389D78;
  v = arg1->b->p30->f18;
  arg1->b->p30->f20 = v;
  arg1->b->p30->f1C = v;
  arg1->a->p30->b4B = arg1->a->p30->b4B - 0x10;
  arg1->b->p30->b4B = arg1->a->p30->b4B;
  if (arg1->a->p30->b4B < 0x11)
  {
    func_80005700(arg0);
  }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file056/80380E90/func_80387230.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/80380E90/func_8038755C.s")


struct func_80387764_In {
    u8 pad0[0x18];
    f32 unk18;
    u8 pad1[4];
    f32 unk20;
    u8 pad2[0x27];
    u8 unk4B;
};
struct func_80387764_Out {
    u8 pad0[0x30];
    struct func_80387764_In *unk30;
};
extern f64 D_80389DB8;

void func_80387764(s32 arg0, struct func_80387764_Out **arg1) {
    f64 k = D_80389DB8;

    (*arg1)->unk30->unk18 = (*arg1)->unk30->unk18 + k;
    (*arg1)->unk30->unk20 = (*arg1)->unk30->unk20 + k;
    (*arg1)->unk30->unk4B = (*arg1)->unk30->unk4B - 0x10;
    if ((*arg1)->unk30->unk4B < 0x10) {
        func_80005700(arg0);
    }
}

extern f32 D_80389DC0;
extern f32 D_80389DC4;
extern f32 D_80389DC8;
struct func_803877F0_Struct {
    u8 pad0[0x3C];
    u16 unk3C;
    u8 pad1[0x54];
    f32 unk94;
    f32 unk98;
    f32 unk9C;
};

void func_803877F0(struct func_803877F0_Struct *arg0, s32 arg1)
{
  u32 t;
  s32 y;
  s32 x;
  u32 i;
  f32 b;
  f32 a;
  t = arg0->unk3C;
  i = 0;
  arg0->unk3C = t + 1;
  if (t == 0)
  {
    if (D_80389DC0)
    {
    }
    b = D_80389DC4;
    a = D_80389DC0;
    do
    {
      x = func_8012C6B4(0xC8);
      y = func_8012C6B4(0xC8);
      func_80129FB8(arg0->unk94, arg0->unk98, arg0->unk9C, (f32) (((f64) (x - 0x64)) / 100.0), (f32) (((f64) (y - 0x32)) / 100.0), (f32) (-(((f64) (func_8012C6B4(0xC8) - 0x64)) / 100.0)), b, 0xFF, 0xFF, 0xFF, t = 0xFF, 0, 0, 0xDC, -0xE, a, 0x15, 0);
      i++;
    }
    while (i != 8);
    func_80129FB8(arg0->unk94, arg0->unk98, arg0->unk9C, 0.0f, 0.0f, 0.0f, 0.0f, 0xFF, 0xFF, 0xFF, 0xFF, 0, 0, 0x78, -4, D_80389DC8, 0, 0);
    func_80005700(arg0);
  }
}

