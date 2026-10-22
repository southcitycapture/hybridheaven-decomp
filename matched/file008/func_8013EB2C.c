#include "context.h"

void func_80140E88(u8 arg0, u8 arg1, s32 arg2);
s32 func_8014150C(u8 arg0, u8 *arg1);
extern void func_800023A8(s32);
extern void func_80002A94(s32);
extern void func_80017990(void *);
extern s32 func_80141268(void);
extern void func_80142B28(u8, u8);
extern void func_80142FC4(void);
extern s32 func_80143B5C(void);
extern u16 D_80089474[];
extern u8 D_801808E8[];
extern u8 D_801809CC[];
extern u8 D_80180A04[];
extern u16 D_801BBF42;

s32 func_8013EB2C(void) {
    s32 state;
    if (func_800178E8() == 0) return 0;
    if (*(u8 *)&D_801BEC03 == 1) {
        func_80142FC4();
        if (func_80143B5C() != 0) D_801BEC03 = 0;
        return 0;
    }
    state = *(u8 *)&D_801BEBCC;
    if (state == 0) goto state0;
    if (state == 1) goto state1;
    if (state == 2) goto state2;
    if (state == 3) goto state3;
    return 0;
state0:
    if (D_801BBF42 == 0) {
        func_8014307C(0, func_8014150C(1, D_801BEB84) & 0xFF, D_801BEB84);
        D_801BEBCC = 1;
    }
    if (D_801BBF42 == 2) D_801BEBCC = 3;
    goto done;
state1:
    if (D_80089474[2] & 0xB000) {
        func_80017990(D_801808E8);
        D_801BEBCC = 2;
    }
    func_80140E88(0, 4, (s32)D_801BEB84);
    func_80142B28(0, *(u8 *)&D_801BEC04);
    return 0;
state2:
    if (D_801BBF42 == 0) {
        if (func_80141268() == 0) func_80017990(D_801809CC);
        else func_80017990(D_80180A04);
    }
    D_801BEBCC = 3;
    goto done;
state3:
    func_80002A94(0);
    func_800023A8(0);
    return 1;
done:
    return 0;
}
