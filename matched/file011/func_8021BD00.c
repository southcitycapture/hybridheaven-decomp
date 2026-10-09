#include "context.h"
extern u8 D_801BBBF0[];
extern void func_800058DC(void *obj, void *fn);
extern void func_8021B790();
void func_8021BDE0(u8 *arg0, s32 arg1);

extern u64 func_80031190(void);
extern u64 func_80026F58(u64, u64);
extern u64 func_80026E58(u64, u64);
extern f64 func_80034C24(u64);
extern u64 func_80034AB8(f64);
extern s32 func_80151BC4(void);
extern void func_802332D8(void);
extern f64 D_8023E948;
extern u64 D_80240758;

void func_8021BD00(s32 arg0, s32 arg1) {
    u64 temp_ret;
    u64 temp_ret_2;
    u64 temp_ret_3;
    u64 temp_ret_4;

    func_8021B790();
    temp_ret = func_80031190();
    temp_ret_2 = func_80026F58(temp_ret - D_80240758, 0x40);
    temp_ret_3 = func_80026E58(temp_ret_2, 0xBB8);
    temp_ret_4 = func_80034AB8(func_80034C24(temp_ret_3) / D_8023E948);
    if (temp_ret_4 >= 0x1F) {
        if ((D_801BBBF0[0x181] == 0) && (D_801BBBF0[0x182] == 0)) {
            if (func_80151BC4() != 2) {
                func_802332D8();
            }
            func_800058DC((void *) arg0, (void *) func_8021BDE0);
        }
    }
}
