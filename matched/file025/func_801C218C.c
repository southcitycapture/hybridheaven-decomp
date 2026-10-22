#include "context.h"

extern s32 func_801BF974(s32);
extern s32 func_801C1780(s32, s32);

typedef struct func_801C218C_Struct {
    s32 **lists;
    s32 unk4;
    s32 count;
    u8 pad[12];
    s32 mask;
    s32 unk1C;
} func_801C218C_Struct;

#define ENT(a, b) (((func_801C218C_Struct **)D_801D8DF0[a])[b])

s32 func_801C218C(s32 arg0, s32 arg1) {
    func_801C218C_Struct *base;
    func_801C218C_Struct *e;
    s32 *list;
    s32 mask;
    s32 count;
    s32 success;
    s32 group;
    s32 i;

    base = ENT(arg0, arg1);
    count = 0;
    success = 1;
    if (base == NULL) {
        return 0;
    }
    if (base[D_801DEF70].lists == NULL) {
        return 0;
    }
    for (group = 0; group != 9; group++) {
        e = &ENT(arg0, arg1)[D_801DEF70];
        mask = e->mask;
        list = e->lists[group];
        if (list != NULL && ((func_801BF974(group) & mask) ? 1 : 0)) {
            i = 0;
            while (list[i] != -1) {
                success &= func_801C1780(group, i);
                count++;
                if (success) {
                } else {
                    return 0;
                }
                i++;
            }
        }
    }
    if (success && count == ENT(arg0, arg1)[D_801DEF70].count) {
        return 1;
    }
    return 0;
}
