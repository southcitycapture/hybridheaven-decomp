#include "common.h"
typedef struct func_8037ED08_StructEnt {
    u8 unk0;
    u8 pad[5];
} func_8037ED08_StructEnt;
extern func_8037ED08_StructEnt D_80183CE0[];
void func_8037D418(u8 *arg0, u8 *arg1, s32 arg2);


typedef struct func_8037EBB0_StructEntry {
    u8 pad0[3];
    u8 unk3;
    u8 pad4[2];
} func_8037EBB0_StructEntry;

extern u8 *D_80184140[];
extern u8 D_803899FC[];
extern u8 D_80389A08[];
extern u8 D_8038A960[];
extern void B_8001B204(u8, ...);

typedef struct func_8037EBB0_Struct {
    u8 pad0[0x96];
    u8 unk96;
} func_8037EBB0_Struct;

void func_8037EBB0(void *arg0) {
    u32 v;
    s32 s1;
    u8 j;
    u8 sp60[0x1C];
    u8 pad[8];
    s16 y;
    u8 i;
    u8 done;
    u8 idx;

    done = 0;
    y = 0x46;
    j = 2;
    for (i = 0, idx = ((func_8037EBB0_Struct *)arg0)->unk96; i < 10; idx++, i++) {
        v = D_8038A960[idx];
        if ((s32)v < 0xFF && done == 0) {
            func_8037D418(sp60, D_80184140[v], (u8)(s1 = ((func_8037EBB0_StructEntry *)D_80183CE0)[v].unk3));
            B_8001B204(j++, 0x37, (y << 16) >> 16, D_803899FC, 0xFF, 0, sp60, s1);
        } else {
            done = 1;
            B_8001B204(j++, 0, 0, D_80389A08);
        }
        y += 0xD;
        if (j >= 0x1C) break;
    }
}
