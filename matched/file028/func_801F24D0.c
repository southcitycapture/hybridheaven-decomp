#include "context.h"

extern s32 D_80206D30;
extern f32 D_80208A00;
extern f32 D_80208A04;
extern f32 D_80208A08;
extern f32 D_80208A0C;

s32 func_801F24D0(s32 arg0, s32 arg1) {
    s32 state;

    state = D_80206D30;
    if (state == 0) {
        goto case0;
    }
    if (state != 1) {
        goto ret1;
    }
    goto case1;

case0:
    func_8038D28C(0x92);
    D_80206D30 = 1;
    goto ret1;

case1:
    if (func_801C0B8C(0) != 0) {
        func_8038BD50(D_80208A00, D_80208A04, 0xC25F3333);
        D_8038BD88(D_80208A08, D_80208A0C, 0xC20CCCCD);
        return 2;
    }

ret1:
    return 1;
}
