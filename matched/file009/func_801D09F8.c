#include "common.h"
extern void func_800058DC(void *arg0, s32 arg1);
extern f32 func_8002FC20(f32);
extern s32 func_8012C6B4(s32);
s32 func_801CE0E8(void *arg0, s8 *a1);
typedef struct func_801D0C1C_StructB {
    u8 pad0[0x4C];
    u16 unk4C;
    u8 pad4E[0x1E];
    f32 unk6C;
    f32 unk70;
    f32 unk74;
} func_801D0C1C_StructB;
typedef struct func_801D0C1C_StructA {
    u8 pad0[0xC];
    func_801D0C1C_StructB *unkC;
    u8 pad10[0x80];
    u16 unk90;
    u16 unk92;
    u8 unk94;
} func_801D0C1C_StructA;
typedef struct func_801D0C1C_StructC {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
} func_801D0C1C_StructC;
typedef struct func_801D0C1C_StructD {
    u8 pad0[0x30];
    func_801D0C1C_StructC *unk30;
} func_801D0C1C_StructD;
void func_801D0C1C(func_801D0C1C_StructA *arg0, func_801D0C1C_StructD **arg1);


void func_801D09F8(func_801D0C1C_StructA *arg0, func_801D0C1C_StructD **arg1) {
    f32 x, y, z, d;
    func_801D0C1C_StructC *p;
    f32 r;
    s8 sp7F;
    u8 i;

    sp7F = 0;
    if (func_801CE0E8(arg0, &sp7F) == 0) {
        x = ((f32 *)arg0->unkC)[0x7C / 4];
        y = ((f32 *)arg0->unkC)[0x80 / 4];
        z = ((f32 *)arg0->unkC)[0xA0 / 4];
        d = func_8002FC20(x * x + y * y + z * z);
        if ((f64)d <= 0.0) {
            d = 0.01f;
        }
        x /= d;
        y /= d;
        z /= d;
        for (i = 0; i < arg0->unk94; i++) {
            p = arg1[i]->unk30;
            r = (f32)func_8012C6B4(100) / 100.0 + 0.1;
            p->unk4 += (x + (f32)(func_8012C6B4(200) - 100) / 1000.0) * r;
            p->unk8 += (y + (f32)(func_8012C6B4(200) - 100) / 1000.0) * r;
            p->unkC += (z + (f32)(func_8012C6B4(200) - 100) / 1000.0) * r;
        }
        func_800058DC(arg0, (s32)func_801D0C1C);
    }
}
