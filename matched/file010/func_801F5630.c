#include "common.h"

extern s32 func_80150584();
extern s32 func_801505E4();
extern s32 func_80150614();
extern s32 func_8015067C(s32, u16);

struct func_801F5630_StructSub {
    u8 pad[0x1E];
    u16 unk1E;
};

struct func_801F5630_Struct {
    u8 pad[0x38];
    struct func_801F5630_StructSub *unk38;
};

s32 func_801F5630(struct func_801F5630_Struct *arg0) {
    struct func_801F5630_StructSub *sub;
    s32 unused;
    s32 value;
    s32 mask;
    u16 flags;

    sub = arg0->unk38;
    if (func_80150584() != 0) {
        value = func_80150614();
        mask = func_8015067C(func_801505E4() & 0xFFFF, value);
        flags = sub->unk1E;
        if (!(flags & mask)) {
            return 1;
        }
    }
    return 0;
}
