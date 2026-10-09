#include "context.h"
extern s32 D_8038DBE0;
extern s32 D_8038DBE4;
s32 func_8038D0DC(void);

extern void *D_8038DBD4[];
extern s32 D_8038DBE8;
extern s32 D_8038DBEC;
extern void func_8038D10C(void);
extern void func_8038D174(void);

void func_8038D044(s32 *arg0) {
    D_8038DBE4 = arg0[0];
    D_8038DBE8 = arg0[1];
    D_8038DBD4[0] = (void *)func_8038D0DC;
    D_8038DBD4[1] = (void *)func_8038D10C;
    D_8038DBD4[2] = (void *)func_8038D174;
    D_8038DBE0 = 0;
    D_8038DBEC = 0x22355;
}
