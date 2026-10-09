#include "context.h"

extern void func_8014F400(void);
extern s32 D_801BF180;

struct func_8014D254_Struct {
    u8 pad[0x93];
    u8 unk93;
    f32 unk94;
};

s32 func_8014D254(struct func_8014D254_Struct *arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = (s32) arg0->unk94;
    arg0->unk94 += 1.0f;
    if (temp_v0 == 0) {
        func_8014F400();
        return 1;
    }
    if (D_801BF180 == 0) {
        arg0->unk93 = 1;
        arg0->unk94 = 0.0f;
        return 0;
    }
    return 1;
}
