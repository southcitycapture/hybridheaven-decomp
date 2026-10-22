#include "context.h"

typedef struct {
    s16 x;
    s16 y;
    s16 z;
} func_803789B0_Entry;

typedef struct {
    u8 pad[0xAA];
    func_803789B0_Entry e[77];
} func_803789B0_Struct;

s32 func_803789B0(void *arg0, u8 arg1) {
    func_803789B0_Struct *p = arg0;
    u16 s0, s1, s2;
    u16 i;
    s16 v;

    s0 = 0; s1 = 0; s2 = 0;
    for (i = 0; i < 14; i++) {
        s0 += p->e[i].x;
    }
    for (i = 0; i < 20; i++) {
        s1 += p->e[i + 14].x;
    }
    for (i = 0; i < 40; i++) {
        s2 += p->e[i + 37].x;
    }
    if ((arg1 < 0xE && (p->e[arg1].x - (u16)(s0 / 14)) >= 0x15)
        || (arg1 >= 0xE && arg1 < 0x22 && (p->e[arg1].x - (u16)(s1 / 20)) >= 0x15)
        || (arg1 >= 0x25 && (p->e[arg1].x - (u16)(s2 / 40)) >= 0x15)) {
        return 0;
    }
    if ((p->e[arg1].x -(u16)((u16)(s0 + s1 + s2) / 74)) >= 0x33) {
        return 0;
    }
    return 1;
}
