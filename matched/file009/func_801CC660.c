#include "common.h"

typedef struct func_801CC660_Struct {
    u8 pad[0x4C];
    u16 unk4C;
    u16 unk4E;
} func_801CC660_Struct;

extern void func_80005700(s32);
extern s32 func_80126944(void);
extern void func_80126E88(s32);
extern func_801CC660_Struct *D_801E4080;

void func_801CC660(s32 arg0, s32 arg1) {
    if ((s32) D_801E4080->unk4C >= (s32) (D_801E4080->unk4E + 0x8002)) {
        if (func_80126944() != 1) {
            func_80126E88(0x1AA);
            func_80126E88(0x1AB);
            func_80126E88(0x1AC);
            func_80126E88(0x1AD);
            func_80126E88(0x1AF);
        }
        func_80005700(arg0);
        D_801E4080 = NULL;
    }
}
