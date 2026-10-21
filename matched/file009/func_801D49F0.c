#include "context.h"

typedef struct func_801D49F0_Struct {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[0x2B];
    u8 unk3B;
    u8 pad3C;
    u8 unk3D;
    u16 unk3E;
} func_801D49F0_Struct;

extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern u8 func_801D4B68[];

void func_801D49F0(u8 *arg0, s32 *arg1) {
    func_801D49F0_Struct *p;
    u16 t;
    s8 sp49;
    u8 i;

    sp49 = 0;
    if (func_801CE0E8(arg0, &sp49) == 0) {
        for (i = 0; i < arg0[0x94]; i++) {
            t = func_8012C6B4(0x2000);
            p = *(func_801D49F0_Struct **)(arg1[i] + 0x30);
            p->unk4 += func_8001EAD0(t) * 5.0;
            p->unkC += func_8001EB64((s16)t) * 5.0;
            p->unk8 += func_8012C6B4(0xC8) / 10.0;
            p->unk3B = func_8012C6B4(8);
            p->unk3D = 0xA;
            p->unk3E |= 1;
        }
        func_800058DC(arg0, (s32)func_801D4B68);
    }
}
