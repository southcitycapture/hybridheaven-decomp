#include "context.h"

s32 func_80001060();                                /* extern */
s32 *func_8001F290(u32, s32 *);                     /* extern */
extern u16 D_800892B0[];
extern u8 D_80400000[];
extern u8 D_8038F800[];

struct func_80016BA0_Struct {
    u8 pad[0xA0];
    s16 unkA0;
    s16 unkA2;
    s16 unkA4;
};

s32 *func_80016BA0(u32 arg0, s32 *arg1) {
    s32 *temp_v0;
    s32 *var_a1;
    s32 *var_v1_3;
    s32 temp_a2;
    s32 var_v1;
    s32 idx;
    u32 var_v0;

    temp_a2 = arg0 + 7;
    arg0 = temp_a2 & ~7;
    temp_v0 = func_8001F290(arg0, arg1);
    var_a1 = temp_v0;
    if (temp_v0 == NULL) {
        if (((struct func_80016BA0_Struct *)D_800892B0)->unkA4 != 0) {
            if (func_80001060() != 0) {
                idx = ((struct func_80016BA0_Struct *)D_800892B0)->unkA0;
                if (idx == 2) {
                    var_v1 = 0;
                } else {
                    var_v1 = idx + 1;
                }
                var_a1 = (s32 *)(D_80400000 + (var_v1 << 20));
            } else {
                idx = ((struct func_80016BA0_Struct *)D_800892B0)->unkA0;
                if (idx == 2) {
                    var_v1 = 0;
                } else {
                    var_v1 = idx + 1;
                }
                var_a1 = (s32 *)(D_8038F800 + var_v1 * 0x25800);
            }
        } else {
            return NULL;
        }
    } else {
        *arg1 = 1;
    }
    var_v0 = 0;
    if ((arg0 >> 2) != 0) {
        var_v1_3 = var_a1;
        do {
            var_v0 += 1;
            *var_v1_3 = 0;
            var_v1_3 += 1;
        } while (var_v0 < (arg0 >> 2));
    }
    return var_a1;
}
