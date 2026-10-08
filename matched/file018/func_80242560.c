#include "common.h"

typedef struct func_80242560_Struct {
    u8 pad[0x90];
    s16 unk90;
} func_80242560_Struct;

extern s32 func_80126944(void);
extern void func_80020744(s32);
extern void func_800058DC(void *, void *);
extern void func_802425AC(void);

void func_80242560(func_80242560_Struct *arg0, void *arg1) {
    if (func_80126944() == 0) {
        func_80020744(7);
        arg0->unk90 = 0x18;
        func_800058DC(arg0, func_802425AC);
    }
}
