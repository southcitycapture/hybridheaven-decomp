#include "context.h"

extern void func_801C0760();
extern void func_801C07A8();
extern void func_801C0834();

void func_801C0058(void) {
    if (func_801C02FC() != 0) {
        func_801C0760();
        return;
    }
    if (func_801C0320() != 0) {
        func_801C07A8();
        return;
    }
    func_801C0834();
}
