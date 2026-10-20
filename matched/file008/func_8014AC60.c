#include "context.h"

struct func_8014AC60_Struct {
    u8 unk0;
    u8 unk1;
    s16 unk2;
    s16 unk4;
    s16 unk6;
    s16 unk8;
    u16 unkA;
    u8 unkC;
    u8 unkD;
    u16 unkE;
};

void func_8014AC60(void) {
    struct func_8014AC60_Struct *p;
    struct func_8014AC60_Struct *q;
    u32 i;

    p = (struct func_8014AC60_Struct *)&D_801BED38;
    for (i = 0; i < 32; i++) {
        q = &p[i];
        q->unk0 = 0;
        q->unk1 = 0;
        q->unk2 = 0;
        q->unk4 = 0;
        q->unk6 = 0;
        q->unk8 = 0;
        q->unkA = 0;
        q->unkE = 0;
        q->unkC = 0;
        q->unkD = 0;
    }
}
