#include "common.h"

typedef struct func_801E3BE0_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E3BE0_Struct;

extern func_801E3BE0_Struct *func_801BF6B0(s32);
extern void func_801E375C(void);

s32 func_801E3BE0(s32 arg0, s32 arg1) {
    if (func_801BF6B0(0)->unkC >= 0x1D) {
        return 9;
    }
    func_801E375C();
    return 8;
}
