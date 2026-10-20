#include "context.h"

extern u8 D_8017AD28[];
extern u8 D_8017AE10[];
extern u8 D_8017AE98[];
extern u8 D_8017AF38[];
extern u8 D_8017AF90[];
extern u8 D_8017B330[];
extern u8 D_8017B388[];
extern u8 D_8017B4A0[];

struct func_8000C3B0_Sub {
    u8 pad[0x24];
    u32 unk24;
};
struct func_8000C3B0_Struct {
    u8 pad[0x2C];
    struct func_8000C3B0_Sub *unk2C;
    struct func_8000C3B0_Sub *unk30;
};

void *func_8000C3B0(struct func_8000C3B0_Struct *arg0) {
    struct func_8000C3B0_Sub *s;
    u32 f;

    if (arg0->unk2C != NULL) {
        s = arg0->unk2C;
    } else {
        s = arg0->unk30;
    }
    f = s->unk24;
    switch (f & 0xFF) {
    case 20:
        return D_8017AD28;
    case 1:
        return D_8017AE98;
    case 19:
        s->unk24 = f | 0x400;
        return D_8017AF38;
    case 21:
        s->unk24 = f | 0x400;
        return D_8017AF90;
    case 2:
        return D_8017AE10;
    case 14:
        s->unk24 = f | 0x100;
        return (void *)((u32)D_8017B330 | 0x40000000);
    case 15:
        s->unk24 = f | 0x100;
        return (void *)((u32)D_8017B388 | 0x40000000);
    case 18:
        s->unk24 = f | 0x100;
        return (void *)((u32)D_8017B4A0 | 0x40000000);
    case 8:
        return NULL;
    default:
        return NULL;
    }
}
