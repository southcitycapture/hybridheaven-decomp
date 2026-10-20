#include "context.h"

extern u8 D_8017DF14[];
typedef struct func_8037F448_Struct { u8 pad[0x375]; u8 n; u8 pad2[2]; u8 d[5]; } func_8037F448_Struct;

void func_8037F448(arg0, arg1)
u8 arg0;
func_8037F448_Struct *arg1;
{
    s32 i;

    if (arg1->n == 1) {
        for (i = 0; i < 2; i = (i + 1) & 0xFF) { D_8017DF14[arg0 * 7 + i + 1] = arg1->d[i]; }
    } else if (arg1->n == 2) {
        for (i = 0; i < 3; i = (i + 1) & 0xFF) { D_8017DF14[arg0 * 7 + i + 1] = arg1->d[i]; }
    } else if (arg1->n == 3) {
        for (i = 0; i < 4; i = (i + 1) & 0xFF) { D_8017DF14[arg0 * 7 + i + 1] = arg1->d[i]; }
    } else if (arg1->n == 4) {
        for (i = 0; i < 5; i = (i + 1) & 0xFF) { D_8017DF14[arg0 * 7 + i + 1] = arg1->d[i]; }
    }
    D_8017DF14[arg0 * 7] = arg1->n + 1;
}
