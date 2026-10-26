#include "common.h"
#define HZP(p, l) HZQ(p, l)
#define HZQ(p, l) p##_##l
void func_8013A334(void *, s32, s32, u16);


typedef struct func_8035A490_Struct { f32 x, y, z; } func_8035A490_Struct;
typedef struct func_8035A490_Obj { u8 pad[0x4C]; u8 unk4C; u8 pad2[0x5C-0x4D]; s32 unk5C; } func_8035A490_Obj;
extern f32 func_8002FC20(f32);
extern u16 D_80089358;

func_8035A490_Struct func_8035A490(func_8035A490_Obj *arg1, s32 arg2, f32 arg3, f32 arg4, f32 arg5) {
    f32 pad;
    func_8035A490_Struct sp30;
    f32 dx[1];
    f32 dz[1];
    f32 d;
    f32 k;
    s32 t;

    t = arg1->unk5C;
    func_8013A334(&sp30, arg2, t, 1);
    dx[0] = sp30.x - arg3;
    dz[0] = sp30.z - arg5;
    d = func_8002FC20(dz[0] * dz[0] + dx[0] * dx[0]);
    k = (f32)((f64)arg1->unk4C + 5.0);
    if (D_80089358 & 1) {
        k *= -1.0f;
    }
    sp30.x += (k * dz[0]) / d;
    sp30.z += (-k * dx[0]) / d;
    return sp30;
}
