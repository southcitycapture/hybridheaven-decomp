#define LP(p, l) LQ(p, l)
#define LQ(p, l) p##_##l
#define func_80241974 LP(fA, __LINE__)
#include "context.h"
#undef func_80241974

extern u8 D_80247A00[];
extern u8 D_80247A3C[];
extern f32 D_80248300, D_80248304, D_80248308, D_8024830C, D_80248310, D_80248314, D_80248318, D_8024831C, D_80248320, D_80248324;

void func_80242758(void *arg0, s32 arg1) {
    if (D_8011AAF4(D_80247A00, 0x46B, arg0, 0, 2, D_80248300, D_80248304, D_80248308, D_8024830C, 4294967296.0f, D_80248310, D_80248314, D_80248318, 0.0f, 35.0f, -1, -1) == 0) {
        func_8011AAF4(D_80247A3C, 0x470, arg0, 0, 1, 0.0f, D_8024831C, D_80248320, -48.5f, 0.0f, 0.0f, 19.5f, D_80248324, 0.0f, 35.0f, -1, -1);
        func_800058DC(arg0, (void (*)(void))func_802428BC);
    }
}
