#include "context.h"

extern s32 func_80151478(s32);
extern void func_80151114();
extern void func_80133980();
extern void func_80005700();

typedef struct func_8024D19C_Struct {
    u8 pad[0x90];
    u16 unk90;
} func_8024D19C_Struct;

void func_8024D19C(func_8024D19C_Struct *arg0, s32 arg1) {
    if (func_80151478(D_8025A2D4) < 0x800) {
        func_801514B0(D_8025A2D4, 0x71);
    }
    if (arg0->unk90++ >= 0x28) {
        func_80151114(D_8025A2D4, arg0);
        func_80151114(D_8025A2D8);
        func_80133980(0x73);
        func_80005700(arg0);
    }
}
