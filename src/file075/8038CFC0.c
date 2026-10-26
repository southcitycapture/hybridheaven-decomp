#include "common.h"


extern s32 func_800058DC(s32, void *);
extern s32 func_80229500();
extern void func_8038CFF4();

void func_8038CFC0(s32 arg0, s32 arg1) {
    func_80229500();
    func_800058DC(arg0, &func_8038CFF4);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file075/8038CFC0/func_8038CFF4.s")


struct func_8038D680_StructA {
    u8 pad0[0x9A];
    s16 unk9A;
    u8 pad1[5];
    u8 unkA1;
    u8 unkA2;
};

struct func_8038D680_StructB {
    u8 pad0[0x2D8];
    u8 unk2D8;
    u8 unk2D9;
};

struct func_8038D680_StructC {
    u8 pad0[0x30];
    u32 unk30;
};

extern s32 func_80229404(void *);
extern void func_80229CE0(void *, void *, s32);
extern s32 func_8022B640(s32);

void func_8038D680(struct func_8038D680_StructA *arg0, struct func_8038D680_StructB *arg1, struct func_8038D680_StructC *arg2) {
    if (((arg2->unk30 << 0xB) >> 0x1E) != 0) {
        func_80229404(arg1);
        arg0->unk9A = (s16) (arg0->unk9A | 8);
    } else if (((u32) *(s32 *) ((u8 *) arg1 + 0x38) >> 0x1F) != 0) {
        arg1->unk2D8 = 2;
        arg0->unk9A = 2;
        func_80229CE0(arg0, arg1, 0);
    } else {
        if (func_8022B640(2) == 0) {
            arg1->unk2D8 = 0;
        } else {
            arg1->unk2D8 = 1;
        }
        func_80229CE0(arg0, arg1, func_8022B640(2) & 0xFF);
    }
    arg0->unkA1 = arg1->unk2D8;
    arg0->unkA2 = arg1->unk2D9;
}


struct func_8038D750_Struct {
    u8 pad0[0xC];
    s32 unkC;
};

extern s32 D_801BBCCC;
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
#define func_8038D7D8 func_8038D7D8__decl67
extern u8 func_8038D7D8[];

void func_8038D750(struct func_8038D750_Struct *arg0, void *arg1) {
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
    func_8038D680(arg0, var_a1, var_a2);
    func_800058DC(arg0, func_8038D7D8);
}
#undef func_8038D7D8

#define D_801BBBF0 D_801BBBF0__func_8038D7D8
#define D_8038D7D8 D_8038D7D8__func_8038D7D8
#define func_8022AB58 func_8022AB58__func_8038D7D8
#define func_8022B3E0 func_8022B3E0__func_8038D7D8
#define func_8038D680_StructA func_8038D680_StructA__func_8038D7D8
#define func_8038D680_StructB func_8038D680_StructB__func_8038D7D8
#define func_8038D680_StructC func_8038D680_StructC__func_8038D7D8
struct func_8038D680_StructA {
    u8 pad0[0x9A];
    s16 unk9A;
    u8 pad1[5];
    u8 unkA1;
    u8 unkA2;
};
struct func_8038D680_StructB {
    u8 pad0[0x2D8];
    u8 unk2D8;
    u8 unk2D9;
};
struct func_8038D680_StructC {
    u8 pad0[0x30];
    u32 unk30;
};

typedef struct func_8038D7D8_StructG {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 pad1[0x1031 - 0xE0];
    u8 unk1031;
} func_8038D7D8_StructG;
typedef struct func_8038D7D8_StructO {
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
} func_8038D7D8_StructO;
typedef struct func_8038D7D8_StructP {
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
} func_8038D7D8_StructP;

extern func_8038D7D8_StructG D_801BBBF0;
extern s32 func_8022AB58();
extern void func_8022B3E0();
extern u8 D_8038D7D8[];

#define CALL() func_8038D680((struct func_8038D680_StructA *)arg0, (struct func_8038D680_StructB *)a3, (struct func_8038D680_StructC *)a2)

void func_8038D7D8(func_8038D7D8_StructO *arg0, s32 arg1) {
    func_8038D7D8_StructP *a3;
    func_8038D7D8_StructP *a2;

    a3 = (D_801BBBF0.unkDC == arg0->unkC) ? (func_8038D7D8_StructP *)&D_801BC03C : (func_8038D7D8_StructP *)&D_801BC3D8;
    a2 = (D_801BBBF0.unkDC == arg0->unkC) ? (func_8038D7D8_StructP *)&D_801BC3D8 : (func_8038D7D8_StructP *)&D_801BC03C;
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
        arg0->unkB0 = D_8038D7D8;
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
            arg0->unk9A ^= 8;
            CALL();
            return;
        }
    }
    if (a3->unk38.f != 0 && !a3->unk38.g && !(arg0->unk9A & 2)) {
        CALL();
        return;
    }
    if (a3->unk38.f != 0 && a3->unk38.g && !(arg0->unk9A & 4)) {
        CALL();
        return;
    }
    if (a3->unk38.f == 0 && (arg0->unk9A & 6)) {
        arg0->unk92 = arg0->unk93;
        arg0->unk9A &= ~6;
        CALL();
    }
}
#undef CALL
#undef D_801BBBF0
#undef D_8038D7D8
#undef func_8022AB58
#undef func_8022B3E0
#undef func_8038D680_StructA
#undef func_8038D680_StructB
#undef func_8038D680_StructC


typedef struct func_8038D9E4_Struct { u8 pad[0xA5]; u8 unkA5; } func_8038D9E4_Struct;

void func_8038D9E4(func_8038D9E4_Struct *arg0, s32 arg1) {
    arg0->unkA5 = 0;
}

