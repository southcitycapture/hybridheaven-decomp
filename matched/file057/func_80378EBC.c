#include "context.h"

struct func_80378EBC_Struct {
    u8 pad[0x52];
    u16 unk52;
};

s32 func_80378EBC(struct func_80378EBC_Struct *arg0) {
    struct {
        u16 value;
        u16 pad;
    } total;
    u8 i;

    i = 0;
    total.value = 100;
    if (arg0->unk52 > 100) {
        while (i < func_80376D10()) {
            total.value += ((u16 *)(D_80388410 + 0x3DE))[i];
            i++;
            if (total.value >= arg0->unk52) {
                break;
            }
        }
    }
    return i;
}
