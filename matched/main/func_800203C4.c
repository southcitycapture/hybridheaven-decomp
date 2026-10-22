#include "context.h"
extern u8 D_800CBAB0;
extern u8 D_800CBB22;
extern void func_80020460(void);
extern void func_80032A60(s32, void *, u8 *, u8 *);
typedef struct func_800203C4_Struct { s32 unk0; void *unk4; void *unk8; } func_800203C4_Struct;

void func_800203C4(func_800203C4_Struct *arg0) {
    D_800CBAB0 = 8;
    D_800CBAB2 = D_800CBB22 = D_800CBAB5 = D_800CBAB8 = *(u8 *)&D_800CBB21 = 0;
    D_800CBAB7 = D_800CBAB6 = 0;
    arg0->unk0 = 0;
    arg0->unk8 = (void *)func_80020460;
    arg0->unk4 = arg0;
    func_80032A60(D_800498F0, arg0, &D_800CBAB5, &D_800CBB22);
}
