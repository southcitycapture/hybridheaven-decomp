#include "common.h"
typedef struct func_8013CC10_Struct {
    u8 value;
    u8 data[6];
} func_8013CC10_Struct;
extern func_8013CC10_Struct D_8017DF14[];


extern u8 D_8017DEE5[];
extern u8 D_8017DEED[];
extern u8 D_8017DEF9[];
extern u8 D_8017DF05[];
extern s32 D_80184140[];

s32 func_8013D268(u8 a, u8 b, u8 c) {
    if (a >= 6) return 0;
    if (a < 2) return 0;
    if (c >= a) return 0;
    if (b < 2) {
        if (a == 2) goto l2;
        if (a == 3) goto l3;
        if (a == 4) goto l4;
        if (a != 5) goto d;
        goto l5;
l2:     return D_80184140[D_8017DEE5[(u32)b * 4 + (u32)c]];
l3:     return D_80184140[D_8017DEED[(u32)b * 5 + (u32)c]];
l4:     return D_80184140[D_8017DEF9[(u32)b * 6 + (u32)c]];
l5:     return D_80184140[D_8017DF05[(u32)b * 7 + (u32)c]];
d:      return 0;
    }
    if (c >= D_8017DF14[b - 2].value) return 0;
    return D_80184140[D_8017DF14[b - 2].data[c]];
}
