#include "context.h"

u16 func_8014B518() {
    s32 i;
    s32 j;
    s32 t;

    if (*(u16 *)&D_801BED32 == 0) {
        t = *(u16 *)&D_801BED30;
        if (t >= 0x80F7) {
            *(u16 *)&D_801BED32 = 1;
            *(u16 *)&D_801BED30 = 1;
        } else {
            *(u16 *)&D_801BED30 = t + 1;
            return t;
        }
    }
    for (i = 0; i != 0x80F6; i++) {
        for (j = 0; j < 48; j++) {
            if (((&D_801BEF38)[j * 12] & 1) &&
                *(u16 *)&D_801BED30 == *(u16 *)(&D_801BEF38 + j * 12 + 2)) {
                break;
            }
            if (j == 47) {
                return (*(u16 *)&D_801BED30)++;
            }
        }
    }
    return 0;
}
