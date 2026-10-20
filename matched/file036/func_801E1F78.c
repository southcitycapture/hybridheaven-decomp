#include "context.h"

extern f32 D_801E4FA4;
extern f32 D_801E4FA8;
extern f32 D_801E4FAC;
extern f32 D_801E4FB0;
extern f32 D_801E4FB4;
extern f32 D_801E4FB8;
extern f32 D_801E4FBC;
extern f32 D_801E4FC0;
extern void D_8038C158(void);

s32 func_801E1F78(s32 arg0, s32 arg1) {
    if (func_8038BEF8(0.0f, 4.0f, 59.0f, 13.2f, 10.0f, D_801E4FA4, D_801E4FA8, D_801E4FAC, D_801E4FB0, 15.5f, D_801E4FB4, D_801E4FB8, D_801E4FBC, D_801E4FC0) != 0) {
        D_8038C158();
        return 5;
    }
    return 4;
}
