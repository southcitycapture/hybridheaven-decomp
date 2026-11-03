#include "common.h"
extern void func_800058DC(void *arg0, s32 arg1);
s32 func_801CE0E8(void *arg0, s8 *a1);


extern f64 D_801E3590;
extern u8 func_801CF2D4[];

typedef struct func_801CF1D0_Struct2 {
    u8 pad0[8];
    f32 unk8;
    u8 pad1[0xC];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
} func_801CF1D0_Struct2;

typedef struct func_801CF1D0_Struct1 {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad1[0xD];
    func_801CF1D0_Struct2 *unk30;
} func_801CF1D0_Struct1;

typedef struct func_801CF1D0_Struct {
    u8 pad0[0x60];
    f32 unk60;
    u8 pad1[0x30];
    u8 unk94;
} func_801CF1D0_Struct;

void func_801CF1D0(func_801CF1D0_Struct *arg0, func_801CF1D0_Struct1 **arg1) {
    u8 pad[4];
    s8 sp2B;
    s32 i;
    func_801CF1D0_Struct2 *p;
    f32 t;

    sp2B = 0;
    if (func_801CE0E8(arg0, &sp2B) == 0) {
        for (i = 0; i < arg0->unk94; i++) {
            arg1[i]->unk22 = 0;
            p = arg1[i]->unk30;
            p->unk8 = p->unk8 + (1.0 + ((f64)i * 20.0) / (f64)(u32)arg0->unk94);
            t = arg0->unk60 * 0.001;
            p->unk20 = t;
            p->unk1C = t;
            p->unk18 = t;
        }
        func_800058DC(arg0, (s32)func_801CF2D4);
    }
}
