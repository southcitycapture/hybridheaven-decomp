#include "context.h"

extern s32 func_80133A24(s32);
extern void func_802412A8(void);

struct func_80241264_Struct {
    u8 pad[0x90];
    s16 unk90;
};

void func_80241264(struct func_80241264_Struct *arg0, s32 arg1) {
    if (func_80133A24(3) != 0) {
        arg0->unk90 = 0x20;
        func_800058DC(arg0, func_802412A8);
    }
}
