#include "context.h"

typedef struct {
    u8 pad[0x202];
    u8 a[16][33];
    u8 b[16][9];
    u8 c[16];
} func_80003550_Struct;

#define S ((func_80003550_Struct *)arg1)

void func_80003550(u8 arg0, void *arg1) {
    s32 i;

    for (i = 0; i < 32;) {
        S->a[arg0][i++] = 0xA1;
    }
    S->a[arg0][i] = 0;
    for (i = 0; i != 8;) {
        S->b[arg0][i++] = 0xA1;
        S->b[arg0][i++] = 0xA1;
        S->b[arg0][i++] = 0xA1;
        S->b[arg0][i++] = 0xA1;
    }
    S->b[arg0][i] = 0;
    S->c[arg0] = 0;
}
