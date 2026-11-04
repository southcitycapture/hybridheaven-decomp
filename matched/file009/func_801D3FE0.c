#include "common.h"
extern void func_800058DC(void *arg0, s32 arg1);
s32 func_801CE0E8(void *arg0, s8 *a1);


typedef struct func_801D3FE0_StructB {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
    u8 pad14[4];
    f32 unk18;
    u8 pad1C[4];
    f32 unk20;
    u8 pad24[0x27];
    u8 unk4B;
} func_801D3FE0_StructB;
typedef struct func_801D3FE0_StructC {
    u8 pad0[0x30];
    func_801D3FE0_StructB *unk30;
} func_801D3FE0_StructC;
typedef struct func_801D3FE0_StructA {
    u8 pad0[0x60];
    f32 unk60;
    u8 pad64[0x30];
    u8 unk94;
} func_801D3FE0_StructA;
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
#define D_801E3678 0.2
#define D_801E3680 0.6
#define D_801E3688 255.0
extern u8 func_801D42BC[];

void func_801D3FE0(func_801D3FE0_StructA *arg0, func_801D3FE0_StructC **arg1) {
    f64 e;
    f32 t;
    s32 i;
    f32 sc;
    f32 t2;
    s16 ang;
    s8 sp8D;
    s32 j;
    func_801D3FE0_StructB *o;

    sp8D = 0;
    if (func_801CE0E8(arg0, &sp8D) == 0) {
        i = 0;
        if (arg0->unk94 > 0) {
            j = 0;
            do {
                t = (f32)(((f64)(f32)((f64)(u32)i + 1.0)) / ((f64)(u32)arg0->unk94 + 1.0));
                o = arg1[i]->unk30;
                o->unk8 += 18.0 * t;
                e = t * 5.0;
                ang = (s32)(4096.0f * t);
                if (e < 2.0) {
                    e = -(e - 2.0);
                } else {
                    e = e - 2.0;
                }
                sc = (f32)(e * D_801E3678 + 1.0);
                o->unk4 += sc * func_8001EAD0(ang);
                o->unkC += sc * func_8001EB64(ang);
                t2 = (f32)((f64)(arg0->unk60 * sc) * D_801E3680);
                o->unk12 = j << 8;
                o->unk12 = o->unk12 & 0x1FFF;
                o->unk20 = t2;
                o->unk18 = t2;
                o->unk4B = (u32)((1.0 - t) * D_801E3688);
                i = (i + 1) & 0xFF;
                j = i;
            } while (i < arg0->unk94);
        }
        func_800058DC(arg0, (s32)func_801D42BC);
    }
}
