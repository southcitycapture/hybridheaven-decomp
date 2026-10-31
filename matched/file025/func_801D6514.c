#include "common.h"
u8 func_801D6514_bss_prefix[8];
extern void func_8012D844(void *, s32, s32);

extern u64 func_801C0B2C(void);
extern f64 func_80034C24(u64);
u64 D_801E1718;
extern u32 D_801E1720;
extern f64 D_801DD5C8;
typedef struct func_801D6514_Struct {
    f32 time;
    s32 action;
} func_801D6514_Struct;
extern func_801D6514_Struct D_801DB924[];

void func_801D6514(void *arg0) {
    u64 elapsed;
    u64 now;
    elapsed = func_801C0B2C() - D_801E1718;
    if (D_801DB924[D_801E1720].time <= func_80034C24(elapsed) / D_801DD5C8) {
        if (D_801DB924[D_801E1720].action == 0) goto action0;
        if (D_801DB924[D_801E1720].action != 1) goto advance;
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
        D_801E1720++;
        if (D_801E1720 >= 5U) {
            now = func_801C0B2C();
            D_801E1718 = now;
        }
        D_801E1720 %= 5U;
    }
}
