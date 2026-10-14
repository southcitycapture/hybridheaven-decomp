#include "context.h"

typedef struct func_801477C4_Struct {
    f32 unk0;
    f32 unk4;
    f32 unk8;
} func_801477C4_Struct;

void func_801477C4(func_801477C4_Struct *arg0, f32 arg1) {
    arg0->unk0 = arg0->unk0 * arg1;
    arg0->unk4 = arg0->unk4 * arg1;
    arg0->unk8 = arg0->unk8 * arg1;
}
