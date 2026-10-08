#include "common.h"

extern void func_801C0438();
extern void func_801C088C();
extern void func_801C08B0();
extern void func_801C08F0();
extern void func_801C0914();
extern s32 D_801D8CFC;

void func_801C0834(void) {
    if (D_801D8CFC != 0) {
        func_801C0438();
        func_801C08B0();
    } else {
        func_801C088C();
    }
    func_801C08F0();
    func_801C0914();
}
