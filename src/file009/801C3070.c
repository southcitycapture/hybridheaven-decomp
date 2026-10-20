#include "common.h"

extern s32 func_80010550();
extern s32 func_8012AE54(void *, s32, s32, f32);
extern u8 D_801BBBF0[];
extern u8 D_801BBDA0[];
extern void func_8012AEE0(void *, s32);
extern void func_801C3070();
extern void func_801C31FC();
extern void func_801C3374();
extern void func_801C33FC();
extern void func_801C3618();
extern void func_801C36F8();
extern void func_801C3888();
extern void func_801E5010();

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801C3070/func_801C3070.s")


struct func_801C3174_Sub {
    u8 pad[0x78];
    s16 unk78;
};

struct func_801C3174_Obj {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad1[0x10];
    f32 unk40;
    f32 unk44;
    f32 unk48;
    u8 pad2[0x10];
    struct func_801C3174_Sub *unk5C;
};

struct func_801C3174_Global {
    u32 unk0;
    u16 unk4;
    u16 unk6;
    f32 unk8;
};

extern void func_800058DC(void *a, void *b);
extern struct func_801C3174_Global D_801E0B20;

void func_801C3174(struct func_801C3174_Obj *arg0, s32 arg1) {
    struct func_801C3174_Sub *temp_v1;

    temp_v1 = arg0->unk5C;
    arg0->unk2C &= ~0x80;
    arg0->unk2C |= 0x20;
    arg0->unk44 = 0.0f;
    arg0->unk40 = 0.0f;
    arg0->unk48 = 0.0f;
    D_801E0B20.unk0 = 0x01680041;
    D_801E0B20.unk4 = 0;
    D_801E0B20.unk6 = 0x1100;
    D_801E0B20.unk8 = 1.0f;
    temp_v1->unk78 = 1;
    func_800058DC(arg0, func_801C31FC);
}



typedef struct func_801C31FC_StructDC {
    u8 pad0[0x2C];
    s32 unk2C;
} func_801C31FC_StructDC;

typedef struct func_801C31FC_StructBBBF0 {
    u8 pad0[0xDC];
    func_801C31FC_StructDC *unkDC;
    u8 pad1[0x18E - 0xE0];
    u16 unk18E;
    u16 unk190;
    u8 pad2[0x1DA - 0x192];
    u16 unk1DA;
    u16 unk1DC;
    u8 pad3[0xEF0 - 0x1DE];
    u16 unkEF0;
    u8 pad4[0xEFC - 0xEF2];
    s32 unkEFC;
} func_801C31FC_StructBBBF0;

typedef struct func_801C31FC_StructArg {
    u8 pad0[0x54];
    s32 unk54;
    u8 pad1[0x4];
    s32 unk5C;
} func_801C31FC_StructArg;

void func_801C31FC(func_801C31FC_StructArg *arg0, s32 arg1) {
    s32 temp_a1;
    s32 temp_a0;

    temp_a1 = arg0->unk5C;
    if (func_8012CE9C(arg1, temp_a1, D_801E0B20, 0xA) == 0) {
        func_80010550(arg1, temp_a1);
        temp_a0 = ((func_801C31FC_StructBBBF0 *)&D_801BBBF0)->unk1DA;
        ((func_801C31FC_StructBBBF0 *)&D_801BBBF0)->unk1DC = 1;
        if (temp_a0 == 1) {
            func_800058DC(arg0, func_801C3070);
            temp_a0 = ((func_801C31FC_StructBBBF0 *)&D_801BBBF0)->unk1DA;
        }
        if (temp_a0 == 2) {
            ((func_801C31FC_StructBBBF0 *)&D_801BBBF0)->unk18E = 3;
            ((func_801C31FC_StructBBBF0 *)&D_801BBBF0)->unk190 = 0;
            ((func_801C31FC_StructBBBF0 *)&D_801BBBF0)->unkEF0 = ((func_801C31FC_StructBBBF0 *)&D_801BBBF0)->unkEF0 & 0xFFBF;
            ((func_801C31FC_StructBBBF0 *)&D_801BBBF0)->unkDC->unk2C = ((func_801C31FC_StructBBBF0 *)&D_801BBBF0)->unkDC->unk2C | 0x40;
            arg0->unk54 = ((func_801C31FC_StructBBBF0 *)&D_801BBBF0)->unkEFC;
            func_800058DC(arg0, func_801E5010);
        }
    }
}


