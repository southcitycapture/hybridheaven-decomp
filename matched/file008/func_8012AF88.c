#include "common.h"
extern s32 B_8001EF38(f32, f32);
struct func_8012A72C_Vec {
    u8 pad0[4];
    f32 x;
    u8 pad1[4];
    f32 y;
};
struct func_8012A72C_Obj {
    u8 pad0[0x2C];
    struct func_8012A72C_Vec *vec;
};
extern struct func_8012A72C_Obj *D_801BBCD0;
typedef struct T_func_801EFE0C_ret { /* size >= 0x18 */
    /* 0x000 */ u8 pad0[0x4];
    /* 0x004 */ f32 x; /* 182 uses */
    /* 0x008 */ f32 y; /* 117 uses */
    /* 0x00C */ f32 z; /* 169 uses */
    /* 0x010 */ s16 unk10; /* 1 use */
    /* 0x012 */ s16 angle; /* 134 uses */
    /* 0x014 */ s16 unk14; /* 1 use */
    /* 0x016 */ u8 pad16[0x2];
} T_func_801EFE0C_ret;
typedef struct T_D_801BBCD0_p0 { /* size >= 0x30 */
    /* 0x000 */ u8 pad0[0x2C];
    /* 0x02C */ struct T_func_801EFE0C_ret *inner; /* 348 uses */
} T_D_801BBCD0_p0;


#define VEC (((T_D_801BBCD0_p0 *)D_801BBCD0)->inner)
#define WRAP(v) (((v) & 0x1000) ? (((v) & 0x1FFF) - 0x2000) : ((v) & 0x1FFF))
#define ABS(v) ((v) < 0 ? -(v) : (v))

s32 func_8012AF88(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, u8 arg6) {
    s16 d;
    s16 a;

    if (arg5 * arg5 < (arg0 - VEC->x) * (arg0 - VEC->x) + (arg1 - VEC->y) * (arg1 - VEC->y) + (arg2 - VEC->z) * (arg2 - VEC->z)) {
        return 0;
    }
    a = WRAP(B_8001EF38(arg0 - arg3, arg2 - arg4));
    d = WRAP((s16)(B_8001EF38(VEC->x - arg3, VEC->z - arg4) - a));
    if (ABS(d) > 0x200) {
        return 0;
    }
    if (arg6 == 0) {
        d = VEC->angle - a + 0x1000;
        d = WRAP(d);
        if (ABS(d) > 0x400) {
            return 0;
        }
    }
    return 1;
}
