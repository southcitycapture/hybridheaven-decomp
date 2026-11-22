#include "common.h"

extern void D_8038BD88(f32, f32, s32);
extern void *func_801BF6B0();
typedef struct func_801E2C5C_Struct {
    u8 pad[0x24];
    s32 unk24;
} func_801E2C5C_Struct;
extern void func_8038BD50(f32, f32, s32);
extern void func_8038BE98(f32);
s32 func_801E2C5C(s32 arg0, s32 arg1) {
    func_801E2C5C_Struct *obj;

    obj = (func_801E2C5C_Struct *) func_801BF6B0(4);
    if (obj->unk24 >= 0x33) {
        func_8038BE98(33.2999992f);
        func_8038BD50(113.900002f, 9.39999962f, 0xC2876666);
        D_8038BD88(-130.0f, 3.29999995f, 0x41C5999A);
        return 0x31;
    }
    return 0x30;
}
