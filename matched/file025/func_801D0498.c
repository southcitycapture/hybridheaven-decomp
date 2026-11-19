#include "common.h"
extern s32 D_801DAF00;
extern s32 D_801E12C0;
extern void func_8012D844(void *, s32, s32);
extern u64 func_801C0B2C();


extern s32 D_801DAF30;
extern u64 D_801E12E8;
extern s32 D_801E12F0;

struct func_801D0498_Struct {
    u8 pad[0x80];
    u64 value;
};

void func_801D0498(s32 arg0) {
    D_801DAF00 = arg0;
    if (D_801DAF00 != 0) {
        D_801DAF30 = 0;
        ((struct func_801D0498_Struct *) &D_801E1268)->value = func_801C0B2C();
        D_801E12F0 = 0;
    } else {
        func_8012D844((void *) D_801E12C0, 0x57, 0);
    }
}
