#include "common.h"

extern void func_800058DC(s32, void *);
extern void func_800179B0(void *);
extern void func_80020718(s32);
extern u8 D_80182734[];
extern void func_80150B74(void);

void func_80150B30(s32 arg0, s32 arg1) {
    func_80020718(0x3DD);
    func_800179B0(D_80182734);
    func_800058DC(arg0, func_80150B74);
}
