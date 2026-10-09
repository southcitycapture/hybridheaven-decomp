#include "context.h"
extern s32 D_802073A4;
struct func_801E1ED0_Struct *func_801BF6B0(s32);
s32 func_801C1B1C(void);
extern s32 func_801CC4D8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, f32 arg4);
extern s32 func_801D271C(s32 a0);


s32 func_801F8714(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x31) || (func_801C1B1C() == 0)) {
        return 0x16;
    }
    D_802073A4 = 0;
    func_801CC4D8(3, 0x03200012, 0, 0, 15.0f);
    func_801D271C(1);
    return 0x17;
}
