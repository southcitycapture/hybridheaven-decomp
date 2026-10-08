#include "context.h"

struct func_8013B208_Struct {
    u8 pad[0x60];
    u8 unk60;
};

extern void func_800279F0(void *, s32);
extern u8 D_801BD980[];
extern u8 D_801BEB00[];

s32 func_8013B208(struct func_8013B208_Struct *arg0) {
    u8 temp_v0;

    temp_v0 = arg0->unk60;
    if ((s32) temp_v0 < 0x14) {
        D_801BEB00[temp_v0] = 0;
        func_800279F0(&D_801BD980[arg0->unk60 * 0xE0], 0xE0);
        return 0;
    }
    return 1;
}
