#include "context.h"

extern s32 D_801EB7D0;
typedef struct func_801E48C4_StructB { u8 pad[0x4B]; s8 unk4B; } func_801E48C4_StructB;
typedef struct func_801E48C4_StructA { u8 pad[0x12]; s16 unk12; } func_801E48C4_StructA;
typedef struct func_801E48C4_StructC { u8 pad[0x30]; void *unk30; } func_801E48C4_StructC;
typedef struct func_801E48C4_StructD { u8 pad[4]; func_801E48C4_StructC *unk4; } func_801E48C4_StructD;
extern func_801E48C4_StructD *D_8038D8D0_x[];

s32 func_801E48C4(s32 arg0, s32 arg1) {
    func_801E48C4_StructD *d = (func_801E48C4_StructD *)D_8038D8D0;
    func_801E48C4_StructA *a;
    D_801EB7D0 = D_801EB7D0 + 1;
    if ((u32)D_801EB7D0 >= 0x78U) {
        return 0xB;
    }
    a = (func_801E48C4_StructA *)((func_801E48C4_StructD *)D_8038D8D0)->unk4->unk30;
    a->unk12 = a->unk12 + 0x88;
    ((func_801E48C4_StructB *)((func_801E48C4_StructD *)D_8038D8D0)->unk4->unk30)->unk4B = (u32)((((f32)D_801EB7D0 * -127.0f) / 120.0f) + 127.0f);
    return 0xA;
}
