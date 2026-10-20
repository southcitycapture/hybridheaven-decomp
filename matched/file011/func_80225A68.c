#include "context.h"

extern f64 D_8023EFE0;
extern f64 D_8023EFE8;

struct func_80225A68_Struct {
    u8 pad0[0x68];
    f32 unk68;
    f32 unk6C;
    u8 pad70[4];
    u8 unk74;
};
struct func_80225A68_Arg {
    u8 pad0[0x5C];
    struct func_80225A68_Struct *unk5C;
};

u8 func_80225A68(struct func_80225A68_Arg *arg0) {
    struct func_80225A68_Struct *s = arg0->unk5C;
    if (s->unk74 == 0) {
        return 3;
    }
    if (s->unk68 < s->unk6C) {
        return (u32)(s->unk6C + D_8023EFE0);
    }
    return (u32)(s->unk68 + D_8023EFE8);
}
