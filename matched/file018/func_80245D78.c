#include "common.h"
typedef struct func_80246E60_StructGlobal {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_80246E60_StructGlobal;
extern func_80246E60_StructGlobal D_80258F3C;
extern u32 D_8025C708;
extern void func_800058DC(void *, void *);
extern s32 func_80010550();
extern s32 func_8001EF38(f32, f32);
extern void func_80127430(f32, f32, s32, s32, f32, f32);
extern void func_8012A7F4(void *, f32, f32, s32);
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
void func_80245EBC(struct func_80245EBC_Struct *arg0, s32 arg1);

extern f32 D_8025C5A0;

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
typedef struct func_80245D78_StructWork {
    f32 x;
    func_80245B90_StructInner *inner;
    f32 y;
    s32 z;
} func_80245D78_StructWork;

void func_80245D78(func_80245D78_Struct *arg0, s32 arg1) {
    s32 v;
    func_80245D78_StructNode *n;
    func_80245D78_StructWork work;

    work.inner = arg0->unk5C;
    if (func_80244AB0((func_80244AB0_Struct *)arg0) == 0) {
        D_8025C708 = 0;
        if (func_8012CE9C(arg1, work.inner, D_80258F3C, 0xA) == 0) {
            func_80010550(arg1, work.inner);
            n = arg0->unk24->unk2C;
            v = (arg0->unk24->unk2C->unk12 - func_8001EF38(0.0f - n->unk4, 420.0f - *(f32 *)&n->unkC)) & 0x1FFF & 0xFFFF;
            if ((v < 0x200) || ((v >= 0x1E01) && (v < 0x1FFF))) {
                work.inner->unk78 = 1;
                n = arg0->unk24->unk2C;
                work.x = n->unk4;
                work.y = n->unk8;
                work.z = n->unkC;
                func_80127430(work.x, work.y, work.z, 0x66A, D_8025C5A0, 1.0f);
                func_800058DC(arg0, func_80245EBC);
            }
            func_8012A7F4(arg0, 0.0f, 420.0f, 0x40);
        }
    }
}
