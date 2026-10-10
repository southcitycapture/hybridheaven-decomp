#include "context.h"

extern struct func_801F6914_Struct1 *D_8038D8D0;

typedef struct func_801E44B4_Struct2 {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    s16 unk10;
    s16 unk12;
} func_801E44B4_Struct2;

typedef struct func_801E44B4_Struct1 {
    u8 pad0[0x30];
    func_801E44B4_Struct2 *unk30;
} func_801E44B4_Struct1;

typedef struct func_801E44B4_Struct0 {
    u8 pad0[0x18];
    func_801E44B4_Struct1 *unk18;
} func_801E44B4_Struct0;

s32 func_801E44B4(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x02C27B60) != 0) {
        return 2;
    }
    ((func_801E44B4_Struct0 *)D_8038D8D0)->unk18->unk30->unk4 = 0.0f;
    ((func_801E44B4_Struct0 *)D_8038D8D0)->unk18->unk30->unk8 = 0.0f;
    ((func_801E44B4_Struct0 *)D_8038D8D0)->unk18->unk30->unkC = 85.0f;
    ((func_801E44B4_Struct0 *)D_8038D8D0)->unk18->unk30->unk12 = 0x118;
    return 1;
}
