#include "common.h"

extern void func_8013A334(void *, s32, s32, s32);

typedef struct func_80364340_Struct {
    s32 unk0;
    f32 unk4;
    s32 unk8;
} func_80364340_Struct;

s32 func_80364340(void *arg0, s32 arg1, s32 arg2, f32 arg3) {
    s32 temp_a2;
    func_80364340_Struct sp28;
    func_80364340_Struct sp1C;
    s32 var_v1;

    temp_a2 = *(s32 *)((u8 *)arg0 + 0x5C);
    func_8013A334(&sp28, arg1, temp_a2, 0x19);
    func_8013A334(&sp1C, arg1, temp_a2, 6);
    if (arg3 < sp28.unk4) {
        var_v1 = 2;
    } else if (arg3 < sp1C.unk4) {
        var_v1 = 1;
    } else {
        var_v1 = 0;
    }
    return var_v1;
}
