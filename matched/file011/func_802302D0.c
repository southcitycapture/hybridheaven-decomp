#include "context.h"

extern u8 D_801842A0[];

struct func_802302D0_Inner {
    u8 pad0[0x1A];
    u8 unk1A;
};

struct func_802302D0_Struct {
    u8 pad0[0x2D4];
    struct func_802302D0_Inner *unk2D4;
    u8 unk2D8;
    u8 unk2D9;
    u8 unk2DA;
};

void func_802302D0(struct func_802302D0_Struct *arg0, struct func_802302D0_Struct *arg1) {
    u8 flag;

    flag = 1;
    if (arg0->unk2D4 == NULL) {
        arg0->unk2D4 = (struct func_802302D0_Inner *) D_801842A0;
    }
    if (arg1->unk2D4 == NULL) {
        arg1->unk2D4 = (struct func_802302D0_Inner *) D_801842A0;
    }
    arg1->unk2DA = flag;
    arg0->unk2DA = flag;
    arg0->unk2D9 = arg1->unk2D4->unk1A;
}
