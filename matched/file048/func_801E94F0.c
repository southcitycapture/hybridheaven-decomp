#include "context.h"
extern void func_801C18CC(s32 a0, void *a1);

typedef struct func_801E94F0_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801E94F0_Struct;

extern func_801E94F0_Struct D_801EA144;

s32 func_801E94F0(s32 arg0, s32 arg1) {
    func_801E94F0_Struct sp1C;

    sp1C = D_801EA144;
    func_801C18CC(1, &sp1C);
    return 0x4;
}
