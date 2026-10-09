#include "context.h"

extern void func_801E3AAC();
extern void func_801E3C90();
extern void func_801E3E74();

s32 func_801E43B8(s32 arg0, s32 arg1) {
    if (((func_801E23C4_Struct *)func_801BF6B0(1))->unkC < 2) {
        return 1;
    }
    func_801E3AAC();
    func_801E3C90();
    func_801E3E74();
    return 2;
}
