#include "common.h"

typedef struct func_8014418C_StructWords {
    s32 w0;
    s32 w1;
    s32 w2;
} func_8014418C_StructWords;

extern func_8014418C_StructWords D_8018151C;
extern s16 D_801BEC52;
void func_801444B0(s32 a0);
void func_80144A4C(s32 a0, s16 a1, s16 a2, s32 a3, s32 a4);

s32 func_8014418C(void) {
    union {
        func_8014418C_StructWords w;
        s16 h[6];
    } sp;

    sp.w = D_8018151C;
    D_801BEC52 += 8;
    func_80144A4C(5, sp.h[0], (s16) (sp.h[1] - D_801BEC52), 0x42, 0x9E);
    func_80144A4C(3, sp.h[2], (s16) (sp.h[3] - D_801BEC52), 0x42, 0x9E);
    func_80144A4C(4, sp.h[4], (s16) (sp.h[5] - D_801BEC52), 0x42, 0x9E);
    if (D_801BEC52 >= 0x2E) {
        func_801444B0(5);
        return 1;
    }
    return 0;
}