struct func_801C32EC_Sub {
    u8 pad[0x78];
    s16 unk78;
};

struct func_801C32EC_Obj {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad1[0x10];
    f32 unk40;
    f32 unk44;
    f32 unk48;
    u8 pad2[0x10];
    struct func_801C32EC_Sub *unk5C;
};

struct func_801C32EC_Global {
    u32 unk0;
    u16 unk4;
    u16 unk6;
    f32 unk8;
};


void func_801C32EC(struct func_801C32EC_Obj *arg0, s32 arg1) {
    struct func_801C32EC_Sub *temp_v1;

    temp_v1 = arg0->unk5C;
    arg0->unk2C &= ~0x80;
    arg0->unk2C |= 0x20;
    arg0->unk44 = 0.0f;
    arg0->unk40 = 0.0f;
    arg0->unk48 = 0.0f;
    D_801E0B20.unk0 = 0x01680041;
    D_801E0B20.unk4 = 0;
    D_801E0B20.unk6 = 0x1100;
    D_801E0B20.unk8 = 1.0f;
    temp_v1->unk78 = 1;
    func_800058DC(arg0, func_801C3374);
}


extern s32 func_8012CE9C(s32, s32, struct func_801C3174_Global, s32);

void func_801C3374(struct func_801C3174_Obj *arg0, s32 arg1) {
    s32 temp_a1;

    temp_a1 = (s32) arg0->unk5C;
    if (func_8012CE9C(arg1, temp_a1, D_801E0B20, 0xA) == 0) {
        func_80010550(arg1, temp_a1);
        *(s16 *) (D_801BBDA0 + 0x2C) = 1;
        func_800058DC(arg0, func_801C33FC);
    }
}

/* starting point: func_801C1E74 (file009), whose assembly is 96% the same as this function's */


typedef struct func_801C33FC_StructDC {
    u8 pad0[0x2C];
    s32 unk2C;
} func_801C33FC_StructDC;

typedef struct func_801C33FC_StructBBBF0 {
    u8 pad0[0xDC];
    func_801C33FC_StructDC *unkDC;
    u8 pad1[0x18E - 0xE0];
    u16 unk18E;
    u16 unk190;
    u8 pad2[0x1DA - 0x192];
    u16 unk1DA;
    u8 pad3[0xEF0 - 0x1DC];
    u16 unkEF0;
    u8 pad4[0xEFC - 0xEF2];
    s32 unkEFC;
} func_801C33FC_StructBBBF0;

typedef struct func_801C33FC_StructArg {
    u8 pad0[0x54];
    s32 unk54;
} func_801C33FC_StructArg;

void func_801C33FC(void *arg0, s32 arg1) {
    if (((func_801C33FC_StructBBBF0 *) &D_801BBBF0)->unk1DA == 2) {
        ((func_801C33FC_StructBBBF0 *) &D_801BBBF0)->unk18E = 3;
        ((func_801C33FC_StructBBBF0 *) &D_801BBBF0)->unk190 = 0;
        ((func_801C33FC_StructBBBF0 *) &D_801BBBF0)->unkEF0 = ((func_801C33FC_StructBBBF0 *) &D_801BBBF0)->unkEF0 & 0xFFBF;
        ((func_801C33FC_StructBBBF0 *) &D_801BBBF0)->unkDC->unk2C = ((func_801C33FC_StructBBBF0 *) &D_801BBBF0)->unkDC->unk2C | 0x40;
        ((func_801C33FC_StructArg *) arg0)->unk54 = ((func_801C33FC_StructBBBF0 *) &D_801BBBF0)->unkEFC;
        func_800058DC(arg0, &func_801E5010);
    }
}

