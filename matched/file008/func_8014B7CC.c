#define func_8014B7CC func_8014B7CC_ctx
#include "context.h"
#undef func_8014B7CC

struct func_8014B7CC_StructInner {
    u8 pad[0xA8];
    u16 flags;
};

struct func_8014B7CC_Struct {
    u8 flags;
    u8 pad1;
    u16 id;
    struct func_8014B7CC_StructInner *ptr;
    u8 pad8[4];
};

void *func_8014B7CC(u16 arg0) {
    struct func_8014B7CC_Struct *p;
    s32 i;

    for (i = 0; i < 48; i += 4) {
        p = &((struct func_8014B7CC_Struct *)&D_801BEF38)[i];
        if ((p[0].flags & 1) && !(p[0].ptr->flags & 4) && arg0 == p[0].id) {
            return &p[0];
        }
        if ((p[1].flags & 1) && !(p[1].ptr->flags & 4) && arg0 == p[1].id) {
            return &p[1];
        }
        if ((p[2].flags & 1) && !(p[2].ptr->flags & 4) && arg0 == p[2].id) {
            return &p[2];
        }
        if ((p[3].flags & 1) && !(p[3].ptr->flags & 4) && arg0 == p[3].id) {
            return &p[3];
        }
    }
    return NULL;
}
