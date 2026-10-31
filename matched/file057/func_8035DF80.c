#include "common.h"
extern u8 D_801BBBF0[];
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
extern void func_8022310C(void *arg0, s32 arg1);
extern s32 func_802233B0();
extern s32 func_8022397C();


typedef struct func_8035DF80_StructP {
    u8 pad0[0x2];
    s16 unk2;
    u8 pad4[0x2];
    s16 unk6;
    u8 pad8[0x30 - 0x8];
    union {
        struct {
            u32 b31 : 1;
            u32 b29 : 2;
            u32 b25 : 4;
            u32 pad : 25;
        } w;
        struct {
            u16 pad : 13;
            u16 b16 : 3;
            u16 hi : 3;
            u16 pad2 : 13;
        } h;
    } u30;
    u32 pad34;
    u32 f7 : 1;
    u32 f56 : 2;
    u32 f4 : 1;
    u32 f2 : 2;
    u32 pad38 : 26;
    u8 pad3C[0x328 - 0x3C];
    u8 unk328;
} func_8035DF80_StructP;

typedef struct func_8035DF80_StructT {
    u8 pad0[0x4];
    u16 unk4;
} func_8035DF80_StructT;

typedef struct func_8035DF80_StructObj {
    u8 pad0[0x68];
    func_8035DF80_StructT *unk68;
} func_8035DF80_StructObj;

typedef struct func_8035DF80_StructG {
    u8 pad0[0xDC];
    void *unkDC;
    u8 padE0[0x1031 - 0xE0];
    u8 unk1031;
} func_8035DF80_StructG;

#define b31 u30.w.b31
#define b29 u30.w.b29
#define b25 u30.w.b25
#define b16 u30.h.b16
#define hi u30.h.hi

#define GG ((func_8035DF80_StructG *)D_801BBBF0)
extern void func_8022518C();
extern void func_802237EC();
extern void func_8035E290();
extern void func_8035E438();
extern void func_8035EF60();
extern void func_8035F994();

void func_8035DF80(func_8035DF80_StructObj *arg0, s32 arg1) {
    s32 padA[2];
    func_8035DF80_StructT *t;
    s32 padB[2];
    func_8035DF80_StructP *p;
    func_8035DF80_StructP *q;
    s32 c;

    t = arg0->unk68;
    if (GG->unkDC) {
    }
    if (arg0 == GG->unkDC) {
        p = (func_8035DF80_StructP *)D_801BC03C;
    } else {
        p = (func_8035DF80_StructP *)D_801BC3D8;
    }
    if (arg0 != GG->unkDC) {
        q = (func_8035DF80_StructP *)D_801BC03C;
    } else {
        q = (func_8035DF80_StructP *)D_801BC3D8;
    }
    if (p->unk2 <= 0 || p->b29 != 0) {
        func_802233B0(arg0, arg1);
        return;
    }
    c = GG->unk1031;
    if (c >= 10 && c != 15) {
        func_8022310C(arg0, arg1);
        return;
    }
    if (c == 5 && !p->b31) {
        p->f56 = 0;
        if (!p->f4) {
            func_8022518C(arg0);
        } else {
            p->unk328 = 0;
        }
        if (p->b16 == 5) {
            p->unk328 = 0;
            func_8022397C(arg0);
            return;
        }
        if (p->b25 == 3 || p->b25 == 2) {
            p->b25 = 0;
        }
        if (p->b25 == 4 || p->b25 == 1) {
            func_8035E438(arg0, arg1);
            return;
        }
        if ((t->unk4 & 0x8000) && p->f7 && q->f56 == 0 && (p->f4 != 1 || p->f2 != 2) &&
            p->unk6 >= 0x1F && q->unk2 != 0) {
            p->unk328 = 0;
            func_802237EC(arg0);
            return;
        }
        if ((t->unk4 & 0x10) && q->f56 == 0 && (p->f4 != 1 || p->f2 != 1)) {
            p->unk328 = 0;
            q->f56 = 2;
            p->f56 = q->f56;
            q->hi = 2;
            p->hi = q->hi;
            func_8035EF60((void *)arg0, arg1);
            return;
        }
        if (p->unk328 == 3) {
            func_8035F994(arg0, arg1);
            return;
        }
        func_8035E290(arg0, arg1);
    }
}
