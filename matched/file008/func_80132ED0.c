#include "common.h"

extern void func_80005700(void *);
extern void func_8001F540(s32, void *);

typedef struct func_80132ED0_Struct {
    u8 pad0[0x90];
    u16 unk90;
    u8 pad1[0x6];
    s32 unk98;
} func_80132ED0_Struct;

void func_80132ED0(func_80132ED0_Struct *arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = arg0->unk90;
    arg0->unk90 = temp_v0 - 1;
    if (temp_v0 == 0) {
        func_8001F540(arg0->unk98, arg0);
        func_80005700(arg0);
    }
}
