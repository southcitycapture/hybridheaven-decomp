#include "context.h"
extern s32 func_80244AB0();
typedef struct func_80245B90_StructInner {
    u8 pad0[0x78];
    s16 unk78;
} func_80245B90_StructInner;
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
void func_80245B90(func_80245B90_Struct *arg0, s32 arg1);
extern s32 func_8001EF38(f32, f32);

extern void func_8012A7F4(void *, f32, f32, s32);
extern void func_80127430(f32, f32, s32, s32, f32, f32);
extern f32 D_8025C59C;

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
typedef struct func_80245A4C_Struct {
    u8 pad0[0x24];
    func_80245A4C_Mid *unk24;
    u8 pad28[0x34];
    func_80245B90_StructInner *unk5C;
} func_80245A4C_Struct;

void func_80245A4C(func_80245A4C_Struct *arg0, s32 arg1) {
    u8 pad[16];
    func_80245B90_StructInner *sp2C;
    s32 v;
    func_80245A4C_Node *n;

    sp2C = arg0->unk5C;
    if (func_80244AB0() == 0) {
        D_8025C708 = 0;
        if (func_8012CE9C(arg1, sp2C, D_80258F3C, 0xA) == 0) {
            func_80010550(arg1, sp2C);
            n = arg0->unk24->unk2C;
            v = (arg0->unk24->unk2C->unk12 - func_8001EF38(0.0f - n->unk4, 350.0f - *(f32 *)&n->unkC)) & 0x1FFF & 0xFFFF;
            if ((v < 0x200) || ((v >= 0x1E01) && (v < 0x1FFF))) {
                sp2C->unk78 = 1;
                n = arg0->unk24->unk2C;
                func_80127430(n->unk4, n->unk8, n->unkC, 0x66A, D_8025C59C, 1.0f);
                func_800058DC(arg0, func_80245B90);
            }
            func_8012A7F4(arg0, 0.0f, 350.0f, 0x40);
        }
    }
}
