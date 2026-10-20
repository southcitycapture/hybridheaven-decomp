#include "context.h"

typedef struct { u8 pad[4]; f32 v; } func_802409DC_StructB;
typedef struct { u8 pad[0x2C]; func_802409DC_StructB *p; } func_802409DC_StructA;
typedef struct { u8 pad0[4]; u16 h; u8 pad1[0xDA]; func_802409DC_StructA *a; } func_802409DC_Struct;
extern func_802409DC_Struct D_801BBBF0;
void func_80240A68(s32 arg0, s32 arg1);
extern void func_80020718(s32);
extern void func_8012FE50(s32, s32, s32, s32, s32);

void func_802409DC(s32 arg0, s32 arg1) {
    if (96.0f < D_801BBBF0.a->p->v) {
        func_80020718(0xA);
        D_801BBBF0.h = 0x1E;
        func_8012FE50(0x10, D_801BBBF0.h, 1, 1, 0);
        func_800058DC((void *)arg0, func_80240A68);
    }
}
