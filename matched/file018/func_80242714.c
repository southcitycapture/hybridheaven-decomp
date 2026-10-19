#include "context.h"

struct func_80243D20_Top;
extern struct func_80243D20_Top *D_8025C6F0;
void func_800058DC(void *, void (*)());
extern void func_80020744(s16 arg0);
extern void func_80243B94();
extern void func_80243F68();

struct func_80242714_Inner {
    u8 pad0[0x78];
    s16 unk78;
};
struct func_80242714_Leaf {
    u8 pad0[4];
    f32 unk4;
    u8 pad8[4];
    f32 unkC;
};
struct func_80242714_Mid {
    u8 pad0[0x2C];
    struct func_80242714_Leaf *unk2C;
};
struct func_80242714_Top {
    u8 pad0[0x24];
    struct func_80242714_Mid *unk24;
    u8 pad28[0x5C - 0x28];
    struct func_80242714_Inner *unk5C;
};

s32 func_80242714(arg)
void *arg;
{
#define arg0 ((struct func_80242714_Top *)arg)
    struct func_80242714_Inner *p;
    struct func_80242714_Top *o = (struct func_80242714_Top *)D_8025C6F0;
    struct func_80242714_Leaf *a;
    struct func_80242714_Leaf *b;
    f32 dx;
    f32 dz;

    if (o != NULL) {
        a = o->unk24->unk2C;
        b = arg0->unk24->unk2C;
        p = arg0->unk5C;
        dx = a->unk4 - b->unk4;
        dz = a->unkC - b->unkC;
        if (dx * dx + dz * dz < 3600.0f) {
            p->unk78 = 1;
            func_800058DC(arg0, func_80243B94);
            return 1;
        }
    }
    if ((u8)D_8025C6FD != 0 && (u32)D_8025C700 >= 0x81U) {
        p->unk78 = 1;
        D_8025C6FD = 0;
        D_8025C700 = 0;
        D_8025C6FC = (u8)D_8025C6FC + 1;
        func_80020744(0x57B);
        if (D_8025C6E4 < (s32)(u8)D_8025C6FC) {
            func_80020744(0x279);
        }
        func_800058DC(arg0, func_80243F68);
        return 1;
    }
    D_8025C6FD = 0;
    D_8025C700 += 1;
    return 0;
}
#undef arg0
