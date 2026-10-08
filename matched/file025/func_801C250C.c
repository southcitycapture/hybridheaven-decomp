#include "common.h"

extern void func_8001F540(s32);
extern void func_801C288C(s32);

typedef struct func_801C250C_Struct {
    s32 unk0;
    s32 unk4;
    u8 pad8[0x4];
    s32 unkC;
    s32 unk10;
} func_801C250C_Struct;

s32 func_801C250C(func_801C250C_Struct *arg0) {
    if (arg0->unkC != 0) {
        func_801C288C(arg0->unk0);
        func_8001F540(arg0->unkC);
        arg0->unkC = 0;
    }
    if (arg0->unk10 != 0) {
        func_801C288C(arg0->unk4);
        func_8001F540(arg0->unk10);
        arg0->unk10 = 0;
    }
    return 1;
}
