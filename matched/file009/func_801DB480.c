#include "common.h"
#include "common.h"

typedef struct func_801DB480_StructV {
    s32 a;
    u16 b;
    u16 c;
    f32 d;
} func_801DB480_StructV;
typedef struct func_801DB480_StructI {
    s32 unk0;
    u16 unk4;
    u16 unk6;
    struct func_801DB480_StructI *unk8;
    u16 unkC;
} func_801DB480_StructI;
typedef struct func_801DB480_StructS {
    u8 pad[0x1C];
    func_801DB480_StructV v;
    u8 pad2[0x7C - 0x28];
    func_801DB480_StructI *unk7C;
    u16 unk80;
    u16 unk82;
} func_801DB480_StructS;
typedef struct func_801DB480_StructO {
    u8 pad[0x5C];
    func_801DB480_StructS *unk5C;
} func_801DB480_StructO;
extern s32 func_80010550(s32, void *);
extern s32 func_80011140(s32, void *, func_801DB480_StructV, s32);
extern s16 func_80011590(u16);
extern void func_8013A1B4(s32, func_801DB480_StructV, s32);

s32 func_801DB480(s32 arg0, s32 arg1, f32 arg2, u8 arg3) {
    func_801DB480_StructS *s0;
    func_801DB480_StructI *s1;
    func_801DB480_StructV loc;
    u16 st;
    func_801DB480_StructI *t0;
    func_801DB480_StructV *v;

    s0 = ((func_801DB480_StructO *)arg0)->unk5C;
    st = s0->unk80;
    s1 = s0->unk7C;
    t0 = s1->unk8;
    v = &s0->v;
#define ARG3 (*(u8 *)&arg3)
    if (st == 2) {
        v->a = s1->unk0;
        v->b = func_80011590(s1->unkC);
        v->c = s1->unk4;
        if (ARG3 != 0) {
            v->c ^= 0x10;
        }
        v->d = arg2;
        func_8013A1B4(arg1, *v, 0xE3FFFF);
        st = s0->unk80 = 0;
    }
    if (st == 0) {
        if (func_80010550(arg1, s0) != 0) {
            if (t0 == 0) {
                return 1;
            }
            if (s1->unk6 != 0) {
                s0->unk80 = 1;
            } else {
                s0->unk7C = t0;
                s0->unk80 = 2;
            }
        }
    } else if (st == 3) {
        loc.a = s1->unk0;
        loc.b = func_80011590(s1->unkC);
        loc.c = s1->unk4;
        if (ARG3 != 0) {
            loc.c ^= 0x10;
        }
        loc.d = arg2;
        if (func_80011140(arg1, s0, loc, s0->unk82) != 0) {
            s0->unk7C = s1;
            s0->unk80 = 0;
        }
    } else {
        loc.a = t0->unk0;
        loc.b = func_80011590(t0->unkC);
        loc.c = t0->unk4;
        if (ARG3 != 0) {
            loc.c ^= 0x10;
        }
        loc.d = arg2;
        if (func_80011140(arg1, s0, loc, s1->unk6) != 0) {
            s0->unk7C = t0;
            s0->unk80 = 0;
        }
    }
    return 0;
}
