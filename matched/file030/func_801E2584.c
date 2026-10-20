#include "context.h"

extern f32 D_801EC548;
extern f32 D_801EC54C;
extern f32 D_801EC550;
extern f32 D_801EC554;
extern f32 D_801EC558;
extern f32 D_801EC55C;
extern f32 D_801EC560;
extern f32 D_801EC564;
extern f32 D_801EC568;
extern f32 D_801EC56C;
extern f32 D_801EC570;
extern f32 D_801EC574;
extern f32 D_801EC578;
extern f32 D_801EC57C;
extern f32 D_801EC580;
extern f32 D_801EC584;
extern f32 D_801EC588;
extern f32 D_801EC58C;
extern f32 D_801EC590;
extern f32 D_801EC594;
extern f32 D_801EC598;
extern f32 D_801EC59C;
extern f32 D_801EC5A0;
extern f32 D_801EC5A4;
extern f32 D_801EC5A8;
extern f32 D_801EC5AC;
extern f32 D_801EC5B0;
extern f32 D_801EC5B4;
extern f32 D_801EC5B8;

s32 func_801E2584(s32 arg0, s32 arg1) {
    if (D_801EB580 == 0) goto l0;
    if (D_801EB580 == 1) goto l1;
    if (D_801EB580 == 2) goto l2;
    return 0x19;
l0:
    {
        if (func_8038BEF8(0.0f, 2.0f, -43.6f, 29.9f, D_801EC548, D_801EC54C, D_801EC550, 69.0f, D_801EC554, D_801EC558, D_801EC55C, D_801EC560, D_801EC564, D_801EC568) != 0) {
            D_801EB580 = 1;
            func_8038BED4();
            return 0x19;
        }
        goto end;
    }
l1:
    {
        if (func_8038BEF8(0.0f, D_801EC56C, -52.2f, 27.5f, D_801EC570, D_801EC574, D_801EC578, D_801EC57C, D_801EC580, D_801EC584, D_801EC588, D_801EC58C, D_801EC590, D_801EC594) != 0) {
            D_801EB580 = 2;
            func_8038BED4();
            return 0x19;
        }
        goto end;
    }
l2:
    {
        if (func_8038BEF8(0.0f, 1.5f, -47.7f, -1.0f, D_801EC598, D_801EC59C, D_801EC5A0, D_801EC5A4, D_801EC5A8, D_801EC5AC, D_801EC5B0, D_801EC5B4, D_801EC5B8, 55.0f) != 0) {
            return 0x1A;
        }
    }
end:
    return 0x19;
}
