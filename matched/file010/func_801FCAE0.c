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

f32 func_8001EAD0(s16);
s16 func_8001EF38(f32, f32);
void func_8002096C(u16, s32, s16);
extern func_801FCAE0_Struct1 *D_801BBCD8;

void func_801FCAE0(f32 arg0, f32 arg1, f32 arg2, u16 arg3) {
    func_801FCAE0_Struct2 *temp_v1;
    s16 temp_a0;
    s16 sp18;

    temp_v1 = D_801BBCD8->unk2C;
    sp18 = func_8001EF38(temp_v1->unk3C - temp_v1->unk30, temp_v1->unk44 - temp_v1->unk38);
    temp_v1 = D_801BBCD8->unk2C;
    temp_a0 = (s16) (sp18 - func_8001EF38(arg0 - temp_v1->unk30, arg2 - temp_v1->unk38)) & 0x1FFF;
    func_8002096C(arg3, 2, (s16) (s32) (func_8001EAD0(temp_a0) * 127.0f));
}
