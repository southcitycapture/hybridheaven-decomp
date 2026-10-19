#include "context.h"
extern s32 func_801D0408();
extern f32 D_801FD3F8;
extern f32 D_801FD3FC;

#define CH(p) (*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(p) + 8) + 8) + 0x24) + 0x2C))

s32 func_801F8EFC(s32 arg0, s32 arg1) {
    u8 **p;
    s32 s = D_801FBA50;
    if (s == 0) goto c0;
    if (s == 1) goto c1;
    if (s == 2) goto c2;
    if (s == 3) goto c3;
    return 6;
c0:
    if (func_801C0B8C(0x0226D79F) != 0) {
        p = (u8 **)&D_801DAB14;
        *(f32 *)(CH(p) + 4) = D_801FD3F8;
        *(f32 *)(CH(p) + 8) = 0.0f;
        *(f32 *)(CH(p) + 0xC) = D_801FD3FC;
        *(s16 *)(CH(p) + 0x12) = 0x1B8E;
        func_801CC470(1, 0x01900028, 0, 0, 3.0f);
        D_801FBA50 = 1;
    }
    goto end;
c1:
    if (func_801D0408() != 0) {
        func_801CC470(1, 0x01900026, 0, 0, 3.0f);
        D_801FBA50 = 2;
    }
    goto end;
c2:
    if (func_801D0408() != 0) {
        func_801CC470(1, 0x01900026, 0, 0, 3.0f);
        D_801FBA50 = 3;
    }
    goto end;
c3:
    if (func_801D0408() != 0) {
        func_801CC470(1, 0x01900026, 0, 1, 1.0f);
        return 7;
    }
end:
    return 6;
}
