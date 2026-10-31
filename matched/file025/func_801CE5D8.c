#include "common.h"
extern s32 D_801DAC84;
extern void func_8012D844(void *, s32, s32);

extern u64 func_801C0B2C();
extern f64 func_80034C24(u64);
struct func_801CE5D8_Struct { f32 unk0; s32 unk4; };
extern struct func_801CE5D8_Struct D_801DAC90[];
extern f64 D_801DD430;
u64 D_801E11E0[1];
extern u32 D_801E11E8;

void func_801CE5D8(void *arg0) {
    u64 d;

    d = func_801C0B2C() - D_801E11E0[0];
    if ((f64)D_801DAC90[D_801E11E8].unk0 <= func_80034C24(d) / D_801DD430) {
        if (D_801DAC90[D_801E11E8].unk4 == 0) goto c0;
        if (D_801DAC90[D_801E11E8].unk4 != 1) goto end;
        goto c1;
    c0:
        if (D_801DAC84 != 0) {
            func_8012D844(arg0, 0x28, 4);
        } else {
            func_8012D844(arg0, 0x28, 0);
        }
        goto end;
    c1:
        if (D_801DAC84 != 0) {
            func_8012D844(arg0, 0x28, 5);
        } else {
            func_8012D844(arg0, 0x28, 2);
        }
    end:
        D_801E11E8++;
        if (D_801E11E8 >= 0xF) {
            D_801E11E0[0] = func_801C0B2C();
        }
        D_801E11E8 = D_801E11E8 % 15;
    }
}
