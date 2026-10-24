#define XC2(a, b) a##b
#define XC(a, b) XC2(a, b)
#define func_800158C0 XC(f800158C0_, __LINE__)
#define func_80015798 func_80015798_ctx
#include "context.h"
#undef func_80015798
s32 func_80015798(s32 arg0, u8 *arg1, struct func_80015B50_Struct *arg2) {
    s32 n;
    s32 i;
    s32 sp3C;

    sp3C = 0;
    D_8008DFB0 = arg1;
    arg2->unk1C = (s32)D_8008DFB0;
    n = arg2->unk0 * arg2->unk4;
    if (arg2->unk10 == 1) {
        arg2->unk20 = (arg2->unk1C + arg2->unk0 * arg2->unk4 + 7) & ~7;
        func_80015A64(0x100, (void *)arg2);
    }
    D_8008DFB4 = (s32)func_80016BA0(n / 8 + 1, &sp3C);
    func_80016058((void *)arg2);
    {
        register s32 v;
        for (i = 0; i < n; i++) {
            if (func_80016B6C(D_8008DFB4, i) != 0) {
                v = D_8008DFB0[i];
            }
            *(D_8008DFB0 + i) = v;
        }
    }
    if (sp3C != 0) {
        func_8001F540(D_8008DFB4);
    }
    return (s32)arg1;
}
