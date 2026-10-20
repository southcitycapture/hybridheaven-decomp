#include "context.h"

extern void func_801BF6C4(s32 arg0);
extern void func_8038BB6C(void);
extern void func_800058DC(s32 arg0, void *arg1);
extern void func_8038B9DC(s32 arg0, s32 arg1);
extern s32 D_8038D86C;
extern s32 D_8038D870;
extern s32 D_8038D874;
extern s32 D_8038D8CC;
extern s32 D_8038D8D0;

void func_8038B970(s32 arg0, s32 arg1) {
    D_8038D86C = 0;
    D_8038D8CC = 0;
    D_8038D8D0 = 0;
    D_8038D870 = D_8038D874 = 0;
    func_801BF6C4(3);
    func_8038BB6C();
    func_800058DC(arg0, &func_8038B9DC);
}
