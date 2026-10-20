#include "context.h"

extern u8 D_802499D0[];
extern f32 D_80249AB4;
extern f32 D_80249AB8;
void func_802415D8(s32 arg0, s32 arg1);

void func_802414F8(s32 arg0, s32 arg1) {
    func_8011AAF4(D_802499D0, 0x198, arg0, 2, 1, 0.0f, D_80249AB4, 21.0f, 248.0f, 0.0f, D_80249AB8, 18.0f, 318.0f, 0.0f, 35.0f, -1, -1);
    D_801BBD84 = 2;
    {
        extern void func_80133980();
        func_80133980(4);
    }
    func_801FBB20();
    func_800058DC((void *)arg0, (void *)&func_802415D8);
}
