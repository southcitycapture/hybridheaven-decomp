#include "context.h"
extern f32 func_801C87E0(u32);
extern void func_801C80C8(f32, f32, f32, f32, f32, f32, f32, s32);
extern void func_801C815C(f32, f32, f32, f32, f32, f32, f32, s32);
extern f32 D_801EDD58;
struct func_801E71AC_Struct { u8 pad0[4]; f32 unk4; f32 unk8; f32 unkC; };
#define SS ((struct func_801E71AC_Struct *)(*(s32 *)(*(s32 *)(*(s32 *)(*(s32 *)D_801DAB14 + 8) + 0x24) + 0x2C)))

s32 func_801E71AC(s32 arg0, s32 arg1) {
    u32 v;
    f32 r;
    if (func_801C1088(4, 0, D_801ECEE4) != 0) {
        func_801C10D8(4, 0);
        return 0x1C;
    }
    v = func_801C1134(4, 0);
    r = (f32)v / (f32)D_801ECEE4;
    SS->unk4 = 62.5f * r + 48.0f;
    SS->unk8 = func_801C87E0(v);
    SS->unkC = D_801EDD58 * r + -48.0f;
    func_801C80C8(SS->unk4, SS->unk8 + 10.5f, SS->unkC, 1.0f, 1.0f, 1.0f, 1.0f, 0x14);
    func_801C815C(SS->unk4, SS->unk8 + 8.0f, SS->unkC, 1.0f, 1.0f, 1.0f, 1.0f, 0x14);
    return 0x1B;
}
