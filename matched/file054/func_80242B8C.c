#define MYCAT2(a, b) a##b
#define MYCAT(a, b) MYCAT2(a, b)
#define func_80241974 MYCAT(myctx_80241974_, __LINE__)
#define func_80246360 MYCAT(myctx_80246360_, __LINE__)
#include "context.h"

extern u8 D_80247B68[];
extern u8 D_80247BA4[];
extern f32 D_80248378;
extern f32 D_8024837C;
extern f32 D_80248380;
extern f32 D_80248384;
extern f32 D_80248388;
extern f32 D_8024838C;
extern f32 D_80248390;
extern f32 D_80248394;
extern f32 D_80248398;
extern f32 D_8024839C;

#define F80242B8C(o) (*(f32 *) ((u8 *) &D_801BBBF0 + (o)))

void func_80242B8C(struct func_80242D38_Struct *arg0, s32 arg1) {
    if (D_8011AAF4(D_80247B68, 0x4A3, arg0, 0, 2, D_80248378, D_8024837C, D_80248380, -16.0f, 4294967296.0f, D_80248384, D_80248388, D_8024838C, 0.0f, 35.0f, -1, -1) == 0) {
        F80242B8C(0x1E8) = D_80248390;
        F80242B8C(0x1EC) = D_80248394;
        F80242B8C(0x1F0) = D_80248398;
        F80242B8C(0x1F4) = D_8024839C;
        F80242B8C(0x1F8) = 16.5f;
        F80242B8C(0x1FC) = 13.0f;
        func_8011AAF4(D_80247BA4, 0x4AF, arg0, 0, 1, 0.0f, F80242B8C(0x1E8), F80242B8C(0x1EC), F80242B8C(0x1F0), 0.0f, F80242B8C(0x1F4), F80242B8C(0x1F8), F80242B8C(0x1FC), 0.0f, 35.0f, -1, -1);
        arg0->unk3C = 0;
        func_800058DC(arg0, (void (*)(void))func_80242D38);
    }
}
