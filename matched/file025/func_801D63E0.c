#include "common.h"
extern void func_8012D844(void *, s32, s32);
extern u64 func_801C0B2C(void);
extern f64 func_80034C24();
u8 func_801D63E0_bss_prefix[8];
u64 D_801E1708;
extern u32 D_801E1710;
extern f64 D_801DD5C0;
typedef struct func_801D63E0_Struct {
    f32 time;
    s32 action;
} func_801D63E0_Struct;
extern func_801D63E0_Struct D_801DB8AC[];

void func_801D63E0(void *arg0) {
    u64 elapsed;
    u64 now;
    elapsed = func_801C0B2C() - D_801E1708;
    if (D_801DB8AC[D_801E1710].time <= func_80034C24(elapsed) / D_801DD5C0) {
        if (D_801DB8AC[D_801E1710].action == 0) goto action0;
        if (D_801DB8AC[D_801E1710].action != 1) goto advance;
        goto action1;
action0:
        if (1) {
            func_8012D844(arg0, 0x36, 0);
            goto advance;
        }
action1:
        if (1) {
            func_8012D844(arg0, 0x36, 1);
            goto advance;
        }
advance:
        D_801E1710++;
        if (D_801E1710 >= 15U) {
            now = func_801C0B2C();
            D_801E1708 = now;
        }
        D_801E1710 %= 15U;
    }
}
