#include "context.h"
typedef struct func_80246410_Struct {
    u8 pad0[0x2C];
    s32 unk2C;
    s32 unk30;
    u8 pad34[0x28];
    u8 *unk5C;
    u8 pad60[0x34];
    s16 unk94;
    u8 pad96[0x6];
    s32 unk9C;
} func_80246410_Struct;
void func_80246410(func_80246410_Struct *arg0, s32 arg1);
extern void func_8012A94C(void *, s32);

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
typedef struct func_802462CC_StructI {
    u8 pad0[0x78];
    s16 unk78;
} func_802462CC_StructI;
typedef struct func_802462CC_Struct {
    u8 pad0[0x24];
    func_802462CC_StructM *unk24;
    u8 pad28[0x34];
    func_802462CC_StructI *unk5C;
} func_802462CC_Struct;
extern void func_80127430(f32, f32, s32, s32, f32, f32);
extern f32 D_8025C5A8;

void func_802462CC(func_802462CC_Struct *arg0, s32 arg1) {
    u8 pad[16];
    func_802462CC_StructI *sp2C;
    s32 v;

    sp2C = arg0->unk5C;
    if (func_80244AB0() == 0) {
        D_8025C708 = 0;
        v = func_8001EF38(D_801BBCD0->unk2C->unk4 - arg0->unk24->unk2C->unk4,
                          D_801BBCD0->unk2C->unkC - *(f32 *)&arg0->unk24->unk2C->unkC);
        v = (arg0->unk24->unk2C->unk12 - v) & 0x1FFF & 0xFFFF;
        if (v < 0x200 || (v >= 0x1E01 && v < 0x1FFF)) {
            sp2C->unk78 = 1;
            func_80127430(arg0->unk24->unk2C->unk4, arg0->unk24->unk2C->unk8, arg0->unk24->unk2C->unkC, 0x66A, D_8025C5A8, 1.0f);
            func_800058DC(arg0, func_80246410);
        }
        if (func_8012CE9C(arg1, sp2C, D_80258F3C, 0xA) == 0) {
            func_80010550(arg1, sp2C);
            func_8012A94C(arg0, 0x40);
        }
    }
}
