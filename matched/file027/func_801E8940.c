#include "common.h"

extern s32 func_801C1974();
extern void func_8038CB60(f32 arg0, void *arg1);
extern u8 D_801F1FAC[];

s32 func_801E8940(s32 arg0, s32 arg1) {
    func_801C1974();
    func_8038CB60(0.0f, D_801F1FAC);
    return 8;
}
