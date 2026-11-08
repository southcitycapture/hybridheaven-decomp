#include "common.h"

extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern s16 func_8001EF38(f32, f32, s16);
extern u8 D_800692B0[];
extern s16 D_801BBE22;

typedef struct func_8013A5E8_Struct {
    u8 pad0[4];
    f32 unk4;
    u8 pad8[4];
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
} func_8013A5E8_Struct;

typedef struct func_8013A5E8_Struct2 {
    u8 pad0[0x1CA];
    s16 unk1CA;
    s16 unk1CC;
} func_8013A5E8_Struct2;

void func_8013A5E8(s32 arg0, u16 arg1) {
    func_8013A5E8_Struct *v1;
    f32 fa0;
    f32 fa1;
    f32 s;
    f32 fv0;
    s32 pad;
    s16 a2;
    func_8013A5E8_Struct2 *p;

    v1 = *(func_8013A5E8_Struct **)((u8 *)*(void **)arg0 + 0x2C);
    a2 = (s16)(0x2800 - D_801BBE22) & 0x1FFF;
    p = (func_8013A5E8_Struct2 *)((arg1 << 5) + 0x20000 + D_800692B0);
    fa0 = -p->unk1CA / 20;
    fa1 = p->unk1CC / 20;
    if (((fa0 < 0.0f) ? -fa0 : fa0) >= 1.0 || ((fa1 < 0.0f) ? -fa1 : fa1) >= 1.0) {
    v1->unk12 = func_8001EF38(fa0, fa1, a2);
    v1->unk12 = v1->unk12 + a2;
    s = func_8001EAD0(a2);
    fv0 = func_8001EB64(a2);
    v1->unk4 = v1->unk4 + (fa1 * s + fa0 * fv0) / 1.0f;
    v1->unkC = v1->unkC + (fa1 * fv0 - fa0 * s) / 1.0f;
    }
}
