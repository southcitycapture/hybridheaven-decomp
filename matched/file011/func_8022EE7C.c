#include "context.h"

struct func_8022EE7C_Inner {
    u8 pad0[8];
    u8 unk8;
    u8 pad9;
    u8 unkA;
};
struct func_8022EE7C_Struct {
    u8 pad0[0xAA];
    s16 unkAA[1];
    u8 pad1[0x2D4 - 0xAC];
    struct func_8022EE7C_Inner *unk2D4;
    u8 pad2[0x300 - 0x2D8];
    u16 unk300;
};
struct func_8022EE7C_Dst {
    u8 pad0[0xA];
    s16 unkA;
    u8 pad1[0x42 - 0xC];
    s16 unk42;
    u8 pad2[0x2DB - 0x44];
    u8 unk2DB;
};
extern u8 D_801BBBF0[];
extern f64 D_8023FAE0;

void func_8022EE7C(s32 arg0, struct func_8022EE7C_Struct *arg1) {
    struct func_8022EE7C_Dst *dst;
    struct func_8022EE7C_Inner *in;
    u16 v;
    s32 a;
    s16 m;
    s16 t;
    u32 b = (u32)D_801BBBF0;

    if ((u32)arg1 == b + 0x44C) {
        dst = (struct func_8022EE7C_Dst *)D_801BC3D8;
    } else {
        dst = (struct func_8022EE7C_Dst *)D_801BC03C;
    }
    in = arg1->unk2D4;
    if (in->unk8 != 0) {
        v = in->unk8;
        t = *(s16 *)((u8 *)arg1 + 0xAA + in->unkA * 6);
        if (t < 0) {
            a = -t;
        } else {
            a = t;
        }
        v = (u32)((((f64)a * 1.5) + 1.0) * (f64)v / D_8023FAE0);
        if (dst->unk2DB != 0) {
            v = (u32)((f64)(v / 2) + 0.5);
        }
        if (arg1->unk300 < 0x64) {
            v = (v * arg1->unk300) / 100;
        }
        m = dst->unkA;
        if ((s32)v < m) {
            dst->unk42 = v;
            return;
        }
        dst->unk42 = m;
    }
}
