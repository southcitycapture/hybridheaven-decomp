#include "context.h"

extern void func_80005670(void *, void *);
extern void func_801CC530(void);
extern u8 D_801DBA10[];
extern u8 func_801DAAF0[];
extern u8 func_801DB868[];

s32 func_801E3ACC(s32 arg0, s32 arg1) {
    func_80005670(*(void **)(func_801DAAF0 + 0x24), func_801DB868 + 0xEC);
    func_80005670(*(void **)(*(u8 **)(func_801DAAF0 + 0x24) + 0x8), D_801DBA10);
    func_801CC530();
    return 2;
}
