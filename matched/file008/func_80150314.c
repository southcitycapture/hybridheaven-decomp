#include "common.h"

struct func_80150314_Struct {
    u8 pad[0x90];
    u8 unk90;
    u8 pad2[2];
    u8 unk93;
    f32 unk94;
};

void func_80150314(struct func_80150314_Struct *arg0, s32 arg1) {
    s32 *p;
    f32 temp;

    p = &arg1;
    temp = 0.0f;
    arg0->unk90 = arg1;
    arg0->unk93 = 0;
    arg0->unk94 = temp;
}
