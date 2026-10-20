#include "context.h"
s32 func_801F46DC(s32 a0, s16 *a1, s16 *a2, s32 a3, f32 a4);

struct func_801F48C8_Struct {
    u8 pad0[4];
    s32 unk4;
    f32 unk8;
    f32 unkC;
};

#define S13(x) (((x) & 0x1000) ? ((x) & 0x1FFF) - 0x2000 : ((x) & 0x1FFF))
#define ABSV(x) (((x) < 0) ? -(x) : (x))

s32 func_801F48C8(arg0, arg1)
    struct func_801F3FFC_Arg *arg0;
    u8 arg1;
{
    s16 sp46;
    s16 sp44;
    struct func_801F48C8_Struct *p;

    p = (struct func_801F48C8_Struct *)D_801BBCD0->unk2C;
    func_801F46DC((s32)arg0, &sp46, &sp44, p->unk4, p->unkC);
    if (ABSV(S13(sp44)) < 0x9C7) {
        if (((D_801BBCD0->unk2C->unk8 < arg0->unk24->unk2C->unk8) ? -(D_801BBCD0->unk2C->unk8 - arg0->unk24->unk2C->unk8) : (D_801BBCD0->unk2C->unk8 - arg0->unk24->unk2C->unk8)) < (f32)arg1) {
            return 1;
        }
    }
    return 0;
}
