#include "context.h"
typedef struct func_801C34C8_StructArg {
    u8 pad0[0x54];
    s32 unk54;
    u8 pad1[0x4];
    s32 unk5C;
} func_801C34C8_StructArg;
void func_801C34C8(func_801C34C8_StructArg *arg0, s32 arg1);

typedef struct func_801C3468_StructBBBF0 {
    u8 pad0[0xF00];
    u16 unkF00;
    u8 pad1[0x6];
    f32 unkF08;
    u8 pad2[0x4];
    s32 unkF10;
} func_801C3468_StructBBBF0;

void func_801C3468(struct func_801C3174_Obj *arg0, s32 arg1) {
    func_801C3468_StructBBBF0 *src;
    struct func_801C3174_Sub *inner;

    extern void func_800058DC();

    inner = arg0->unk5C;
    src = (func_801C3468_StructBBBF0 *) D_801BBBF0;
    D_801E0B20.unk4 = 0;
    D_801E0B20.unk0 = src->unkF10;
    D_801E0B20.unk6 = src->unkF00;
    D_801E0B20.unk8 = src->unkF08;
    inner->unk78 = 1;
    func_800058DC(arg0, &func_801C34C8, src);
}
