#include "common.h"
typedef struct { s32 a[4]; } func_801E0648_S4;
extern func_801E0648_S4 D_80164F40;
extern s32 D_801BBC2C;
typedef struct { s32 a[5]; } func_801E0648_S5;
extern func_801E0648_S5 D_801E2070;
extern u8 D_801E20F8;
extern u8 D_801E20FC;
extern u8 D_801E2100;
extern u8 D_801E2104;
extern u8 D_801E2108;
extern u8 D_801E210C;
extern u8 D_801E2110;
extern u8 D_801E2114;
typedef struct { u16 u0, u2, u4, u6, u8; u8 pad[6]; s32 u10, u14, u18; } func_801E0648_E;
extern func_801E0648_E D_801E2118[];
extern void func_80005E44(void *, void *);
extern s32 func_80006214(void *);
extern s32 func_80017064(u16);
extern void *func_8012C4D0(s32, func_801E0648_S5, s32);
extern void func_8012C89C(void *, s32, u16, u16);
extern void func_8012D814();


typedef struct { u16 u0,u2,u4,u6,u8,uA,uC; u8 pad[2]; s32 u10,u14,u18; } func_801E02DC_StructEntry;
typedef struct {
    u8 pad0[4]; f32 f4,f8,fC; s16 s10,s12,s14; u8 pad16[2];
    f32 f18,f1C,f20; s32 i24; u8 pad28[8]; s32 i30; u8 pad34[0x14];
    u8 b48,b49,b4A,b4B,b4C,b4D,b4E;
} func_801E02DC_StructInner;
typedef struct { u8 pad0[0x30]; func_801E02DC_StructInner *inner; } func_801E02DC_StructMid;
typedef struct { u8 pad0[0x24]; func_801E02DC_StructMid *mid; u8 pad28[0x14]; s16 s3C; u8 pad3E[2]; f32 f40,f44,f48; u8 pad4C[0x44]; u8 b90,b91; s16 s92; f32 f94; } func_801E02DC_StructObj;
typedef struct { u8 pad[0xF32]; u8 r,g,b; } func_801E02DC_StructColors;
extern func_801E02DC_StructColors D_801BBBF0;
extern func_801E0648_S5 D_801E2084;
extern void func_8012CF8C(void *, void *, u16, u16);

s32 func_801E02DC(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, u8 arg7, u8 arg8, u8 arg9, func_801E02DC_StructEntry *entry, s32 arg11, u8 arg12, u8 arg13, s8 arg14, f32 arg15, u8 arg16, u8 arg17) {
    func_801E02DC_StructObj *obj;
    func_801E0648_S4 sp3C;
    func_801E0648_S5 *var_v0;
    entry = (func_801E02DC_StructEntry *)&D_801E2118[arg16];
    if (func_80017064(entry->u0) == -1) return 0;
    if (arg16 != 0) var_v0 = &D_801E2084;
    else var_v0 = &D_801E2070;
    obj = func_8012C4D0(D_801BBC2C, *var_v0, 4);
    if (obj != NULL) {
        obj->f40 = arg3;
        obj->f44 = arg4;
        obj->f48 = arg5;
        obj->f94 = arg6;
        D_801E2114 = arg14;
        obj->s92 = (s8)D_801E2114;
        obj->b91 = arg17;
        obj->b90 = arg16;
        obj->s3C = 0;
        sp3C = D_80164F40;
        sp3C.a[1] = D_801E2118[arg16].u10;
        func_80005E44(obj, &sp3C);
        func_80006214(obj);
        obj->mid->inner->f4 = arg0;
        obj->mid->inner->f8 = arg1;
        obj->mid->inner->fC = arg2;
        obj->mid->inner->s10 = 0x1800;
        obj->mid->inner->s12 = 0;
        obj->mid->inner->s14 = 0;
        obj->mid->inner->f18 = arg15;
        obj->mid->inner->f1C = arg15;
        obj->mid->inner->f20 = arg15;
        obj->mid->inner->b48 = D_801E20F8 = arg7;
        obj->mid->inner->b49 = D_801E20FC = arg8;
        obj->mid->inner->b4A = D_801E2100 = arg9;
        obj->mid->inner->b4B = *(u8 *)((u32)&D_801E2110 ^ 0U) = arg13;
        obj->mid->inner->b4C = *(u8 *)((u32)&D_801E2104 ^ 0U) = D_801BBBF0.r;
        obj->mid->inner->b4D = *(u8 *)((u32)&D_801E2108 ^ 0U) = D_801BBBF0.g;
        obj->mid->inner->b4E = *(u8 *)((u32)&D_801E210C ^ 0U) = D_801BBBF0.b;
        func_8012C89C(obj, 0, entry->u2, entry->u4);
        arg11 = entry->u6 & 0xFFFF;
        if (arg11 != 0) {
            if (arg17 & 1) func_8012D814(obj, (arg11 ^ 0U), entry->u8, 0x3F800000, 1);
            else func_8012D814(obj, (arg11 ^ 0U), entry->u8, 0x3F800000, 0);
        }
        if (entry->uA != 0) func_8012CF8C(obj, (u8 *)obj->mid->inner + 0x40, entry->uA, entry->uC);
        obj->mid->inner->i24 = entry->u14;
        obj->mid->inner->i30 = entry->u18 | 0x40000000;
        return 1;
    }
    return 0;
}
