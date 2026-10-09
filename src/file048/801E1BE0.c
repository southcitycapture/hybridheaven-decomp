#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E1BE0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E1C74.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E1D24.s")


extern void func_8038BE98(f32 a0);
extern void func_8038BD50(f32 a0, f32 a1, f32 a2);
extern void D_8038BD88(f32 a0, f32 a1, f32 a2);
extern f32 D_801EA4A0;
extern f32 D_801EA4A4;
extern f32 D_801EA4A8;
extern f32 D_801EA4AC;

s32 func_801E1DE0(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x73F780) != 0) {
        func_8038BE98(D_801EA4A0);
        func_8038BD50(-39.0f, D_801EA4A4, -11.0f);
        D_8038BD88(D_801EA4A8, D_801EA4AC, 64.4f);
        return 4;
    }
    return 3;
}


extern void D_8038C158();

s32 func_801E1E60(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xC35000) != 0) {
        D_8038C158();
        return 5;
    }
    return 4;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E1EAC.s")


extern f32 D_801EA4C4;
extern f32 D_801EA4C8;
extern f32 D_801EA4CC;

s32 func_801E1F5C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x012E1FBFLL) != 0) {
        func_8038BE98(D_801EA4C4);
        func_8038BD50(0.0f, D_801EA4C8, 10.5f);
        D_8038BD88(0.0f, D_801EA4CC, 50.4f);
        return 7;
    }
    return 6;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E1FD4.s")


typedef struct func_801E2054_StructC {
    u8 pad0[4];
    f32 unk4;
} func_801E2054_StructC;

typedef struct func_801E2054_StructB {
    u8 pad0[0x2C];
    func_801E2054_StructC *unk2C;
} func_801E2054_StructB;

typedef struct func_801E2054_StructA {
    u8 pad0[0x24];
    func_801E2054_StructB *unk24;
} func_801E2054_StructA;

typedef struct func_801E2054_StructV {
    u8 pad0[8];
    func_801E2054_StructA *unk8;
} func_801E2054_StructV;

extern f32 D_801E9CA8;
extern u8 func_801DAAF0[];

