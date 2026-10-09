#include "context.h"

struct func_80005ED8_Struct {
    u8 pad[0xC];
    s32 unkC;
};

struct func_80005ED8_Arg {
    u8 pad[0xA];
    u16 unkA;
};

extern s32 func_80005D9C(void *, u16);
extern void func_80006088(void *);
extern void func_80006370(s32, void *);
extern void *func_800063BC(void *, s32);
extern s32 func_800065EC(void *, void *);
extern u8 D_8008942C[];

void *func_80005ED8(s32 arg0, void *arg1, s32 arg2) {
    struct func_80005ED8_Struct *temp_v0;

    temp_v0 = func_800063BC(D_8008942C, arg2);
    if (temp_v0 != NULL) {
        if (func_80005D9C(temp_v0, ((struct func_80005ED8_Arg *) arg1)->unkA) == 0) {
            return NULL;
        }
        func_80006370(arg0, temp_v0);
        if (func_800065EC(temp_v0, arg1) != 0) {
            func_80006088(temp_v0);
            return NULL;
        }
        temp_v0->unkC = 0;
    }
    return temp_v0;
}
