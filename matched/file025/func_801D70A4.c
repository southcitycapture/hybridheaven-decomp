#include "context.h"

extern s32 D_801DBA34;
extern s32 D_801E1770;
extern void func_801CC948(s32, s32);

void func_801D70A4(s32 arg0) {
    if (arg0 != 0) {
        func_8012D844(D_801E1770, 0x140, 2);
        func_8012D894(D_801E1770, 0x140, 6);
    }
    func_801CC948(D_801DBA34, arg0);
}
