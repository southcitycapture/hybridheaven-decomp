#include "context.h"
extern u8 D_801BBBF0[];
extern void func_800058DC(void *obj, void *fn);
extern void func_80142570(void);
void func_8021D808(s32 arg0, s32 arg1);

extern void func_8013EA94(void);
extern void func_8001A804(s32, void *, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
extern u8 D_8023E8E0[];

void func_8021D768(s32 arg0, s32 arg1) {
    func_80142570();
    func_8013EA94();
    func_8001A804(8, D_8023E8E0, 8, 8, 0x130, 0xE0, 8, 0, 0, 0, 0x80, 0, 0, 0, 0x80);
    D_801BBBF0[0] = 1;
    func_800058DC(arg0, func_8021D808);
}