s32 func_801E2054(s32 arg0, s32 arg1) {
    func_801E2054_StructV *v;

    if (func_801C0B8C(0x019F09FE) != 0) {
        D_8038C158();
        v = *(func_801E2054_StructV **)(func_801DAAF0 + 0x24);
        D_801E9CA8 = v->unk8->unk24->unk2C->unk4;
        v = *(func_801E2054_StructV **)(func_801DAAF0 + 0x24);
        v->unk8->unk24->unk2C->unk4 = 5120.0f;
        return 9;
    }
    return 8;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E20D8.s")


extern f32 D_801EA4F0;
extern f32 D_801EA4F4;
extern f32 D_801EA4F8;
extern f32 D_801EA4FC;

s32 func_801E217C(s32 arg0, s32 arg1) {
    if (func_801C0B8C((u64) 0x0246E2BC) != 0) {
        func_8038BE98(D_801EA4F0);
        func_8038BD50(D_801EA4F4, D_801EA4F8, 27.9f);
        D_8038BD88(0.5f, D_801EA4FC, 49.9f);
        (*(func_801E2054_StructV **)(func_801DAAF0 + 0x24))->unk8->unk24->unk2C->unk4 = D_801E9CA8;
        return 0xB;
    }
    return 0xA;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E2220.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E2230.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E2294.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E22E8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E233C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E23A4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E23F8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E2408.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E2418.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E2428.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E2438.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E2474.s")


typedef struct func_801E2500_Struct {
    u8 pad[0x3C];
    s32 unk3C;
} func_801E2500_Struct;

extern func_801E2500_Struct *func_801BF6B0();
extern void func_801CCE88();

s32 func_801E2500(s32 arg0, s32 arg1) {
    if (func_801BF6B0(3)->unk3C >= 0xB) {
        func_801CCE88(0, 0, 0, 0);
        return 3;
    }
    return 2;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E2554.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E25DC.s")


s32 func_801E2700(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xF8B7DF) != 0) {
        func_801C1000(1, 0);
        return 6;
    }
    return 5;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E274C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E287C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E28F0.s")


void func_801CCE50(s32 arg0, s32 arg1, s32 arg2);
void func_801CCE88(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void func_801CCEC8(s32 arg0, s32 arg1, s32 arg2, s32 arg3);

s32 func_801E2AA4(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x0246E2BC) != 0) {
        func_801CCE88(0, 0x50, 0x46, 0x5A);
        func_801CCEC8(0, -0x20, 0x40, 0x20);
        func_801CCE88(1, 0x50, 0x46, 0x5A);
        func_801CCEC8(1, 0x20, -0x40, -0x20);
        func_801CCE50(0xE6, 0xE6, 0xE6);
        return 0xA;
    }
    return 9;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E2B44.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E2B54.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E2B64.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E2B74.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E2B84.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E2B94.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E2BD4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E2BE4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E2BF4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E2C04.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E2C14.s")


extern void func_801C2420(s32 a0, void *a1);
extern s32 func_801C2570(s32 a0, void *a1);
extern void D_8038BA70(void);
extern void func_8038BA8C(void);
extern void D_8038DD90(void);
extern u8 D_8038DDA8[];
extern u8 D_8038DDC0[];
extern u8 D_8038DF70[];

s32 func_801E2C24(s32 arg0, s32 arg1) {
    func_801C2420(0x46A, D_8038DD90);
    D_8038BA70();
    func_801C2420(0x4D9, D_8038DDA8);
    D_8038BA70();
    func_801C2420(0x447, D_8038DDC0);
    D_8038BA70();
    *(s32 *)(D_8038DF70 + 0x4) = 0x4000;
    if (func_801C2570(0x46B, D_8038DF70) != 0) {
        func_8038BA8C();
    }
    *(s32 *)(D_8038DF70 + 0x10) = 0x4000;
    if (func_801C2570(0x46C, D_8038DF70 + 0xC) != 0) {
        func_8038BA8C();
    }
    *(s32 *)(D_8038DF70 + 0x1C) = 0x8000;
    if (func_801C2570(0x46D, D_8038DF70 + 0x18) != 0) {
        func_8038BA8C();
    }
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E2D10.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E4428.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E4438.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E4448.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E4458.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E4468.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E44AC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E450C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E4654.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E4664.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E4674.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E4684.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E4694.s")


s32 func_801C1000(s32 a, s32 b);
s32 func_8038D28C(s32 a);

s32 func_801E46D8(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x557300) != 0) {
        func_801C1000(3, 2);
        func_8038D28C(0x207);
        return 2;
    }
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E472C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E47E4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E483C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E48E8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E49A0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E4A4C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E4AF4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E4BAC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E4C04.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E4CB0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E4D2C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E4D3C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E4D4C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E4D5C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E4D6C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E4DBC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E4E74.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E4ECC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E4F6C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E4F7C.s")


s32 func_801C1000(s32 arg0, s32 arg1);

s32 func_801E4FC0(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xD29240) != 0) {
        func_801C1000(3, 3);
        return 2;
    }
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E500C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E5154.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E5164.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E5174.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E5184.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E5194.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E51A4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E51E8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E5260.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E53B8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E5404.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E5568.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E5578.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E5588.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E5598.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E55A8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E55B8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E55C8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E560C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E5690.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E5714.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E5744.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E5798.s")


struct func_801E58E4_Hdr {
    u8 pad0[0xC];
    s32 unkC;
};

struct func_801E58E4_Q {
    u8 pad0[0x22];
    u8 unk22;
};

struct func_801E58E4_S {
    f32 unk0;
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[0xC];
    f32 unk1C;
    u8 pad20[0x2B];
    u8 unk4B;
};

struct func_801E58E4_R {
    u8 pad0[0x30];
    struct func_801E58E4_S *unk30;
};

struct func_801E58E4_P {
    u8 pad0[0x18];
    struct func_801E58E4_Q *unk18;
    struct func_801E58E4_R *unk1C;
};

extern void func_801E560C();
extern struct func_801E58E4_P *D_8038D8D0;
extern f32 D_801EA53C;

s32 func_801E58E4(s32 arg0, s32 arg1) {
    if (((struct func_801E58E4_Hdr *) func_801BF6B0(0))->unkC >= 7) {
        D_8038D8D0->unk18->unk22 = 0;
        D_8038D8D0->unk1C->unk30->unk4B = 0x7F;
        D_8038D8D0->unk1C->unk30->unk1C = D_801EA53C;
        D_8038D8D0->unk1C->unk30->unk4 = 0.0f;
        D_8038D8D0->unk1C->unk30->unk8 = 1.5f;
        D_8038D8D0->unk1C->unk30->unkC = 0.0f;
        return 5;
    }
    func_801E560C();
    return 4;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E59AC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E5A00.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E5B64.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E5B74.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E5B84.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E5B94.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E5BA4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E5BB4.s")

void func_801E5BF8(void) {
}


struct func_801E5C00_Mid {
    u8 pad0[0x10];
    s16 unk10;
    s16 unk12;
    s16 unk14;
    u8 pad1[0x48 - 0x16];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 pad2;
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
};

struct func_801E5C00_Inner {
    u8 pad0[0x30];
    struct func_801E5C00_Mid *unk30;
};

struct func_801E5C00_Top {
    u8 pad0[0x24];
    struct func_801E5C00_Inner *unk24;
};

void func_801E5C00(void) {
    ((struct func_801E5C00_Top *) D_8038D8D0)->unk24->unk30->unk48 = (u8) (((struct func_801E5C00_Top *) D_8038D8D0)->unk24->unk30->unk48 + 0x14);
    ((struct func_801E5C00_Top *) D_8038D8D0)->unk24->unk30->unk49 = (u8) (((struct func_801E5C00_Top *) D_8038D8D0)->unk24->unk30->unk49 + 0x14);
    ((struct func_801E5C00_Top *) D_8038D8D0)->unk24->unk30->unk4A = (u8) (((struct func_801E5C00_Top *) D_8038D8D0)->unk24->unk30->unk4A + 0x14);
    ((struct func_801E5C00_Top *) D_8038D8D0)->unk24->unk30->unk4C = (u8) (((struct func_801E5C00_Top *) D_8038D8D0)->unk24->unk30->unk4C + 0x14);
    ((struct func_801E5C00_Top *) D_8038D8D0)->unk24->unk30->unk4D = (u8) (((struct func_801E5C00_Top *) D_8038D8D0)->unk24->unk30->unk4D + 0x14);
    ((struct func_801E5C00_Top *) D_8038D8D0)->unk24->unk30->unk4E = (u8) (((struct func_801E5C00_Top *) D_8038D8D0)->unk24->unk30->unk4E + 0x14);
    ((struct func_801E5C00_Top *) D_8038D8D0)->unk24->unk30->unk10 = (s16) (((struct func_801E5C00_Top *) D_8038D8D0)->unk24->unk30->unk10 + 0x71);
    ((struct func_801E5C00_Top *) D_8038D8D0)->unk24->unk30->unk12 = (s16) (((struct func_801E5C00_Top *) D_8038D8D0)->unk24->unk30->unk12 + 0x71);
    ((struct func_801E5C00_Top *) D_8038D8D0)->unk24->unk30->unk14 = (s16) (((struct func_801E5C00_Top *) D_8038D8D0)->unk24->unk30->unk14 + 0x71);
}


extern s32 D_801E9EB0;
extern s32 D_801E9EB4;

void func_801E5CE4(void) {
    D_801E9EB0 = 0;
    D_801E9EB4 = 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E5CFC.s")


extern f32 D_801EA54C;

struct func_801E5DF8_Obj30 {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
};

struct func_801E5DF8_Obj24 {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad1[0x30 - 0x23];
    struct func_801E5DF8_Obj30 *unk30;
};

struct func_801E5DF8_Top {
    u8 pad0[0x24];
    struct func_801E5DF8_Obj24 *unk24;
};

s32 func_801E5DF8(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x15BE67F) != 0) {
        ((struct func_801E5DF8_Top *) D_8038D8D0)->unk24->unk30->unk4 = 0.0f;
        ((struct func_801E5DF8_Top *) D_8038D8D0)->unk24->unk30->unk8 = 13.0f;
        ((struct func_801E5DF8_Top *) D_8038D8D0)->unk24->unk30->unkC = D_801EA54C;
        func_801E5BF8();
        ((struct func_801E5DF8_Top *) D_8038D8D0)->unk24->unk22 = 1;
        func_801C1000(3, 6);
        return 2;
    }
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E5EAC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E5FE8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E6064.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E6148.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E6244.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E6328.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E637C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E64C4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E64D4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E64E4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E64F4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E6504.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E6548.s")


typedef struct func_801E65B0_StructC {
    u8 pad0[0x30];
    s32 unk30;
    u8 pad1[0x4B - 0x34];
    u8 unk4B;
} func_801E65B0_StructC;

typedef struct func_801E65B0_StructB {
    u8 pad0[0x30];
    func_801E65B0_StructC *unk30;
} func_801E65B0_StructB;

typedef struct func_801E65B0_StructA {
    u8 pad0[0x28];
    func_801E65B0_StructB *unk28;
} func_801E65B0_StructA;

extern s32 func_801C1088(s32 a0, s32 a1, s32 a2);
extern void func_801C10D8(s32 a0, s32 a1);
extern u32 func_801C1134(s32 a0, s32 a1);
extern u8 D_801D96C8[];

s32 func_801E65B0(s32 arg0, s32 arg1) {
    f32 t;
    if (func_801C1088(3, 7, 0x3C) != 0) {
        func_801C10D8(3, 7);
        ((func_801E65B0_StructA *) D_8038D8D0)->unk28->unk30->unk30 = (s32) D_801D96C8 | 0x40000000;
        return 3;
    }
    t = (f32) func_801C1134(3, 7) / 60.0f;
    ((func_801E65B0_StructA *) D_8038D8D0)->unk28->unk30->unk4B = (s8) (u32) (255.0f * t);
    return 2;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E66F8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E6708.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E6718.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E6728.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E6738.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E6748.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E6758.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E6768.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E6778.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E67BC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E67C8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E684C.s")


struct func_801E685C_Struct2 {
    u8 pad[0x30];
    s32 unk30;
};

struct func_801E685C_Struct1 {
    u8 pad[0x2C];
    struct func_801E685C_Struct2 *unk2C;
};

extern s32 func_8012CF8C(s32, s32, s32, s32);
extern s32 D_8038D8CC;
extern s32 D_801E9F18;
extern s32 D_801EA440[];

void func_801E685C(void) {
    func_8012CF8C(D_8038D8CC, ((struct func_801E685C_Struct1 *)D_8038D8D0)->unk2C->unk30 + 0x40, 0x46C, D_801EA440[D_801E9F18]);
    D_801E9F18 = D_801E9F18 - 1;
    if (D_801E9F18 < 0) {
        D_801E9F18 = 7;
    }
}


typedef struct func_801E68D4_StructZ {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
} func_801E68D4_StructZ;

typedef struct func_801E68D4_StructY {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad1[0x30 - 0x23];
    func_801E68D4_StructZ *unk30;
} func_801E68D4_StructY;

typedef struct func_801E68D4_StructX {
    u8 pad0[0x2C];
    func_801E68D4_StructY *unk2C;
} func_801E68D4_StructX;

extern f32 D_801EA55C;
extern void func_801E67BC(void);

s32 func_801E68D4(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x012E1FBF) != 0) {
        ((func_801E68D4_StructX *) D_8038D8D0)->unk2C->unk30->unk4 = 0.0f;
        ((func_801E68D4_StructX *) D_8038D8D0)->unk2C->unk30->unk8 = 13.0f;
        ((func_801E68D4_StructX *) D_8038D8D0)->unk2C->unk30->unkC = D_801EA55C;
        func_801C1000(3, 8);
        func_801E67BC();
        ((func_801E68D4_StructX *) D_8038D8D0)->unk2C->unk22 = 1;
        return 2;
    }
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E6988.s")


extern void func_801E67C8(void);

s32 func_801E6AC4(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x015BE67F) != 0) {
        func_801C1000(3, 8);
        return 4;
    }
    func_801E67C8();
    return 3;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E6B18.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E6C60.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E6D14.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E6E50.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E6EA4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E6FEC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E6FFC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E700C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E701C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E702C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E7070.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E70D0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E7220.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E724C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E7278.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E72A4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E72D0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E72FC.s")


s32 func_801E7340(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x02285E3C) != 0) {
        func_801C1000(3, 0xD);
        return 2;
    }
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E738C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E74E0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E7634.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E7788.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E78DC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E7A24.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E7A34.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E7A44.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E7A54.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E7A64.s")


