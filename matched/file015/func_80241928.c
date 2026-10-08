#include "common.h"

typedef struct func_80241928_StructInner {
    u8 pad0[0x40];
    f32 unk40;
    u8 pad1[4];
    f32 unk48;
} func_80241928_StructInner;

typedef struct func_80241928_StructOuter {
    u8 pad0[0xDC];
    func_80241928_StructInner *unkDC;
} func_80241928_StructOuter;

typedef struct func_80241928_StructArg {
    u8 pad0[0x3C];
    s16 unk3C;
} func_80241928_StructArg;

extern void func_800058DC(void *, void *);
extern void func_80133980(s32);
extern void func_801C3B10(s32);
extern void func_801C3B2C(s32);
extern void func_801C3B5C(void);
extern s32 func_801C3D20(f32, f32, s32);
extern void func_801FBB30(void);
extern func_80241928_StructOuter D_801BBBF0;
extern f32 D_80258550;
extern void func_802419BC(void);

void func_80241928(func_80241928_StructArg *arg0, void *arg1) {
    if (func_801C3D20(-65.0f, D_80258550, 0x420C0000) != 0) {
        func_80133980(0x78);
        func_801C3B2C(2);
        func_801C3B10(1);
        D_801BBBF0.unkDC->unk40 = 0.0f;
        D_801BBBF0.unkDC->unk48 = 0.0f;
        func_801FBB30();
        arg0->unk3C = 0;
        func_801C3B5C();
        func_800058DC(arg0, func_802419BC);
    }
}
