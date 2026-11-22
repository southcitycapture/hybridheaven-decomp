#include "common.h"

typedef struct func_801E390C_Struct3 {
    u8 pad0[8];
    f32 unk8;
} func_801E390C_Struct3;
typedef struct func_801E390C_Struct2 {
    u8 pad0[0x30];
    func_801E390C_Struct3 *unk30;
} func_801E390C_Struct2;
typedef struct func_801E390C_Struct1 {
    func_801E390C_Struct2 *unk0;
} func_801E390C_Struct1;
extern struct func_801E390C_Struct1 *D_8038D8D0;
struct func_801E4744_S2 { u8 pad0[4]; f32 u4; f32 u8; u8 padC[6]; s16 u12; };
struct func_801E4744_S1 { u8 pad[0x30]; struct func_801E4744_S2 *u30; };
struct func_801E4744_S0 { u8 pad[0x1C]; struct func_801E4744_S1 *u1C; };
#define G (*(struct func_801E4744_S0 **)&D_8038D8D0)
extern f64 func_80034C24();
extern u64 func_801C0B2C();
extern s32 func_801C0B8C(u64);
s32 func_801E4744(s32 arg0, s32 arg1) {
    u64 r;
    f64 d;
    f32 t;
    f32 a;

    if (func_801C0B8C(0xC65D40)) {
        return 0xA;
    }
    if (func_801C0B8C(0x3D0900)) {
        r = func_801C0B2C();
        d = func_80034C24(r);
        G->u1C->u30->u4 = 0.0f;
        t = (f32)(d / 1000000.0 - 4.0) / 9.0f;
        G->u1C->u30->u8 = t * 18.0f + 16.0f;
        a = t * 750.0f;
        G->u1C->u30->u12 = (s16)(s32)(((a - (f32)((s32)(a / 360.0f) * 360)) * 2048.0f) / 90.0f);
    }
    return 9;
}
