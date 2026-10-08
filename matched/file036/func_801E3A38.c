#include "common.h"

void func_801C2420(s32 arg0, void *arg1);
void func_801CC318(void);
void func_801CC458(s32 arg0, void *arg1);
void func_801CC4C0(s32 arg0, void *arg1);
extern u8 D_801DBA24[];
extern u8 D_801DBA28[];
extern u8 D_801E0A48[];
extern u8 func_801DB868[];

s32 func_801E3A38(s32 arg0, s32 arg1) {
    func_801C2420(0x2C, D_801E0A48);
    func_801CC318();
    func_801CC458(0, func_801DB868 + 0x100);
    func_801CC4C0(0, func_801DB868 + 0x104);
    func_801C2420(0x142, D_801E0A48 + 0x18);
    func_801CC318();
    func_801CC458(1, D_801DBA24);
    func_801CC4C0(1, D_801DBA28);
    return 1;
}
