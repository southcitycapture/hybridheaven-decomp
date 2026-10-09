#include "context.h"

struct func_80005E44_Struct {
    u8 pad0[4];
    u32 unk4;
    u8 pad8[2];
    u16 unkA;
};

struct func_80005E44_Res {
    u8 pad0[12];
    s32 unkC;
};

extern s32 func_80005D9C(void *, u16);
extern void func_80006088(void *);
extern void func_80006370(s32, void *);
extern void *func_800063BC(void *, u32);
extern s32 func_800065EC(void *, void *);
extern u8 D_8008942C[];

void *func_80005E44(s32 arg0, struct func_80005E44_Struct *arg1) {
    struct func_80005E44_Res *temp_v0;

    temp_v0 = func_800063BC(D_8008942C, arg1->unk4);
    if (temp_v0 != NULL) {
        if (func_80005D9C(temp_v0, arg1->unkA) == 0) {
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
