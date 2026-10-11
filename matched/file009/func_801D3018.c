#include "context.h"
extern void func_800058DC(void *arg0, s32 arg1);
extern s32 func_801CE0E8(void *, s8 *);
void func_801D12FC(struct func_801D12FC_Struct *arg0, s32 *arg1);

typedef struct func_801D3018_Struct {
    u8 pad[0x94];
    u8 unk94;
} func_801D3018_Struct;


void func_801D3018(func_801D3018_Struct *arg0, s32 arg1) {
    s8 sp1F;

    sp1F = 0;
    arg0->unk94 = 1;
    if (func_801CE0E8(arg0, &sp1F) == 0) {
        func_800058DC(arg0, (s32) func_801D12FC);
    }
}
