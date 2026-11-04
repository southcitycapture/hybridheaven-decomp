#include "common.h"
extern u8 D_802407DC[];
extern void func_801451C0(void *, s32);
extern s32 func_801453CC();


struct func_80227A80_Inner { s16 unk0; s16 unk2; s16 unk4; };
struct func_80227A80_Outer { u8 pad[0x30]; struct func_80227A80_Inner *unk30; };
#define MAXV (*(s16 *)(arg0 + 0x4C))
#define CURV (*(s16 *)(arg0 + 6))

void func_80227A80(u8 *arg0, struct func_80227A80_Outer *arg1, struct func_80227A80_Outer *arg2, u8 arg3) {
    s16 a0;
    s16 v1;
    s16 d;
    s32 lo;
    struct func_80227A80_Inner *i1;
    struct func_80227A80_Inner *i2;

    i1 = arg1->unk30;
    i2 = arg2->unk30;
    if (MAXV == 0) {
        a0 = 0;
    } else {
        a0 = (MAXV - 1) / 100;
    }
    lo = a0 * 100;
    d = MAXV - lo;
    v1 = CURV - lo;
    if (v1 < 0) {
        v1 = 0;
    }
    i1->unk4 = (u32)(((f32)v1 / 100.0f) * 119.0f);
    i2->unk4 = (u32)(((f32)d / 100.0f) * 119.0f);
    i2->unk0 = i1->unk0 + i1->unk4;
    i2->unk4 = i2->unk4 - i1->unk4;
    if (CURV < 100 && (f64)v1 < 30.0) {
        func_801451C0(arg1, 3);
        D_802407DC[arg3] = 1;
        return;
    }
    if (v1 == 100) {
        func_801453CC(arg1, 0x200, arg3, 0x17, 0x18, 0x22, 0x22);
        return;
    }
    func_801451C0(arg1, 0x18);
    D_802407DC[arg3] = 0;
}
