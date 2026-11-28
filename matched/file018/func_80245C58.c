#include "common.h"
typedef struct func_80246E60_StructGlobal {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_80246E60_StructGlobal;
extern struct func_80246E60_StructGlobal D_80258F48;
extern void func_800058DC(void *, void *);
extern s32 func_80010550();
extern s32 func_8012CE9C(s32, void *, func_80246E60_StructGlobal, s32);
typedef struct func_80244AB0_Node {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[0x2];
    s16 unk12;
} func_80244AB0_Node;
typedef struct func_80244AB0_Mid {
    u8 pad0[0x2C];
    func_80244AB0_Node *unk2C;
} func_80244AB0_Mid;
typedef struct func_80244AB0_Struct {
    u8 pad0[0x24];
    func_80244AB0_Mid *unk24;
} func_80244AB0_Struct;
s32 func_80244AB0(func_80244AB0_Struct *arg0);
typedef struct func_80245B90_StructInner {
    u8 pad0[0x78];
    s16 unk78;
} func_80245B90_StructInner;
typedef struct func_80245D78_StructNode {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    s32 unkC;
    u8 pad10[0x2];
    s16 unk12;
} func_80245D78_StructNode;
typedef struct func_80245D78_StructMid {
    u8 pad0[0x2C];
    func_80245D78_StructNode *unk2C;
} func_80245D78_StructMid;
typedef struct func_80245D78_Struct {
    u8 pad0[0x24];
    func_80245D78_StructMid *unk24;
    u8 pad28[0x34];
    func_80245B90_StructInner *unk5C;
} func_80245D78_Struct;
void func_80245D78(struct func_80245D78_Struct *arg0, s32 arg1);
typedef struct func_802474E4_StructNode {
    u8 pad0[0x4];
    f32 unk4;
    u8 pad8[0x4];
    f32 unkC;
    u8 pad10[0x2];
    s16 unk12;
} func_802474E4_StructNode;
typedef struct func_802474E4_StructMid {
    u8 pad0[0x2C];
    func_802474E4_StructNode *unk2C;
} func_802474E4_StructMid;

typedef struct func_80245C58_Struct {
    u8 pad0[0x24];
    func_802474E4_StructMid *unk24;
    u8 pad28[0x34];
    void *unk5C;
} func_80245C58_Struct;
extern s32 D_8012A7F4(void *, f32, f32, s32);

void func_80245C58(func_80245C58_Struct *arg0, s32 arg1) {
    void *sp24;
    func_802474E4_StructNode *n;
    f32 x;
    f32 a;
    f32 b;

    sp24 = arg0->unk5C;
    if (func_80244AB0(arg0) != 0) {
        return;
    }
    if (func_8012CE9C(arg1, sp24, D_80258F48, 0xA) != 0) {
        return;
    }
    func_80010550(arg1, sp24);
    D_8012A7F4(arg0, 0.0f, 350.0f, 0x100);
    n = arg0->unk24->unk2C;
    x = n->unk4;
    if (x < 0.0f) {
        a = -x;
    } else {
        a = x;
    }
    x = n->unkC;
    if (350.0f < x) {
        b = -(350.0f - x);
    } else {
        b = 350.0f - x;
    }
    if (b + a < 40.0f) {
        func_800058DC(arg0, func_80245D78);
    } else {
        return;
    }
}
