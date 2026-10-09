#include "context.h"

s32 func_801270C0(void *arg0);
void func_80020744(s32 arg0);

typedef struct func_802417D0_Struct {
    u8 pad[4];
    s16 unk4;
} func_802417D0_Struct;

extern func_802417D0_Struct D_801BBF90;

void func_802417D0(void *arg0, s32 arg1) {
    if (func_801270C0(arg0) != 0) {
        func_80020744(7);
        D_801BBF90.unk4 = 0x1F3;
    }
}
