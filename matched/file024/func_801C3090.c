#include "context.h"

typedef struct func_801C3090_Sub {
    u8 pad[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    s16 unk10;
    s16 unk12;
    s16 unk14;
    u8 pad16[2];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    s32 unk24;
    u8 pad28[8];
    s32 unk30;
    u8 pad34[0x18];
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
    u8 unk4F;
} func_801C3090_Sub;
typedef struct func_801C3090_Obj {
    u8 pad[0x30];
    func_801C3090_Sub *unk30;
} func_801C3090_Obj;
extern f32 D_801CF294;
void func_801C3288();

void func_801C3090(s32 arg0, func_801C3090_Obj **arg1) {
    func_801C2DB8_V sp60;
    u8 i;
    f32 k;

    sp60 = D_80164F40;
    for (i = 0, k = D_801CF294; i < 3; i++) {
        func_80005E44((void *)arg0, &sp60);
        func_80006214((void *)arg0);
        func_8012C89C(arg0, i, 0x228, 0x2A);
        arg1[i]->unk30->unk24 = 0x15;
        arg1[i]->unk30->unk30 = func_8000C3B0(arg1[i]);
        arg1[i]->unk30->unk4 = 0.0f;
        arg1[i]->unk30->unk8 = -(i * 0xA0);
        arg1[i]->unk30->unkC = 0.0f;
        arg1[i]->unk30->unk18 = k;
        arg1[i]->unk30->unk1C = k;
        arg1[i]->unk30->unk20 = k;
        arg1[i]->unk30->unk10 = 0;
        arg1[i]->unk30->unk12 = 0;
        arg1[i]->unk30->unk14 = 0;
        arg1[i]->unk30->unk4C = ((u8 *)&D_801BBBF0)[0xF32];
        arg1[i]->unk30->unk4D = ((u8 *)&D_801BBBF0)[0xF33];
        arg1[i]->unk30->unk4E = ((u8 *)&D_801BBBF0)[0xF34];
        arg1[i]->unk30->unk4F = 0x61;
    }
    func_800058DC(arg0, func_801C3288);
}
