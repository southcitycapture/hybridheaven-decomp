#include "context.h"

extern f32 D_8038B424;

typedef struct func_80371E84_Struct {
    u8 pad[0x68];
    u8 *unk68;
    f32 unk6C;
    f32 unk70;
    f32 unk74;
    u8 unk78;
    u8 unk79;
} func_80371E84_Struct;
struct func_80372094_Struct;
void func_80372094(struct func_80372094_Struct *arg0, s32 arg1);

void func_80371E84(func_80371E84_Struct *arg0, s32 arg1) {
    s32 pad;
    f32 fx, fy, fz;
    u8 *c;
    u8 *p;
    u8 v0, t0, n, t1, t2, t3;

    p = arg0->unk68;
    fx = arg0->unk6C;
    fy = arg0->unk70;
    fz = arg0->unk74;
    c = &arg0->unk79;
    if (p[0x2F8] == 0) {
        if (++*c < 5) return;
    }
    if (p[0x2D8] == 0x12 && p[0x2DB] != 0) {
        arg0->unk78 = 1;
        v0 = 0;
        t0 = 0xCF;
        t1 = 0xCF;
        t2 = 0xCF;
        t3 = 0;
    } else {
        arg0->unk78 = 0;
        v0 = 0xA0;
        t0 = 0;
        t1 = 0xFF;
        t2 = 0xFF;
        t3 = 0xFF;
    }
    if (*(s16 *)(p + 2) <= 0 || ((u32)(*(u32 *)(p + 0x30) * 2) >> 30) != 0) {
        func_801CE330(fz, 0, fx, (f32)((f64)fy + 1.0), fz, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0, 0xFF, 0xA, 0xA, D_8038B424, 0);
    }
    func_801CE330(fz, 0x13, fx, (f32)((f64)fy + 1.0), fz, v0, t0, 0, 0xFF, t1, t2, t3, 0, 1, 0xA, 0.234375f, 4);
    func_800058DC(arg0, (void *)func_80372094);
}
