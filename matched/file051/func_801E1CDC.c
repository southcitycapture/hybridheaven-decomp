#include "context.h"
extern void D_8038BD88(f32, f32, s32);
extern void D_8038C158();
extern void func_8038BD50(f32, f32, s32);
extern s32 func_8038D28C(s32);

extern f32 D_801E7808;
extern f32 D_801E780C;
extern void func_801E1BE0();
extern void func_8038BEC8(f32);

s32 func_801E1CDC(s32 arg0, s32 arg1) {
    func_8038BEC8(5.0f);
    if (func_801C0B8C(0) != 0) {
        func_8038D28C(0x8C);
        func_8038BD50(-111.5f, D_801E7808, 0x43A78000);
        D_8038BD88(D_801E780C, 13.0f, 0x43A78000);
        func_801E1BE0();
        D_8038C158();
        return 1;
    }
    return 0;
}
