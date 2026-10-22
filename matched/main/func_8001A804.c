#include "context.h"
#define va_arg(ap, type) (*(type *)((ap = (u8 *)(((u32)ap + 3) & ~3) + 4) - 4))

void func_8001A804(u8 arg0, u8 *arg1, ...) {
    u8 *ap;
    s32 i;
    u8 c;

    ap = (u8 *)(&arg1 + 1);
    D_8008EEA0[arg0].flag = 1;
    c = *arg1;
    if (c != 0) {
        i = 0;
        do {
            if (c != ' ') {
                if (c == 'p') {
                    c = arg1[++i];
                    if (c == 'x') D_8008EEA0[arg0].x = va_arg(ap, s32);
                    if (c == 'y') D_8008EEA0[arg0].y = va_arg(ap, s32);
                }
                if (c == 's') {
                    c = arg1[++i];
                    if (c == 'x') D_8008EEA0[arg0].w0E = va_arg(ap, s32);
                    if (c == 'y') D_8008EEA0[arg0].w10 = va_arg(ap, s32);
                    if (c == 'f') D_8008EEA0[arg0].w12 = va_arg(ap, s32);
                }
                if (c == 'w') {
                    c = arg1[++i];
                    if (c == 'r') D_8008EEA0[arg0].b6 = va_arg(ap, s32);
                    if (c == 'g') D_8008EEA0[arg0].b7 = va_arg(ap, s32);
                    if (c == 'b') D_8008EEA0[arg0].b8 = va_arg(ap, s32);
                    if (c == 'a') D_8008EEA0[arg0].b9 = va_arg(ap, s32);
                }
                if (c == 'f') {
                    c = arg1[++i];
                    if (c == 'r') D_8008EEA0[arg0].bA = va_arg(ap, s32);
                    if (c == 'g') D_8008EEA0[arg0].bB = va_arg(ap, s32);
                    if (c == 'b') D_8008EEA0[arg0].bC = va_arg(ap, s32);
                    if (c == 'a') D_8008EEA0[arg0].bD = va_arg(ap, s32);
                }
            }
            c = arg1[++i];
        } while (c != 0);
    }
}
