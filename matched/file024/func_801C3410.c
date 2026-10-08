#include "common.h"

struct func_801C3410_Struct {
    u8 pad[0x90];
    s8 unk90;
};

extern s32 func_801C1088(s32, s8);
extern void func_80005700(void *);
extern s32 D_801CC8A4;
extern s8 D_801CC8CC;

void func_801C3410(struct func_801C3410_Struct *arg0, s32 *arg1) {
    if (func_801C1088(*arg1, arg0->unk90) != 0) {
        D_801CC8CC = 0;
        D_801CC8A4 = 0;
        func_80005700(arg0);
        return;
    }
    D_801CC8CC = 1;
}
