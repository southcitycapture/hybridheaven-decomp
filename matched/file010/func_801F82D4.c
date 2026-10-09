#include "context.h"

typedef struct func_801F82D4_Struct {
    u8 pad[0x3C];
    u16 unk3C;
} func_801F82D4_Struct;

extern void func_80005700(void *);
extern void func_801479A8(s32, void *);
extern s32 D_8021AFE0;
extern s32 D_8021AFE4;

void func_801F82D4(func_801F82D4_Struct *arg0, func_801F82D4_Struct *arg1) {
    s32 temp_v0;
    s32 temp_v1;

    arg1 = arg0;
    temp_v1 = arg0->unk3C == 0;
    temp_v0 = arg0->unk3C;
    arg0->unk3C = temp_v0 - 1;
    if (temp_v1 != 0) {
        D_8021AFE4 = 0;
        func_801479A8(D_8021AFE0, arg1);
        func_80005700(arg0);
    }
}
