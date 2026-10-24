#define func_80367D58 func_80367D58_decl
#include "context.h"
#undef func_80367D58

typedef struct func_80367D58_StructA {
    u8 pad0[0x24];
    struct func_80367D58_StructB *unk24;
} func_80367D58_StructA;
typedef struct func_80367D58_StructB {
    u8 pad0[0x2C];
    struct func_80367D58_StructC *unk2C;
} func_80367D58_StructB;
typedef struct func_80367D58_StructC {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
} func_80367D58_StructC;
typedef struct func_80367D58_StructD {
    u8 pad0[0xDC];
    func_80367D58_StructA *unkDC;
    u8 padE0[0xC];
    func_80367D58_StructA *unkEC;
} func_80367D58_StructD;
typedef struct func_80367D58_StructE {
    u8 pad0[0x38];
    u32 pad38a:3;
    u32 unk38:1;
    u32 pad38b:28;
} func_80367D58_StructE;

extern f32 func_8001EAD0(s16, s32, void *);
extern f32 func_8001EB64(s16);
extern s32 func_8010843C(f32, f32, f32, f32, f32, f32);
extern void func_80367CE8(void *, f32, f32, f32, f32);

typedef struct func_80367D58_Vec {
    f32 x, y, z;
} func_80367D58_Vec;
#define HIT(s) (func_8010843C(s->unk4, s->unk8, s->unkC, s->unk4 + sp54.x, s->unk8, s->unkC + sp54.z) != 0)

u8 func_80367D58(arg0)
s32 arg0;
{
    func_80367D58_StructA *other;
    func_80367D58_StructE *sp70;
    s32 cur;
    func_80367D58_StructC *s0;
    f32 sp64;
    f32 sp60;
    func_80367D58_Vec sp54;
    func_80367D58_StructC *s1;
    u8 r;

    cur = (s32)((func_80367D58_StructD *)D_801BBBF0)->unkDC;
    if (arg0 != cur) {
        other = (func_80367D58_StructA *)cur;
    } else {
        other = ((func_80367D58_StructD *)D_801BBBF0)->unkEC;
    }
    if (arg0 == cur) {
        sp70 = (func_80367D58_StructE *)&D_801BC03C;
    } else {
        sp70 = (func_80367D58_StructE *)&D_801BC3D8;
    }
    s0 = ((func_80367D58_StructA *)arg0)->unk24->unk2C;
    s1 = other->unk24->unk2C;
    sp64 = func_8001EAD0(s0->unk12, arg0, D_801BBBF0);
    sp60 = func_8001EB64(s0->unk12);
    r = 0;
    func_80367CE8(&sp54, 0.0f, -20.0f, sp64, sp60);
    if (HIT(s0)) {
        r = 1;
    }
    func_80367CE8(&sp54, 0.0f, (f32)((r & 1) ? 40.0 : 20.0), sp64, sp60);
    if (HIT(s1)) {
        r |= 2;
    }
    if (!sp70->unk38) {
        func_80367CE8(&sp54, 20.0f, 0.0f, sp64, sp60);
        if (HIT(s0) || HIT(s1)) {
            r |= 4;
        }
        func_80367CE8(&sp54, -20.0f, 0.0f, sp64, sp60);
        if (HIT(s0) || HIT(s1)) {
            r |= 8;
        }
    } else if (r) {
        r |= 0xC;
    }
    return r;
}
#undef HIT
