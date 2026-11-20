#include "common.h"
extern u16 D_8017DC40[];
extern s32 D_802170F4;
extern f32 D_8021B0E0;
extern void func_80005700(s32);


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
