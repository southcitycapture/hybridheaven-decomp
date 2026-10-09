#include "context.h"

struct func_80150614_Struct {
    u8 pad[0x92];
    u8 unk92;
};

s32 func_80150614(void) {
    struct func_80150614_Struct *obj;

    if (func_80150584() != 0) {
        obj = (struct func_80150614_Struct *)func_801505AC(func_801505E4() & 0xFFFF);
        if (obj->unk92 == 1) {
            return 1;
        }
        if (obj->unk92 == 2) {
            return 2;
        }
    }
    return 0;
}
