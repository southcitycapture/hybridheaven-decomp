#include "context.h"
extern u8 D_800CBDA8[];
extern u8 D_800CBDAF[];

void func_80024C84(void) {
    s32 a;
    s32 b;
    u8 c;
    u8 *p;
    s32 i;

    a = *D_800CBDA0++;
    b = *D_800CBDA0++;
    if (a != 0) {
        i = a;
        p = D_800CBDA8 + a;
        a = a * 1;
        c = p[-1];
        if (c != 0) {
            if (b != 0) {
                D_800CBDAF[a] = a + 0xF0;
                return;
            }
            D_800CBDAF[i] = c;
            p[-1] = 0;
        }
    }
}
