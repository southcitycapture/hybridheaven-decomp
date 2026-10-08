#include "context.h"

typedef struct func_801C7A74_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
    s32 unk18;
} func_801C7A74_Struct;

extern func_801C7A74_Struct D_801E04C0;

void func_801C7A74(func_801C7A74_Struct *arg0) {
    D_801E04C0 = *arg0;
}
