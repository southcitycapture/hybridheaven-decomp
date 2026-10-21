#include "context.h"

typedef struct func_80236408_StructPair {
    u8 unk0;
    u8 unk1;
} func_80236408_StructPair;

typedef struct func_80236408_Struct {
    u8 pad[0xA3];
    s8 unkA3;
} func_80236408_Struct;

extern func_80236408_StructPair D_8023E4E8;
extern void func_80234ED4(void *arg0, s32 arg1, void *arg2, s32 arg3, s32 arg4);

void func_80236408(func_80236408_Struct *arg0, s32 arg1) {
    func_80236408_StructPair sp24 = D_8023E4E8;

    arg0->unkA3 = 2;
    func_80234ED4(arg0, arg1, &sp24, 0, 1);
}
