#include "context.h"
extern u8 *D_801DAB14;
extern s32 func_801C0B8C(u64);
extern s32 func_801CC470(s32 arg0, s32 arg1, s32 arg2, s32 arg3, f32 arg4);

struct func_801E5348_W {
    s32 pad0;
    f32 f4;
    f32 f8;
    f32 fC;
    u8 pad10[2];
    s16 h12;
};

struct func_801E5348_Z {
    u8 pad[0x2C];
    struct func_801E5348_W *w;
};

struct func_801E5348_Y {
    u8 pad[0x24];
    struct func_801E5348_Z *z;
};

struct func_801E5348_X {
    s32 pad0;
    s32 pad4;
    struct func_801E5348_Y *y;
};

extern s32 D_801F3DDC;
extern f32 D_801F5878;

s32 func_801E5348(s32 arg0, s32 arg1) {
    struct func_801E5348_X **p;

    if (func_801C0B8C(0x1E8480) != 0) {
        p = (struct func_801E5348_X **) &D_801DAB14;
        (*p)->y->z->w->f4 = 0.0f;
        (*p)->y->z->w->f8 = D_801F5878;
        (*p)->y->z->w->fC = -45.0f;
        (*p)->y->z->w->h12 = 0;
        func_801CC470(0, 0x0348000F, 0, 0x1000, 3.0f);
        D_801F3DDC = 0;
        return 0x11;
    }
    return 0x10;
}
