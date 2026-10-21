#include "common.h"


extern s32 func_80032660(void);
extern void func_800326D0(s32);

typedef struct func_80029580_Struct {
    struct func_80029580_Struct *next;
} func_80029580_Struct;

extern func_80029580_Struct *D_8004AB2C;
extern func_80029580_Struct *D_8004AB28[];

s32 func_80029580(func_80029580_Struct * volatile arg0) {
    s32 sp1C[1];

    sp1C[0] = func_80032660();
    arg0->next = D_8004AB2C;
    D_8004AB28[1] = arg0;
    func_800326D0(sp1C[0]);
    return 0;
}

