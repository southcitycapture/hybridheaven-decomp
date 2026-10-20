#include "context.h"
typedef struct func_801FCAE0_Struct2 {
    u8 pad0[0x30];
    f32 unk30;
    u8 pad1[4];
    f32 unk38;
    f32 unk3C;
    u8 pad2[4];
    f32 unk44;
} func_801FCAE0_Struct2;
typedef struct func_801FCAE0_Struct1 {
    u8 pad0[0x2C];
    func_801FCAE0_Struct2 *unk2C;
} func_801FCAE0_Struct1;
extern func_801FCAE0_Struct1 *D_801BBCD8;
f32 func_8001EAD0(s16);
s16 func_8001EF38(f32, f32);
void func_8002096C(u16, s32, s16);

extern f32 func_8001EB64(s16);
extern f32 func_8002FC20(f32);
extern f32 D_80218F5C;
extern f32 D_80218F60;

void func_801FC558(s32 arg0) {
    s32 sp34;
    u8 pad[20];
    f32 sp1C;
    f32 a;
    f32 b;

    sp34 = ((s16)(func_8001EF38(D_801BBCD8->unk2C->unk30 - D_80218F5C, D_801BBCD8->unk2C->unk38 - -328.0f) + 0x270)) & 0x1FFF;
    a = D_80218F60 - D_801BBCD8->unk2C->unk30;
    b = -328.0f - D_801BBCD8->unk2C->unk38;
    sp1C = func_8002FC20(a * a + b * b);
    func_8002096C(0x1F9, 1, (s16)(s32)(((func_8001EAD0((s16)sp34) * sp1C) / 268.0f) * -64.0f));
    func_8002096C(0x1F9, 2, (s16)(s32)(func_8001EB64((s16)((s16)(func_8001EF38(D_801BBCD8->unk2C->unk3C - D_801BBCD8->unk2C->unk30, D_801BBCD8->unk2C->unk44 - D_801BBCD8->unk2C->unk38) + 0x270) & 0x1FFF)) * 127.0f));
}
