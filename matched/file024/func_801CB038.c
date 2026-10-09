#include "context.h"

extern void func_800058DC(s32, void *);
extern void func_8001A804(s32, void *, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
extern void func_80116E80(s32);
extern void func_80126930(s32);
extern u8 D_801CF738[];
extern void func_801CB0D0();

void func_801CB038(s32 arg0, s32 arg1) {
    func_80126930(0);
    func_80116E80(0x100);
    func_8001A804(0, D_801CF738, 8, 8, 0x130, 0xE0, 8, 0, 0, 0, 0xFF, 0, 0, 0, 0xFF);
    func_800058DC(arg0, func_801CB0D0);
}
