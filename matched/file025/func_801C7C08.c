#include "common.h"
typedef struct func_801C7BA8_Struct {
    s32 raw[0x1B];
} func_801C7BA8_Struct;
extern func_801C7BA8_Struct D_801E04E0;

extern f64 func_80034C24();
extern s32 func_801C0DE4(s32, s32, f32);
extern void func_801C0EB0(s32, s32);
extern u64 func_801C0F18(s32, s32);
void func_801C8AB8(f32 *arg0, f32 *arg1, f32 *arg2, f32 arg3);
extern f64 D_801DD2C0;
extern u8 D_801E0504[];
extern u8 D_801E0528[];

typedef struct func_801C7C08_Struct {
    f32 fraction;
    u64 ticks;
} func_801C7C08_Struct;

s32 func_801C7C08(f32 arg0, f32 arg1, u8 *arg2, u8 *arg3) {
    func_801C7C08_Struct time;

    if (func_801C0DE4(3, 0x20F1, arg1) != 0) {
        func_801C0EB0(3, 0x20F1);
        return 1;
    }
    if (func_801C0DE4(3, 0x20F1, arg0) != 0) {
        time.ticks = func_801C0F18(3, 0x20F1);
        time.fraction = (f32)((func_80034C24(time.ticks) / D_801DD2C0) - (f64)arg0) / (arg1 - arg0);
        func_801C8AB8((f32 *)&D_801E04E0, (f32 *)arg2, (f32 *)arg3, time.fraction);
        func_801C8AB8((f32 *)D_801E0504, (f32 *)(arg2 + 0x24), (f32 *)(arg3 + 0x24), time.fraction);
        func_801C8AB8((f32 *)D_801E0528, (f32 *)(arg2 + 0x48), (f32 *)(arg3 + 0x48), time.fraction);
    }
    return 0;
}
