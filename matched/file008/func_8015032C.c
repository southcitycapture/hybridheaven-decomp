#ifndef GG
float func_8001EAD0(short);
float func_8001EB64(short);
#endif
#include "context.h"

typedef struct func_8015032C_Struct_P {
    u8 pad0[6];
    s16 unk6;
    s16 unk8;
    s16 unkA;
    s16 unkC;
} func_8015032C_Struct_P;
typedef struct func_8015032C_Struct_O {
    u8 pad0[0x24];
    func_8014C2B0_Struct_Sub *unk24;
    u8 pad28[0x38 - 0x28];
    func_8015032C_Struct_P *unk38;
} func_8015032C_Struct_O;
typedef struct func_8015032C_Struct_R {
    f32 unk0;
    f32 unk4;
    f32 unk8;
    s16 unkC;
    s16 unkE;
} func_8015032C_Struct_R;
extern f32 func_8002FC20(f32);
extern f32 D_801906E8;

s32 func_8015032C(f32 arg0, f32 arg1, f32 arg2, func_8015032C_Struct_R *arg3) {
    f32 pad;
    f32 sp78, sp74, sp70, sp6C;
    f32 dx, dz, d, best;
    s32 found;
    s32 idx;
    s32 i;
    func_8015032C_Struct_O *o;
    func_8014C2B0_Struct_Data *v;
    func_8015032C_Struct_P *p;
    f64 t;
    f64 a;

    found = 0;
    best = D_801906E8;
    idx = 0;
    for (i = 0; i < G->unk3B8; i++) {
        o = (func_8015032C_Struct_O *)G->unk3BC[i];
        v = o->unk24->unk30;
        if (arg0 < v->unk4) {
            dx = -(arg0 - v->unk4);
        } else {
            dx = arg0 - v->unk4;
        }
        if (arg2 < v->unkC) {
            dz = -(arg2 - v->unkC);
        } else {
            dz = arg2 - v->unkC;
        }
        d = func_8002FC20(dx * dx + dz * dz);
        if (d <= 30.0f && d < best) {
            p = o->unk38;
            if ((f64)(f32)p->unk8 / 10.0 <= arg1 && arg1 <= (f64)(f32)p->unk8 / 10.0 + 18.0) {
                sp78 = (f32)((f64)(f32)p->unk6 / 10.0);
                best = d;
                idx = i;
                sp74 = (f32)p->unk8 / 10.0;
                found = 1;
                sp70 = (f32)((f64)(f32)p->unkA / 10.0);
                sp6C = (f32)p->unkC;
            }
        }
    }
    if (found != 0) {
        arg3->unk0 = sp78;
        arg3->unk4 = sp74;
        arg3->unk8 = sp70;
        arg3->unkC = (s16)(s32)sp6C;
        arg3->unkE = idx;
    }
    return found;
}
