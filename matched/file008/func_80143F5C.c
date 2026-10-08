#include "context.h"

typedef struct func_80143F5C_Struct {
    s16 x0;
    s16 y0;
    s16 x1;
    s16 y1;
    s16 x2;
    s16 y2;
} func_80143F5C_Struct;

extern func_80143F5C_Struct D_80181504;

s32 func_80143F5C(void) {
    func_80143F5C_Struct sp;
    s32 var_v0;

    sp = D_80181504;
    D_801BEC52 += 8;
    func_80144A4C(1, sp.x0, (s16) (sp.y0 + D_801BEC52), 0x42, 0x9E);
    func_80144A4C(2, sp.x1, (s16) (sp.y1 + D_801BEC52), 0x42, 0x9E);
    func_80144A4C(5, sp.x2, (s16) (sp.y2 + D_801BEC52), 0x42, 0x9E);
    var_v0 = 0;
    if (D_801BEC52 >= 0x2E) {
        func_801444B0(5);
        return 1;
    }
    return var_v0;
}
