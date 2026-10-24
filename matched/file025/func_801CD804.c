#define func_801CD8D0 func_801CD8D0_ren
#define func_801CD804 func_801CD804_ctx
#include "context.h"
#undef func_801CD804

typedef struct func_801CD804_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s8 unkC;
    u8 padD[6];
    s8 unk13;
    s8 unk14;
    u8 pad15[6];
    s8 unk1B;
    s8 unk1C;
    u8 pad1D[6];
    s8 unk23;
} func_801CD804_Struct;

s32 func_801CD804(void) {
    func_801CD804_Struct *p;
    s32 i;
    s32 changed;

    p = (func_801CD804_Struct *)D_801E0C40;
    i = 0;
    do {
        changed = 0;
        if (p->unk0 != 0) {
            changed = 1;
            p->unkC = (s8)(p->unkC + p->unk13);
        }
        if (p->unk4 != 0) {
            changed = 1;
            p->unk14 = (s8)(p->unk14 + p->unk1B);
        }
        if (p->unk8 != 0) {
            changed = 1;
            p->unk1C = (s8)(p->unk1C + p->unk23);
        }
        if (changed != 0) {
            func_801CCEC8(i, p->unkC, p->unk14, p->unk1C);
        }
        i++;
        p++;
    } while (i != 5);
    return 1;
}
