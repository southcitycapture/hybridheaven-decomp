#include "common.h"

extern s32 func_80376D10(void);
extern u8 D_8017DC44[];
extern u8 D_8017DC4A[];
extern u8 D_8017DC92[];
extern u8 D_8017DC93[];
extern u8 D_8017DC94[];
extern u8 D_8017DC95[];
extern u8 D_80388410[];

s32 func_80244174(u8 arg0, u8 arg1, s8 arg2) {
    s32 var_sp34;
    u16 var_sp32;
    s32 absv;
    s16 count;
    s32 end;
    s16 val;

    val = 0;
    switch (arg0) {
    case 0:
        var_sp32 = D_8017DC44[arg1 * 158];
        var_sp34 = (s32)&D_80388410[0] + (s32)var_sp32 * 2 + 0x6F6;
        break;
    case 1:
        var_sp32 = D_8017DC4A[arg1 * 158];
        var_sp34 = (s32)&D_80388410[0] + (s32)var_sp32 * 2 + 0x882;
        break;
    case 2:
        var_sp32 = D_8017DC92[arg1 * 158];
        var_sp34 = (s32)&D_80388410[0] + (s32)var_sp32 * 2 + 0xC6;
        break;
    case 3:
        var_sp32 = D_8017DC93[arg1 * 158];
        var_sp34 = (s32)&D_80388410[0] + (s32)var_sp32 * 2 + 0x252;
        break;
    case 4:
        var_sp32 = D_8017DC95[arg1 * 158];
        var_sp34 = (s32)&D_80388410[0] + (s32)var_sp32 * 2 + 0x56A;
        break;
    case 5:
        var_sp32 = D_8017DC94[arg1 * 158];
        var_sp34 = (s32)&D_80388410[0] + (s32)var_sp32 * 2 + 0x3DE;
        break;
    }
    count = 0;
    if (((arg2 < 0) ? -arg2 : arg2) > 0) {
        end = var_sp32;
        do {
            if (arg2 < 0) {
                if ((end - count) > 0) {
                    var_sp34 -= 2;
                    val = val - *(u16 *)var_sp34;
                }
            } else {
                if (func_80376D10() > (end + count)) {
                    val += *(u16 *)var_sp34;
                    var_sp34 += 2;
                }
            }
            count++;
        } while (count < ((arg2 < 0) ? -arg2 : arg2));
    }
    return val & 0xFFFF;
}
