#include "context.h"
extern s32 D_8038DBA4;
extern s32 D_8038DBB8;
s32 func_8038CE58(void);
s32 func_8038CF10(void);

extern void *D_8038DB98[];
extern s32 D_8038DBA8;
extern s32 D_8038DBAC;
extern s32 D_8038DBB0;
extern s32 func_8038CE74(void);

void func_8038CD78(s32 *arg0) {
    D_8038DBA8 = arg0[2] / (arg0[1] - arg0[0] + 1);
    D_8038DBAC = arg0[0];
    D_8038DBB0 = arg0[1];
    D_8038DB98[0] = func_8038CE58;
    D_8038DB98[1] = func_8038CE74;
    D_8038DB98[2] = func_8038CF10;
    D_8038DBA4 = 0;
    D_8038DBB8 = 0x22222;
}
