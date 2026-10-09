#include "context.h"

extern s32 D_8038D850;
extern s32 D_8038D854;
extern s32 D_8038DD60;

void func_801BF6C4(s32 arg0);
void func_800058DC(s32 arg0, void *arg1);
void func_8038B838(void);
void func_8038B8FC(void);

void func_8038B7E0(s32 arg0, s32 arg1) {
    D_8038DD60 = 0;
    D_8038D850 = 0;
    D_8038D854 = 0;
    func_801BF6C4(2);
    func_8038B8FC();
    func_800058DC(arg0, func_8038B838);
}
