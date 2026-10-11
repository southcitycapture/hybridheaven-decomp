#include "context.h"
extern void func_8038B9DC(s32 arg0, s32 arg1);
extern s32 D_8038D8CC;
void func_8038B9DC(s32 arg0, s32 arg1);

void func_8038BBC0(s32 arg0, s32 arg1) {
    s32 temp = D_8038D8CC;

    func_800058DC(temp, (void *) func_8038B9DC);
}
