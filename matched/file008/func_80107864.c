#include "common.h"

extern void func_80016DF0(void);
extern void func_80004310(void *);
extern void func_800058DC(s32, void *);
extern u8 D_80162DE4[];
extern void func_801078A4(void);

void func_80107864(s32 arg0, s32 arg1) {
    func_80016DF0();
    func_80004310(D_80162DE4);
    func_800058DC(arg0, func_801078A4);
}
