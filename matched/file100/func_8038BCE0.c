#include "context.h"

s32 func_801BF968(void);
void func_801BF850(void *arg0, s32 arg1, void *arg2);
void func_8038C5D4(void);
void func_8038C600(void);
extern u8 D_8038D8E0[];
extern u8 D_8038E0F0[];
extern s32 D_8038DB50;
extern s32 D_8038DB54;

void func_8038BCE0(void) {
    if (func_801BF968() != 0) {
        D_8038DB50 = 0;
        D_8038DB54 = 0;
        func_801BF850(D_8038D8E0, 0, D_8038E0F0);
        func_8038C600();
        func_8038C5D4();
    }
}
