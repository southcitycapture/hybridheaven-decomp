#include "context.h"

typedef struct func_801443B0_Struct {
    s16 x0;
    s16 y0;
    s16 x1;
    s16 y1;
    s16 x2;
    s16 y2;
} func_801443B0_Struct;

extern func_801443B0_Struct D_80181534;

s32 func_801443B0(void) {
    func_801443B0_Struct sp;
    s32 var_v0;

    sp = D_80181534;
    D_801BEC52 += 8;
    func_80144A4C(3, sp.x0, (s16) (sp.y0 + D_801BEC52), 0x42, 0x9E);
    func_80144A4C(4, sp.x1, (s16) (sp.y1 + D_801BEC52), 0x42, 0x9E);
    func_80144A4C(5, sp.x2, (s16) (sp.y2 + D_801BEC52), 0x42, 0x9E);
    var_v0 = 0;
    if (D_801BEC52 >= 0x2E) {
        func_801444B0(5);
        return 1;
    }
    return var_v0;
}
