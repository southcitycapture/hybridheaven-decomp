#include "context.h"
extern void func_8038BED4();
extern void func_8038D28C();
s32 func_801C0B8C(u64 time);
extern void func_8038BEC8(f32);
extern void func_8038BE98(f32);
s32 func_801C0B8C(u64 time);

extern f32 D_801F44F0;

s32 func_801E1BE0(s32 arg0, s32 arg1) {
    func_8038BEC8(5.0f);
    func_8038BE98(D_801F44F0);
    if (func_801C0B8C(0) != 0) {
        func_8038D28C(0x77);
        func_8038BED4();
        return 1;
    }
    return 0;
}
