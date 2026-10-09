#include "context.h"

extern void func_80005700(void *);
extern u16 **D_80171CEC[];
extern s8 D_801BBD76;

struct func_80126F4C_Struct {
    u8 pad0[0x36];
    u16 unk36;
    u8 pad1[0x90 - 0x38];
    s16 unk90;
};

void func_80126F4C(struct func_80126F4C_Struct *arg0, struct func_80126F4C_Struct *arg1) {
    s16 temp_v0;
    s32 temp_a0;
    u16 *var_v0;

    arg1 = arg0;
    D_801BBD76 = 1;
    temp_v0 = arg0->unk90;
    arg0->unk90 = temp_v0 - 1;
    if (temp_v0 == 0) {
        var_v0 = D_80171CEC[arg1->unk36][0];
        temp_a0 = *var_v0 & 0x0FFFFFFF & 0xFFFF;
        if (temp_a0 != 0) {
            func_80126E88(temp_a0);
            var_v0 = D_80171CEC[arg1->unk36][0];
        }
        temp_a0 = var_v0[1] & 0x0FFFFFFF & 0xFFFF;
        if (temp_a0 != 0) {
            func_80126E88(temp_a0);
        }
        func_80005700(arg1);
    }
}
