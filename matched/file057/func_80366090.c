#include "context.h"

typedef struct func_80366090_Struct { s32 a; s32 b; s32 c; } func_80366090_Struct;
typedef struct func_80366090_S2 { u8 p0[2]; s16 s2; u8 p4[0x2C]; u32 u30; } func_80366090_S2;
extern s32 func_80011140(s32, s32, func_80366090_Struct, s32);
extern void func_8013A28C(s32, func_80366090_Struct);
extern void func_80010550(s32, s32);
extern s32 func_8022397C();
extern struct func_803673B4_StructGlobal D_801BBBF0;
extern void func_800058DC(s32, void *);
extern func_80366090_Struct D_80386A00;
extern u8 func_80222E84[];
extern u8 func_80366278[];
extern u8 func_8036648C[];

void func_80366090(u8 *arg0, s32 arg1) {
    func_80366090_S2 *v1;
    func_80366090_S2 *v0;
    s32 a1;
    func_80366090_Struct sp28;
    u32 w;

    if (arg0 == *(u8 **)((u8 *)&D_801BBBF0 + 0xDC)) {
        v1 = (func_80366090_S2 *)((u8 *)&D_801BBBF0 + 0x44C);
    } else {
        v1 = (func_80366090_S2 *)((u8 *)&D_801BBBF0 + 0x7E8);
    }
    if (arg0 != *(u8 **)((u8 *)&D_801BBBF0 + 0xDC)) {
        v0 = (func_80366090_S2 *)((u8 *)&D_801BBBF0 + 0x44C);
    } else {
        v0 = (func_80366090_S2 *)((u8 *)&D_801BBBF0 + 0x7E8);
    }
    a1 = *(s32 *)(arg0 + 0x5C);
    sp28 = D_80386A00;
    if (v1->s2 <= 0 || (w = v1->u30, ((w << 1) >> 30) != 0)) {
        func_800058DC((s32)arg0, func_80222E84);
        return;
    }
    if (v0->s2 <= 0 || ((v0->u30 << 1) >> 30) != 0) {
        func_800058DC((s32)arg0, func_8036648C);
        return;
    }
    if (*((u8 *)&D_801BBBF0 + 0x1031) != 0xF) {
        if ((*(u16 *)&v1->u30 & 7) == 5) {
            func_8022397C(arg0);
            return;
        }
        if (((w << 11) >> 30) == 2) {
            sp28.a = 0x0190001C;
        } else if (((w << 11) >> 30) == 3) {
            sp28.a = 0x0190001D;
        } else {
            sp28.a = 0x0190001B;
        }
        if (func_80011140(arg1, a1, sp28, 3) != 0) {
            func_8013A28C(arg1, sp28);
            func_80010550(arg1, a1);
            func_800058DC((s32)arg0, func_80366278);
        }
    }
}
