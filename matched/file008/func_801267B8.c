#include "context.h"

extern void func_80017594(u16);
extern u16 func_80125808(u16);

s32 func_801267B8(u16 arg0, s32 arg1) {
    u16 temp_v0;
    u16 temp_v1;

    if (D_8008D54C[4] == 0) {
        func_80125774(arg1);
    }
    temp_v0 = func_80125808(arg0);
    temp_v1 = temp_v0;
    if (temp_v0 == 0) {
        return 0;
    }
    if (temp_v1 == 2) {
        func_80017594(arg0);
    }
    func_801257DC();
    return 1;
}
