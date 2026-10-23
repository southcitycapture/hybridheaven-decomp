#include "context.h"

struct func_8014BB50_StructQ {
    u8 f0;
    u8 p1;
    u16 f2;
    u8 pad[8];
};

void func_8014BB50(void) {
    s32 i;

    for (i = 0; i < 48; i++) {
        if (((struct func_8014BB50_StructQ *)&D_801BEF38)[i].f0 & 1) {
            if (((struct func_8014BB50_StructQ *)&D_801BEF38)[i].f2 != 0 && ((struct func_8014BB50_StructQ *)&D_801BEF38)[i].f2 < 0x8000) {
                ((struct func_8014BB50_StructQ *)&D_801BEF38)[i].f0 = 0;
            }
        }
    }
}
