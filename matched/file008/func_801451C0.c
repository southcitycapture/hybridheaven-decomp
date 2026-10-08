#include "common.h"

extern u8 D_801819E8[];

typedef struct func_801451C0_StructA {
    u8 pad0[0x2A];
    u16 unk2A;
    u8 pad1[4];
    void *unk30;
} func_801451C0_StructA;

typedef struct func_801451C0_StructB {
    u8 pad0[0x48];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
} func_801451C0_StructB;

typedef struct func_801451C0_StructC {
    u8 pad0[8];
    u8 unk8;
    u8 unk9;
    u8 unkA;
    u8 unkB;
} func_801451C0_StructC;

void func_801451C0(func_801451C0_StructA *arg0, u8 arg1) {
    s32 idx;
    u8 *entry;

    idx = arg1;
    if (arg0->unk2A == 0xC) {
        entry = &D_801819E8[idx * 4];
        ((func_801451C0_StructB *) arg0->unk30)->unk48 = entry[0];
        ((func_801451C0_StructB *) arg0->unk30)->unk49 = entry[1];
        ((func_801451C0_StructB *) arg0->unk30)->unk4A = entry[2];
        ((func_801451C0_StructB *) arg0->unk30)->unk4B = entry[3];
        return;
    }
    if (arg0->unk2A == 0xD) {
        entry = &D_801819E8[idx * 4];
        ((func_801451C0_StructC *) arg0->unk30)->unk8 = entry[0];
        ((func_801451C0_StructC *) arg0->unk30)->unk9 = entry[1];
        ((func_801451C0_StructC *) arg0->unk30)->unkA = entry[2];
        ((func_801451C0_StructC *) arg0->unk30)->unkB = entry[3];
    }
}
