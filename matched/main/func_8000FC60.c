#include "context.h"

struct func_8000FCD0_Struct;

typedef struct func_8000FC60_Struct {
    s32 unk0;
    u16 unk4;
    u16 unk6;
    s32 unk8;
} func_8000FC60_Struct;

#define A ((func_8000FC60_Struct *)arg0)

u16 func_8000FC60(struct func_8000FCD0_Struct *arg0, u16 arg1, void *arg2) {
    func_8000FC60_Struct *b = arg2;
    u16 i;

    for (i = 0; i < arg1; i++) {
        if (b->unk4 == A->unk4 && b->unk0 == A->unk0 && b->unk6 == A->unk6) {
            return i;
        }
        b++;
    }
    return arg1;
}

#undef A
