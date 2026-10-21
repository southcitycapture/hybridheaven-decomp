#include "context.h"

extern u8 func_80006214(s32);
extern void func_801451C0(void *, s32);
extern void func_80145310(void *, s32, s32);
extern s32 func_80146178(s32, u8 *, s16, s32, s32, s32, s32, s32, s32, s32, s32);
extern s32 func_80146208(s32, u8 *, s32, s16, s32, s32, s32, s32, s32, s32, s32, s32);
extern void func_801465A0(s32, s32, u16, s32, s32);
extern s32 func_80146894(s32, s32, u8 *, s32, f32, s32);
extern f32 D_8023F090;

struct func_80226AA4_Struct { u8 pad[0x28]; s16 unk28; };

u8 func_80226AA4(void *arg0p, s32 arg1p, s8 *arg2p) {
#define arg0 ((s32)arg0p)
#define arg1 ((s32 *)arg1p)
#define arg2 ((u8 *)arg2p)
#define g ((u8 *)&D_801BEC68)
#define O(x) ((struct func_80226AA4_Struct *)(x))
    u32 s1;
#define k2 s1
#define k3 s1
#define k4 s1
    u8 s2;
#define t s1
#define t2 s1
    s8 i;

    s2 = 0;
    g[0] = *arg2;
    for (i = 0; i < 3; i++) {
        s1 = func_80006214(arg0) & 0xFF;
        if (func_80147598() != 0) {
            s2 += (func_80146208(arg0, arg2, 0x66, (s16)((i << 6) + 0x144), 0x17, 0x40, 0x20, 0, 0, 0xFF, 0x20C, i + 2));
        } else {
            s2 += (func_80146208(arg0, arg2, 0x66, (s16)((i << 6) + 0x144), 0x17, 0x40, 0x20, 0, 0, 0xFF, 0x20A, i));
        }
        func_80145310((void *)arg1[s1], 1, 0);
    }
    g[5] = *arg2;
    s2 += (func_80146178(arg0, arg2, 0x16C, 0x22, 0x50, 4, 2, 0, 0, 0xFF, 0x80));
    g[4] = *arg2;
    s2 += (func_80146208(arg0, arg2, 0x66, 0x16C, 0x22, 0x20, 4, 0, 0, 0xFF, 0x209, 4));
    func_80145310((void *)arg1[g[4]], 5, 3);
    g[1] = *arg2;
    s2 += (func_80146178(arg0, arg2, 0x16C, 0x18, 0x77, 3, 2, 0xFA, 0x14, 0xA, 0xA0));
    g[2] = *arg2;
    s2 += (func_80146178(arg0, arg2, 0x16C, 0x18, 0x77, 3, 2, 0x80, 0x80, 0, 0x80));
    i = 0;
    g[0x1C] = *arg2;
    do {
        t = func_80146178(arg0, arg2, (s16)(i * 0x1E + 0x16C), 0x1C, 0x1C, 2, 0, 0, 0, 0x80, 0xFF);
        i += 1;
        s2 = (s2 + t) & 0xFF;
    } while (i < 4);
    i = 0;
    g[0x1A] = *arg2;
    do {
        t = func_80146178(arg0, arg2, (s16)(i * 0x1E + 0x16C), 0x1C, 0x1C, 2, 0, 0xFF, 0, 0, 0xFF);
        i += 1;
        s2 = (s2 + t) & 0xFF;
    } while (i < 4);
    if (func_80147598() == 0) {
        g[6] = *arg2;
        func_801465A0(arg0, arg1p, *(u16 *)(D_801BBBF0 + 0x44E), 0x193, 0x2D);
        *arg2 = *arg2 + 4;
        g[7] = *arg2;
        func_801465A0(arg0, arg1p, *(u16 *)(D_801BBBF0 + 0x44C), 0x1BB, 0x2D);
        *arg2 += 4;
    } else {
    }
    if (func_80147598() != 0) {
        g[0xA] = *arg2;
        k2 = func_80006214(arg0) & 0xFF;
        s2 += (func_80146208(arg0, arg2, 0x26, 0x147, 0x13, 0x20, 0x20, 0, 0, 0xFF, 0x209, 0));
        O(arg1[k2])->unk28 = 0x800;
        func_801451C0((void *)arg1[k2], 0);
        g[0xB] = *arg2;
        s2 += (func_80146894(arg0, 1, arg2, 0x43AB0000, 35.0f, 0xB));
        g[0xC] = *arg2;
        s2 += (func_80146208(arg0, arg2, 4, 0x147, 0x13, 0x20, 0x20, 0, 0, 0xFF, 0x209, 2));
    }
    i = 0;
    g[0x1E] = *arg2;
    g[0xD] = *arg2;
    do {
        k3 = func_80006214(arg0) & 0xFF;
        s2 += (func_80146208(arg0, arg2, 0x66, (s16)((i << 6) - 0xC4), 0xB9, 0x40, 0x20, 0, 0, 0xFF, 0x20C, i + 5));
        func_80145310((void *)arg1[k3], 1, 0);
        i += 1;
    } while (i < 3);
    g[0x12] = *arg2;
    s2 += (func_80146178(arg0, arg2, -0x7C, 0xCA, 0x50, 4, 2, 0, 0, 0xFF, 0x80));
    g[0x11] = *arg2;
    s2 += (func_80146208(arg0, arg2, 0xE6, -0x7C, 0xCA, 0x20, 4, 0x20, 0, 0xFF, 0x209, 4));
    func_80145310((void *)arg1[g[0x11]], 5, 3);
    g[0xE] = *arg2;
    s2 += (func_80146178(arg0, arg2, -0xA3, 0xD2, 0x77, 3, 2, 0xFA, 0x14, 0xA, 0xA0));
    g[0xF] = *arg2;
    s2 += (func_80146178(arg0, arg2, -0xA3, 0xD2, 0x77, 3, 2, 0x80, 0x80, 0, 0x80));
    i = 0;
    g[0x1D] = *arg2;
    do {
        t2 = func_80146178(arg0, arg2, (s16)(-0x48 - i * 0x1E), 0xD6, 0x1C, 2, 0, 0, 0, 0x80, 0xFF);
        i += 1;
        s2 = (s2 + t2) & 0xFF;
    } while (i < 4);
    i = 0;
    g[0x1B] = *arg2;
    do {
        t2 = func_80146178(arg0, arg2, (s16)(-0x48 - i * 0x1E), 0xD6, 0x1C, 2, 0, 0xFF, 0, 0, 0xFF);
        i += 1;
        s2 = (s2 + t2) & 0xFF;
    } while (i < 4);
    g[0x17] = *arg2;
    k4 = func_80006214(arg0) & 0xFF;
    s2 += (func_80146208(arg0, arg2, 0x26, -0x27, 0xBB, 0x20, 0x20, 0, 0, 0xFF, 0x209, 0));
    O(arg1[k4])->unk28 = 0x800;
    func_801451C0((void *)arg1[k4], 0);
    g[0x18] = *arg2;
    s2 += (func_80146894(arg0, 1, arg2, 0xC1C40000, D_8023F090, 0x18));
    g[0x19] = *arg2;
    s2 += (func_80146208(arg0, arg2, 4, -0x27, 0xBB, 0x20, 0x20, 0, 0, 0xFF, 0x209, 2));
    g[0x1F] = *arg2;
    func_80006214(arg0);
    return s2;
#undef arg0
#undef arg1
#undef arg2
#undef g
#undef O
#undef k2
#undef k3
#undef k4
#undef t
#undef t2
}
