#include "common.h"

typedef struct func_802445E8_StructInner {
    u8 pad[0x4C];
    u8 unk4C;
    u8 unk4D;
} func_802445E8_StructInner;

typedef struct func_802445E8_StructOuter {
    u8 pad[0x30];
    func_802445E8_StructInner *unk30;
} func_802445E8_StructOuter;

extern s32 func_80133A24(s32);
extern void func_800058DC(s32, void *);
extern void func_80244644(void);

void func_802445E8(s32 arg0, func_802445E8_StructOuter **arg1) {
    func_802445E8_StructInner *temp_v0;

    temp_v0 = (*arg1)->unk30;
    temp_v0->unk4C = temp_v0->unk4C;
    temp_v0 = (*arg1)->unk30;
    temp_v0->unk4D = temp_v0->unk4D + 1;
    if (func_80133A24(0x1A6) != 0) {
        func_800058DC(arg0, func_80244644);
    }
}
