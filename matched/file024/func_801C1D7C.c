#include "context.h"

typedef struct func_801C1D7C_Struct {
    u8 pad[0x3C];
    s16 unk3C;
} func_801C1D7C_Struct;

extern u8 D_801CC8CC;
extern void func_801C1DB8();

void func_801C1D7C(func_801C1D7C_Struct *arg0, s32 arg1) {
    if (D_801CC8CC == 0) {
        arg0->unk3C = 0x384;
        func_800058DC(arg0, func_801C1DB8);
    }
}
