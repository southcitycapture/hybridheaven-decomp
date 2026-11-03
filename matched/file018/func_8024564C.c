#include "common.h"
typedef struct func_8024C58C_StructGlobal {
    u8 pad0[0x104];
    u16 unk104;
    u8 pad106[0xBA2 - 0x106];
    u8 unkBA2;
} func_8024C58C_StructGlobal;
extern func_8024C58C_StructGlobal D_801BBBF0;
struct func_802487AC_StructC {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};
extern struct func_802487AC_StructC D_80258F0C;
typedef struct func_80246E60_StructGlobal {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_80246E60_StructGlobal;
extern func_80246E60_StructGlobal D_80258F3C;
extern u32 D_8025C708;
extern void func_800058DC(void *, void *);
extern s32 func_80010550();
extern s32 func_8012A564(void *, s32);
extern void func_8012A94C(void *, s32);
extern s32 func_8012CE9C(s32, void *, func_80246E60_StructGlobal, s32);
extern s32 func_80244AB0();
typedef struct func_80245A4C_Node {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    s32 unkC;
    u8 pad10[0x2];
    s16 unk12;
} func_80245A4C_Node;
typedef struct func_80245A4C_Mid {
    u8 pad0[0x2C];
    func_80245A4C_Node *unk2C;
} func_80245A4C_Mid;
typedef struct func_80245B90_StructInner {
    u8 pad0[0x78];
    s16 unk78;
} func_80245B90_StructInner;
typedef struct func_80245A4C_Struct {
    u8 pad0[0x24];
    func_80245A4C_Mid *unk24;
    u8 pad28[0x34];
    func_80245B90_StructInner *unk5C;
} func_80245A4C_Struct;
void func_80245A4C(func_80245A4C_Struct *arg0, s32 arg1);
typedef struct func_80245B90_Struct {
    u8 pad0[0x2C];
    s32 unk2C;
    s32 unk30;
    u8 pad34[0x28];
    func_80245B90_StructInner *unk5C;
    u8 pad60[0x34];
    s16 unk94;
    u8 pad96[0x6];
    s32 unk9C;
} func_80245B90_Struct;
typedef struct func_802462CC_StructI {
    u8 pad0[0x78];
    s16 unk78;
} func_802462CC_StructI;
typedef struct func_802462CC_StructN {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    s32 unkC;
    u8 pad10[0x2];
    s16 unk12;
} func_802462CC_StructN;
typedef struct func_802462CC_StructM {
    u8 pad0[0x2C];
    func_802462CC_StructN *unk2C;
} func_802462CC_StructM;
typedef struct func_802462CC_Struct {
    u8 pad0[0x24];
    func_802462CC_StructM *unk24;
    u8 pad28[0x34];
    func_802462CC_StructI *unk5C;
} func_802462CC_Struct;
void func_802462CC(func_802462CC_Struct *arg0, s32 arg1);
typedef struct func_80246964_StructNode {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[0x2];
    s16 unk12;
} func_80246964_StructNode;
typedef struct func_80246964_StructMid {
    u8 pad0[0x2C];
    func_80246964_StructNode *unk2C;
} func_80246964_StructMid;
typedef struct func_80246964_Struct {
    u8 pad0[0x24];
    func_80246964_StructMid *unk24;
    u8 pad28[0x34];
    u8 *unk5C;
} func_80246964_Struct;
void func_80246964(func_80246964_Struct *arg0, s32 arg1);
typedef struct func_80246C5C_StructNode {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[0x2];
    s16 unk12;
} func_80246C5C_StructNode;
typedef struct func_80246C5C_StructMid {
    u8 pad0[0x2C];
    func_80246C5C_StructNode *unk2C;
} func_80246C5C_StructMid;
typedef struct func_80246C5C_Struct {
    u8 pad0[0x24];
    func_80246C5C_StructMid *unk24;
    u8 pad28[0x34];
    u8 *unk5C;
} func_80246C5C_Struct;
void func_80246C5C(func_80246C5C_Struct *arg0, s32 arg1);
extern void func_80247FEC();


typedef struct func_8024564C_StructPos {
    u8 pad0[4];
    f32 unk4;
    u8 pad8[4];
    f32 unkC;
} func_8024564C_StructPos;

typedef struct func_8024564C_StructMid {
    u8 pad0[0x2C];
    func_8024564C_StructPos *unk2C;
} func_8024564C_StructMid;

extern u8 D_8025C6F8;
extern s8 D_8025C6F9;
extern u8 D_8025C6FA;
extern f32 D_8025C594;
extern f32 D_8025C598;
extern f32 D_8025C70C;
extern f32 D_8025C714;
extern u8 func_80246F24[];
extern u8 func_80247C54[];

void func_8024564C(func_80245B90_Struct *arg0, s32 arg1) {
    func_80245B90_StructInner *sp2C;
    func_8024564C_StructPos *p;
    f32 dx;
    f32 dz;
    s8 *q;

    sp2C = arg0->unk5C;
    arg0->unk2C |= 0x80;
    if (func_80244AB0() != 0) {
        return;
    }
    if (D_8025C6FA != 0) {
        if (func_8012CE9C(arg1, sp2C, *(func_80246E60_StructGlobal *)&D_80258F0C, 0xA) == 0) {
            func_80010550(arg1, sp2C);
        }
        return;
    }
    if (func_8012CE9C(arg1, sp2C, D_80258F3C, 0xA) != 0) {
        return;
    }
    arg0->unk2C |= 0x80;
    func_80010550(arg1, sp2C);
    if (D_8025C6F8 != 0) {
        if (func_8012A564(arg0, 0x43870000) == 0) {
            sp2C->unk78 = 1;
            arg0->unk2C &= ~0x80;
            func_800058DC(arg0, func_80246964);
            return;
        }
    } else {
        if (func_8012A564(arg0, 0x441D8000) == 0) {
            sp2C->unk78 = 1;
            arg0->unk2C &= ~0x80;
            func_800058DC(arg0, func_80246C5C);
            return;
        }
    }
    if (D_8025C6F8 != 0) {
        if (func_8012A564(arg0, 0x436A0000) == 0) {
            q = &D_8025C6F9;
            *q = 1;
            if ((u8)*q == 0) {
                func_800058DC(arg0, func_80245A4C);
                goto l_end;
            }
            D_8025C708 = 1;
            p = (*(func_8024564C_StructMid **)((u8 *)&D_801BBBF0 + 0xE0))->unk2C;
            dx = D_8025C70C - p->unk4;
            dz = D_8025C714 - p->unkC;
            if (dx * dx + dz * dz < D_8025C594) {
                sp2C->unk78 = 1;
                arg0->unk2C &= ~0x80;
                if (*(u16 *)((u8 *)&D_801BBBF0 + 0x30) & 1) {
                    func_800058DC(arg0, func_80247FEC);
                } else {
                    func_800058DC(arg0, func_80247C54);
                }
                return;
            }
        } else {
            D_8025C708 = 0;
        }
    } else {
        if (func_8012A564(arg0, 0x42D80000) == 0) {
            D_8025C708 = 1;
            p = (*(func_8024564C_StructMid **)((u8 *)&D_801BBBF0 + 0xE0))->unk2C;
            dx = D_8025C70C - p->unk4;
            dz = D_8025C714 - p->unkC;
            if (dx * dx + dz * dz < D_8025C598) {
                sp2C->unk78 = 1;
                arg0->unk2C &= ~0x80;
                func_800058DC(arg0, func_80247C54);
            }
        } else {
            D_8025C708 = 0;
        }
    }
l_end:
    if (func_8012A564(arg0, 0x42580000) != 0) {
        sp2C->unk78 = 1;
        arg0->unk2C &= ~0x80;
        func_800058DC(arg0, func_80246F24);
        return;
    }
    if (D_8025C6F8 != 0 && func_8012A564(arg0, 0x42D80000) != 0) {
        sp2C->unk78 = 1;
        arg0->unk2C &= ~0x80;
        func_800058DC(arg0, func_802462CC);
        return;
    }
    func_8012A94C(arg0, 0x16);
}
