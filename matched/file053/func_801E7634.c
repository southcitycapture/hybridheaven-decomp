#include "context.h"
extern void func_801C18CC(s32 arg0, void *arg1);

typedef struct func_801E7634_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801E7634_Struct;

extern func_801E7634_Struct D_801E956C;

s32 func_801E7634(s32 arg0, s32 arg1) {
    func_801E7634_Struct sp1C;

    sp1C = D_801E956C;
    func_801C18CC(1, &sp1C);
    return 0x2F;
}
