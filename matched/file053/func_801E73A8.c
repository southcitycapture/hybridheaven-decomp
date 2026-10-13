#include "context.h"
extern void func_801C18CC(s32 arg0, void *arg1);

typedef struct func_801E73A8_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801E73A8_Struct;

extern func_801E73A8_Struct D_801E9530;

s32 func_801E73A8(s32 arg0, s32 arg1) {
    func_801E73A8_Struct sp1C;

    sp1C = D_801E9530;
    func_801C18CC(1, &sp1C);
    return 0x24;
}
