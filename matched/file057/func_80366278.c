#include "common.h"
typedef struct func_803673B4_StructGlobal {
    u8 pad[0xDC];
    s32 unkDC;
    u8 padE0[0xC];
    s32 unkEC;
} func_803673B4_StructGlobal;
extern struct func_803673B4_StructGlobal D_801BBBF0;
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
extern u8 D_801BCC21;
extern void func_800058DC(s32, void *);
extern void func_80010550(s32, s32);
extern u8 func_80222E84[];
extern s32 func_8022397C();
typedef struct func_803643CC_Glob {
    u8 pad[0xDC];
    s32 unkDC;
    u8 padE0[0xC];
    s32 unkEC;
} func_803643CC_Glob;
extern u8 func_8036648C[];


typedef struct func_80366278_Struct {
    u8 pad0[2];
    s16 unk2;
    u8 pad4[0x2C];
    union {
        struct {
            u32 a:1;
            u32 b:2;
            u32 c:4;
            u32 d:1;
            u32 rest:24;
        } bf;
        u8 b8[4];
        struct {
            u16 hi:13;
            u16 lo3:3;
        } hb;
    } u30;
    u8 pad34[0x312 - 0x34];
    s16 unk312;
    u8 pad314[0x392 - 0x314];
    u8 unk392;
} func_80366278_Struct;

void func_80366278(s32 arg0, s32 arg1) {
    func_80366278_Struct *v0;
    func_80366278_Struct *v1;
    s32 a1;
    u16 *t0;
    s32 r;

    if (arg0 == ((func_803643CC_Glob *)&D_801BBBF0)->unkDC) { v0 = (func_80366278_Struct *)D_801BC03C; } else { v0 = (func_80366278_Struct *)D_801BC3D8; }
    if (arg0 != ((func_803643CC_Glob *)&D_801BBBF0)->unkDC) { v1 = (func_80366278_Struct *)D_801BC03C; } else { v1 = (func_80366278_Struct *)D_801BC3D8; }
    a1 = *(s32 *)(arg0 + 0x5C);
    t0 = *(u16 **)(arg0 + 0x68);
    if (v0->unk2 <= 0 || v0->u30.bf.b != 0) {
        func_800058DC(arg0, func_80222E84);
        return;
    }
    v0->u30.b8[0] = v0->u30.b8[0] & 0xFF7F;
    v0->u30.b8[2] = v0->u30.b8[2] & 0xFF1F;
    v0->u30.b8[0] = v0->u30.b8[0] & 0xFE;
    if (v1->unk2 <= 0 || v1->u30.bf.b != 0) {
        func_800058DC(arg0, func_8036648C);
        return;
    }
    r = ((u8 *)&D_801BBBF0)[0x1031];
    if (r == 0xF) {
        return;
    }
    {
        if (v0->u30.bf.c == 3) {
            v0->u30.b8[0] = v0->u30.b8[0] & 0xFFE1;
            r = D_801BCC21;
        }
        if (r == 5U && v0->u30.bf.a != 1) {
            if (v0->u30.hb.lo3 == 5) {
                func_8022397C(arg0, a1);
                return;
            }
            v0->unk392 = 1;
            if (v0->u30.bf.c != 4) {
                func_80010550(arg1, a1);
                if (v0->u30.bf.c != 1) {
                    if (v0->unk312 != 0) {
                        v0->unk312 = v0->unk312 - 1;
                        return;
                    }
                    if (!(t0[1] & 0x2000)) {
                        v0->u30.b8[0] = v0->u30.b8[0] & 0xFFE1;
                        func_800058DC(arg0, func_8036648C);
                        return;
                    }
                    v0->u30.b8[0] = (v0->u30.b8[0] & 0xFFE1) | 4;
                }
            }
        }
    }
}
