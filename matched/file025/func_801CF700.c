#include "common.h"
u8 func_801CF700_bss_prefix[0x8];
extern void func_8012D844(void *, s32, s32);


typedef struct {
    f32 thr;
    s32 action;
} func_801CF700_Struct;
extern f64 func_80034C24(s64);
extern u64 func_801C0B2C();
extern func_801CF700_Struct D_801DAE88[];
extern f64 D_801DD458;
u64 D_801E1268;
extern u32 D_801E1270;

void func_801CF700(void *arg0) {
    s64 d;

    d = func_801C0B2C() - D_801E1268;
    if (D_801DAE88[D_801E1270].thr <= func_80034C24(d) / D_801DD458) {
        s32 k = D_801DAE88[D_801E1270].action;
        if (k == 0) goto c0;
        if (k == 1) goto c1;
        if (k != 2) goto end;
        goto c2;
c0:
        func_8012D844(arg0, 0x30, 0);
        goto end;
c1:
        func_8012D844(arg0, 0x30, 1);
        goto end;
c2:
        func_8012D844(arg0, 0x30, 2);
end:
        D_801E1270 = D_801E1270 + 1;
        if (D_801E1270 >= 5) {
            D_801E1268 = func_801C0B2C();
        }
        D_801E1270 = D_801E1270 % 5;
    }
}
