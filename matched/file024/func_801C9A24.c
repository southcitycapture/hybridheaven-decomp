#include "context.h"
void func_800058DC(void *arg0, void *arg1);
void func_8001A804();

extern void func_80116E80(s32);
extern u8 D_801CF3F4[];
extern void func_801C9AB4(void);

void func_801C9A24(s32 arg0, s32 arg1) {
    func_80116E80(0x100);
    func_8001A804(5, D_801CF3F4, 8, 8, 0x130, 0xE0, 4, 0, 0, 0, 1, 0, 0, 0, 1);
    func_800058DC((void *) arg0, (void *) func_801C9AB4);
}
