#include "context.h"

extern s32 func_801BF968(void);
extern void func_800058DC(s32 arg0, void *arg1);
extern void func_8038B87C(s32 arg0, s32 arg1);
extern s32 D_8038DD60;

void func_8038B838(s32 arg0, s32 arg1) {
    D_8038DD60 = 1;
    if (func_801BF968() != 0) {
        func_800058DC(arg0, func_8038B87C);
    }
}
