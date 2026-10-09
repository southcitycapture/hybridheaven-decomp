#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/main/80028EE0/func_80028EE0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/80028EE0/func_80028F20.s")


struct func_80028F60_StructAlloc {
    s32 unk0;
    s32 unk4;
    s16 unk8;
    s16 unkA;
    s32 unkC;
};

struct func_80028F60_StructVtbl {
    u8 pad[0x8];
    void (*unk8)(void *, s32, void *, void *);
};

struct func_80028F60_StructInner {
    u8 pad[0xC];
    struct func_80028F60_StructVtbl *unkC;
    u8 pad2[0xD8 - 0x10];
    s32 unkD8;
};

struct func_80028F60_StructOuter {
    u8 pad[0x8];
    struct func_80028F60_StructInner *unk8;
    u8 pad2[0x1A - 0xC];
    s16 unk1A;
};

struct func_80028F60_StructArg0 {
    u8 pad[0x1C];
    s32 unk1C;
};

void *func_8002C6A0();                              /* extern */

void func_80028F60(struct func_80028F60_StructArg0 *arg0, struct func_80028F60_StructOuter *arg1, s32 arg2) {
    struct func_80028F60_StructAlloc *temp_v0;
    struct func_80028F60_StructVtbl *temp_a0;

    if (arg1->unk8 != NULL) {
        temp_v0 = func_8002C6A0();
        if (temp_v0 != NULL) {
            temp_v0->unk4 = arg0->unk1C + arg1->unk8->unkD8;
            temp_v0->unk8 = 0xE;
            temp_v0->unkC = arg2;
            temp_v0->unk0 = 0;
            temp_v0->unkA = arg1->unk1A;
            temp_a0 = arg1->unk8->unkC;
            temp_a0->unk8(temp_a0, 3, temp_v0, arg1);
        }
    }
}

