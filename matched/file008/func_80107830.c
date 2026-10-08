#include "common.h"

extern s32 func_800058DC(s32, void *);
extern s32 func_800201D0();
extern void func_80107864();

void func_80107830(s32 arg0, s32 arg1) {
    func_800201D0();
    func_800058DC(arg0, &func_80107864);
}
