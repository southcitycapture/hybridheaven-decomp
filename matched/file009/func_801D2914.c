#include "context.h"
void func_801D2AA4();
typedef struct func_801D2914_StructA { u8 pad0[0x30]; u8 *unk30; } func_801D2914_StructA;
typedef struct func_801D2914_StructB { u8 pad0[0x94]; u8 unk94; } func_801D2914_StructB;
typedef struct func_801D2914_StructC { u8 pad0[4]; f32 unk4; f32 unk8; f32 unkC; } func_801D2914_StructC;

void func_801D2914(func_801D2914_StructB *arg0, func_801D2914_StructA **arg1) {
    f32 spd;
    func_801D2914_StructC *s0;
    s16 ang;
    u8 sp5D;
    s32 i;

    sp5D = 0;
    if (func_801CE0E8(arg0, (s8 *)&sp5D) != 0) {
        func_800058DC(arg0, (s32)func_801CE898);
        return;
    }
    i = 0;
    if (arg0->unk94 > 0) {
        do {
            spd = (f32)((f64)(f32)func_8012C6B4(0x14) / 20.0 + 4.0);
            ang = func_8012C6B4(0x2000);
            s0 = (func_801D2914_StructC *)arg1[i]->unk30;
            s0->unk8 += (f64)(f32)func_8012C6B4(0xB4) / 10.0;
            s0->unk4 += spd * func_8001EB64(ang);
            s0->unkC += spd * func_8001EAD0(ang);
            i = (i + 1) & 0xFF;
        } while (i < arg0->unk94);
    }
    func_800058DC(arg0, (s32)func_801D2AA4);
}
