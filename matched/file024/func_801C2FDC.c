#include "common.h"

extern void func_801453CC(s32, s32, s32, s32, s32, s32, s32);
extern void func_80145E78(s32, s32, s32);

void func_801C2FDC(s32 arg0, s32 *arg1) {
    func_801453CC(arg1[0], 0x1A0, 0, 3, 0x21, 0x22, 0x22);
    func_80145E78(arg1[1], 0xC0, 1);
    func_80145E78(arg1[2], 0xA0, 2);
    func_80145E78(arg1[3], 0, 2);
    func_80145E78(arg1[4], 0x80, 3);
    func_80145E78(arg1[5], 0, 3);
    func_80145E78(arg1[6], 0, 3);
}
