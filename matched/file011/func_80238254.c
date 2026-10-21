#include "context.h"

typedef struct func_80238254_StructP {
    u8 pad0[4];
    u16 unk4;
    u8 pad1[6];
    u16 unkC;
} func_80238254_StructP;
typedef struct func_80238254_Struct {
    u8 pad0[0x94];
    func_80238254_StructP *unk94;
    u8 pad1[8];
    s8 unkA0;
    s8 unkA1;
    s8 unkA2;
    s8 unkA3;
    s8 unkA4;
    s8 unkA5;
    s8 unkA6;
    u8 unkA7;
} func_80238254_Struct;
extern u8 D_8023E3A4;
extern s32 func_80235D48();
extern void func_80239C8C();
extern void func_80237B7C();

void func_80238254(func_80238254_Struct *arg0, s32 arg1) {
    func_80238254_StructP *p = arg0->unk94;
    u16 b;
    u16 a;
    s8 t;

    if (arg0->unkA2 == 0 && func_80235D48() == 0) {
        if ((p->unkC & 0x200) || (p->unk4 & 0x4000)) {
            if (D_8023E3A4 != 2) {
                func_80020744(0x300);
                arg0->unkA2 = 1;
                func_80236700((void *)arg0, arg1);
            }
        } else if (((p->unkC & 0x100) || (p->unk4 & 0x8000)) && arg0->unkA5 < 2) {
            func_80020744(0x300);
            t = arg0->unkA5;
            arg0->unkA2 = -1;
            arg0->unkA1 = 1;
            if (t == 0) goto c0;
            if (t != 1) goto cend;
            goto c1;
        c0:
            func_802365E0((void *)arg0, arg1);
            goto cend;
        c1:
            func_80236640((void *)arg0, arg1);
        cend:
            arg0->unkA0 = (arg0->unkA7 - 1) / 5 + 1;
        } else if ((p->unk4 & 0x8000) && arg0->unkA5 == 2) {
            func_800058DC(arg0, func_80239C8C);
            return;
        }
        if (D_8023E3A4 == 2) {
            func_80234724((void *)arg0, arg1, -1);
        } else {
            func_80234724((void *)arg0, arg1, 0);
        }
    }
    if (arg0->unkA2 == 1) {
        func_80235394((void *)arg0, arg1, 0);
        arg0->unkA5 = 0;
        if (arg0->unkA2 == 0) {
            func_800058DC(arg0, func_80237EC8);
        }
    } else if (arg0->unkA2 == -1) {
        func_80235394((void *)arg0, arg1, 2);
        if (arg0->unkA2 == 0) {
            arg0->unkA6 = arg0->unkA5;
            func_800058DC(arg0, func_80237B7C);
            arg0->unkA5 = arg0->unkA3 / 2;
        }
    }
}
