#include "context.h"
extern u8 func_801D22B4[];
typedef struct func_801D2200_StructE { u8 pad0[0x22]; u8 unk22; u8 pad23[0xD]; struct func_801D2200_StructF *unk30; } func_801D2200_StructE;
typedef struct func_801D2200_StructF { u8 pad0[8]; f32 unk8; u8 padC[4]; u16 unk10; } func_801D2200_StructF;
void func_801D2200(func_801CE5B0_Struct *arg0, func_801D2200_StructE **arg1) {
    s32 i;
    s8 sp23;
    func_801D2200_StructF *t;
    sp23 = 0;
    if (func_801CE0E8(arg0, &sp23) == 0) {
        for (i = 0; i < arg0->unk94; i++) {
            arg1[i]->unk22 = 0;
            t = arg1[i]->unk30;
            t->unk10 = 0x800;
            t->unk8 = t->unk8 + (i + 1) * 3.0;
        }
        func_800058DC(arg0, (s32)func_801D22B4);
    }
}
