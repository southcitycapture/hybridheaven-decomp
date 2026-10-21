#include "context.h"

struct func_8014B4A0_StructOutput {
    f32 x;
    f32 y;
    f32 z;
    s16 angle;
};

s32 func_8014B4A0(u16 arg0, struct func_8014B4A0_StructOutput *arg1) {
    struct func_8014B420_Struct *entry;

    entry = D_8014B7CC(arg0);
    if ((entry != NULL) && (entry->unk4 != NULL)) {
        arg1->x = entry->unk4->unk90;
        arg1->y = entry->unk4->unk94;
        arg1->z = entry->unk4->unk98;
        arg1->angle = entry->unk4->unk9C;
        return 1;
    }
    return 0;
}
