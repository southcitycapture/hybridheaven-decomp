#include "context.h"

typedef struct func_801D1A88_StructA {
    u8 pad0[0x30];
    struct func_801D1A88_StructB *unk30;
} func_801D1A88_StructA;
typedef struct func_801D1A88_StructB {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
} func_801D1A88_StructB;
typedef struct func_801D1A88_Struct {
    u8 pad0[0x88];
    f32 unk88;
    u8 pad8C[8];
    u8 unk94;
    u8 pad95[3];
    s16 unk98;
} func_801D1A88_Struct;
extern f32 func_8001EB64(s16);
extern f32 func_8001EAD0(s16);

void func_801D1A88(func_801D1A88_Struct *arg0, func_801D1A88_StructA **arg1) {
    f32 fs0;
    f32 fs1;
    s16 s4;
    u8 i;
    s32 s2;
    func_801D1A88_StructB *s0;
    s8 sp53;
    f32 v;

    fs0 = func_8001EB64(arg0->unk98);
    fs1 = func_8001EAD0(arg0->unk98);
    sp53 = 0;
    if (func_801CE0E8(arg0, &sp53) == 0) {
        s4 = func_8012C6B4(0x2000);
        for (i = 0; i < arg0->unk94; i++) {
            s2 = i << 13;
            s0 = arg1[i]->unk30;
            v = func_8001EB64((s16)(s2 / arg0->unk94 + s4));
            s0->unk4 = s0->unk4 + arg0->unk88 * v * fs0;
            s0->unkC = s0->unkC + arg0->unk88 * v * fs1;
            v = func_8001EAD0((s16)(s2 / arg0->unk94 + s4));
            s0->unk8 = s0->unk8 + arg0->unk88 * v;
        }
        func_800058DC(arg0, (s32)func_801CE7A8);
    }
}
