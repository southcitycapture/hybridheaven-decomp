#include "common.h"

extern s32 D_801DEF70;

void func_801C1FD0(void) {
    D_801DEF70 = 0;
}



s32 func_801C1FDC(void) {
    return D_801DEF70;
}



void func_801C1FE8(void) {
    D_801DEF70 += 1;
}

extern s32 D_801D8DF0[];

s32 func_801C2000(s32 arg0, s32 arg1) {
    return ((s32 *)D_801D8DF0[arg0])[arg1] != 0;
}



s32 func_801C2024(s32 arg0, s32 arg1) {
    return ((s32 *)(((s32 *)D_801D8DF0[arg0])[arg1] + (D_801DEF70 << 5)))[1];
}


long long func_801C2058(s32 arg0, s32 arg1) {
    return *(long long *)(((s32 *)D_801D8DF0[arg0])[arg1] + (D_801DEF70 << 5) + 0x10);
}



s32 func_801C2090(s32 arg0, s32 arg1) {
    return ((s32 *)(((s32 *)D_801D8DF0[arg0])[arg1] + (D_801DEF70 << 5)))[6];
}


typedef struct func_801C20C4_Struct {
    s32 **lists;
    s32 value;
    u8 pad[24];
} func_801C20C4_Struct;

s32 func_801C20C4(s32 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    func_801C20C4_Struct *base;
    func_801C20C4_Struct *entry;
    s32 *values;
    s32 *p;

    base = ((func_801C20C4_Struct **)D_801D8DF0[arg1])[arg2];
    if (base == NULL) {
        return 0;
    }
    entry = (func_801C20C4_Struct *)((s32)base + (D_801DEF70 << 5));
    if (entry->lists == NULL) {
        return 0;
    }
    values = entry->lists[arg3];
    if (values != NULL) {
        p = values;
        arg1 = 0;
        while (*p != -1) {
            p++;
            arg1++;
        }
        if (arg4 < arg1) {
        }
        if (arg5 == values[arg4]) {
            *arg0 = entry->value;
            return 1;
        }
    }
    return 0;
}


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


typedef struct func_801C233C_Struct {
    u8 pad[0xC];
    s32 unkC;
    u8 pad2[0x8];
} func_801C233C_Struct;

void func_801C233C(s32 arg0, s32 arg1, func_801C233C_Struct **arg2) {
    s32 i;
    s32 j;
    s32 *p;

    if (((func_801C20C4_Struct *)((s32 **)D_801D8DF0[arg0])[arg1])[D_801DEF70].value != -1 &&
        ((func_801C20C4_Struct *)((s32 **)D_801D8DF0[arg0])[arg1])[D_801DEF70].lists != NULL) {
        for (i = 0; i < 9; i++) {
            p = ((func_801C20C4_Struct *)((s32 **)D_801D8DF0[arg0])[arg1])[D_801DEF70].lists[i];
            if (p != NULL) {
                for (j = 0; p[j] != -1; j++) {
                    arg2[i][j].unkC = p[j];
                }
            }
        }
    }
}

