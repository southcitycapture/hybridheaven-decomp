#include "context.h"

extern s16 D_8008E7C0[];
extern s16 D_8008E9C0[];
extern s32 D_800170C8(u16);

s32 func_8001769C(u16 arg0) {
    s32 i;
    s32 j;

    for (i = 0; i <= (s32)D_800892B0[0x217E]; i++) {
        if (arg0 == D_8008E7C0[i]) {
            D_8008E9C0[i]--;
            if (D_8008E9C0[i] <= 0) {
                D_800170C8(arg0);
                for (j = i; j < (s32)D_800892B0[0x217E]; j++) {
                    D_8008E9C0[j] = D_8008E9C0[j + 1];
                    D_8008E7C0[j] = D_8008E7C0[j + 1];
                }
                D_8008E9C0[D_800892B0[0x217E]] = 0;
                D_8008E7C0[D_800892B0[0x217E]] = 0;
                D_800892B0[0x217E] = D_800892B0[0x217E] - 1;
            }
            return 1;
        }
    }
    return 0;
}
