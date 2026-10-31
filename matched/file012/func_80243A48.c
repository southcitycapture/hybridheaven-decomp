#include "common.h"


typedef struct {
    u8 unk0;
    u8 pad1[3];
    void *unk4;
} func_80243A48_Entry;

typedef struct {
    u8 unk0;
    u8 pad1[3];
    func_80243A48_Entry e[1];
} func_80243A48_Struct;

extern u8 D_801842A0[];

void func_80243A48(func_80243A48_Struct *arg0, u16 arg1, s8 *arg2, s8 *arg3) {
    u8 i;
    u8 n;
    s32 five;
    void *p;

    p = D_801842A0 + arg1 * 28;
    n = arg0->unk0;
    i = 0;
    while (i < n && arg0->e[i].unk4 != p) i++;
    five = 5;
    if (i >= n) i = 0;
    if (arg0->e[i].unk0 == 0) {
        i = 0;
        while (i < n && arg0->e[0].unk0 == 0) i++;
    }
    *arg2 = i / five + 1;
    *arg3 = i % five;
}
