#include "context.h"

typedef struct func_801E96BC_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801E96BC_Struct;

extern void func_801C18CC(s32 a0, void *a1);
extern func_801E96BC_Struct D_801EA168;

s32 func_801E96BC(s32 arg0, s32 arg1) {
    func_801E96BC_Struct sp18;

    sp18 = D_801EA168;
    func_801C18CC(2, &sp18);
    return 0xC;
}
