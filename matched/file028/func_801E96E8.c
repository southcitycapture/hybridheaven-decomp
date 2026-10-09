#include "context.h"

extern void func_8038D28C(s32 arg0);
extern void func_8038BED4(void);
extern void func_8038BD50(f32, f32, s32);
extern void D_8038BD88(f32, f32, s32);
extern f32 D_80208868;
extern f32 D_8020886C;

s32 func_801E96E8(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x1E8480) != 0) {
        func_8038D28C(0x72);
        func_8038BED4();
        return 1;
    }
    func_8038BD50(D_80208868, 72.5f, 0x41EA6666);
    D_8038BD88(1.0f, D_8020886C, 0xC0800000);
    return 0;
}
