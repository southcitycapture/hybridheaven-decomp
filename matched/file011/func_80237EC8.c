#include "context.h"

typedef struct func_80237EC8_Part {
    u8 pad0[4];
    u16 unk4;
    u8 pad1[6];
    u16 unkC;
} func_80237EC8_Part;

typedef struct func_80237EC8_Struct {
    u8 pad0[0x94];
    func_80237EC8_Part *unk94;
    u8 pad1[0x8];
    s8 unkA0;
    s8 unkA1;
    s8 unkA2;
    s8 unkA3;
    s8 unkA4;
    s8 unkA5;
} func_80237EC8_Struct;

#define A ((func_80237EC8_Struct *)arg0)

extern s32 func_80235D48();
extern void func_802364E8(void *, s32);
extern u8 D_8023E3A4;
extern u8 D_8023E3A8;
extern u8 func_802378DC[];
extern u8 func_80238254[];

void func_80237EC8(struct func_802380EC_Struct *arg0, s32 arg1) {
    func_80237EC8_Part *p = A->unk94;
    s8 v;

    if (A->unkA2 == 0) {
        if (func_80235D48() == 0) {
            D_8023E3A8 = 0;
            if ((p->unkC & 0x200) || (p->unk4 & 0x4000)) {
                func_80020744(0x300);
                A->unkA2 = 1;
                func_802364E8(arg0, arg1);
            } else if ((p->unkC & 0x100) || (p->unk4 & 0x8000)) {
                func_80020744(0x300);
                v = A->unkA5;
                A->unkA2 = -1;
                A->unkA1 = 0;
                if (v == 0) goto c0;
                if (v != 1) goto end;
                goto c1;
            c0:
                D_8023E3AC = 0;
                D_8023E3A8 = 1;
                func_8023648C((void *)arg0, arg1);
                goto end;
            c1:
                A->unkA3 = 5;
                func_80234ED4(arg0, arg1, 0, 1, 3);
            }
        end:
            func_80234724(arg0, arg1, 0);
        }
    }
    v = A->unkA2;
    if (v == 1) {
        func_80235394(arg0, arg1, 0);
        A->unkA5 = 2;
        D_8023E3A4 = 0;
        if (A->unkA2 == 0) {
            func_800058DC(arg0, func_802378DC);
        }
    } else if (v == -1) {
        if (A->unkA5 == 0) {
            func_80235394(arg0, arg1, 0);
        } else {
            func_80235394(arg0, arg1, 2);
        }
        if (A->unkA2 == 0) {
            v = A->unkA5;
            if (v == 0) goto d0;
            if (v != 1) return;
            goto d1;
        d0:
            A->unkA5 = 0;
            func_800058DC(arg0, func_80238254);
            return;
        d1:
            A->unkA5 = 2;
            A->unkA0 = 1;
            A->unkA1 = A->unkA0;
            func_800058DC(arg0, func_802380EC);
        }
    }
}

#undef A
