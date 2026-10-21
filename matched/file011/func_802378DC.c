#include "context.h"

typedef struct func_802378DC_Struct {
    u8 pad0[0x94];
    struct func_802378DC_Struct1 *unk94;
    u8 pad98[0x8];
    s8 unkA0;
    s8 unkA1;
    s8 unkA2;
    s8 unkA3;
    u8 pad4;
    s8 unkA5;
    s8 unkA6;
    u8 unkA7;
} func_802378DC_Struct;
struct func_802378DC_Struct1 {
    u8 pad0[4];
    u16 unk4;
    u8 pad6[6];
    u16 unkC;
};
struct func_802380EC_Struct;
extern void func_800058DC();
extern void func_80237250();
extern void func_80237EC8();
extern void func_80020744(s32);
extern void func_80236700(struct func_802380EC_Struct *, s32);
extern void func_80234724(struct func_802380EC_Struct *, s32, s32);
extern s32 func_80235D48();
extern s32 func_8023639C();
extern void func_80236408();
extern s8 D_8023E3A4;
extern void func_80237B7C();
#define V ((void *)arg0)

void func_802378DC(func_802378DC_Struct *arg0, s32 arg1) {
    struct func_802378DC_Struct1 *v = arg0->unk94;
    s32 t;

    if (arg0->unkA2 == 0) {
        if (func_80235D48() == 0) {
            if ((v->unkC & 0x200) || (v->unk4 & 0x4000)) {
                func_80020744(0x300);
                arg0->unkA2 = 1;
                func_80236408(V, arg1);
            } else if ((v->unkC & 0x100) || (v->unk4 & 0x8000)) {
                func_80020744(0x300);
                arg0->unkA2 = -1;
                arg0->unkA1 = 1;
                D_8023E3A4 = 0;
                if (func_80236374(V) != 0) {
                    func_802366A0(V, arg1);
                } else if (func_8023639C(V) != 0) {
                    if ((t = arg0->unkA5) == 0) goto a0;
                    if (t != 1) goto join;
                    goto a1;
                a0:
                    func_80236640(V, arg1);
                    goto join;
                a1:
                    func_802366A0(V, arg1);
                } else {
                    if ((t = arg0->unkA5) == 0) goto b0;
                    if (t == 1) goto b1;
                    if (t != 2) goto join;
                    goto b2;
                b0:
                    func_802365E0(V, arg1);
                    goto join;
                b1:
                    func_80236640(V, arg1);
                    goto join;
                b2:
                    D_8023E3A4 = 1;
                    func_80236700(V, arg1);
                }
            join:
                arg0->unkA0 = (arg0->unkA7 - 1) / 5 + 1;
            }
            func_80234724(V, arg1, 0);
        }
    }
    if (arg0->unkA2 == 1) {
        func_80235394(V, arg1, 0);
        if (arg0->unkA2 == 0) {
            func_800058DC(V, func_80237250);
        }
    } else if (arg0->unkA2 == -1) {
        if (arg0->unkA5 == 2) {
            func_80235394(V, arg1, 0);
        } else {
            func_80235394(V, arg1, 2);
        }
        if (arg0->unkA2 == 0) {
            arg0->unkA6 = arg0->unkA5;
            if (arg0->unkA5 == 2) {
                func_800058DC(V, func_80237EC8);
                arg0->unkA5 = 0;
                return;
            }
            func_800058DC(V, func_80237B7C);
            arg0->unkA5 = arg0->unkA3 / 2;
        }
    }
}