struct func_801E7AA8_Obj30 {
    u8 pad0[0x18];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
};

struct func_801E7AA8_Obj48 {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad1[0x30 - 0x23];
    struct func_801E7AA8_Obj30 *unk30;
};

struct func_801E7AA8_Obj {
    u8 pad0[0x48];
    struct func_801E7AA8_Obj48 *unk48;
};

s32 func_801E7AA8(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x02285E3C) != 0) {
        ((struct func_801E7AA8_Obj *) D_8038D8D0)->unk48->unk30->unk18 = 0.0f;
        ((struct func_801E7AA8_Obj *) D_8038D8D0)->unk48->unk30->unk1C = 1.0f;
        ((struct func_801E7AA8_Obj *) D_8038D8D0)->unk48->unk30->unk20 = 1.0f;
        ((struct func_801E7AA8_Obj *) D_8038D8D0)->unk48->unk22 = 1;
        func_801C1000(3, 0xB);
        func_8038D28C(0x20B);
        return 2;
    }
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E7B50.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E7BF0.s")


typedef struct func_801E7D44_Leaf {
    u8 pad0[0x18];
    f32 unk18;
} func_801E7D44_Leaf;

typedef struct func_801E7D44_Node {
    u8 pad0[0x30];
    func_801E7D44_Leaf *unk30;
} func_801E7D44_Node;

