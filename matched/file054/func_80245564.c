#define MYCAT2(a, b) a##b
#define MYCAT(a, b) MYCAT2(a, b)
#define func_80241974 MYCAT(myctx_80241974_, __LINE__)
#define func_80246360 MYCAT(myctx_80246360_, __LINE__)
#include "context.h"

typedef struct {
    u8 pad[0x3C];
    u16 unk3C;
} func_80245564_Struct;

extern u8 D_8024696C[];
extern u8 D_8024737C[];
extern u8 D_80247FDC[];
extern void func_802456C8(void);
extern s32 D_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);

#define FL(off) (*(f32 *)((u8 *)&D_801BBBF0 + (off)))

void func_80245564(func_80245564_Struct *arg0, s32 arg1) {
    s32 cnt;
    f64 d;

    cnt = arg0->unk3C++;
    D_8011AAF4(D_80247FDC, 0x7B7, arg0, 0, 1, 0.0f, FL(0x1E8), FL(0x1EC), FL(0x1F0), 0.0f, FL(0x1F4), FL(0x1F8), FL(0x1FC), 0.0f, 25.5f, -1, -1);
    if (!(cnt % 2)) {
        d = 0.5;
    } else {
        d = -0.5;
    }
    FL(0x1EC) += d;
    if (func_800178E8() != 0 && func_80151790(D_80248804) == 0) {
        func_800179B0(D_8024737C);
        func_8015115C(D_80248804, D_8024696C);
        arg0->unk3C = 0;
        func_800058DC(arg0, func_802456C8);
    }
}
