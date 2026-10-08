#include "common.h"

typedef struct func_801FF7DC_Struct {
    u8 pad[0xA0];
    u16 unkA0;
} func_801FF7DC_Struct;

extern s32 func_801C3D90();
extern void func_800058DC(void *, void *);
extern void func_801FF83C();
extern void (*D_8021793C[])();

void func_801FF7DC(func_801FF7DC_Struct *arg0, s32 arg1) {
    void (*temp_v0)(void *, s32);

    if (func_801C3D90(arg0, arg1) != 0) {
        temp_v0 = (void (*)(void *, s32)) D_8021793C[arg0->unkA0];
        if (temp_v0 != NULL) {
            temp_v0(arg0, arg1);
        }
        func_800058DC(arg0, func_801FF83C);
    }
}
