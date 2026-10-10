#include "context.h"
extern void func_80242080();

typedef struct func_80242048_Struct {
    u8 pad[0x90];
    u16 unk90;
    u16 unk92;
} func_80242048_Struct;

void func_80242048(func_80242048_Struct *arg0, s32 arg1) {
    if (arg0->unk90 != 0) {
        arg0->unk92 = 8;
        func_800058DC((s32)arg0, (void *)func_80242080);
    }
}
