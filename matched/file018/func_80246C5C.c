#include "context.h"
typedef struct func_80246DA0_StructInner {
    u8 pad0[0x78];
    s16 unk78;
} func_80246DA0_StructInner;
typedef struct func_80246DA0_Struct {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad30[0x2C];
    func_80246DA0_StructInner *unk5C;
    u8 pad60[0x34];
    s16 unk94;
} func_80246DA0_Struct;
void func_80246DA0(func_80246DA0_Struct *arg0, s32 arg1);

extern f32 D_8025C5B4;

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

void func_80246C5C(func_80246C5C_Struct *arg0, s32 arg1) {
    u8 pad[16];
    u8 *sp2C;

    sp2C = arg0->unk5C;
    D_8025C708 = 0;
    if (func_80244AB0() == 0) {
        if (func_8012CE9C(arg1, sp2C, D_80258F3C, 10) == 0) {
            u32 v;
            func_80010550(arg1, sp2C);
            v = (arg0->unk24->unk2C->unk12 - func_8001EF38(((func_80246C5C_StructMid *)D_801BBCD0)->unk2C->unk4 - arg0->unk24->unk2C->unk4, ((func_80246C5C_StructMid *)D_801BBCD0)->unk2C->unkC - arg0->unk24->unk2C->unkC)) & 0x1FFF;
            v &= 0xFFFF;
            if ((s32)v < 0x200 || ((s32)v >= 0x1E01 && (s32)v < 0x1FFF)) {
                *(s16 *)(sp2C + 0x78) = 1;
                func_80127430(arg0->unk24->unk2C->unk4, arg0->unk24->unk2C->unk8, *(s32 *)((u8 *)arg0->unk24->unk2C + 0xC), 0x66A, D_8025C5B4, 1.0f);
                func_800058DC(arg0, func_80246DA0);
            }
            func_8012A94C(arg0, 0x40);
        }
    }
}
