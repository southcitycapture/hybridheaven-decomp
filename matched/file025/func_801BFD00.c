#include "context.h"
extern s32 func_801C2024(s32, s32);
extern s32 func_801C218C(s32, s32);
extern s32 func_801C2000(s32, s32);
extern s64 func_801C2058(s32, s32);
extern void func_801C233C(s32, s32, s32 *);
extern void func_801C1FE8();
extern void func_801BFE60(void);
extern void func_801BFF20(void);
extern void func_801BFFAC(void);
extern s32 D_801D8CE4;
extern s32 D_801D8CE8;

s32 func_801BFD00(void) {
    s32 r;
    s64 t;

    r = func_801C2024(D_801D8CE4, D_801D8CE8);
    if (r != -1) {
        if (func_801C218C(D_801D8CE4, D_801D8CE8) != 0) {
            func_801C233C(D_801D8CE4, D_801D8CE8, D_801D8D04);
            func_801C1FE8();
            func_801C1520();
            if (func_801C2024(D_801D8CE4, D_801D8CE8) == 0) {
                func_801C0A30();
                func_801C0C44();
            }
            return 1;
        }
        if (r == 0) {
            t = func_801C2058(D_801D8CE4, D_801D8CE8);
            if (t != 0 && func_801C0B8C(t) != 0) {
                func_801C1FE8();
                return 1;
            }
        }
        func_801BFE60();
        return 1;
    }
    func_801BFF20();
    D_801D8CF4 = func_801C2090(D_801D8CE4, D_801D8CE8);
    func_801BFFAC();
    D_801D8CF8 = func_801C2000(D_801D8CE4, D_801D8CE8) == 0;
    return 0;
}
