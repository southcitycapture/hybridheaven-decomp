#include "context.h"

typedef struct func_801C5C70_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801C5C70_Struct;

extern void func_801477C4(void *arg0, f32 arg1);
extern void func_80147734(void *arg0, void *arg1, void *arg2);

void func_801C5C70(void *arg0, func_801C5C70_Struct *arg1, f32 arg2) {
    func_801C5C70_Struct sp1C;

    sp1C = *arg1;
    func_801477C4(&sp1C, arg2);
    func_80147734(arg0, &sp1C, arg0);
}
