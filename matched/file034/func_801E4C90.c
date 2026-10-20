#include "context.h"

struct func_801E4C90_C { u8 pad0[4]; f32 unk4; f32 unk8; f32 unkC; };
struct func_801E4C90_B { u8 pad0[0x2C]; struct func_801E4C90_C *unk2C; };
struct func_801E4C90_A {
    u8 pad0[8];
    struct func_801E4C90_A *unk8;
    u8 pad1[0x18];
    struct func_801E4C90_B *unk24;
};
struct func_801E4C90_R { u8 pad0[8]; struct func_801E4C90_A *unk8; };

extern s32 func_801C1088(s32, s32, s32);
extern void func_801C10D8(s32, s32);
extern u32 func_801C1134(s32, s32);
extern void func_8038D33C(f32 arg0, f32 arg1, s32 arg2, s32 arg3, f32 arg4, f32 arg5);
extern f32 D_801E962C;
extern f32 D_801E9630;
extern f32 D_801E9634;
extern f32 D_801E9638;

#define ROOT ((struct func_801E4C90_R *)D_801DAB14)

s32 func_801E4C90(s32 arg0, s32 arg1) {
    f32 t;
    struct func_801E4C90_C *c;

    if ((func_801C1088(4, 0, 0x37) != 0) && (func_801CE284() != 0)) {
        func_801C10D8(4, 0);
        return 0x18;
    }
    t = (f32)func_801C1134(4, 0) / 55.0f;
    ROOT->unk8->unk24->unk2C->unk4 = -2.25f * t + D_801E962C;
    ROOT->unk8->unk24->unk2C->unkC = D_801E9630 * t + D_801E9634;
    if ((func_801CE2D0(0x02A80023, 0x1E) != 0) || (func_801CE2D0(0x02A80023, 0x32) != 0)) {
        c = ROOT->unk8->unk24->unk2C;
        func_8038D33C(c->unk4, c->unk8, *(s32 *)&c->unkC, 0x665, D_801E9638, 1.0f);
    }
    return 0x17;
}
