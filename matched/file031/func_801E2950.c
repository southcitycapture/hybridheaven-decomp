#include "context.h"

typedef struct func_801E2950_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801E2950_Struct;

extern void func_801C18CC(s32, void *);
extern func_801E2950_Struct D_801E2C60;

s32 func_801E2950(s32 arg0, s32 arg1) {
    func_801E2950_Struct sp18;

    sp18 = D_801E2C60;
    func_801C18CC(2, &sp18);
    return 4;
}
