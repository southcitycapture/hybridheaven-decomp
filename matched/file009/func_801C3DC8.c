#include "context.h"

extern u8 D_801E2B3C[];
extern u8 D_801E2B80[];
extern void func_8011AAF4(void *, s32, s32, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);

#ifdef D
#define N (D_801BBCD8->n)
#else
struct func_801C3DC8_Node {
    u8 pad0[0x30];
    f32 u30, u34, u38, u3C, u40, u44;
};
struct func_801C3DC8_Struct {
    u8 pad0[0x2C];
    struct func_801C3DC8_Node *n;
};
extern struct func_801C4058_Struct *D_801BBCD8;
#define N (((struct func_801C3DC8_Struct *)D_801BBCD8)->n)
#endif

s32 func_801C3DC8(s32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7, f32 arg8) {
    func_8011AAF4(D_801E2B3C, 0x18C, arg0, 0, 1, 0.0f,
        N->u30 + ((arg1 - N->u30) * arg7),
        N->u34 + ((arg2 - N->u34) * arg7),
        N->u38 + ((arg3 - N->u38) * arg7), 0.0f,
        N->u3C + ((arg4 - N->u3C) * arg7),
        N->u40 + ((arg5 - N->u40) * arg7),
        N->u44 + ((arg6 - N->u44) * arg7), 0.0f, arg8, -1, -1);
    if (((s32) ((f64) (arg1 - N->u30) * 0.5) == 0) && ((s32) ((f64) (arg2 - N->u34) * 0.5) == 0) && ((s32) ((f64) (arg3 - N->u38) * 0.5) == 0) && ((s32) ((f64) (arg4 - N->u3C) * 0.5) == 0) && ((s32) ((f64) (arg5 - N->u40) * 0.5) == 0) && ((s32) ((f64) (arg6 - N->u44) * 0.5) == 0)) {
        func_8011AAF4(D_801E2B80, 0x194, arg0, 0, 1, 0.0f, arg1, arg2, arg3, 0.0f, arg4, arg5, arg6, 0.0f, arg8, -1, -1);
        return 0;
    }
    return 1;
}
#undef N
