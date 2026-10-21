#include "context.h"

s32 func_801F1370(s32 arg0, s32 arg1) {
    func_801ED14C_Struct0 *p;
    u32 n;
    f32 k;

    if (D_801F4D08 == 0) goto c0;
    if (D_801F4D08 == 1) goto c1;
    return 0x1A;
c0:
    func_801C0D04(4, 2);
    func_801D271C(1);
    D_801F4D08 = 1;
    goto end;
c1:
    if (func_801C0DE4(4, 2, 0x3FC00000) != 0) {
        func_801C0EB0(4, 2);
        func_801D271C(0);
        return 0x1B;
    }
    p = OBJ;
    k = 1.5f;
    n = k * 30.0f;
    p->unk12 += (s16)((2048.0f * (180.0f / n)) / 90.0f);
end:
    return 0x1A;
}
