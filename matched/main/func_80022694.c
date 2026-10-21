#include "context.h"
void func_80022874(s32 arg0);
extern s8 D_800CBAB6;
extern u8 D_800CBAB7;
extern u16 D_800CBACA;
extern s8 D_800CBACC;
extern s8 D_800CBACD;
extern u8 D_800CBACE;

extern u8 D_800CBDB0[];

void func_80022694(void) {
    s32 j;
    u32 *entry;
    s32 i;
    u32 flags;

    j = 0;
    do {
        D_800CBDB0[j] = 0;
        j++;
    } while (&D_800CBDB0[j] < &D_800CBDB3);
    D_800CBB4C = 0;
    D_800CBB4E = 0;
    D_800CBABE = 0;
    D_800CBACC = D_800CBACA = 0;
    D_800CBACD = D_800CBACE = 0;
    D_800CBAB7 = D_800CBAB6 = 0;
    entry = &D_801B5520;
    i = 0;
    do {
        flags = *entry & 0x7FFF;
        if (flags >= 0x10U && flags < 0x100U) {
            func_80022874(i);
        }
        i++;
        entry = (u32 *)((u8 *)entry + 0xD8);
    } while (i != 0x14);
}
