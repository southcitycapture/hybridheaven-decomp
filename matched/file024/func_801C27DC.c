#include "common.h"
extern void func_800058DC(s32, void *);
extern void func_801C28E4();


typedef struct func_801C27DC_StructInner {
    u8 pad[2];
    s16 unk2;
} func_801C27DC_StructInner;
typedef struct func_801C27DC_StructOuter {
    u8 pad[0x30];
    func_801C27DC_StructInner *unk30;
} func_801C27DC_StructOuter;
typedef struct func_801C27DC_StructCounters {
    s32 i;
    s32 j;
    s32 n;
} func_801C27DC_StructCounters;

void func_801C27DC(s32 arg0, func_801C27DC_StructOuter **arg1) {
    s64 step;
    s32 band_offset;
    s16 value;
    func_801C27DC_StructCounters counters;

    value = arg1[0]->unk30->unk2;
    step = 4;
    band_offset = 0x10;
    if (value >= 0x15) {
        value -= (s32)step;
    } else {
        value = 0x14;
        func_800058DC(arg0, func_801C28E4);
    }
    counters.n = 0;
    for (counters.i = 0; counters.i < 3; counters.i++) {
        for (counters.j = 0; counters.j < 4; counters.j++) {
            arg1[counters.n++]->unk30->unk2 = value + counters.i * 0x20;
        }
    }
    for (counters.i = 0; counters.i < 9; counters.i++) {
        arg1[counters.n++]->unk30->unk2 = value + band_offset;
    }
}
