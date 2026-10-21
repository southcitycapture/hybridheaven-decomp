#include "context.h"

typedef struct func_8023644C_Struct {
    u8 data[2];
} func_8023644C_Struct;

typedef struct func_8023644C_StructArg {
    u8 pad[0xA3];
    s8 unkA3;
} func_8023644C_StructArg;

extern func_8023644C_Struct D_8023E4EC;
extern void func_80234ED4(void *arg0, s32 arg1, void *arg2, s32 arg3, s32 arg4);

void func_8023644C(func_8023644C_StructArg *arg0, s32 arg1) {
    func_8023644C_Struct sp24 = D_8023E4EC;

    arg0->unkA3 = 2;
    func_80234ED4(arg0, arg1, &sp24, 0, 0);
}
