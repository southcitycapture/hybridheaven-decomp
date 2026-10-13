#include "context.h"
extern s32 func_801C18CC(s32 arg0, void *arg1);

typedef struct func_801E79E0_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801E79E0_Struct;

extern func_801E79E0_Struct D_801E8FB0;

s32 func_801E79E0(s32 arg0, s32 arg1) {
    func_801E79E0_Struct sp1C;

    sp1C = D_801E8FB0;
    func_801C18CC(1, &sp1C);
    return 0xB;
}
