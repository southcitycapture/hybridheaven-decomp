#include "context.h"

/* context.h declarations used below, placed early so the function sees them */
extern s32 func_8038D8B8[];
void func_80006214(s32);
extern struct func_801F6914_Struct1 *D_8038D8D0;

struct func_801E1E0C_Struct2 {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
};

struct func_801E1E0C_Struct1 {
    u8 pad0[0x30];
    struct func_801E1E0C_Struct2 *unk30;
};

struct func_801E1E0C_Struct0 {
    struct func_801E1E0C_Struct1 *unk0;
};

extern void func_80005E44(s32 a, void *b);
extern void func_8012C89C(s32 a, s32 b, s32 c, s32 d);
extern u8 func_8038D830[];

s32 func_801E1E0C(s32 arg0, s32 arg1) {
    func_80005E44(func_8038D8B8[5], func_8038D830 + 0x5C);
    func_80006214(func_8038D8B8[5]);
    func_8012C89C(func_8038D8B8[5], 0, 0xA1, 0);
    ((struct func_801E1E0C_Struct0 *)D_8038D8D0)->unk0->unk30->unk4 = 0.0f;
    ((struct func_801E1E0C_Struct0 *)D_8038D8D0)->unk0->unk30->unk8 = 0.0f;
    ((struct func_801E1E0C_Struct0 *)D_8038D8D0)->unk0->unk30->unkC = 0.0f;
    ((struct func_801E1E0C_Struct0 *)D_8038D8D0)->unk0->unk30->unk12 = 0;
    return 2;
}
