#define func_80010D08 D_80010D08
#include "ctx_probe.h"
#undef func_80010D08

typedef struct func_80010D08_Vec {
    s32 x, y, z;
} func_80010D08_Vec;

typedef struct func_80010D08_Sub {
    u8 pad0[0x50];
    f32 unk50;
    u8 pad54[0x62 - 0x54];
    u16 unk62;
} func_80010D08_Sub;

typedef struct func_80010D08_Obj {
    u8 pad0[0x2C];
    func_80010D08_Sub *unk2C;
} func_80010D08_Obj;

typedef struct func_80010D08_StructArg1 {
    u8 pad0[0xC];
    u16 unkC;
    u8 padE[0x44 - 0xE];
    func_80010D08_Vec unk44;
    u8 pad50[0x76 - 0x50];
    u8 unk76;
} func_80010D08_StructArg1;

extern u8 D_80063430[];
extern u16 D_80063E50[];
extern u16 D_8000FE48(void *, u16, void *, void *);
extern void D_8000FF80(void *, u16, void *, void *, func_80010D08_Vec);
extern void D_8001061C(func_80010D08_Obj *, func_80010D08_Vec, u16, f32, s32, s32, u32);
extern void D_80010884(void *, void *, func_80010D08_Vec, u16);

u16 func_80010D08(func_80010D08_Obj **arg0, func_80010D08_StructArg1 *arg1,
                  func_80010D08_Vec arg2, u16 arg5, u32 arg6) {
    f32 f;
    u32 bits;
    func_80010D08_Sub *obj;
    u16 r;
    u16 i;
    u16 sp76;
    u16 sp74;
    u16 m;
    u16 m0;
    s32 n;

    r = 0;
    bits = arg6;
    m0 = D_8000FE48(arg0, arg1->unkC, D_800631F0, D_80063DF0);
    i = 0;
    if (m0 > 0) {
        do {
            D_80010068(i, arg0, arg1->unkC, D_80063DF0, D_800631F0, D_80063670, &sp76, &sp74);
            i++;
        } while (i < m0);
    }
    D_8000FF80(arg0, arg1->unkC, D_80063430, D_80063E50, arg2);
    m = D_80010068(0, arg0, arg1->unkC, D_80063E50, D_80063430, D_80063A30, &sp76, &sp74);
    i = 1;
    if (m >= 2 && !(arg6 & 1)) {
        do {
            i++;
            bits >>= 1;
        } while (i < m && !(bits & 1));
    }
    obj = arg0[i]->unk2C;
    i = 1;
    bits = arg6;
    if (arg5 <= 0) {
        f = 0.0f;
        r = 1;
    } else {
        f = (f32)((f32)(obj->unk50 + 1.0) / ((f64)arg5 + 1.0));
        if (f >= 1.0) {
            f = 1.0f;
            r = 1;
        }
    }
    if (!(obj->unk62 & 1)) {
        obj->unk50 = obj->unk50 + 1.0f;
        if ((f32)arg5 <= obj->unk50) {
            r = 1;
        }
    }
    if (m >= 2 && arg6 != 0) {
        do {
            if (bits & 1) {
                D_8001061C(arg0[i], arg2, arg5, f, i - 1, r, (u32)obj->unk50);
            }
            i++;
            bits >>= 1;
        } while (i < m && bits != 0);
    }
    if (arg6 & 1) {
        D_80010884(arg0, arg1, arg2, arg5);
        *(func_80010D08_Vec *)&D_801BC028 = arg1->unk44;
        if (r) {
            arg1->unk76 = 1;
        }
    }
    return r;
}
