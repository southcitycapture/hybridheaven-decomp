#include "context.h"
extern void func_801C18CC(s32 arg0, void *arg1);

typedef struct func_801E6E2C_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801E6E2C_Struct;

extern func_801E6E2C_Struct D_801E94B8;

s32 func_801E6E2C(s32 arg0, s32 arg1) {
    func_801E6E2C_Struct sp1C;

    sp1C = D_801E94B8;
    func_801C18CC(1, &sp1C);
    return 0xC;
}
