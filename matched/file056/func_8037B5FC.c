#include "common.h"

typedef struct func_8037B5FC_Struct {
    u8 pad[0x5C];
    s32 unk5C;
} func_8037B5FC_Struct;

s32 func_80010550(s32, s32, s32);
void func_80020744(s32);
void func_800058DC(void *, void *);
extern s8 D_8038A93C;
extern void func_8037B86C(void);

void func_8037B5FC(void *arg0, s32 arg1) {
    s32 temp;

    temp = ((func_8037B5FC_Struct *)arg0)->unk5C;
    if (func_80010550(arg1, temp, arg1) != 0) {
        D_8038A93C = 0;
        func_80020744(0xA);
        func_800058DC(arg0, func_8037B86C);
    }
}
