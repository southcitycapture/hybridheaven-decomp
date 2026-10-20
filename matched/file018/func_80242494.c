#include "context.h"

typedef struct func_80242494_S2 {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
} func_80242494_S2;
typedef struct func_80242494_S1 {
    u8 pad0[0x2C];
    func_80242494_S2 *unk2C;
} func_80242494_S1;
extern func_80242494_S1 *D_801BBCD0;
extern f32 D_8025BE6C;
extern u8 func_80242364[];

void func_80242494(s32 arg0, s32 arg1) {
    func_80242494_S2 *p;
    f32 a;
    f32 b;
    f32 c;

    p = D_801BBCD0->unk2C;
    a = D_8025BE6C - p->unk4;
    b = 300.0f - p->unk8;
    c = 276.0f - p->unkC;
    if (!(a * a + b * b + c * c < 1600.0f)) {
        func_800058DC(arg0, func_80242364);
    }
}
