#include "context.h"
typedef struct func_8011B2E4_StructC { u8 pad0[4]; f32 unk4; f32 unk8; f32 unkC; } func_8011B2E4_StructC;
typedef struct func_8011B2E4_StructB { u8 pad0[0x2C]; func_8011B2E4_StructC *unk2C; } func_8011B2E4_StructB;
typedef struct func_8011B2E4_Struct {
    u8 pad0[0xE0]; func_8011B2E4_StructB *unkE0;
    u8 pad1[0x198-0xE4]; f32 unk198;
    u8 pad2[4]; f32 unk1A0;
    u8 pad3[0x334-0x1A4]; f32 unk334; f32 unk338; f32 unk33C;
    u8 pad4[0x380-0x340]; f32 unk380; f32 unk384; f32 unk388;
} func_8011B2E4_Struct;
extern void func_8010843C(f32, f32, f32, f32, f32, f32);
#define P ((func_8011B2E4_Struct *)&D_801BBBF0)
void func_8011B2E4(void) {
    s16 a;
    u8 pad[4];
    f32 c;
    f32 y;
    f32 d;
    a = func_8001EF38(P->unk1A0 - P->unkE0->unk2C->unkC, P->unk198 - P->unkE0->unk2C->unk4);
    c = func_8001EB64(a);
    d = func_8001EAD0(a);
    y = P->unkE0->unk2C->unk8 + 18.0;
    func_8010843C(P->unk198, y, P->unk1A0, P->unk198 - c * 100.0, y, P->unk1A0 - d * 100.0);
    P->unk334 = P->unk380;
    P->unk338 = P->unk384;
    P->unk33C = P->unk388;
}
