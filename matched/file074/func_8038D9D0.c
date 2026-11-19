#include "common.h"
struct func_8038D048_StructY {
    u8 pad0[0x9C];
    u8 unk9C;
};
struct func_8038D048_StructO {
    u8 pad0[0x5C];
    struct func_8038D048_StructY *unk5C;
};
struct func_8038D048_StructG {
    u8 pad0[0xDC];
    struct func_8038D048_StructO *unkDC;
    void *unkE0;
    u8 padE4[0xEC - 0xE4];
    struct func_8038D048_StructO *unkEC;
    void *unkF0;
    u8 padF4[0x232 - 0xF4];
    s16 unk232;
    u8 pad234[0xB90 - 0x234];
    f32 unkB90;
    u8 padB94[0x1031 - 0xB94];
    u8 unk1031;
};
extern struct func_8038D048_StructG B_801BBBF0;
#define D_801BBBF0 B_801BBBF0
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
extern void func_800058DC(void *, void *);
void func_8038D864(u8 *arg0, u8 *arg1, u8 *arg2);


extern u8 D_8038D9D0[];
extern s32 func_8022AB58(void *, void *, void *);
extern u8 func_8022B3E0[];

typedef struct {
    u8 pad0[0xC];
    struct func_8038D048_StructO *unkC;
    u8 pad10[0x91 - 0x10];
    u8 unk91;
    u8 pad92[0x9A - 0x92];
    s16 unk9A;
    u8 pad9C[0xA8 - 0x9C];
    u8 unkA8;
    u8 padA9[0xB0 - 0xA9];
    void *unkB0;
} func_8038D9D0_StructA;

typedef struct {
    u8 pad0[0x30];
    union {
        u16 h;
        struct {
            u32 pad0 : 3;
            u32 c : 4;
            u32 pad7 : 4;
            u32 b : 2;
            u32 rest : 19;
        } bf;
    } u30;
    u8 pad34[4];
    struct {
        u32 b31 : 1;
        u32 rest : 31;
    } u38;
} func_8038D9D0_StructP;

void func_8038D9D0(func_8038D9D0_StructA *arg0, s32 arg1) {
    func_8038D9D0_StructP *a3;
    func_8038D9D0_StructP *a2;
    struct func_8038D048_StructO *current;
    u32 status;

    a3 = (func_8038D9D0_StructP *)((current = D_801BBBF0.unkDC) == arg0->unkC ? D_801BC03C : D_801BC3D8);
    a2 = (func_8038D9D0_StructP *)(current == arg0->unkC ? D_801BC3D8 : D_801BC03C);
    if (arg0->unkA8 == 2) {
        func_8038D864((u8 *)arg0, (u8 *)a3, (u8 *)a2);
        arg0->unkA8 = 0;
        return;
    }
    if ((a3->u30.h & 7) || (status = D_801BBBF0.unk1031) == 6) {
        arg0->unkA8 = 1;
        return;
    }
    if (status == 7) {
        arg0->unkB0 = D_8038D9D0;
        func_800058DC(arg0, func_8022B3E0);
        return;
    }
    if (func_8022AB58(arg0, a3, a2) != 0) {
        arg0->unk91 = 0;
        func_8038D864((u8 *)arg0, (u8 *)a3, (u8 *)a2);
        return;
    }
    if (a2->u30.bf.b != 0 || a2->u30.bf.c == 2) {
        func_8038D864((u8 *)arg0, (u8 *)a3, (u8 *)a2);
    } else if (a2->u30.bf.b == 0 && a2->u30.bf.c != 2 && (arg0->unk9A & 8)) {
        arg0->unk9A ^= 8;
        func_8038D864((u8 *)arg0, (u8 *)a3, (u8 *)a2);
    } else if (a3->u38.b31 && !(arg0->unk9A & 2)) {
        arg0->unk9A |= 2;
        func_8038D864((u8 *)arg0, (u8 *)a3, (u8 *)a2);
    } else if (!a3->u38.b31 && (arg0->unk9A & 2)) {
        arg0->unk9A ^= 2;
        func_8038D864((u8 *)arg0, (u8 *)a3, (u8 *)a2);
    }
}
