#include "context.h"
extern u8 D_801BBBF0[];
extern u8 D_801DA0E8[];
extern s32 D_8038D8CC;
extern func_801E3C64_Outer **D_8038D8D0;
extern void func_80005E44(s32, void *);
extern void func_80006214(s32);
extern void func_8012C89C(s32, s32, s32, s32);
extern u8 func_8038D830[];

typedef struct func_801EABA4_Inner {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
    u8 pad14[4];
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
} func_801EABA4_Inner;

typedef struct func_801EABA4_Outer {
    u8 pad[0x30];
    func_801EABA4_Inner *unk30;
} func_801EABA4_Outer;


s32 func_801EABA4(s32 arg0, s32 arg1) {
    func_80005E44(D_8038D8CC, func_8038D830 + 0x5C);
    func_80006214(D_8038D8CC);
    func_8012C89C(D_8038D8CC, 0, 0x43A, 2);
    (*D_8038D8D0)->unk30->unk4 = 0.0f;
    (*D_8038D8D0)->unk30->unk8 = 0.0f;
    (*D_8038D8D0)->unk30->unkC = 65.0f;
    (*D_8038D8D0)->unk30->unk12 = 0;
    (*D_8038D8D0)->unk30->unk18 = 1.0f;
    (*D_8038D8D0)->unk30->unk1C = 1.0f;
    (*D_8038D8D0)->unk30->unk20 = 1.0f;
    (*D_8038D8D0)->unk30->unk24 = 0x400;
    (*D_8038D8D0)->unk30->unk4C = D_801BBBF0[0xF32];
    (*D_8038D8D0)->unk30->unk4D = D_801BBBF0[0xF33];
    (*D_8038D8D0)->unk30->unk4E = D_801BBBF0[0xF34];
    (*D_8038D8D0)->unk30->unk4F = D_801BBBF0[0xF35];
    (*D_8038D8D0)->unk30->unk30 = (s32)D_801DA0E8 | 0x40000000;
    return 2;
}