typedef struct func_801E7D44_Root {
    u8 pad0[0x4C];
    func_801E7D44_Node *unk4C;
    func_801E7D44_Node *unk50;
} func_801E7D44_Root;


s32 func_801E7D44(s32 arg0, s32 arg1) {
    f32 scale;
    f32 quot;
    f32 temp_fv0;

    if (func_801C1088(3, 0xB, 0x3C) != 0) {
        func_801C10D8(3, 0xB);
        return 5;
    }
    scale = 1.0f;
    quot = (f32) func_801C1134(3, 0xB) / 60.0f;
    temp_fv0 = scale * quot;
    ((func_801E7D44_Root *) D_8038D8D0)->unk4C->unk30->unk18 = temp_fv0;
    ((func_801E7D44_Root *) D_8038D8D0)->unk50->unk30->unk18 = temp_fv0;
    return 4;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E7DF8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E7E08.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E7E18.s")


struct func_801E7E28_Struct {
    u8 pad[0x4C];
    u8 *unk4C;
    u8 *unk50;
    u8 *unk54;
};

s32 func_801E7E28(s32 arg0, s32 arg1) {
    ((struct func_801E7E28_Struct *)D_8038D8D0)->unk4C[0x22] = 0;
    ((struct func_801E7E28_Struct *)D_8038D8D0)->unk50[0x22] = 0;
    ((struct func_801E7E28_Struct *)D_8038D8D0)->unk54[0x22] = 1;
    return 8;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E7E68.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E7E78.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E7E88.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E7F1C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E7F74.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E803C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E804C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E807C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E81E8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E8280.s")


extern s32 func_801CC4D8(s32, s32, s32, s32, f32);

s32 func_801E8290(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x8339C0) != 0) {
        func_801CC4D8(0, 0x01B8001B, 0, 0, 5.0f);
        return 9;
    }
    return 8;
}


