#include "common.h"


extern s8 D_8021B0E4;

void func_801FBB20(void) {
    D_8021B0E4 = 1;
}


void func_801FBB30(void) {
    D_8021B0E4 = 0;
}

extern s32 func_80147598();
extern void func_80005700(s32);
extern void func_800058DC(s32, void *);
extern void func_80146CD4(s16, s32);
extern u16 D_8017DC40[];
extern s32 D_802170F4;
extern f32 D_8021B0E0;
#define func_801FBC28 func_801FBC28__decl21
extern u8 func_801FBC28[];

void func_801FBB3C(s32 arg0, s32 arg1) {
    s16 sp1E;
    f32 a;

    sp1E = 0x2000;
    if (func_80147598() != 0) {
        func_80005700(arg0);
        return;
    }
    func_801FBB20();
    D_802170F4 = 0;
    a = (u32)D_8017DC40[1];
    D_8021B0E0 = a;
    if (D_8017DC40[0] != 0) {
        sp1E = (s16)(s32)((a / (f32)(u32)D_8017DC40[0]) * 8192.0f);
    }
    func_80146CD4(sp1E, 0);
    func_800058DC(arg0, func_801FBC28);
}
#undef func_801FBC28

#define func_80116E80 func_80116E80__func_801FBC28
#define func_801170DC func_801170DC__func_801FBC28
#define func_801451C0 func_801451C0__func_801FBC28
#define func_80146208 func_80146208__func_801FBC28
#define func_80146894 func_80146894__func_801FBC28
#define func_801FBDF4 func_801FBDF4__func_801FBC28
#define func_801FBC28 D_801FBC28
#undef func_801FBC28
extern void func_80116E80(s32);
extern void func_801170DC(s32);
extern void func_801451C0(void *, s32);
extern s32 func_80146208(s32, u8 *, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
extern s32 func_80146894(s32, s32, u8 *, f32, f32, s32);
extern u8 B_801BEC68[];
extern u8 func_801FBDF4[];

void func_801FBC28(s32 arg0, s32 *arg1) {
    u8 s0;
    u8 sp4E;

    sp4E = 0;
    func_80116E80(0x100);
    func_80116E80(0x400);
    func_80116E80(0x800);
    func_80116E80(0x200);
    B_801BEC68[0xA] = sp4E;
    s0 = func_80146208(arg0, &sp4E, 0x26, 0x1B, 0x13, 0x20, 0x20, 0, 0, 0xFF, 0x209, 0);
    *(s16 *)(arg1[B_801BEC68[0xA]] + 0x28) = 0x800;
    func_801451C0((void *)arg1[B_801BEC68[0xA]], 0);
    B_801BEC68[0xB] = sp4E;
    s0 += func_80146894(arg0, 1, &sp4E, 42.0f, 35.0f, 0xB);
    B_801BEC68[0xC] = sp4E;
    s0 += func_80146208(arg0, &sp4E, 4, 0x1B, 0x13, 0x20, 0x20, 0, 0, 0xFF, 0x209, 2);
    *(s16 *)(arg1[B_801BEC68[0xC]] + 0x28) = 0x100;
    if (s0) {
        func_80005700(arg0);
        func_801170DC(0x400);
        func_801170DC(0x200);
        return;
    }
    func_800058DC(arg0, func_801FBDF4);
}
#undef func_80116E80
#undef func_801170DC
#undef func_801451C0
#undef func_80146208
#undef func_80146894
#undef func_801FBDF4

#define D_801BBBF0 D_801BBBF0__func_801FBDF4
#define D_801BEC60 D_801BEC60__func_801FBDF4
#define D_802170F0 D_802170F0__func_801FBDF4
#define D_8021710C D_8021710C__func_801FBDF4
#define func_80005670 func_80005670__func_801FBDF4
#define func_80126944 func_80126944__func_801FBDF4
#define func_80146BE0 func_80146BE0__func_801FBDF4
#define func_80147148 func_80147148__func_801FBDF4
#define func_80236BA4 func_80236BA4__func_801FBDF4
extern void func_80147148(s32, s32);
extern void *func_80005670(void *, void *);
extern s32 func_80126944(void);
extern void func_80146BE0(s16, s32);
extern s32 func_80236BA4(void);
extern u8 D_801BBBF0[];
extern u8 D_801BEC60[];
extern u8 D_802170F0;
extern u8 D_8021710C[];

void func_801FBDF4(u8 *arg0, s32 *arg1) {
    s32 sp1C;
    s16 sp1A;
    u8 *t;
    f32 *g;
    f32 r;

    sp1C = arg1[D_801BEC60[0x13]];
    if (D_8017DC40[0] < D_8017DC40[1]) {
        D_8017DC40[1] = D_8017DC40[0];
    }
    if (func_80126944() == 0) {
        g = &D_8021B0E0;
        *g += ((f32)(u32)D_8017DC40[1] - *g) / 8;
        sp1A = (s32)((*g / (f32)(u32)D_8017DC40[0]) * 8192.0f);
        r = (f32)((f64)*g + 0.5);
        if (((u32)r & 0xFFFF) != D_8017DC40[1]) {
            t = (u8 *)D_802170F4;
            if (t == NULL) {
                D_802170F4 = (s32)func_80005670(arg0, D_8021710C);
            }
            if (D_802170F4 != 0) {
                ((u8 *)D_802170F4)[0x90] = 0x32;
            }
        }
    } else if (func_80126944() == 1) {
        if (D_801BBBF0[0x1031] > 0) {
            D_8021B0E0 += ((f32)*(s16 *)(D_801BBBF0 + 0x44E) - D_8021B0E0) / 8;
            sp1A = (s32)((D_8021B0E0 / (f32)*(s16 *)(D_801BBBF0 + 0x44C)) * 8192.0f);
            *(s16 *)(D_801BBBF0 + 0x492) = (s16)(s32)((f64)D_8021B0E0 + 0.5);
        } else {
            return;
        }
    }
    func_80146CD4(sp1A, 0);
    func_80146BE0(sp1A, sp1C);
    if (func_80236BA4() == 0 || *(u8 *)&D_8021B0E4 == 0) {
        func_80147148(*(s32 *)(arg0 + 0x24), 0);
        D_802170F0 = 0;
        return;
    } else if (D_802170F0 == 0) {
        func_80147148(*(s32 *)(arg0 + 0x24), 1);
        D_802170F0 = 1;
        return;
    } else {
        return;
    }
}
#undef D_801BBBF0
#undef D_801BEC60
#undef D_802170F0
#undef D_8021710C
#undef func_80005670
#undef func_80126944
#undef func_80146BE0
#undef func_80147148
#undef func_80236BA4

void func_801FC0DC(void) {
}


typedef struct func_801FC0E4_Struct {
    u8 pad0[0x24];
    s32 unk24;
    u8 pad28[0x91 - 0x28];
    u8 unk91;
} func_801FC0E4_Struct;

extern s32 func_80126A0C(func_801FC0E4_Struct *, s32, s32);
extern void func_80147148(s32, s32);
#define func_801FBDF4 func_801FBDF4__decl109
extern u8 func_801FBDF4[];

void func_801FC0E4(func_801FC0E4_Struct *arg0, s32 arg1) {
    if (*(u8 *)&D_8021B0E4 == 1) {
        arg0->unk91 = 1;
    }
    if (arg0->unk91 != 0 && func_80126A0C(arg0, 0x10E, 0) != 0) {
        func_80147148(arg0->unk24, 1);
        func_800058DC(arg0, func_801FBDF4);
    }
}
#undef func_801FBDF4

#define func_80006214 func_80006214__func_801FC160
#define func_80146208 func_80146208__func_801FC160
#define func_801465A0 func_801465A0__func_801FC160
#define func_8014677C func_8014677C__func_801FC160


typedef struct func_801FC160_Node {
    /* 0x00 */ u8 pad0[0x10];
    /* 0x10 */ struct func_801FC160_Node *next;
    /* 0x14 */ u8 pad14[0xE];
    /* 0x22 */ u8 f22;
    /* 0x23 */ u8 pad23[0xD];
    /* 0x30 */ struct func_801FC160_Sub *sub;
} func_801FC160_Node;

typedef struct func_801FC160_Sub {
    u8 pad0[0xB];
    u8 fB;
} func_801FC160_Sub;

typedef struct func_801FC160_Struct {
    /* 0x00 */ u8 pad0[0x24];
    /* 0x24 */ func_801FC160_Node *list;
    /* 0x28 */ u8 pad28[0x68];
    /* 0x90 */ u8 f90;
} func_801FC160_Struct;

typedef struct func_801FC160_Struct2 {
    u8 pad0[0x10];
    func_801FC160_Node *n;
} func_801FC160_Struct2;
extern void func_80006214(void *);
extern void func_80146208(void *, s16 *, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
extern void func_801465A0(void *, void *, u16, s32, s32);
extern void func_8014677C(void *, s32, u16);

s32 func_801FC160(func_801FC160_Struct *arg0, func_801FC160_Struct2 *arg1) {
    s16 sp4E;
    func_801FC160_Node *n;
    s32 t;

    if (arg0->list == NULL) {
        func_801465A0(arg0, arg1, D_8017DC40[1], 0x55, 0x19);
        func_80146208(arg0, &sp4E, 0x26, 0x5E, 0x19, 8, 8, 0x50, 0, 0xFF, 0x209, 3);
        func_801465A0(arg0, arg1, D_8017DC40[0], 0x7C, 0x19);
        func_80006214(arg0);
    }
    n = arg0->list;
    if (n != NULL) {
        do {
            n->f22 = 1;
            n = n->next;
        } while (n != NULL);
    }
    func_8014677C(arg1, 0, (u32)((f64)D_8021B0E0 + 0.5));
    func_8014677C(arg1, 5, D_8017DC40[0]);
    if (D_8017DC40[1] == (u16)(u32)((f64)D_8021B0E0 + 0.5)) {
        arg0->f90 = arg0->f90 - 1;
    }
    if (arg0->f90 >= 0x29) {
        n = arg0->list;
        if (n != NULL) {
            do {
                n->sub->fB = 0xFF;
                n = n->next;
            } while (n != NULL);
        }
    } else if (arg0->f90 < 0xF) {
        n = arg0->list;
        if (n != NULL) {
            do {
                t = (s16)(n->sub->fB - 0x14);
                if (t < 0) {
                    t = 0;
                }
                n->sub->fB = t;
                n = n->next;
            } while (n != NULL);
        }
    }
    arg1->n->f22 = 1;
    if (arg0->f90 == 0) {
        D_802170F4 = 0;
        func_80005700((s32)arg0);
    }
}
#undef func_80006214
#undef func_80146208
#undef func_801465A0
#undef func_8014677C

void func_801FC47C(void) {
}

