#include "context.h"

typedef struct func_801E7450_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801E7450_Struct;

extern func_801E7450_Struct D_801E953C;
extern void func_801C18CC(s32 a0, void *a1);

s32 func_801E7450(s32 arg0, s32 arg1) {
    func_801E7450_Struct sp18;

    sp18 = D_801E953C;
    func_801C18CC(2, &sp18);
    return 0x27;
}