extern void func_801C0D04(s32 a0, s32 a1);
extern void func_801CC470(s32 a0, s32 a1, s32 a2, s32 a3, f32 f12);
extern s32 func_801CE274();

s32 func_801E82F4(s32 arg0, s32 arg1) {
    if (func_801CE274() == 0) {
        func_801CC470(0, 0x01B8001B, 0, 0x1100, 1.0f);
        func_801C0D04(4, 0);
        return 0xA;
    }
    return 9;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E8358.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E84CC.s")


extern s32 func_801CE284(void);

s32 func_801E8604(s32 arg0, s32 arg1) {
    if (func_801CE284() != 0) {
        func_801CC4D8(0, 0x0348007B, 0, 0, 5.0f);
        return 0xD;
    }
    return 0xC;
}



s32 func_801E865C(s32 arg0, s32 arg1) {
    if (func_801CE274() == 0) {
        func_801CC470(0, 0x0348007B, 0, 0x100, 7.0f);
        return 0xE;
    }
    return 0xD;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E86B4.s")


s32 func_801E86C4(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xD29240) != 0) {
        func_801CC4D8(0, 0x0348005E, 0, 0, 15.0f);
        return 0x10;
    }
    return 0xF;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E8728.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E8780.s")


s32 func_801E8790(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xE1D480) != 0) {
        return 0x13;
    }
    return 0x12;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E87CC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E87DC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E87EC.s")



