#include "context.h"

extern f32 D_801FC424;
extern f32 D_801FC428;
extern f32 D_801FC42C;
extern f32 D_801FC430;
extern f32 D_801FC434;
extern f32 D_801FC438;
extern f32 D_801FC43C;
extern f32 D_801FC440;

s32 func_801E8718(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x0508189A) != 0) {
        func_8038BD50(D_801FC424, D_801FC428, -10.0f);
        D_8038BD88(D_801FC42C, D_801FC430, -9.2f);
        if (func_801C0B8C(0x05175ADA) != 0) {
            func_8038BD50(D_801FC434, D_801FC438, -15.7f);
            D_8038BD88(D_801FC43C, D_801FC440, -9.2f);
            return 0x10;
        }
        return 0xF;
    }
    return 0xF;
}
