#include "context.h"

extern f32 D_801F5904;
extern f32 D_801F5908;
extern f32 D_801F590C;

s32 func_801EA8FC(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x30D40) != 0) {
        func_8038BED4();
        return 1;
    }
    func_8038BD50(D_801F5904, D_801F5908, 0x41F26666);
    D_8038BD88(1.0f, D_801F590C, 0xC0133333);
    return 0;
}
