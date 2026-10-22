#include "common.h"

typedef struct func_801C7364_Struct {
    u8 pad[0x90];
    f32 unk90, unk94, unk98, unk9C, unkA0, unkA4;
    s16 unkA8, unkAA;
    f32 unkAC;
    s16 unkB0, unkB2;
} func_801C7364_Struct;

extern void *func_80005670(void *, void *);
extern void *D_8038D8CC;
extern f32 func_801C78F8(void);
extern u8 D_801DA5C4[];
extern f32 D_801DD23C;
extern f32 D_801DD240;

s32 func_801C7364(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, s32 arg6, s32 arg7) {
    func_801C7364_Struct *p;

    p = func_80005670(D_8038D8CC, D_801DA5C4);
    if (p == NULL) {
        return 0;
    }
    p->unk90 = arg0;
    p->unk94 = arg1;
    p->unk98 = arg2;
    p->unk9C = arg3;
    p->unkA0 = arg4;
    p->unkA4 = arg5;
    p->unkA8 = 0;
    p->unkAA = arg6;
    p->unkAC = func_801C78F8() * D_801DD23C + D_801DD240;
    p->unkB0 = 0;
    p->unkB2 = arg7;
    return 1;
}
