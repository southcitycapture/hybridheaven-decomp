#include "context.h"
struct func_8038DA54_Struct {
    u8 pad0[0xC];
    s32 unkC;
    u8 pad1[0x91 - 0x10];
    u8 unk91;
    u8 pad2[0x9A - 0x92];
    s16 unk9A;
    u8 pad3[0xA0 - 0x9C];
    u8 unkA0;
    u8 pad4[0xA8 - 0xA1];
    u8 unkA8;
    u8 pad5[0xAC - 0xA9];
    void *unkAC;
    void *unkB0;
};
struct func_8038DA54_Bits {
    u32 pad : 3;
    u32 b : 4;
    u32 pad2 : 4;
    u32 a : 2;
    u32 rest : 19;
};
typedef struct func_8038DA54_G {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 pad1[0x1031 - 0xE0];
    u8 unk1031;
} func_8038DA54_G;
extern func_8038DA54_G D_801BBBF0;
extern s32 func_8022AB58();
extern u8 func_8022B3E0[];

extern u8 D_8038DA54[];
#define g (&D_801BBBF0)
void func_8038DA54(struct func_8038DA54_Struct *arg0, s32 arg1) {
    func_8038D834_StructB *a1;
    func_8038D834_StructC *a3;
    s32 d;
    s32 c;

    a1 = (arg0->unkC == g->unkDC) ? (func_8038D834_StructB *)D_801BC03C : (func_8038D834_StructB *)D_801BC3D8;
    a3 = (arg0->unkC == g->unkDC) ? (func_8038D834_StructC *)D_801BC3D8 : (func_8038D834_StructC *)D_801BC03C;
    if (arg0->unkA8 == 2) {
        func_8038D834((func_8038D834_StructA *)arg0, a1, a3);
        arg0->unkA8 = 0;
        return;
    }
    if ((*(u16 *)((u8 *)a1 + 0x30) & 7) || (g->unk1031 == 6)) {
        arg0->unkA8 = 1;
        return;
    }
    if (g->unk1031 == 7) {
        arg0->unkAC = D_8038DA54;
        arg0->unkB0 = D_8038DA54;
        func_800058DC((s32)arg0, func_8022B3E0);
        return;
    }
    if ((a1->v2 < (a1->v0 / 5)) && !(arg0->unk9A & 0x20) && (arg0->unkA0 != 0)) {
        func_8038D834((func_8038D834_StructA *)arg0, a1, a3);
        return;
    }
    if (func_8022AB58(arg0, a1, g) != 0) {
        arg0->unk91 = 0;
        func_8038D834((func_8038D834_StructA *)arg0, a1, a3);
        return;
    }
    if (((struct func_8038DA54_Bits *)&a3->v30)->a != 0 || ((struct func_8038DA54_Bits *)&a3->v30)->b == 2) {
        func_8038D834((func_8038D834_StructA *)arg0, a1, a3);
        return;
    }
    if (((struct func_8038DA54_Bits *)&a3->v30)->a == 0 && ((struct func_8038DA54_Bits *)&a3->v30)->b != 2 && (arg0->unk9A & 8)) {
        func_8038D834((func_8038D834_StructA *)arg0, a1, a3);
        arg0->unk9A ^= 8;
    }
}
