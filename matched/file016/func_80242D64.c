#include "common.h"
struct func_80242F10_Inner {
    u8 pad[4];
    f32 unk4;
};
struct func_80242F10_Outer {
    u8 pad[0x2C];
    struct func_80242F10_Inner *unk2C;
};
extern struct func_80242F10_Outer *D_801BBCD0;
void func_800058DC(void *, void *);
void func_80242F10(void *arg0, void *arg1);


typedef struct func_80242D64_Struct {
    u8 pad0[0x3C];
    u16 unk3C;
} func_80242D64_Struct;

typedef struct func_80242D64_Inner {
    u8 pad0[4];
    f32 unk4;
    u8 pad8[4];
    f32 unkC;
} func_80242D64_Inner;
extern void func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern u8 D_8024EC60[];
extern u8 D_8024EC98[];
extern f32 D_8024EDCC;
extern f32 D_8024EDD0;
extern f32 D_8024EDD4;
extern f32 D_8024EDD8;

void func_80242D64(func_80242D64_Struct *arg0, s32 arg1) {
    func_80242D64_Inner *p;

    if (arg0->unk3C++ >= 15) {
        p = (func_80242D64_Inner *)D_801BBCD0->unk2C;
        if (p->unk4 < 0.0f) {
            func_8011AAF4(D_8024EC60, 0x375, arg0, 0, 1, 0.0f, -635.0f, 320.0f, p->unkC + 130.0f, 0.0f, -635.0f, 270.0f, p->unkC + 50.0f, 0.2f, 35.0f, -1, -1);
        } else {
            func_8011AAF4(D_8024EC98, 0x37A, arg0, 0, 1, 0.0f, 395.0f, 320.0f, p->unkC + 130.0f, 0.0f, 395.0f, 270.0f, p->unkC + 50.0f, 0.2f, 35.0f, -1, -1);
        }
        arg0->unk3C = 0;
        func_800058DC(arg0, func_80242F10);
    }
}
