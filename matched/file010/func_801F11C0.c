#include "common.h"
extern u8 D_801BBBF0[];
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);


typedef struct func_801F11C0_Inner {
    u8 pad0[4];
    f32 unk4;
    u8 pad8[4];
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
} func_801F11C0_Inner;
typedef struct func_801F11C0_Mid {
    u8 pad[0x2C];
    func_801F11C0_Inner *unk2C;
} func_801F11C0_Mid;
typedef struct func_801F11C0_Struct {
    u8 pad[0xE0];
    func_801F11C0_Mid *unkE0;
} func_801F11C0_Struct;

#define PP (((func_801F11C0_Struct *)&D_801BBBF0)->unkE0->unk2C)
extern f32 func_8002FC20(f32);
extern f64 D_802187A8;

s32 func_801F11C0(f32 arg0, f32 arg1, f32 arg2, f32 arg3, s16 arg4) {
    f32 sp34;
    func_801F11C0_Inner *p;
    f32 fv1;
    s32 d;
    s16 v;
    s16 e;

    sp34 = arg0 - func_8001EAD0(arg4) * arg3;
    fv1 = arg2 - func_8001EB64(arg4) * arg3;
    p = PP;
    p->unk4 = p->unk4 + (sp34 - p->unk4) * 0.25;
    p = PP;
    p->unkC = p->unkC + (fv1 - p->unkC) * 0.25;
    p = PP;
    sp34 = func_8002FC20((sp34 - p->unk4) * (sp34 - p->unk4) + (fv1 - p->unkC) * (fv1 - p->unkC));
    p = PP;
    v = arg4 - p->unk12;
    if (v & 0x1000) {
        d = ((v & 0x1FFF) - 0x2000);
    } else {
        d = v & 0x1FFF;
    }
    p->unk12 = p->unk12 + d * 0.25;
    p = PP;
    v = arg4 - p->unk12;
    if (v & 0x1000) {
        e = ((v & 0x1FFF) - 0x2000);
    } else {
        e = v & 0x1FFF;
    }
    if (e < 0) {
        d = -e;
    } else {
        d = e;
    }
    if (d < 0x51 && sp34 <= D_802187A8) {
        p->unk12 = arg4;
        return 1;
    }
    return 0;
}
