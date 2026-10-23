#define CAT2(a, b) a##b
#define CAT(a, b) CAT2(a, b)
#define func_8024F188 CAT(func_8024F188_, __LINE__)
#define func_8024F24C CAT(func_8024F24C_, __LINE__)
#define func_8024F818 CAT(func_8024F818_, __LINE__)
#define func_8024FFF4 CAT(func_8024FFF4_, __LINE__)
#define func_80010550 func_80010550_ctx
#include "context.h"
#undef func_80010550
extern s32 func_80010550(void **, s32);
#undef func_8024F188
#undef func_8024F24C
#undef func_8024F818
#undef func_8024FFF4

extern u8 D_80259CFC[];
extern f32 D_8025A0F4;
extern f32 D_8025A0F8;
extern f32 D_8025A0FC;
extern f32 D_8025A100;
extern f32 D_8025A104;
extern f32 D_8025A108;

typedef struct func_8024FFF4_Struct {
    u8 pad[0x5C];
    s32 unk5C;
} func_8024FFF4_Struct;

void func_8024FFF4(func_8024FFF4_Struct *arg0, void **arg1) {
    s32 t = arg0->unk5C;

    if (func_80010550(arg1, t) != 0 && func_800178E8() != 0) {
        GF(0) = D_8025A0F4;
        GF(1) = D_8025A0F8;
        GF(2) = D_8025A0FC;
        GF(3) = D_8025A100;
        GF(4) = D_8025A104;
        GF(5) = D_8025A108;
        func_8011AAF4(D_80259CFC, 0x520, arg0, 0, 1, 0.0f, GF(0), GF(1), GF(2), 0.0f, GF(3), GF(4), GF(5), 0.0f, 35.0f, -1, -1);
        func_800058DC(arg0, func_80250110);
    }
}
