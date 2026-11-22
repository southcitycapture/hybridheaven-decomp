#include "common.h"

extern void func_8012D844(void *, s32, s32);
extern u64 func_801C0B2C(void);
extern f64 func_80034C24();

typedef struct func_801D6B48_Struct {
    f32 time;
    s32 action;
} func_801D6B48_Struct;

extern func_801D6B48_Struct D_801DB984[];
u64 D_801E1758;
u32 D_801E1760;

void func_801D6B48(void *arg0) {
    u64 elapsed;
    u64 now;

    elapsed = func_801C0B2C() - D_801E1758;
    if (D_801DB984[D_801E1760].time <= func_80034C24(elapsed) / 1000000.0) {
        if (D_801DB984[D_801E1760].action == 0) goto action0;
        if (D_801DB984[D_801E1760].action != 1) goto advance;
        goto action1;
action0:
        func_8012D844(arg0, 0x28, 4);
        goto advance;
action1:
        func_8012D844(arg0, 0x28, 5);
        goto advance;
advance:
        D_801E1760++;
        if (D_801E1760 >= 16U) {
            now = func_801C0B2C();
            D_801E1758 = now;
        }
        D_801E1760 %= 16U;
    }
}
