#include "context.h"
extern s32 D_8038D850;
void func_800058DC(s32 arg0, void *arg1);
void func_8038B838(void);

void func_8038B930(s32 arg0, s32 arg1) {
    s32 temp = D_8038D850;

    func_800058DC(temp, (void *) func_8038B838);
}