s32 func_801E8850(s32 arg0, s32 arg1) {
    if (func_801CE274() == 0) {
        func_801CC470(0, 0x01B8002F, 0, 0, 4.0f);
        return 0x17;
    }
    return 0x16;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E88A8.s")



s32 func_801E88B8(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x0189AD3F) != 0) {
        func_801CC4D8(0, 0x0348005E, 0, 0, 5.0f);
        return 0x19;
    }
    return 0x18;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E891C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E8974.s")



s32 func_801E8984(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x0246E2BC) != 0) {
        func_801CC4D8(0, 0x04100043, 0, 0, 5.0f);
        return 0x1C;
    }
    return 0x1B;
}



s32 func_801E89E8(s32 arg0, s32 arg1) {
    if (func_801CE274() == 0) {
        func_801CC470(0, 0x04100043, 0, 0, 7.5f);
        return 0x1D;
    }
    return 0x1C;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E8A40.s")


s32 func_801E8A50(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x0265673C) != 0) {
        return 0x1F;
    }
    return 0x1E;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E8A8C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E8A9C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E8AAC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E8ABC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E8ACC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E8B20.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E8B68.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E8BC0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E8BD0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E8C24.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E8C34.s")


extern s32 D_801E9FFC;

s32 func_801E8C7C(s32 arg0, s32 arg1) {
    if (D_801E9FFC >= 0x13) {
        func_801CC4D8(0, 0x019100CD, 0, 0, 5.0f);
        return 0x2B;
    }
    D_801E9FFC += 1;
    return 0x2A;
}


extern s32 D_801EA000;

s32 func_801E8CE8(s32 arg0, s32 arg1) {
    if (func_801CE274() == 0) {
        func_801CC470(0, 0x019100CD, 0, 0, 6.0f);
        D_801EA000 = 0;
        return 0x2C;
    }
    return 0x2B;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E8D48.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E8DDC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E8DEC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E8DFC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E8E0C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E8E1C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E8E2C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E8E3C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E8E80.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E8F58.s")


s32 func_801E8F68(s32 arg0, s32 arg1) {
    func_801C0D04(4, 1);
    return 4;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E8F98.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E90F8.s")


extern s32 func_801D2C00();

s32 func_801E9204(s32 arg0, s32 arg1) {
    if (func_801D2C00() == 0) {
        func_801CC470(1, 0x0320001A, 0, 0x100, 10.0f);
        return 7;
    }
    return 6;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E925C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E926C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E927C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E928C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E929C.s")


extern void D_8038C97C();
extern s16 D_80089354;
extern u8 D_801BBD54;
extern s32 D_801D8D60;

s32 func_801E92AC(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 0;
    }
    if (func_801C0B8C(0x186A0) != 0) {
        D_80089354 = 0;
        D_8038C97C(D_801D8D60, 0, 0, 0, 9, 0, 2);
        return 1;
    }
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E9334.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E9364.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E9374.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E9384.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E9394.s")



s32 func_801E93A4(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 6;
    }
    if (func_801C0B8C(0x2DC6C0) != 0) {
        D_80089354 = 0;
        D_8038C97C(D_801D8D60, 0, 0, 0, 0xF, 0, 1);
        func_8038D28C(0xA);
        return 7;
    }
    return 6;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E9434.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E945C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E946C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E947C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E948C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E94C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E94F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E9540.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E9570.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E9598.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E9600.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E9630.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E9664.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E9694.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E96BC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E9724.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E9754.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E977C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E978C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E97BC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E97E8.s")

