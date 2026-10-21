#include "context.h"

typedef struct func_80237B7C_Struct {
    s16 unk0;
    s16 unk2;
    s32 unk4;
    s32 unk8;
} func_80237B7C_Struct;

typedef struct func_80237B7C_Part {
    u8 pad0[4];
    u16 unk4;
    u8 pad1[6];
    u16 unkC;
} func_80237B7C_Part;

typedef struct func_80237B7C_Obj {
    u8 pad0[0x94];
    func_80237B7C_Part *unk94;
    u8 pad1[0x8];
    s8 unkA0;
    s8 unkA1;
    s8 unkA2;
    s8 unkA3;
    s8 unkA4;
    s8 unkA5;
    s8 unkA6;
    u8 pad2[5];
    u16 unkAC;
} func_80237B7C_Obj;

extern void func_802364E8(void *, s32);
extern void func_800058DC();
extern void func_802378DC();
extern void func_80238254();
extern void func_80239BD0();
extern void func_80239CF4();
extern u8 D_8023E3A4;
extern u8 D_80237B7C[];
extern u8 D_80240570[];

void func_80237B7C(func_80237B7C_Obj *arg0, s32 arg1) {
    func_80237B7C_Part *p;
    func_80237B7C_Struct *e;
    s32 v;

    p = arg0->unk94;
    if (arg0->unkA2 == 0) {
        if (func_80235EB4() == 0) {
            if ((p->unkC & 0x200) || (p->unk4 & 0x4000)) {
                func_80020744(0x300);
                arg0->unkA2 = 1;
                arg0->unkA1 = arg0->unkA1 - 1;
                if (arg0->unkA1 == 0) {
                    if (D_8023E3A4 == 0) {
                        func_802364E8(arg0, arg1);
                    } else {
                        func_8023648C((void *)arg0, arg1);
                    }
                } else {
                    arg0->unkA3 = func_802362B8(arg0);
                    func_80234ED4(arg0, arg1, 0, 1, 2);
                }
            } else if (p->unkC & 0x100) {
                if (arg0->unkA0 != arg0->unkA1) {
                    func_80020744(0x300);
                    arg0->unkA2 = -1;
                    arg0->unkA1 = arg0->unkA1 + 1;
                    arg0->unkA3 = func_802362B8(arg0);
                    func_80234ED4(arg0, arg1, 0, 1, 2);
                }
            } else if ((p->unk4 & 0x8000) && (arg0->unkA5 < arg0->unkA4)) {
                func_80020744(0x104);
                v = arg0->unkA5;
                arg0->unkAC = 0;
                e = (func_80237B7C_Struct *)(D_80240828 + v * 12);
                func_8001B204(v & 0xFF, e->unk0 + 0x3E8, e->unk2, D_80240570, 8, 4, e->unk4);
                if (D_8023E3A4 == 0) {
                    func_800058DC(arg0, func_80239BD0);
                    return;
                }
                func_800058DC(arg0, func_80239CF4);
                return;
            }
            func_80234724((void *)arg0, arg1, 1);
        }
    }
    if (arg0->unkA2 == 1) {
        if (arg0->unkA1 == 0) {
            func_80235394((void *)arg0, arg1, 1);
        } else {
            func_80235394((void *)arg0, arg1, 3);
        }
        if (arg0->unkA2 == 0) {
            if (arg0->unkA1 == 0) {
                arg0->unkA5 = arg0->unkA6;
                if (D_8023E3A4 == 0) {
                    func_800058DC(arg0, func_802378DC);
                    return;
                }
                func_800058DC(arg0, func_80238254);
                return;
            }
            arg0->unkA5 = arg0->unkA3 / 2;
            func_800058DC(arg0, D_80237B7C);
        }
    } else if (arg0->unkA2 == -1) {
        func_80235394((void *)arg0, arg1, 3);
        if (arg0->unkA2 == 0) {
            arg0->unkA5 = arg0->unkA3 / 2;
            func_800058DC(arg0, D_80237B7C);
        }
    }
}
