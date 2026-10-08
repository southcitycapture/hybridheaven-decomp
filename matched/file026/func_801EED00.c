#include "common.h"

extern void func_801CC470(s32 a0, s32 a1, s32 a2, s32 a3, f32 a4);
extern f32 D_801FC8FC;
extern f32 D_801FC900;
extern s32 *D_801DAB14;

#define FUNC_801EED00_NODE ((s32 *)(((s32 *)(((s32 *)(((s32 *)(((s32 *)(((s32 *)D_801DAB14)[2]))[2]))[2]))[2]))[9]))[11]

s32 func_801EED00(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x06D97D3A) != 0) {
        ((f32 *)FUNC_801EED00_NODE)[1] = D_801FC8FC;
        ((f32 *)FUNC_801EED00_NODE)[2] = -15.5f;
        ((f32 *)FUNC_801EED00_NODE)[3] = D_801FC900;
        ((s16 *)FUNC_801EED00_NODE)[9] = 0x800;
        func_801CC470(3, 0x02A80020, 0, 0x100, 3.0f);
        return 0x15;
    }
    return 0x14;
}
