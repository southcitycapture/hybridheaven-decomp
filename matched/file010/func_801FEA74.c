#include "context.h"

extern void func_80020744(s32);
extern void func_800023EC(void);
extern void func_8012FE50(s32, s32, s32, s32, s32);
extern s16 D_80089356;

struct func_801FEA74_Struct {
    u8 pad[0xB0];
    s16 unkB0;
};

void func_801FEA74(struct func_801FEA74_Struct *arg0, s32 arg1) {
    if (arg0->unkB0++ >= 0x33) {
        func_80020744(0xA);
        D_80089356 = 0;
        func_800023EC();
        func_8012FE50(0xE, 0x73, 1, 1, 0);
    }
}
