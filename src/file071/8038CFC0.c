#include "common.h"


extern s32 func_800058DC(s32, void *);
extern s32 func_80229500();
extern void func_8038CFF4();

void func_8038CFC0(s32 arg0, s32 arg1) {
    func_80229500();
    func_800058DC(arg0, &func_8038CFF4);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file071/8038CFC0/func_8038CFF4.s")


extern void func_80229404(void *);
extern void func_80229CE0(void *, void *, s32);
extern s32 func_8022B640(s32);

void func_8038D668(void *arg0, void *arg1, void *arg2) {
    u8 *p0 = (u8 *) arg0;
    u8 *p1 = (u8 *) arg1;
    u8 *p2 = (u8 *) arg2;

    if (((*(u32 *) (p2 + 0x30) << 11) >> 30) != 0) {
        func_80229404(arg1);
        *(s16 *) (p0 + 0x9A) = (s16) (*(s16 *) (p0 + 0x9A) | 8);
    } else if ((*(u32 *) (p1 + 0x38) >> 31) != 0) {
        p1[0x2D8] = 2;
        *(s16 *) (p0 + 0x9A) = 2;
        func_80229CE0(arg0, arg1, 0);
    } else if (func_8022B640(2) != 0) {
        p1[0x2D8] = 0;
        func_80229CE0(arg0, arg1, 1);
    } else {
        p1[0x2D8] = 1;
        func_80229CE0(arg0, arg1, func_8022B640(2) & 0xFF);
    }
    p0[0xA1] = p1[0x2D8];
    p0[0xA2] = p1[0x2D9];
}


struct func_8038D74C_Struct {
    u8 pad0[0xC];
    s32 unkC;
};

extern s32 D_801BBCCC;
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
#define func_8038D7D4 func_8038D7D4__decl51
extern u8 func_8038D7D4[];

void func_8038D74C(struct func_8038D74C_Struct *arg0, void *arg1) {
    void *var_a1;
    void *var_a2;

    if (D_801BBCCC == arg0->unkC) {
        var_a1 = D_801BC03C;
    } else {
        var_a1 = D_801BC3D8;
    }
    if (D_801BBCCC == arg0->unkC) {
        var_a2 = D_801BC3D8;
    } else {
        var_a2 = D_801BC03C;
    }
    func_80229500(arg0, var_a1, var_a2);
    func_8038D668(arg0, var_a1, var_a2);
    func_800058DC(arg0, func_8038D7D4);
}
#undef func_8038D7D4

#define D_801BBBF0 D_801BBBF0__func_8038D7D4
#define D_8038D7D4 D_8038D7D4__func_8038D7D4
#define func_8022AB58 func_8022AB58__func_8038D7D4
#define func_8022B3E0 func_8022B3E0__func_8038D7D4
extern u8 D_8038D7D4[];
#define func_8038D7D4 D_8038D7D4
#undef func_8038D7D4

typedef struct func_8038D7D4_StructG {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 pad1[0x1031 - 0xE0];
    u8 unk1031;
} func_8038D7D4_StructG;
typedef struct func_8038D7D4_StructO {
    u8 pad0[0xC];
    s32 unkC;
    u8 pad10[0x91 - 0x10];
    u8 unk91;
    u8 unk92;
    u8 unk93;
    u8 pad94[0x9A - 0x94];
    s16 unk9A;
    u8 pad9C[0xA8 - 0x9C];
    u8 unkA8;
    u8 padA9[0xB0 - 0xA9];
    void *unkB0;
} func_8038D7D4_StructO;
typedef struct func_8038D7D4_StructP {
    u8 pad0[0x30];
    union {
        u16 h;
        struct {
            u32 p0 : 3;
            u32 b : 4;
            u32 p1 : 4;
            u32 t : 2;
        } bf;
    } unk30;
    u32 pad34;
    struct {
        u32 f : 1;
        u32 p : 2;
        u32 g : 1;
    } unk38;
} func_8038D7D4_StructP;

extern func_8038D7D4_StructG D_801BBBF0;
extern s32 func_8022AB58();
extern void func_8022B3E0();

#define CALL() func_8038D668(arg0, a3, a2)

void func_8038D7D4(func_8038D7D4_StructO *arg0, s32 arg1) {
    func_8038D7D4_StructP *a3;
    func_8038D7D4_StructP *a2;

    a3 = (D_801BBBF0.unkDC == arg0->unkC) ? (func_8038D7D4_StructP *)&D_801BC03C : (func_8038D7D4_StructP *)&D_801BC3D8;
    a2 = (D_801BBBF0.unkDC == arg0->unkC) ? (func_8038D7D4_StructP *)&D_801BC3D8 : (func_8038D7D4_StructP *)&D_801BC03C;
    if (arg0->unkA8 == 2) {
        CALL();
        arg0->unkA8 = 0;
        return;
    }
    if ((a3->unk30.h & 7) || (D_801BBBF0.unk1031 == 6)) {
        arg0->unkA8 = 1;
        return;
    }
    if (D_801BBBF0.unk1031 == 7) {
        arg0->unkB0 = D_8038D7D4;
        func_800058DC((s32)arg0, func_8022B3E0);
        return;
    }
    if (func_8022AB58(arg0, a3, a2) != 0) {
        arg0->unk91 = 0;
        CALL();
        return;
    }
    if (a2->unk30.bf.t != 0 || a2->unk30.bf.b == 2) {
        CALL();
        return;
    }
    if (a2->unk30.bf.t == 0 && a2->unk30.bf.b != 2) {
        if (arg0->unk9A & 8) {
            arg0->unk9A = 0;
            CALL();
            return;
        }
    }
    if (a3->unk38.f != 0 && !(arg0->unk9A & 2)) {
        CALL();
        return;
    }
    if (a3->unk38.f != 0 && a3->unk38.g && !(arg0->unk9A & 4)) {
        CALL();
        return;
    }
    if (a3->unk38.f == 0 && (arg0->unk9A & 6)) {
        arg0->unk9A = 0;
        arg0->unk92 = arg0->unk93;
        CALL();
    }
}
#undef CALL
#undef D_801BBBF0
#undef D_8038D7D4
#undef func_8022AB58
#undef func_8022B3E0


struct func_8038D9D8_Arg0 {
    u8 pad[0xA5];
    u8 unkA5;
};

struct func_8038D9D8_Arg1 {
    u8 pad[6];
    s16 unk6;
};

void func_8022A834();

void func_8038D9D8(struct func_8038D9D8_Arg0 *arg0, struct func_8038D9D8_Arg1 *arg1) {
    if (arg1->unk6 >= 0x64) {
        arg0->unkA5 = 1;
        return;
    }
    func_8022A834();
}

