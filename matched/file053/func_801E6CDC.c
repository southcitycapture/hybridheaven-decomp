#include "context.h"
extern void func_801C18CC(s32 arg0, void *arg1);

typedef struct func_801E6CDC_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801E6CDC_Struct;

extern func_801E6CDC_Struct D_801E94A0;

s32 func_801E6CDC(s32 arg0, s32 arg1) {
    func_801E6CDC_Struct sp1C;

    sp1C = D_801E94A0;
    func_801C18CC(1, &sp1C);
    return 0x6;
}
