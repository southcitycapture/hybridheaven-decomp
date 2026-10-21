#include "context.h"

typedef struct func_801D080C_Data {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
} func_801D080C_Data;
typedef struct func_801D080C_Obj {
    u8 pad0[0x30];
    func_801D080C_Data *unk30;
} func_801D080C_Obj;
typedef struct func_801D080C_Arg {
    u8 pad0[0x88];
    f32 unk88;
    u8 pad8C[8];
    u8 unk94;
} func_801D080C_Arg;

extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern s16 D_801BBE22;

void func_801D080C(func_801D080C_Arg *arg0, func_801D080C_Obj **arg1) {
    f32 fs0;
    f32 fs1;
    f32 fv;
    s16 s0;
    s16 s2;
    s32 j;
    s8 sp53;
    u8 i;
    func_801D080C_Data *d;

    s0 = (s16)(D_801BBE22 - 0x800) & 0x1FFF;
    fs0 = func_8001EB64(s0);
    fs1 = func_8001EAD0(s0);
    sp53 = 0;
    if (func_801CE0E8(arg0, &sp53) == 0) {
        i = 0;
        if (arg0->unk94 > 0) {
            do {
                d = arg1[i]->unk30;
                s2 = func_8012C6B4((0x2000 / arg0->unk94) / 2) + ((i << 13) / arg0->unk94);
                fv = func_8001EB64(s2);
                d->unk4 = d->unk4 + arg0->unk88 * fv * fs0;
                d->unkC = d->unkC + arg0->unk88 * fv * fs1;
                fv = func_8001EAD0(s2);
                d->unk8 = d->unk8 + arg0->unk88 * fv;
                i++;
            } while (i < arg0->unk94);
        }
        func_800058DC(arg0, (s32)func_801CE7A8);
    }
}
