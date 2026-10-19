#include "context.h"

extern s32 func_8002B484(void *, u16 *, u16 *);
extern s32 func_80032D40(void *, s32);
extern s32 func_80033E10(s32, s32, u16, void *, s32);
extern s32 func_80034060(s32, s32, s32, void *);

s32 func_8002B8D0(void *arg0, u16 *arg1) {
    u16 sp58[4];
    u8 pad[4];
    u16 sp52;
    u16 sp50;
    s32 var_s1;
    s32 var_s0_2;
    s32 temp_v0;
    u16 *var_s0;

    if (*((u8 *)arg0 + 0x65) != 0) {
        temp_v0 = func_80032D40(arg0, 0);
        if (temp_v0 != 0) {
            return temp_v0;
        }
    }
    sp58[0] = 1;
    sp58[1] = 3;
    sp58[2] = 4;
    sp58[3] = 6;
    var_s1 = 1;
    var_s0 = &sp58[1];
loop_4:
    temp_v0 = func_80034060(*((s32 *)((u8 *)arg0 + 4)), *((s32 *)((u8 *)arg0 + 8)), *var_s0, arg1);
    if (temp_v0 != 0) {
        return temp_v0;
    }
    func_8002B484(arg1, &sp52, &sp50);
    if (arg1[0xE] == sp52 && arg1[0xF] == sp50) {
        goto L9B0;
    }
    var_s1 += 1;
    var_s0 += 1;
    if (var_s1 != 4) {
        goto loop_4;
    }
L9B0:
    var_s0_2 = 0;
    if (var_s1 == 4) {
        return 0xA;
    }
loop_12:
    if (var_s0_2 != var_s1) {
        temp_v0 = func_80033E10(*((s32 *)((u8 *)arg0 + 4)), *((s32 *)((u8 *)arg0 + 8)), sp58[var_s0_2], arg1, 1);
        if (temp_v0 != 0) {
            return temp_v0;
        }
    }
    var_s0_2 += 1;
    if (var_s0_2 != 4) {
        goto loop_12;
    }
    return 0;
}
