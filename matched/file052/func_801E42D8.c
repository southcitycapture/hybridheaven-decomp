#include "context.h"
void func_801CC470(s32 arg0, s32 arg1, s32 arg2, s32 arg3, f32 arg4);
void func_801E4210(void);
extern s32 func_8038D28C(s32);

extern void func_801D82B8(s32 arg0);

s32 func_801E42D8(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x9D2A60) != 0) {
        func_801E4210();
        func_801D82B8(0xFF);
        func_801CC470(1, 0x01B80046, 0, 0x100, 6.0f);
        func_8038D28C(0x211);
        return 4;
    }
    return 3;
}
