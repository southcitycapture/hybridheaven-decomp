#include "context.h"
extern s32 func_801C2FF8();
extern u8 D_80258290[];
extern f32 D_80258554, D_80258558, D_8025855C, D_80258560;
extern u8 D_80252094[], D_802520A8[];
extern s32 D_8025A270, D_8025A274;

typedef struct func_802419BC_Struct {
    f32 x, y, z;
    s16 a;
    s16 pad;
    s32 v;
    f32 w;
    s16 b, c, d;
} func_802419BC_Struct;
typedef struct func_802419BC_Gl {
    u8 pad[0x1E8];
    f32 f[6];
} func_802419BC_Gl;

void func_802419BC(s32 arg0, s32 arg1) {
    func_802419BC_Struct s;
#define GL ((func_802419BC_Gl *)&D_801BBBF0)

    if (func_801C2FF8() != 0) {
        GL->f[0] = -72.0f;
        GL->f[1] = 16.0f;
        GL->f[2] = D_80258554;
        GL->f[3] = D_80258558;
        GL->f[4] = D_8025855C;
        GL->f[5] = 312.0f;
        func_8011AAF4(D_80258290, 0x1A5, (void *)arg0, 0, 1, 0.0f, GL->f[0], GL->f[1], GL->f[2], 0.0f, GL->f[3], GL->f[4], GL->f[5], 0.0f, 35.0f, -1, -1);
        s.a = 0x1100;
        s.v = 0x0168003E;
        s.b = 0;
        s.c = 0x96;
        s.d = 0xC00;
        s.x = -58.0f;
        s.y = D_80258560;
        s.z = 0.0f;
        s.w = 1.0f;
        func_801C2F0C(6, (s16 *)&s);
        D_8025A270 = func_80005670((void *)arg0, D_80252094);
        D_8025A274 = func_80005670((void *)arg0, D_802520A8);
        func_800058DC((void *)arg0, (void *)func_80241B50);
    }
}
#undef GL
