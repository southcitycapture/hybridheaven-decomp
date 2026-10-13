#include "context.h"

typedef struct func_801C3698_StructBBBF0 {
    u8 pad0[0xF00];
    u16 unkF00;
    u8 pad1[0x6];
    f32 unkF08;
    u8 pad2[0x4];
    s32 unkF10;
} func_801C3698_StructBBBF0;

extern void func_801C36F8();

void func_801C3698(struct func_801C3174_Obj *arg0, s32 arg1) {
    struct func_801C3174_Sub *inner;

    extern void func_800058DC();

    inner = arg0->unk5C;
    D_801E0B20.unk4 = 0;
    D_801E0B20.unk0 = ((func_801C3698_StructBBBF0 *) D_801BBBF0)->unkF10;
    D_801E0B20.unk6 = ((func_801C3698_StructBBBF0 *) D_801BBBF0)->unkF00;
    D_801E0B20.unk8 = ((func_801C3698_StructBBBF0 *) D_801BBBF0)->unkF08;
    inner->unk78 = 1;
    func_800058DC(arg0, &func_801C36F8, D_801BBBF0);
}
