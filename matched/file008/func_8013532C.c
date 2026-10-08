#include "context.h"

extern u8 D_801BBBF0[];

typedef struct func_8013532C_Inner {
    u8 pad0[0x10];
    s16 unk10;
    s16 unk12;
    s16 unk14;
    u8 pad16[0x4C - 0x16];
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
    u8 unk4F;
} func_8013532C_Inner;

typedef struct func_8013532C_Mid {
    u8 pad0[0x30];
    func_8013532C_Inner *unk30;
} func_8013532C_Mid;

typedef struct func_8013532C_Arg0 {
    u8 pad0[0x24];
    func_8013532C_Mid *unk24;
    u8 pad28[0x90 - 0x28];
    s32 unk90;
    s32 unk94;
    s32 unk98;
} func_8013532C_Arg0;

void func_8013532C(func_8013532C_Arg0 *arg0, func_8013532C_Mid **arg1) {
    func_8013532C_Inner *temp_v0;

    (*arg1)->unk30->unk4C = D_801BBBF0[0xF32];
    (*arg1)->unk30->unk4D = D_801BBBF0[0xF33];
    (*arg1)->unk30->unk4E = D_801BBBF0[0xF34];
    (*arg1)->unk30->unk4F = D_801BBBF0[0xF35];
    temp_v0 = arg0->unk24->unk30;
    temp_v0->unk10 = (s16) (temp_v0->unk10 + arg0->unk90);
    temp_v0 = arg0->unk24->unk30;
    temp_v0->unk12 = (s16) (temp_v0->unk12 + arg0->unk94);
    temp_v0 = arg0->unk24->unk30;
    temp_v0->unk14 = (s16) (temp_v0->unk14 + arg0->unk98);
}
