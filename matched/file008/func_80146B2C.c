#include "context.h"
extern u16 D_801BBC1C;
extern void func_80020744(s32 arg0);

extern u8 D_801819E0;
extern u8 D_801819E4;
extern void func_80146AF4(s32 arg0);
extern s32 func_80126944(void);

void func_80146B2C(u8 arg0) {
    if (D_801819E4 != 1 && (D_801BBC1C == 4 || D_801BBC1C == 5) && func_80126944() == 1) {
        if (arg0 == 1 && D_801819E0 == 0) {
            func_80020744(0x57C);
            func_80146AF4(1);
            return;
        }
        if (arg0 == 0 && D_801819E0 == 1) {
            func_80020744(0x648);
            func_80146AF4(0);
        }
    }
}
