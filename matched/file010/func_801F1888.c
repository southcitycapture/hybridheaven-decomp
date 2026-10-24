#include "context.h"

typedef struct func_801F1888_Vec { u8 pad[4]; f32 x; f32 y; f32 z; } func_801F1888_Vec;
typedef struct func_801F1888_Obj { u8 pad[0x40]; f32 unk40; f32 unk44; f32 unk48; } func_801F1888_Obj;
typedef struct func_801F1888_Buf { u8 pad[0xC]; s16 unkC; s16 unkE; f32 unk10; } func_801F1888_Buf;
extern s32 func_801C5A1C(f32, f32, f32, f32, f32, f32);
extern void func_80247294(s32, void *);
extern f64 D_802187B8;

#define V (*(func_801F1888_Vec **)(*(u8 **)((u8 *)&D_801BBBF0 + 0xE0) + 0x2C))
s32 func_801F1888(void) {
    f64 k;
    func_801F1888_Buf sp3C;
    func_801F1888_Obj *o;

    o = (func_801F1888_Obj *)D_801BBBF0.unkDC;
    if (func_801C5A1C(V->x, V->y + 2.0, V->z, V->x, V->y - 2.0, V->z) != 0 && ((u8 *)&D_801BBBF0)[0x35A] == 0x25) {
        func_80247294(*(s32 *)((u8 *)&D_801BBBF0 + 0x38C), &sp3C);
        o->unk40 = -func_8001EAD0(sp3C.unkC) * sp3C.unk10;
        o->unk44 = 0.0f;
        o->unk48 = -func_8001EB64(sp3C.unkC) * sp3C.unk10;
        return 1;
    }
    k = D_802187B8;
    o->unk40 = o->unk40 * k;
    o->unk48 = o->unk48 * k;
    return 0;
}
