#define func_801D4B68 D_801D4B68
#include "context.h"
#undef func_801D4B68

extern void D_801CD5E0(void *, void *, f32);
extern void D_801CD728(void *, void *, f32);

typedef struct func_801D4B68_StructE {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[0x3B - 0x10];
    u8 unk3B;
    u8 unk3C;
} func_801D4B68_StructE;
typedef struct func_801D4B68_StructD {
    u8 pad0[0x30];
    func_801D4B68_StructE *unk30;
} func_801D4B68_StructD;
typedef struct func_801D4B68_StructI {
    u8 pad0[0x4C];
    u16 unk4C;
} func_801D4B68_StructI;
typedef struct func_801D4B68_StructA {
    u8 pad0[0xC];
    func_801D4B68_StructI *unkC;
    u8 pad10[0x6C - 0x10];
    f32 unk6C;
    f32 unk70;
    f32 unk74;
    u8 pad78[0x90 - 0x78];
    u16 unk90;
    u16 unk92;
    u8 unk94;
} func_801D4B68_StructA;

void func_801D4B68(func_801D4B68_StructA *arg0, func_801D4B68_StructD **arg1) {
    f32 f;
    s32 i;
    u16 a;
    u16 t;
    s32 c;
    func_801D4B68_StructE *s;

    func_8012D7A8();
    i = 0;
    if (arg0->unk94 > 0) {
        do {
            s = arg1[i]->unk30;
            if (s->unk3B == 0 && s->unk3C != 0) {
                a = func_8012C6B4(0x2000);
                s->unk4 = func_8001EAD0(a) * 5.0 + arg0->unk6C;
                s->unkC = func_8001EB64(a) * 5.0 + arg0->unk74;
                s->unk8 = func_8012C6B4(0xC8) / 10.0 + arg0->unk70;
                s->unk3B = func_8012C6B4(3);
            }
            f = (u32)s->unk3B * 0.125;
            D_801CD5E0(arg0, s, f);
            D_801CD728(arg0, s, f);
            i = (i + 1) & 0xFF;
        } while (i < arg0->unk94);
    }
    c = arg0->unk90 < arg0->unk92++;
    if (c || (arg0->unkC->unk4C & 0x8000)) {
        func_801CE5B0((void *)arg0, (void *)arg1);
        func_800058DC(arg0, (s32)func_801CE898);
    }
}
