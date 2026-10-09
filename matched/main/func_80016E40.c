#include "context.h"

extern s32 func_80016EAC(s32, s32);
extern s32 func_8001F364(s32);
extern void func_80030640(s32, s32);
extern void func_800306C0(s32, s32);
extern s32 D_801BBC10;

s32 func_80016E40(s32 arg0) {
    s32 temp_v0;

    if (D_801BBC10 != 0) {
        return 0;
    }
    temp_v0 = func_8001F364(arg0);
    D_801BBC10 = temp_v0;
    func_80016EAC(0xFFFE, temp_v0);
    func_800306C0(temp_v0, arg0);
    func_80030640(temp_v0, arg0);
    return temp_v0;
}
