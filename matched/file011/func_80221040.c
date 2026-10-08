#include "context.h"

extern void func_8035C048(void);
extern u8 D_801BCC21;

void func_80221040(void) {
    if (D_801BCC21 != 0xF) {
        func_8035C048();
    }
}
