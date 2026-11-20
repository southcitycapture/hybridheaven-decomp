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
extern s32 D_80244AB0();
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
typedef struct func_80246DA0_Struct func_80246DA0_Struct;
void func_80246DA0(func_80246DA0_Struct *arg0, s32 arg1);


extern f32 D_8025C5B4;

typedef struct func_80246C5C_StructFacing {
    u8 *inner;
    f32 deltaX;
    f32 deltaZ;
    s32 targetAngle;
    u32 relativeAngle;
} func_80246C5C_StructFacing;

void func_80246C5C(func_80246C5C_Struct *arg0, s32 arg1) {
    func_80246C5C_StructFacing facing;

    facing.inner = arg0->unk5C;
    D_8025C708 = 0;
    if (D_80244AB0() == 0) {
        if (func_8012CE9C(arg1, facing.inner, D_80258F3C, 10) == 0) {
            func_80010550(arg1, facing.inner);
            facing.deltaX = ((func_80246C5C_StructMid *)D_801BBCD0)->unk2C->unk4 - arg0->unk24->unk2C->unk4;
            facing.deltaZ = ((func_80246C5C_StructMid *)D_801BBCD0)->unk2C->unkC - arg0->unk24->unk2C->unkC;
            facing.targetAngle = func_8001EF38(facing.deltaX, facing.deltaZ);
            facing.relativeAngle = (arg0->unk24->unk2C->unk12 - facing.targetAngle) & 0x1FFF;
            facing.relativeAngle &= 0xFFFF;
            if ((s32)facing.relativeAngle < 0x200 || ((s32)facing.relativeAngle >= 0x1E01 && (s32)facing.relativeAngle < 0x1FFF)) {
                *(s16 *)(facing.inner + 0x78) = 1;
                func_80127430(arg0->unk24->unk2C->unk4, arg0->unk24->unk2C->unk8, *(s32 *)((u8 *)arg0->unk24->unk2C + 0xC), 0x66A, D_8025C5B4, 1.0f);
                func_800058DC(arg0, func_80246DA0);
            }
            func_8012A94C(arg0, 0x40);
        }
    }
}
