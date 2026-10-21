#include "context.h"
void func_801C2FDC(s32 arg0, s32 *arg1);

typedef struct func_801C2DB8_Row { f32 f[5]; } func_801C2DB8_Row;
typedef struct func_801C2DB8_Tab { func_801C2DB8_Row r[7]; } func_801C2DB8_Tab;
typedef struct func_801C2DB8_V { s32 a, b, c, d; } func_801C2DB8_V;
typedef struct func_801C2DB8_P {
    u8 pad0[4]; f32 unk4; f32 unk8; f32 unkC; u8 pad10[2]; s16 unk12; u8 pad14[4];
    f32 unk18; f32 unk1C; f32 unk20; s32 unk24; u8 pad28[8]; s32 unk30;
} func_801C2DB8_P;
typedef struct func_801C2DB8_O { u8 pad[0x30]; func_801C2DB8_P *unk30; } func_801C2DB8_O;

extern func_801C2DB8_V D_80164F40;
extern func_801C2DB8_Tab D_801CCA48;
extern f32 D_801CF290;
extern s32 func_80126A0C(s32, s32, s32);
extern void func_8012C89C(s32, s32, s32, s32);
extern void func_8012D918(s32, s32, s32, u8, s32);
extern s32 func_8000C3B0(void *);
extern void func_801451C0(void *, s32);

void func_801C2DB8(s32 arg0, func_801C2DB8_O **A) {
    func_801C2DB8_V spE8;
    func_801C2DB8_Tab sp5C;
    f32 k;
    u8 i;

    spE8 = D_80164F40;
    sp5C = D_801CCA48;
    if (func_80126A0C(arg0, 0x74, 0) != 0) {
        i = 0;
        k = D_801CF290;
        do {
            func_80005E44((void *)arg0, &spE8);
            func_80006214((void *)arg0);
            func_8012C89C(arg0, i, 3, 4);
            func_8012D918(arg0, 0x228, 0x2F, i, 0);
            A[i]->unk30->unk24 = 0x12;
            A[i]->unk30->unk30 = func_8000C3B0(A[i]);
            A[i]->unk30->unk4 = sp5C.r[i].f[0];
            A[i]->unk30->unk8 = sp5C.r[i].f[1];
            A[i]->unk30->unkC = sp5C.r[i].f[2];
            A[i]->unk30->unk18 = sp5C.r[i].f[3];
            A[i]->unk30->unk1C = sp5C.r[i].f[4];
            A[i]->unk30->unk20 = k;
            A[i]->unk30->unk12 = 0x800;
            func_801451C0(A[i], 3);
            i++;
        } while (i < 7);
        func_80145390(0);
        func_800058DC(arg0, func_801C2FDC);
    }
}
