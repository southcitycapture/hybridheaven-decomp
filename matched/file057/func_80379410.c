#include "context.h"

extern u8 D_8017E004[];

void func_80379410(u8 *arg0, u8 arg1) {
    s32 i;
    s32 j;
    u8 *p;

    i = 0;
    if (!arg1) {
        for (j = 0; j < 0x2D; j = (j + 1) & 0xFF) {
            p = arg0 + j;
            D_8017E004[j * 8 + 4] = p[0x338] & 0x7F;
        }
        return;
    }
    for (i = 0; i < 0x2D; i = (i + 1) & 0xFF) {
        p = arg0 + i;
        p[0x338] = D_8017E004[i * 8 + 4];
    }
}
