#include "common.h"

extern struct func_801E5060_StructC *D_8038D8D0;
extern f64 func_80034C24();
extern s32 func_801C0B8C(u64);
extern s32 func_801C0EB0(s32 arg0, s32 arg1);
extern u64 func_801C0F18(s32 arg0, s32 arg1);
typedef struct func_801E48C4_StructA { u8 pad[0x12]; s16 unk12; } func_801E48C4_StructA;
typedef struct func_801E48C4_StructB { u8 pad[0x4B]; s8 unk4B; } func_801E48C4_StructB;
typedef struct func_801E48C4_StructC { u8 pad[0x30]; void *unk30; } func_801E48C4_StructC;
typedef struct func_801E48C4_StructD { u8 pad[4]; func_801E48C4_StructC *unk4; } func_801E48C4_StructD;
s32 func_801E4A6C(s32 arg0, s32 arg1) {
    u64 r;
    f32 t;
    f64 d;
    f64 four = 4.0;

    if (func_801C0B8C(0x0138CE20) != 0) {
        func_801C0EB0(3, 1);
        ((func_801E48C4_StructB *)(*(func_801E48C4_StructD **)&D_8038D8D0)->unk4->unk30)->unk4B = 0x7F;
        return 0xD;
    }
    r = func_801C0F18(3, 1);
    t = (func_80034C24(r) / 1000000.0 / four) * 24.0;
    d = func_80034C24(r);
    ((func_801E48C4_StructA *)(*(func_801E48C4_StructD **)&D_8038D8D0)->unk4->unk30)->unk12 = ((func_801E48C4_StructA *)(*(func_801E48C4_StructD **)&D_8038D8D0)->unk4->unk30)->unk12 - (s16)(2048.0f * t / 90.0f);
    ((func_801E48C4_StructB *)(*(func_801E48C4_StructD **)&D_8038D8D0)->unk4->unk30)->unk4B = (u32)(f32)(d / 1000000.0 / four * 127.0);
    return 0xC;
}
