#include "context.h"

typedef struct func_801F74FC_Struct {
    s32 w0;
    s32 w1;
    s32 w2;
} func_801F74FC_Struct;

typedef struct func_801F74FC_Obj {
    u8 pad0[0x5C];
    s32 unk5C;
} func_801F74FC_Obj;

extern void func_8012CE9C(s32, s32, func_801F74FC_Struct, s32);
extern func_801F74FC_Struct D_80216EB8;

void func_801F74FC(func_801F74FC_Obj *arg0, s32 arg1) {
    s32 a;

    a = arg0->unk5C;
    func_8012CE9C(arg1, a, D_80216EB8, 0x3C);
}
