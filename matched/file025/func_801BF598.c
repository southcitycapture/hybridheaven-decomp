#include "context.h"

extern s32 D_801D8CF8;
extern s32 D_801D8D00;

void func_801BF9B0(s32 arg0);
void func_801C0058(void);
void func_801BF388(void);
void func_801BF604(void);

void func_801BF598(s32 arg0, s32 arg1) {
    if (D_801D8CF8 != 0) {
        func_801C0058();
        func_800058DC(arg0, (void *) func_801BF604);
        return;
    }
    func_801BF9B0(arg0);
    D_801D8D00 = 0;
    func_800058DC(arg0, (void *) func_801BF388);
}
