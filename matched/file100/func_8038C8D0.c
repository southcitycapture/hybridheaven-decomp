#include "context.h"

extern void func_801BF6C4(s32 a0);
extern void func_8038C9FC(s32 a0, s32 a1);
extern s32 D_8038DB6C;
extern s32 D_8038DB70;
extern s32 D_8038DB74;

void func_8038C8D0(void) {
    D_8038DB6C = 0;
    func_8038C9FC(D_8038DB70, D_8038DB74);
    func_801BF6C4(6);
    D_8038DB6C = 1;
}
