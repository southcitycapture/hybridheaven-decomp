#include "context.h"

extern s32 D_80388BE8[];
extern u8 D_8038A950[];

void func_8037F370(u8 *arg0) {
    void (*temp_v1)(u8);
    s8 temp_v0;

    temp_v0 = arg0[0x96];
    temp_v1 = (void (*)(u8)) D_80388BE8[temp_v0];
    if (temp_v1 != NULL) {
        temp_v1(D_8038A950[temp_v0]);
    }
}
