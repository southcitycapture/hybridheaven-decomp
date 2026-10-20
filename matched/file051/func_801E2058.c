#include "context.h"
extern f32 D_801E783C;
extern f32 D_801E7840;
extern f32 D_801E7844;
extern f32 D_801E7950[];
extern f32 D_801E7960[];

s32 func_801E2058(s32 arg0, s32 arg1) {
    f32 k = D_801E783C;
    if (D_8038C17C(0.0f, 2.0f, D_801E7950[0], D_801E7950[1], D_801E7950[2], 0.0f, D_801E7840, D_801E7844, D_801E7960[0], D_801E7960[1], D_801E7960[2], 0.0f, 13.0f, 121.5f, k, k) != 0) {
        return 6;
    }
    func_801E1C28();
    return 5;
}
