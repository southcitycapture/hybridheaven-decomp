#include "context.h"

typedef struct func_80360588_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_80360588_Struct;

extern void func_80360400(func_80360588_Struct *arg0, s32 arg1, s32 arg2);
extern void func_8036048C(s32 arg0, s32 arg1, func_80360588_Struct arg2);

void func_80360588(s32 arg0, s32 arg1) {
    func_80360588_Struct sp24;

    func_80360400(&sp24, arg0, arg1);
    func_8036048C(arg0, arg1, sp24);
}
