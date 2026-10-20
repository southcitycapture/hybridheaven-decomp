#include "context.h"

extern s16 D_801BED30;
extern s16 D_801BED32;
extern u8 D_801BF178;

typedef struct func_8014AD20_Struct {
    u8 a;
    u8 b;
    s16 c;
    s32 d;
    u8 e;
    u8 f;
    u8 pad[2];
} func_8014AD20_Struct;

void func_8014AD20(void) {
    func_8014AD20_Struct *p;
    s32 i;

    D_801BED30 = 1;
    D_801BED32 = 0;
    for (i = 0; i < 48; i++) {
        p = (func_8014AD20_Struct *)&D_801BEF38 + i;
        p->a = 0;
        p->b = 0;
        p->c = 0;
        p->d = 0;
        p->e = 0;
        p->f = 0;
    }
}
