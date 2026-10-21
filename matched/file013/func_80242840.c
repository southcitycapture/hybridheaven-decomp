#include "context.h"


extern void func_80005700();
extern s32 func_80150584();

void func_80242840(struct func_80242840_Struct *arg0, s32 arg1) {
    s16 temp_v0;

    if (func_80133A24(4) != 0) {
        arg0->unk2C = 0x800;
    } else {
        arg0->unk2C = 0;
    }
    temp_v0 = arg0->unk90;
    arg0->unk90 = temp_v0 - 1;
    if (temp_v0 == 0) {
        arg0->unk90 = arg0->unk90 + 1;
        if (func_80150584() != 0) {
            func_80005700(arg0);
        }
    }
}
