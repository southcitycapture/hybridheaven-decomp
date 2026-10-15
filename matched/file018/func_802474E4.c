#include "context.h"

typedef struct func_802474E4_Struct {
    u8 pad0[0x24];
    func_802474E4_StructMid *unk24;
    u8 pad28[0x34];
    func_80246E60_StructInner *unk5C;
} func_802474E4_Struct;

extern func_80246E60_StructGlobal D_80258F3C;
extern func_802474E4_StructMid *D_801BBCD0;
extern s32 func_8001EF38(f32, f32);
extern void func_8024564C();

void func_802474E4(func_802474E4_Struct *arg0, s32 arg1) {
    s32 temp_v1_2;
    func_80246E60_StructInner *sp28;

    sp28 = arg0->unk5C;
    if ((func_80244AB0() == 0) && (func_8012CE9C(arg1, sp28, D_80258F3C, 0xA) == 0)) {
        func_80010550(arg1, sp28);
        temp_v1_2 = (arg0->unk24->unk2C->unk12 - func_8001EF38(D_801BBCD0->unk2C->unk4 - arg0->unk24->unk2C->unk4, D_801BBCD0->unk2C->unkC - arg0->unk24->unk2C->unkC)) & 0x1FFF & 0xFFFF;
        if ((temp_v1_2 < 0x200) || ((temp_v1_2 >= 0x1E01) && (temp_v1_2 < 0x1FFF))) {
            sp28->unk78 = 1;
            func_800058DC(arg0, (void *)func_8024564C);
        }
        func_8012A94C(arg0, 0x40);
    }
}
