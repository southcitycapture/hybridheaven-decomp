#include "context.h"

typedef struct func_801C27DC_StructInner {
    u8 pad[2];
    s16 unk2;
} func_801C27DC_StructInner;
typedef struct func_801C27DC_StructOuter {
    u8 pad[0x30];
    func_801C27DC_StructInner *unk30;
} func_801C27DC_StructOuter;

void func_801C27DC(s32 arg0, func_801C27DC_StructOuter **arg1) {
    s16 unused[6];
    s16 value;
    s32 i;
    s32 j;
    s32 n;

    value = arg1[0]->unk30->unk2;
    if (value >= 0x15) {
        value -= 4;
    } else {
        value = 0x14;
        func_800058DC(arg0, func_801C28E4);
    }
    n = 0;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            arg1[n++]->unk30->unk2 = value + i * 0x20;
        }
    }
    for (i = 0; i < 9; i++) {
        arg1[n++]->unk30->unk2 = value + 0x10;
    }
}
