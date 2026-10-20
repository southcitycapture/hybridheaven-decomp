#include "context.h"
extern s32 func_800058DC(void *, void *);
void func_801387C0(s32 arg0, s32 arg1);

extern s32 func_8012C6B4(s32);
extern void func_80129FB8(f32, f32, f32, f32, f32, f32, f32, s32, s32, s32, s32, s32, s32, s32, s32, f32, s32, s32);
extern f32 D_8018DCF4;
extern f32 D_8018DCF8;

typedef struct func_801383CC_Struct {
    u8 pad0[0x38];
    struct func_801383CC_Inner *unk38;
} func_801383CC_Struct;
struct func_801383CC_Inner {
    u8 pad0[6];
    s16 unk6;
    s16 unk8;
    s16 unkA;
};

void func_801383CC(func_801383CC_Struct *arg0, s32 arg1) {
    s32 a, b, c, d;
    f32 z = 0.0f;
    struct func_801383CC_Inner *p;

    a = func_8012C6B4(0x80);
    b = func_8012C6B4(0x1F);
    c = func_8012C6B4(0x1F);
    d = func_8012C6B4(0x1F);
    p = arg0->unk38;
    func_80129FB8((f32) ((f64) (f32) p->unk6 / 10.0), (f32) ((f64) (f32) p->unk8 / 10.0), (f32) ((f64) (f32) p->unkA / 10.0), z, z, z, z, 0xFF, 0xFF, a, b + 0xE0, c, d, 0xFF, 8, 1.0f, 0xE, 0);
    a = func_8012C6B4(0x80);
    b = func_8012C6B4(0x1F);
    c = func_8012C6B4(0x1F);
    d = func_8012C6B4(0x1F);
    p = arg0->unk38;
    func_80129FB8((f32) ((f64) (f32) p->unk6 / 10.0), (f32) (((f64) (f32) p->unk8 / 10.0) + 20.0), (f32) ((f64) (f32) p->unkA / 10.0), z, z, z, z, 0xFF, 0xFF, a, b + 0xE0, c, d, 0xFF, 8, D_8018DCF4, 0xB, 0);
    a = func_8012C6B4(0x80);
    b = func_8012C6B4(0x1F);
    c = func_8012C6B4(0x1F);
    d = func_8012C6B4(0x1F);
    p = arg0->unk38;
    func_80129FB8((f32) ((f64) (f32) p->unk6 / 10.0), (f32) ((f64) (f32) p->unk8 / 10.0), (f32) ((f64) (f32) p->unkA / 10.0), z, z, z, z, 0xFF, 0xFF, a, b + 0xE0, c, d, 0xFF, 8, D_8018DCF8, 8, 0);
    p = arg0->unk38;
    func_80129FB8((f32) ((f64) (f32) p->unk6 / 10.0), (f32) (((f64) (f32) p->unk8 / 10.0) + 20.0), (f32) ((f64) (f32) p->unkA / 10.0), z, z, z, z, 0x4B, 0x4B, 0x4B, 0x32, 0x32, 0x32, 0x80, 8, 1.0f, 0xA, 0);
    func_800058DC(arg0, func_801387C0);
}
