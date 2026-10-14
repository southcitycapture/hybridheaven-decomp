#include "context.h"

struct func_801E4AB4_StructE {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
};

extern f32 D_801FBFCC;
extern f32 D_801FBFD0;

#define FUNC_801E4AB4_PTR(p, off) (*(u8 **)((u8 *)(p) + (off)))
#define FUNC_801E4AB4_E ((struct func_801E4AB4_StructE *)FUNC_801E4AB4_PTR(FUNC_801E4AB4_PTR(FUNC_801E4AB4_PTR(*(u8 **)&D_801DAB14, 8), 0x24), 0x2C))

s32 func_801E4AB4(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x02CD29C0) != 0) {
        FUNC_801E4AB4_E->unk4 = -5.0f;
        FUNC_801E4AB4_E->unk8 = -1.0f;
        FUNC_801E4AB4_E->unkC = 0.0f;
        FUNC_801E4AB4_E->unk12 = 0x800;
        func_801CC470(0, 0x01B8000F, 0, 0x100, 2.0f);
        D_801FB1DC = 0;
        return 4;
    }
    FUNC_801E4AB4_E->unk4 = D_801FBFCC;
    FUNC_801E4AB4_E->unk8 = 0.0f;
    FUNC_801E4AB4_E->unkC = D_801FBFD0;
    FUNC_801E4AB4_E->unk12 = 0;
    return 3;
}