typedef struct func_801C34C8_StructArg {
    u8 pad0[0x54];
    s32 unk54;
    u8 pad1[0x4];
    s32 unk5C;
} func_801C34C8_StructArg;
void func_801C34C8(func_801C34C8_StructArg *arg0, s32 arg1);

typedef struct func_801C3468_StructBBBF0 {
    u8 pad0[0xF00];
    u16 unkF00;
    u8 pad1[0x6];
    f32 unkF08;
    u8 pad2[0x4];
    s32 unkF10;
} func_801C3468_StructBBBF0;

void func_801C3468(struct func_801C3174_Obj *arg0, s32 arg1) {
    func_801C3468_StructBBBF0 *src;
    struct func_801C3174_Sub *inner;

    extern void func_800058DC();

    inner = arg0->unk5C;
    src = (func_801C3468_StructBBBF0 *) D_801BBBF0;
    D_801E0B20.unk4 = 0;
    D_801E0B20.unk0 = src->unkF10;
    D_801E0B20.unk6 = src->unkF00;
    D_801E0B20.unk8 = src->unkF08;
    inner->unk78 = 1;
    func_800058DC(arg0, &func_801C34C8, src);
}

/* starting point: func_801C1F40 (file009), adapted: 6-arg call with the 12-byte struct passed by value */
typedef struct func_801C34C8_StructDC {
    u8 pad0[0x2C];
    s32 unk2C;
} func_801C34C8_StructDC;

typedef struct func_801C34C8_StructBBBF0 {
    u8 pad0[0xDC];
    func_801C34C8_StructDC *unkDC;
    u8 pad1[0x18E - 0xE0];
    u16 unk18E;
    u16 unk190;
    u8 pad2[0x1DA - 0x192];
    u16 unk1DA;
    u16 unk1DC;
    u8 pad3[0xEF0 - 0x1DE];
    u16 unkEF0;
    u8 pad4[0xEFC - 0xEF2];
    s32 unkEFC;
} func_801C34C8_StructBBBF0;


void func_801C34C8(func_801C34C8_StructArg *arg0, s32 arg1) {
    extern void func_801C3070();
    extern void func_801E5010();
    s32 temp_a1;
    s32 temp_a0;

    temp_a1 = arg0->unk5C;
    if (func_8012CE9C(arg1, temp_a1, D_801E0B20, 0xA) == 0) {
        func_80010550(arg1, temp_a1);
        temp_a0 = ((func_801C34C8_StructBBBF0 *)D_801BBBF0)->unk1DA;
        ((func_801C34C8_StructBBBF0 *)D_801BBBF0)->unk1DC = 1;
        if (temp_a0 == 1) {
            func_800058DC(arg0, func_801C3070);
            temp_a0 = ((func_801C34C8_StructBBBF0 *)D_801BBBF0)->unk1DA;
        }
        if (temp_a0 == 2) {
            ((func_801C34C8_StructBBBF0 *)D_801BBBF0)->unk18E = 3;
            ((func_801C34C8_StructBBBF0 *)D_801BBBF0)->unk190 = 0;
            ((func_801C34C8_StructBBBF0 *)D_801BBBF0)->unkEF0 = ((func_801C34C8_StructBBBF0 *)D_801BBBF0)->unkEF0 & 0xFFBF;
            ((func_801C34C8_StructBBBF0 *)D_801BBBF0)->unkDC->unk2C = ((func_801C34C8_StructBBBF0 *)D_801BBBF0)->unkDC->unk2C | 0x40;
            arg0->unk54 = ((func_801C34C8_StructBBBF0 *)D_801BBBF0)->unkEFC;
            func_800058DC(arg0, func_801E5010);
        }
    }
}


