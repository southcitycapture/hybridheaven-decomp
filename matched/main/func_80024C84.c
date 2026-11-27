#include "common.h"
extern u8 *D_800CBDA0;

extern u8 D_800CBDA8[];
extern u8 D_800CBDAF[];

void func_80024C84(void) {
    u8 id;
    u8 arg;
    s32 index;

    id = *D_800CBDA0++;
    arg = *D_800CBDA0++;
    if (!id) {
        return;
    }
    index = id;
    if (D_800CBDA8[index - 1] != 0) {
        if (arg != 0) {
            D_800CBDAF[id] = id + 0xF0;
        } else {
            D_800CBDAF[index] = D_800CBDA8[index - 1];
            D_800CBDA8[index - 1] = 0;
        }
    }
}
