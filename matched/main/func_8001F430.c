#include "context.h"

extern s32 func_8001F160(s32, s32);
extern s32 func_8001F290();

s32 func_8001F430(s32 arg0) {
    s32 temp_v0;

    temp_v0 = func_8001F290();
    func_8001F160(temp_v0, arg0);
    return temp_v0;
}
