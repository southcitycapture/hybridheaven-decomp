#include "common.h"
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
extern struct func_802474E4_StructMid *D_801BBCD0;
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
extern void func_8012A94C(void *, s32);
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
typedef struct func_80246410_Struct func_80246410_Struct;
void func_80246410(func_80246410_Struct *arg0, s32 arg1);

typedef struct func_802462CC_StructDelta {
    f32 x;
    f32 z;
} func_802462CC_StructDelta;

typedef struct func_802462CC_StructFacing {
    func_802462CC_StructI *inner;
    s32 targetAngle;
    s32 relativeAngle;
    func_80246E60_StructGlobal *range;
    void (*next)(func_80246410_Struct *, s32);
} func_802462CC_StructFacing;

typedef struct func_802462CC_StructPosition {
    f32 x;
    f32 y;
    s32 z;
} func_802462CC_StructPosition;

void func_802462CC(func_802462CC_Struct *arg0, s32 arg1) {
    func_802462CC_StructFacing facing;
    func_802462CC_StructDelta delta;
    func_802462CC_StructPosition position;

    facing.inner = arg0->unk5C;
    facing.range = &D_80258F3C;
    facing.next = func_80246410;
    if (func_80244AB0((func_80244AB0_Struct *)arg0) == 0) {
        D_8025C708 = 0;
        delta.x = D_801BBCD0->unk2C->unk4 - arg0->unk24->unk2C->unk4;
        delta.z = D_801BBCD0->unk2C->unkC - *(f32 *)&arg0->unk24->unk2C->unkC;
        facing.targetAngle = func_8001EF38(delta.x, delta.z);
        facing.relativeAngle = (u16)((arg0->unk24->unk2C->unk12 - facing.targetAngle) & 0x1FFF);
        if (facing.relativeAngle < 0x200 || (facing.relativeAngle >= 0x1E01 && facing.relativeAngle < 0x1FFF)) {
            facing.inner->unk78 = 1;
            position.x = arg0->unk24->unk2C->unk4;
            position.y = arg0->unk24->unk2C->unk8;
            position.z = arg0->unk24->unk2C->unkC;
            func_80127430(position.x, position.y, position.z, 0x66A, 1.8f, 1.0f);
            func_800058DC(arg0, facing.next);
        }
        if (func_8012CE9C(arg1, facing.inner, *facing.range, 0xA) == 0) {
            func_80010550(arg1, facing.inner);
            func_8012A94C(arg0, 0x40);
        }
    }
}
