#include "context.h"
extern struct func_801E77A0_A func_801DAAF0;
struct func_801E77A0_A { u8 pad0[0x24]; struct func_801E77A0_B *unk24; };
struct func_801E77A0_B { u8 pad0[0x8]; struct func_801E77A0_C *unk8; };
struct func_801E77A0_C { u8 pad0[0x8]; struct func_801E77A0_D *unk8; };
struct func_801E77A0_D { u8 pad0[0x24]; struct func_801E77A0_E *unk24; };
struct func_801E77A0_E { u8 pad0[0x2C]; struct func_801E77A0_F *unk2C; };
struct func_801E77A0_F { u8 pad0[0x4]; f32 unk4; f32 unk8; f32 unkC; u8 pad10[2]; s16 unk12; };

extern void func_80005670(void *a0, void *a1);
extern void func_801CC530(void);
extern void func_801D517C(s32 a0);
extern void func_801D5188(s32 a0);
extern u8 func_801DAC30[];
extern u8 D_801DB64C[];

s32 func_801E604C(s32 arg0, s32 arg1) {
    func_80005670(func_801DAAF0.unk24, func_801DAC30 + 0x2C);
    func_801D517C(0);
    func_801D5188(0);
    func_80005670(func_801DAAF0.unk24->unk8, D_801DB64C);
    func_801CC530();
    return 2;
}
