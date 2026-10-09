#include "context.h"

typedef struct func_8002CFB0_Struct {
    u8 pad[0x14];
    s32 unk14;
    s32 unk18;
} func_8002CFB0_Struct;

extern void func_80030480(void *, void *, void *, s32);
extern void func_80030810(void);
extern void func_8003089C(void);

void func_8002CFB0(func_8002CFB0_Struct *arg0) {
    func_80030480(arg0, &func_80030810, &func_8003089C, 3);
    arg0->unk14 = 0;
    arg0->unk18 = 1;
}
