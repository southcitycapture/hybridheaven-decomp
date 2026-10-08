#include "common.h"

struct func_80236320_Struct98 {
    u8 pad[6];
    s16 unk6;
};

struct func_80236320_Struct {
    u8 pad[0x98];
    struct func_80236320_Struct98 *unk98;
};

s32 func_80236320(struct func_80236320_Struct *arg0) {
    struct func_80236320_Struct98 *temp_v0;
    s32 ret;

    temp_v0 = arg0->unk98;
    ret = 0;
    if (temp_v0->unk6 >= 0xC8) {
        return 1;
    }
    return ret;
}
