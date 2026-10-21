#include "context.h"
extern f64 D_801E35C0;
struct func_801D0164_Struct;
void func_801D0164(struct func_801D0164_Struct *arg0, s32 arg1);

void func_801CFFF4(func_801CE1C8_StructB *arg0, s32 **arg1) {
    f32 r;
    u8 i;

    r = ((f64)(f32)(u32)arg0->unk92 + 1.0) / ((f64)(u32)arg0->unk90 + 1.0);
    for (i = 0; i < arg0->unk94; i++) {
        f32 v = arg0->unk60 * r;
        f32 *p = (f32 *)((func_801CE1C8_StructB *)arg1[i])->unk30;
        p[8] = v;
        p[7] = v;
        p[6] = v;
    }
    D_801CD924(arg0->unk78[0], arg0->unk78[1], arg0->unk78[2], (f32)(r * D_801E35C0));
    {
        func_801CE1C8_StructA *q = *(func_801CE1C8_StructA **)((u8 *)arg0 + 0xC);
        s32 c = q->unk4C;
        if (c & 0x8000) {
            q->unk4C = c + 1;
            func_801CBD70();
            func_801CE5B0((void *)arg0, (s32 *)arg1);
            return;
        }
        q = (func_801CE1C8_StructA *)(u32)arg0->unk92;
        c = (s32)arg0->unk90 < (s32)(u32)q;
        arg0->unk92 = (u32)q + 1;
        if (c) {
            q = *(func_801CE1C8_StructA **)((u8 *)arg0 + 0xC);
            arg0->unk92 = 0;
            q->unk4C++;
            func_800058DC(arg0, (s32)&func_801D0164);
        }
    }
}
