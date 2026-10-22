#include "context.h"

struct func_8013C244_Pair { u16 a; u16 b; };
struct func_8013C244_Tbl { struct func_8013C244_Pair e[11]; };
struct func_8013C244_In { u8 pad[0xE]; u16 unkE; };
struct func_8013C244_Obj { u8 pad[0x5C]; struct func_8013C244_In *unk5C; };
extern struct func_8013C244_Tbl D_8017DBF4;
extern u16 D_801BBF3E;

s32 func_8013C244(struct func_8013C244_Obj *arg0) {
    struct func_8013C244_In *q;
    s32 g;
    struct func_8013C244_Tbl t;
    u16 v;
    s32 i;

    q = arg0->unk5C;
    v = q->unkE;
    t = D_8017DBF4;
    g = D_801BBF3E;
    if (g == 1) {
        if (v == 0x29 || v == 0x2A || v == 0x2B || v == 0x2C) {
            return 1;
        } else {
            return 0;
        }
    } else if (g == 6) {
        if (v == 0x11B || v == 0x11C) {
            return 1;
        } else {
            return 0;
        }
    } else if (g == 8) {
        if (v == 0x33 || v == 0x34) {
            return 1;
        } else {
            return 0;
        }
    } else if (g == 2) {
        if (v == 0x141 || v == 0x142) {
            return 1;
        } else {
            return 0;
        }
    }
    for (i = 0; t.e[i].a != 0; i++) {
        if (g == t.e[i].a) break;
    }
    if (t.e[i].a == 0) {
        return 0;
    }
    if (v != t.e[i].b) {
        return 0;
    }
    return 1;
}