typedef struct func_801C35B8_StructBBBF0 {
    u8 pad0[0xF00];
    u16 unkF00;
    u8 pad1[0x6];
    f32 unkF08;
    u8 pad2[0x4];
    s32 unkF10;
} func_801C35B8_StructBBBF0;


void func_801C35B8(struct func_801C3174_Obj *arg0, s32 arg1) {
    func_801C35B8_StructBBBF0 *src;
    struct func_801C3174_Sub *inner;

    extern void func_800058DC();

    src = (func_801C35B8_StructBBBF0 *) D_801BBBF0;
    inner = arg0->unk5C;
    D_801E0B20.unk4 = 0;
    D_801E0B20.unk0 = src->unkF10;
    D_801E0B20.unk6 = src->unkF00;
    D_801E0B20.unk8 = src->unkF08;
    inner->unk78 = 1;
    func_800058DC(arg0, &func_801C3618, src);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801C3070/func_801C3618.s")


typedef struct func_801C3698_StructBBBF0 {
    u8 pad0[0xF00];
    u16 unkF00;
    u8 pad1[0x6];
    f32 unkF08;
    u8 pad2[0x4];
    s32 unkF10;
} func_801C3698_StructBBBF0;


void func_801C3698(struct func_801C3174_Obj *arg0, s32 arg1) {
    struct func_801C3174_Sub *inner;

    extern void func_800058DC();

    inner = arg0->unk5C;
    D_801E0B20.unk4 = 0;
    D_801E0B20.unk0 = ((func_801C3698_StructBBBF0 *) D_801BBBF0)->unkF10;
    D_801E0B20.unk6 = ((func_801C3698_StructBBBF0 *) D_801BBBF0)->unkF00;
    D_801E0B20.unk8 = ((func_801C3698_StructBBBF0 *) D_801BBBF0)->unkF08;
    inner->unk78 = 1;
    func_800058DC(arg0, &func_801C36F8, D_801BBBF0);
}


typedef struct func_801C36F8_StructRot {
    u8 pad[0x12];
    s16 unk12;
} func_801C36F8_StructRot;
typedef struct func_801C36F8_StructLink {
    u8 pad[0x2C];
    func_801C36F8_StructRot *unk2C;
} func_801C36F8_StructLink;
typedef struct func_801C36F8_StructObj {
    u8 pad[0x24];
    func_801C36F8_StructLink *unk24;
    u8 pad2[0x5C - 0x28];
    struct func_801C3174_Sub *unk5C;
} func_801C36F8_StructObj;
typedef struct func_801C36F8_StructGlobal {
    u8 pad[0x198];
    s32 unk198;
    u8 pad2[4];
    s32 unk1A0;
    u8 pad3[0x1DA - 0x1A4];
    u16 unk1DA;
    u8 pad4[0xF04 - 0x1DC];
    s32 unkF04;
    u8 pad5[4];
    u16 unkF0C;
} func_801C36F8_StructGlobal;


void func_801C36F8(func_801C36F8_StructObj *arg0, s32 arg1) {
    struct func_801C3174_Sub *sp2C;
    func_801C36F8_StructRot *temp;

    sp2C = arg0->unk5C;
    temp = arg0->unk24->unk2C;
    temp->unk12 += ((func_801C36F8_StructGlobal *)D_801BBBF0)->unkF0C;
    func_8012A7F4(arg0, ((func_801C36F8_StructGlobal *)D_801BBBF0)->unk198,
                 ((func_801C36F8_StructGlobal *)D_801BBBF0)->unk1A0, 0x80);
    func_8012AEE0(arg0, ((func_801C36F8_StructGlobal *)D_801BBBF0)->unkF04);
    temp = arg0->unk24->unk2C;
    temp->unk12 -= ((func_801C36F8_StructGlobal *)D_801BBBF0)->unkF0C;
    if (func_8012AE54(arg0, ((func_801C36F8_StructGlobal *)D_801BBBF0)->unk198,
                     ((func_801C36F8_StructGlobal *)D_801BBBF0)->unk1A0, 3.0f) == 0) {
        func_800058DC(arg0, func_801C3174);
        return;
    }
    if (((func_801C36F8_StructGlobal *)D_801BBBF0)->unk1DA == 1U) {
        sp2C->unk78 = 1;
        func_800058DC(arg0, func_801C3174);
        return;
    }
    if (func_8012CE9C(arg1, (s32)sp2C, D_801E0B20, 10) == 0) {
        func_80010550(arg1, sp2C);
    }
}


typedef struct func_801C3828_StructBBBF0 {
    u8 pad0[0xF00];
    u16 unkF00;
    u8 pad1[0x6];
    f32 unkF08;
    u8 pad2[0x4];
    s32 unkF10;
} func_801C3828_StructBBBF0;


void func_801C3828(struct func_801C3174_Obj *arg0, s32 arg1) {
    func_801C3828_StructBBBF0 *src;
    struct func_801C3174_Sub *inner;

    extern void func_800058DC();

    inner = arg0->unk5C;
    src = (func_801C3828_StructBBBF0 *) D_801BBBF0;
    D_801E0B20.unk4 = 0;
    D_801E0B20.unk0 = src->unkF10;
    D_801E0B20.unk6 = src->unkF00;
    D_801E0B20.unk8 = src->unkF08;
    inner->unk78 = 1;
    func_800058DC(arg0, &func_801C3888, src);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801C3070/func_801C3888.s")


struct func_801C3A1C_StructE0Sub {
    u8 pad0[0x8];
    s32 unk8;
};
struct func_801C3A1C_StructE0 {
    u8 pad0[0x2C];
    struct func_801C3A1C_StructE0Sub *unk2C;
};
typedef struct func_801C3A1C_StructBBBF0 {
    u8 pad0[0xE0];
    struct func_801C3A1C_StructE0 *unkE0;
    u8 pad1[0x198 - 0xE4];
    s32 unk198;
    u8 pad2[0x1A0 - 0x19C];
    s32 unk1A0;
    u8 pad3[0xF14 - 0x1A4];
    s32 unkF14;
    s32 unkF18;
} func_801C3A1C_StructBBBF0;
struct func_801C3A1C_Obj {
    u8 pad0[0x54];
    s32 unk54;
    u8 pad1[0x4];
    struct func_801C3174_Sub *unk5C;
};

extern void func_8012AAE8(void *a0, s32 a1, s32 a2, s32 a3, f32 f);
extern s32 func_8012A7F4(void *a0, s32 a1, s32 a2, s32 a3);
extern struct func_801C3174_Global D_80388500;

void func_801C3A1C(void *arg0, s32 arg1) {
    struct func_801C3174_Sub *sp2C;
    func_801C3A1C_StructBBBF0 *bbbf0;

    sp2C = ((struct func_801C3A1C_Obj *)arg0)->unk5C;
    ((struct func_801C3A1C_Obj *)arg0)->unk54 = 1;
    bbbf0 = (func_801C3A1C_StructBBBF0 *)D_801BBBF0;
    func_8012AAE8(arg0, bbbf0->unk198, bbbf0->unkE0->unk2C->unk8, bbbf0->unk1A0, 1.0f);
    if (func_8012CE9C(arg1, (s32)sp2C, D_80388500, 0xA) == 0) {
        func_80010550(arg1, sp2C);
        if (func_8012A7F4(arg0, ((func_801C3A1C_StructBBBF0 *)D_801BBBF0)->unkF14, ((func_801C3A1C_StructBBBF0 *)D_801BBBF0)->unkF18, 0x100) == 0) {
            sp2C->unk78 = 1;
            func_800058DC(arg0, (void *)func_801C3174);
        }
    }
}

