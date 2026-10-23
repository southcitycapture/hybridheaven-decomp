#include "context.h"

struct func_8014B6F8_Struct {
    u8 flags;
    u8 pad[9];
    u16 id;
    u8 padC[4];
};

s32 func_8014B6F8(u16 arg0) {
    struct func_8014B6F8_Struct *p;
    s32 i;
    s32 id;

    id = arg0;
    if (id < 0x8000) {
        return 0;
    }
    i = 0;
loop:
    p = &((struct func_8014B6F8_Struct *)&D_801BED38)[i];
    if ((p->flags & 1) && (id == p->id)) {
        return (s32)p;
    }
    if ((p[1].flags & 1) && (id == p[1].id)) {
        return (s32)(p + 1);
    }
    if ((p[2].flags & 1) && (id == p[2].id)) {
        return (s32)(p + 2);
    }
    if ((p[3].flags & 1) && (id == p[3].id)) {
        return (s32)(p + 3);
    }
    i += 4;
    if (i != 32) {
        goto loop;
    }
    return 0;
}
