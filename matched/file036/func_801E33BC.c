#include "context.h"

typedef struct func_801E33BC_Struct2 {
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
} func_801E33BC_Struct2;

typedef struct func_801E33BC_Struct1 {
    u8 pad0[0x30];
    func_801E33BC_Struct2 *unk30;
} func_801E33BC_Struct1;

extern void func_80005E44(s32, void *);
extern void func_80006214(s32);
extern void func_8012C89C(s32, s32, s32, s32);
extern void func_8012CF8C(s32, void *, s32, s32);
extern u8 D_8038D830[];
extern u8 D_8038D8B8[];
extern func_801E33BC_Struct1 **D_8038D8D0;

s32 func_801E33BC(s32 arg0, s32 arg1) {
    func_80005E44(*(s32 *)(D_8038D8B8 + 0x14), D_8038D830 + 0x5C);
    func_80006214(*(s32 *)(D_8038D8B8 + 0x14));
    func_8012C89C(*(s32 *)(D_8038D8B8 + 0x14), 0, 0xA2, 0);
    (*D_8038D8D0)->unk30->unk4 = 0.0f;
    (*D_8038D8D0)->unk30->unk8 = 0.0f;
    (*D_8038D8D0)->unk30->unkC = 0.0f;
    (*D_8038D8D0)->unk30->unk12 = 0;
    (*D_8038D8D0)->unk30->unk18 = 1.0f;
    (*D_8038D8D0)->unk30->unk1C = 1.0f;
    (*D_8038D8D0)->unk30->unk20 = 1.0f;
    func_8012CF8C(*(s32 *)(D_8038D8B8 + 0x14), (u8 *)(*D_8038D8D0)->unk30 + 0x40, 0x442, 0);
    return 2;
}
