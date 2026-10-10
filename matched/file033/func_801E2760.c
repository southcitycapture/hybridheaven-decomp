#include "context.h"

extern struct func_801E295C_Struct *func_801BF6B0(s32 arg0);
extern void func_8038D28C();
extern s32 D_801F2A58;

s32 func_801E2760(s32 arg0, s32 arg1) {
    if ((*(s32 *)((u8 *)func_801BF6B0(7) + 0xC) < 0x37) || (func_801C1B1C() == 0)) {
        return 0x21;
    }
    D_801F2A58 = 0;
    func_8038D28C(0x217);
    func_8038BED4();
    return 0x22;
}
