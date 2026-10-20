#include "context.h"

extern u8 D_800CBAB1;
extern u8 D_800CBDA8[];
extern u8 D_800CBDAC[];
extern u8 D_80153032[];

void func_800208C4(u16 arg0) {
    u8 index;

    if (arg0 != 0) {
        D_800CBAB1 = 0xFF;
        index = D_80153032[arg0 * 4];
        if (index != 0) {
            index--;
            D_800CBDA8[index] = arg0;
            D_800CBDAC[index] = arg0;
            D_800CBAB1 = 0;
        } else {
            for (index = 0; index < 3; index++) {
                D_800CBDA8[index] = 0;
            }
            D_800CBAB1 = 0;
            func_800207D0(arg0, 0, 0);
        }
    }
}
