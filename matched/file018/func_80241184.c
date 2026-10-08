#include "context.h"

typedef struct func_80241184_Struct {
    u8 pad0[0x90];
    u16 unk90;
    u16 unk92;
} func_80241184_Struct;

extern s32 func_80126B14(void *, void *, u16, s32);
extern u8 func_80126EAC[];
extern u8 func_802411D4[];

void func_80241184(func_80241184_Struct *arg0, s32 arg1) {
    if (arg0->unk92 != 0) {
        if (func_80126B14(arg0, func_80126EAC, arg0->unk90, 9) != 0) {
            func_800058DC((s32)arg0, func_802411D4);
        }
    }
}
