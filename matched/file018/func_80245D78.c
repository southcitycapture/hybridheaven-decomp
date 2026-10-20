#include "context.h"
typedef struct func_80245EBC_StructInner {
    u8 pad0[0x78];
    s16 unk78;
} func_80245EBC_StructInner;
typedef struct func_80245EBC_Struct {
    u8 pad0[0x2C];
    s32 unk2C;
    s32 unk30;
    u8 pad34[0x28];
    func_80245EBC_StructInner *unk5C;
    u8 pad60[0x34];
    s16 unk94;
    u8 pad96[0x6];
    s32 unk9C;
} func_80245EBC_Struct;
void func_80245EBC(func_80245EBC_Struct *arg0, s32 arg1);
extern f32 D_8025C5A0;

typedef struct func_80245D78_Node {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    s32 unkC;
    u8 pad10[0x2];
    s16 unk12;
} func_80245D78_Node;
typedef struct func_80245D78_Mid {
    u8 pad0[0x2C];
    func_80245D78_Node *unk2C;
} func_80245D78_Mid;
typedef struct func_80245D78_Struct {
    u8 pad0[0x24];
    func_80245D78_Mid *unk24;
    u8 pad28[0x34];
    func_80245B90_StructInner *unk5C;
} func_80245D78_Struct;

void func_80245D78(func_80245D78_Struct *arg0, s32 arg1) {
    u8 pad[16];
    func_80245B90_StructInner *sp2C;
    s32 v;
    func_80245D78_Node *n;

    sp2C = arg0->unk5C;
    if (func_80244AB0() == 0) {
        D_8025C708 = 0;
        if (func_8012CE9C(arg1, sp2C, D_80258F3C, 0xA) == 0) {
            func_80010550(arg1, sp2C);
            n = arg0->unk24->unk2C;
            v = (arg0->unk24->unk2C->unk12 - func_8001EF38(0.0f - n->unk4, 420.0f - *(f32 *)&n->unkC)) & 0x1FFF & 0xFFFF;
            if ((v < 0x200) || ((v >= 0x1E01) && (v < 0x1FFF))) {
                sp2C->unk78 = 1;
                n = arg0->unk24->unk2C;
                func_80127430(n->unk4, n->unk8, n->unkC, 0x66A, D_8025C5A0, 1.0f);
                func_800058DC(arg0, func_80245EBC);
            }
            func_8012A7F4(arg0, 0.0f, 420.0f, 0x40);
        }
    }
}
