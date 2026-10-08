#include "context.h"

extern void func_8001F74C(void);
extern void func_80380EEC(void);
extern void *D_80388D84[];

void func_80380E90(u8 *arg0, s32 arg1) {
    void (*temp_v0)(u8 *, s32);

    func_8001F74C();
    temp_v0 = D_80388D84[arg0[0x90]];
    if (temp_v0 != NULL) {
        temp_v0(arg0, arg1);
    }
    func_800058DC(arg0, func_80380EEC);
}
