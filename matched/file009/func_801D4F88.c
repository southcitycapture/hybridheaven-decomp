#include "common.h"
extern void D_801CD5E0(void *, void *, f32);
extern void D_801CD728(void *, void *, f32);
extern void func_800058DC(void *arg0, s32 arg1);
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern s32 func_8012C6B4(s32);
extern void func_8012D40C(void *, s32);
typedef struct func_801CE5B0_Struct {
    u8 pad[0x94];
    u8 unk94;
} func_801CE5B0_Struct;
void func_801CE5B0(func_801CE5B0_Struct *arg0, s32 *arg1);
typedef struct func_801CE898_StructInner {
    u8 pad0[0x4C];
    u16 unk4C;
} func_801CE898_StructInner;
typedef struct func_801CE898_StructOuter {
    u8 pad0[0xC];
    func_801CE898_StructInner *unkC;
} func_801CE898_StructOuter;
void func_801CE898(func_801CE898_StructOuter *arg0, s32 arg1);


typedef struct func_801D4F88_StructB {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[0x12];
    u8 unk22;
    u8 pad23[0xD];
    struct func_801D4F88_StructB *unk30;
    u8 pad34[7];
    u8 unk3B;
    u8 unk3C;
} func_801D4F88_StructB;

typedef struct func_801D4F88_StructA {
    u8 pad0[0xC];
    func_801CE898_StructInner *unkC;
    u8 pad10[0x5C];
    f32 unk6C;
    u8 pad70[4];
    f32 unk74;
    u8 pad78[0x18];
    u16 unk90;
    u16 unk92;
    u8 unk94;
} func_801D4F88_StructA;

void func_801D4F88(func_801D4F88_StructA *arg0, func_801D4F88_StructB **arg1) {
    s32 i;
    s32 j;
    u8 n;
    u16 r;
    func_801D4F88_StructB *s;
    f32 k;

    i = 0;
    n = arg0->unk94;
    if (n > 0) {
        j = 0;
        do {
            if (j < arg0->unk92) {
                arg1[i]->unk22 = 1;
                s = arg1[i]->unk30;
                if (s->unk3B == 7 && s->unk3C == 1) {
                    r = func_8012C6B4(0x2000);
                    s->unk4 = func_8001EAD0(r) * 5.0 + arg0->unk6C;
                    s->unkC = func_8001EB64(r) * 5.0 + arg0->unk74;
                    s->unk8 = s->unk8 + (f64)(u32)arg0->unk94;
                }
                k = (f64)(u32)s->unk3B * 0.125;
                D_801CD5E0(arg0, s, k);
                D_801CD728(arg0, s, k);
                func_8012D40C(arg0, (u8)i);
                n = arg0->unk94;
            }
            i = (i + 1) & 0xFF;
            j = i;
        } while (i < n);
    }
    if (arg0->unk90 < arg0->unk92++ || (arg0->unkC->unk4C & 0x8000)) {
        func_801CE5B0((void *)arg0, (s32 *)arg1);
        func_800058DC(arg0, (s32)func_801CE898);
    }
}
