typedef struct { int id; unsigned short frame; unsigned char pad6[2]; float speed; } AnimEarly0;
#define ACAT2(a, b) a##b
#define ACAT(a, b) ACAT2(a, b)
#define func_8036D30C_Anim ACAT(AnimL_, __LINE__)
#define AnimL_58 AnimEarly0
#define AnimL_63 AnimEarly0
#define AnimL_195 AnimR
#define AnimL_200 func_8036D30C_Anim
#define AnimL_203 func_8036D30C_Anim
#define AnimL_226 func_8036D30C_Anim
#define AnimL_228 func_8036D30C_Anim
#define func_80369DEC func_80369DEC_ctx
#include "context.h"
#undef func_80369DEC

extern f64 D_8038B0A8;
extern f64 D_8038B0B0;
extern f64 D_8038B0B8;
extern f64 D_8038B0C0;

s32 func_80369DEC(struct func_80369C7C_Obj1 *arg0, s16 arg1) {
    u8 *p;
    s16 off;
    f64 d;
    s16 x;

    if (arg0 == D_801BBBF0.unkDC) {
        p = D_801BC03C;
    } else {
        p = D_801BC3D8;
    }
    x = (s16)((s16)(((arg0 != D_801BBBF0.unkDC) ? 0 : 0x1000) + D_801BBBF0.unkB98) & 0x1FFF);
    if (p[0x2D8] == 6 || p[0x2D8] == 8) {
        return func_80369CF4(arg0, arg1);
    }
    d = (f64)(s16)((s16)(x - arg1) & 0x1FFF);
    if ((D_8038B0A8 < d) & (d < D_8038B0B0)) return 1;
    if ((D_8038B0B8 < d) & (d < D_8038B0C0)) return 0;
    return 2;
}
